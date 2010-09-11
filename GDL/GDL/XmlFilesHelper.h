#ifndef XMLFILESHELPER_H
#define XMLFILESHELPER_H

#include "GDL/tinyxml.h"
#include <string>
#include <boost/shared_ptr.hpp>
#include <map>


/**
 * Helper class wrapping a tinyxml document in RAII fashion
 */
class XmlFile
{
    public :
        XmlFile(std::string filename) : doc(filename.c_str()), modified(false) { doc.LoadFile(); };
        ~XmlFile() { if (modified) doc.SaveFile(); }

        void MarkAsModified() { modified = true; }
        TiXmlDocument & GetTinyXmlDocument() { return doc; };
        const TiXmlDocument & GetTinyXmlDocument() const { return doc; };

    private :
        TiXmlDocument doc;
        bool modified;
};

/**
 * Helper class for opening files.
 */
class XmlFilesManager
{
    static std::map<std::string, boost::shared_ptr<XmlFile> > openedFiles;

    public:

    /**
     * Load a file and keep it in memory
     */
    static void LoadFile(std::string filename)
    {
        if ( openedFiles.find(filename) == openedFiles.end() )
            openedFiles[filename] = boost::shared_ptr<XmlFile>(new XmlFile(filename));
    }

    /**
     * Unload a file kept in memory
     */
    static void UnloadFile(std::string filename)
    {
        if ( openedFiles.find(filename) != openedFiles.end() )
            openedFiles.erase(filename);
    }

    /**
     * Get access to a file. If the file has not been loaded with LoadFile,
     * it will be loaded now, and unload as soon as it is not used anymore.
     */
    static boost::shared_ptr<XmlFile> GetFile(std::string filename, bool isGoingToModifyFile = true)
    {
        boost::shared_ptr<XmlFile> file = openedFiles.find(filename) != openedFiles.end() ? openedFiles[filename] : boost::shared_ptr<XmlFile>(new XmlFile(filename));
        if ( isGoingToModifyFile ) file->MarkAsModified();

        return file;
    }
};

#endif // XMLFILESHELPER_H