/**

Game Develop - Common Dialogs Extension
Copyright (c) 2008-2011 Florian Rival (Florian.Rival@gmail.com)

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
    claim that you wrote the original software. If you use this software
    in a product, an acknowledgment in the product documentation would be
    appreciated but is not required.

    2. Altered source versions must be plainly marked as such, and must not be
    misrepresented as being the original software.

    3. This notice may not be removed or altered from any source
    distribution.

*/

#ifndef COMMONDIALOGS_H_INCLUDED
#define COMMONDIALOGS_H_INCLUDED

#include <string>
class RuntimeScene;

namespace GDpriv
{
namespace CommonDialogs
{

void ShowMessageBox( RuntimeScene & scene, const std::string & message, const std::string & title );
void ShowOpenFile( RuntimeScene & scene, const std::string & variable, const std::string & title, std::string filters );
void ShowYesNoMsgBox( RuntimeScene & scene, const std::string & variable, const std::string & message, const std::string & title );
void ShowTextInput( RuntimeScene & scene, const std::string & variable, const std::string & message, const std::string & title );

}
}

#endif // COMMONDIALOGS_H_INCLUDED