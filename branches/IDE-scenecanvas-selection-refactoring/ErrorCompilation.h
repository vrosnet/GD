#ifndef ERRORCOMPILATION_H
#define ERRORCOMPILATION_H

//(*Headers(ErrorCompilation)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statline.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)
#include <string>
#include <vector>

using namespace std;

class ErrorCompilation: public wxDialog
{
	public:

		ErrorCompilation(wxWindow* parent, string report);
		virtual ~ErrorCompilation();

		//(*Declarations(ErrorCompilation)
		wxStaticText* StaticText2;
		wxButton* FermerBt;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxStaticLine* StaticLine2;
		wxTextCtrl* ReportEdit;
		wxStaticLine* StaticLine3;
		wxStaticLine* StaticLine1;
		wxStaticText* StaticText4;
		wxStaticBitmap* StaticBitmap3;
		wxButton* AideBt;
		//*)

	protected:

		//(*Identifiers(ErrorCompilation)
		static const long ID_STATICBITMAP3;
		static const long ID_STATICTEXT1;
		static const long ID_PANEL1;
		static const long ID_STATICLINE2;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICLINE1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICLINE3;
		static const long ID_STATICTEXT4;
		static const long ID_BUTTON2;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(ErrorCompilation)
		void OnAideBtClick(wxCommandEvent& event);
		void OnFermerBtClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
