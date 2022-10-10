#pragma once
#include "Window.h"
#include <wx/vector.h>

class Window;


void AssignNum(wxVector<double> dubs, wxTextCtrl* box, int TextNDX);



void AssignNum(wxVector<double> dubs, wxTextCtrl* box, int TextNDX) {
	double* toSave = nullptr;
	wxString dblString = "";
	wxString val = box->GetValue();
	wxString::iterator iter = val.begin() + TextNDX;
	while (iter != val.end())
	{
		dblString.Append(*iter);
	}
	dblString.ToDouble(toSave);
	dubs.push_back(*toSave);
}

