#include "WidgetApp.h"
#include "Window.h"

wxIMPLEMENT_APP(WidgetApp);

bool WidgetApp::OnInit() {
	window = new Window();
	window->Show();
	return true;
}

void Window::OnButtonClick(wxCommandEvent& evt) {
	
	BUTTONS id = (BUTTONS)evt.GetId();
	wxString temp = "";


	switch (id)
	{
	case Window::ZERO:
		textBox->AppendText("0");
		break;
	case Window::ONE:
		textBox->AppendText("1");
		break;
	case Window::TWO:
		textBox->AppendText("2");
		break;
	case Window::THREE:
		textBox->AppendText("3");
		break;
	case Window::FOUR:
		textBox->AppendText("4");
		break;
	case Window::FIVE:
		textBox->AppendText("5");
		break;
	case Window::SIX:
		textBox->AppendText("6");
		break;
	case Window::SEVEN:
		textBox->AppendText("7");
		break;
	case Window::EIGHT:
		textBox->AppendText("8");
		break;
	case Window::NINE:
		textBox->AppendText("9");
		break;
	case Window::PLUS:
		textBox->AppendText("+");
		break;
	case Window::MINUS:
		textBox->AppendText("-");
		break;
	case Window::MULT:
		textBox->AppendText("*");
		break;
	case Window::DIV:
		textBox->AppendText("/");
		break;
	case Window::EQUAL:
		textBox->AppendText("=");
		break;
	case Window::CLEAR:
		textBox->Clear();
		break;
	case Window::LPAREN:
		textBox->AppendText("(");
		break;
	case Window::RPAREN:
		textBox->AppendText(")");
		break;
	case Window::MOD:
		break;
	case Window::SIN:
		textBox->AppendText("sin(");
		break;
	case Window::COS:
		textBox->AppendText("cos(");
		break;
	case Window::TAN:
		textBox->AppendText("tan(");
		break;
	case Window::NEG:
		{temp = textBox->GetValue(); }
		textBox->ChangeValue("-" + temp);
		break;
	case Window::DEC:
		textBox->AppendText(".");
		break;
	default:
		break;
	}
}