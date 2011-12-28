/** \file
 *  Game Develop
 *  2008-2011 Florian Rival (Florian.Rival@gmail.com)
 */

#ifndef FILEEXTENSION_H
#define FILEEXTENSION_H

#include "GDL/ExtensionBase.h"

/**
 * \brief Internal builtin extension providing files features.
 */
class FileExtension : public ExtensionBase
{
    public:
        FileExtension();
        virtual ~FileExtension() {};

        #if defined(GD_IDE_ONLY)
        bool HasDebuggingProperties() const { return true; };
        void GetPropertyForDebugger(RuntimeScene & scene, unsigned int propertyNb, std::string & name, std::string & value) const;
        bool ChangeProperty(RuntimeScene & scene, unsigned int propertyNb, std::string newValue);
        unsigned int GetNumberOfProperties(RuntimeScene & scene) const;
        #endif
};

#endif // FILEEXTENSION_H