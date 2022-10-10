#include "WidgetApp.h"
#include "Window.h"
#include "wxMathHelper.h"
//#include <wx/vector.h>

wxIMPLEMENT_APP(WidgetApp);

bool WidgetApp::OnInit() {
	window = new Window();
	window->Show();
	return true;
}

void Window::OnButtonClick(wxCommandEvent& evt) {

	BUTTONS id = (BUTTONS)evt.GetId();
	

	switch (id)
	{
	case Window::ZERO:
		if (!operation) {
			num1.Append("0");
		}
		else { num2.Append("0"); }
		textBox->AppendText("0");
		break;
	case Window::ONE:
		if (!operation) {
			num1.Append("1");
		}
		else { num2.Append("1"); }
		textBox->AppendText("1");
		break;
	case Window::TWO:
		if (!operation) {
			num1.Append("2");
		}
		else { num2.Append("2"); }
		textBox->AppendText("2");
		break;
	case Window::THREE:
		if (!operation) {
			num1.Append("3");
		}
		else { num2.Append("3"); }
		textBox->AppendText("3");
		break;
	case Window::FOUR:
		if (!operation) {
			num1.Append("4");
		}
		else { num2.Append("4"); }
		textBox->AppendText("4");
		break;
	case Window::FIVE:
		if (!operation) {
			num1.Append("5");
		}
		else { num2.Append("5"); }
		textBox->AppendText("5");
		break;
	case Window::SIX:
		if (!operation) {
			num1.Append("6");
		}
		else { num2.Append("6"); }
		textBox->AppendText("6");
		break;
	case Window::SEVEN:
		if (!operation) {
			num1.Append("7");
		}
		else { num2.Append("7"); }
		textBox->AppendText("7");
		break;
	case Window::EIGHT:
		if (!operation) {
			num1.Append("8");
		}
		else { num2.Append("8"); }
		textBox->AppendText("8");
		break;
	case Window::NINE:
		if (!operation) {
			num1.Append("9");
		}
		else { num2.Append("9"); }
		textBox->AppendText("9");
		break;
	case Window::PLUS:
		if (!operation){
			{ OpId = ADD; }
			first = wxAtoi(num1);
			textBox->AppendText("+");
		}
		operation = true;
		break;
	case Window::MINUS:
		if (!operation) {
			{ OpId = SUB;}
			first = wxAtoi(num1);
			textBox->AppendText("-");
		}
		operation = true;
		break;
	case Window::MULT:
		if (!operation) {
			{ OpId = TIMES; }
			first = wxAtoi(num1);
			textBox->AppendText("*");
		}
		operation = true;
		break;
	case Window::DIV:
		if (!operation) {
			{OpId = DIVIDE; }
			first = wxAtoi(num1);
			textBox->AppendText("/");
		}
		operation = true;
		break;
	case Window::EQUAL:
		if (operation) {
			second = wxAtoi(num2);
			textBox->AppendText("=");
			switch (OpId) {
			case ADD:
				result = first + second;
				resString << result;
				textBox->AppendText(resString);
				break;
			case SUB:
				result = first - second;
				resString << result;
				textBox->AppendText(resString);
				break;
			case TIMES:
				result = first * second;
				resString << result;
				textBox->AppendText(resString);
				break;
			case DIVIDE:
				result = first / second;
				resString << result;
				textBox->AppendText(resString);
				break;
			default:
				break;
			}
		}
		break;
	case Window::CLEAR:
		operation = false;
		num1 = "";
		num2 = "";
		resString = "";
		first = 0;
		second = 0;
		result = 0;
		//EqNums.clear();
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
		// DISABLED FOR FUTURE
		/*
		{temp = textBox->GetValue(); }
		if (temp[0].GetValue() != '-')
		{
			textBox->ChangeValue("-(" + temp + ")");
		}
		*/
		break;
	case Window::DEC:
		// DISABLED FOR FUTURE IMPLEMENTATION
		//textBox->AppendText(".");
		break;
	default:
		break;
	}
}