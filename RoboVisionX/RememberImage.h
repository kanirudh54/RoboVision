#ifndef REMEMBERIMAGE_H
#define REMEMBERIMAGE_H

#include "../RoboKernel/RoboKernel.h"
#include "../VisualCortex/VisualCortex.h"


//(*Headers(RememberImage)
#include <wx/dialog.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class RememberImage: public wxDialog
{
	public:

        struct PatchSignature sig;
        int camera,patch_x,patch_y,patch_width,patch_height,ready;

		RememberImage(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~RememberImage();

		void PrepareMenu();

		//(*Declarations(RememberImage)
		wxButton* ButtonBack;
		wxTextCtrl* SignatureText;
		wxButton* ButtonAddToDatabase;
		wxStaticText* StaticText1;
		wxButton* ButtonIdentifyFromDatabase;
		wxStaticText* StaticText2;
		wxTextCtrl* KeywordsText;
		//*)

	protected:

		//(*Identifiers(RememberImage)
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON3;
		//*)

	private:

		//(*Handlers(RememberImage)
		void OnButtonBackClick(wxCommandEvent& event);
		void OnButtonAddToDatabaseClick(wxCommandEvent& event);
		void OnButtonIdentifyFromDatabaseClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
