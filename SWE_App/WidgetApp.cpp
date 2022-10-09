#include "WidgetApp.h"
#include "Window.h"

wxIMPLEMENT_APP(WidgetApp);

bool WidgetApp::OnInit() {
	window = new Window();
	window->Show();
	return true;
}
