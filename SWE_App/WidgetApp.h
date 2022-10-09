#pragma once
#include "wx/wx.h"

class Window;

class WidgetApp : public wxApp
{

	Window* window = nullptr;
public:
	virtual bool OnInit();
};

