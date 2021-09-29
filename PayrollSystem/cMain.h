#pragma once

#include "wx/wx.h"

class cMain : public wxMDIParentFrame
{
public:
	cMain();
	~cMain();

private:

	wxMenuBar* m = nullptr;

	wxToolBar* toolbar = nullptr;

	wxButton* b = nullptr;

	wxMDIChildFrame* c1 = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
};

