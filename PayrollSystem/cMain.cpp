#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxMDIParentFrame)
EVT_BUTTON(1000, cMain::OnButtonClicked)
wxEND_EVENT_TABLE()


cMain::cMain() : wxMDIParentFrame(nullptr, wxID_ANY, "Pls work ty", wxPoint(30, 30), wxSize(800, 600))
{
	this->Centre();

	toolbar = this->CreateToolBar(wxTB_HORIZONTAL, wxID_ANY);

	b = new wxButton(toolbar, 1000, "View / Edit Personal Information", wxDefaultPosition, wxDefaultSize);
	toolbar->AddControl(b);

	toolbar->Realize();

	//has to have a menubar for some reason
	//m = new wxMenuBar();
	//this->SetMenuBar(m);

	//this makes it so it doesnt need a menu 
	this->SetWindowMenu(NULL);

	c1 = new wxMDIChildFrame(this, 1, "Personal Information", wxDefaultPosition, wxDefaultSize, wxMAXIMIZE_BOX);
	wxToolBar* t2 = c1->CreateToolBar(wxTB_HORIZONTAL, wxID_ANY);
	wxButton* b2 = new wxButton(t2, 1001, "Edit", wxDefaultPosition, wxDefaultSize);
	t2->AddControl(b2);

	//	wxListBox* list = new wxListBox(c1, wxID_ANY, wxDefaultPosition, wxDefaultSize);

	c1->Show();
}
cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{

	//evt.Skip();
}
