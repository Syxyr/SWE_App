#include "WidgetApp.h"
#include "Window.h"
#include "wxMathHelper.h"
#include <wx/vector.h>

wxIMPLEMENT_APP(WidgetApp);

bool WidgetApp::OnInit() {
	window = new Window();
	window->Show();
	return true;
}

void Window::OnButtonClick(wxCommandEvent& evt) {
	
	BUTTONS id = (BUTTONS)evt.GetId();
	wxString temp = "";
	int TextBoxNDX = 0;
	bool operation = false;

	wxVector<double> EqNums;

	switch (id)
	{
	case Window::ZERO:
		textBox->AppendText("0");
		TextBoxNDX++;
		break;
	case Window::ONE:
		textBox->AppendText("1");
		TextBoxNDX++;
		break;
	case Window::TWO:
		textBox->AppendText("2");
		TextBoxNDX++;
		break;
	case Window::THREE:
		textBox->AppendText("3");
		TextBoxNDX++;
		break;
	case Window::FOUR:
		textBox->AppendText("4");
		TextBoxNDX++;
		break;
	case Window::FIVE:
		textBox->AppendText("5");
		TextBoxNDX++;
		break;
	case Window::SIX:
		textBox->AppendText("6");
		TextBoxNDX++;
		break;
	case Window::SEVEN:
		textBox->AppendText("7");
		TextBoxNDX++;
		break;
	case Window::EIGHT:
		textBox->AppendText("8");
		TextBoxNDX++;
		break;
	case Window::NINE:
		textBox->AppendText("9");
		TextBoxNDX++;
		break;
	case Window::PLUS:
		if (!operation){	
			AssignNum(EqNums, textBox, TextBoxNDX);
			textBox->AppendText("+");
			TextBoxNDX++;
		}
		operation = true;
		break;
	case Window::MINUS:
		if (!operation) {
			textBox->AppendText("-");
			TextBoxNDX++;
		}
		operation = true;
		break;
	case Window::MULT:
		if (!operation) {
			textBox->AppendText("*");
			TextBoxNDX++;
		}
		operation = true;
		break;
	case Window::DIV:
		if (!operation) {
			textBox->AppendText("/");
			TextBoxNDX++;
		}
		operation = true;
		break;
	case Window::EQUAL:
		textBox->AppendText("=");
		break;
	case Window::CLEAR:
		operation = false;
		TextBoxNDX = 0;
		temp = "";
		EqNums.clear();
		textBox->Clear();
		break;
	case Window::LPAREN:
		// DISABLED FOR FUTURE IMPLEMENTATION
		//textBox->AppendText("(");
		break;
	case Window::RPAREN:
		// DISABLED FOR FUTURE IMPLEMENTATION
		//textBox->AppendText(")");
		break;
	case Window::MOD:
		// DISABLED FOR FUTURE IMPLEMENTATION
		//
		break;
	case Window::SIN:
		// DISABLED FOR FUTURE IMPLEMENTATION
		//textBox->AppendText("sin(");
		break;
	case Window::COS:
		// DISABLED FOR FUTURE IMPLEMENTATION
		//textBox->AppendText("cos(");
		break;
	case Window::TAN:
		// DISABLED FOR FUTURE IMPLEMENTATION
		//textBox->AppendText("tan(");
		break;
	case Window::NEG:
		{temp = textBox->GetValue(); }
		if (temp[0].GetValue() != '-')
		{
			textBox->ChangeValue("-(" + temp + ")");
			TextBoxNDX += 2;
		}
		break;
	case Window::DEC:
		// DISABLED FOR FUTURE IMPLEMENTATION
		//textBox->AppendText(".");
		break;
	default:
		break;
	}
}