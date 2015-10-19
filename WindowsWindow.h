#ifndef __WINDOWS_WINDOW__
#define __WINDOWS_WINDOW__

#include <Windows.h>
#include "Sensor.h"
#include "ErrorHandler.h"

static const int cScreenWidth = 320;
static const int cScreenHeight = 240;

static const int cMessageMaxLen = MAX_PATH * 2;

class WindowsWindow{
	Sensor kinectSensor;
	HWND windowHWND;
protected:

public:
	WindowsWindow() : kinectSensor{}
	{}

	WindowsWindow(const int width, const int height, const int maxSizeMessgage) : kinectSensor{ width, height, maxSizeMessgage,NULL}
	{}

	/****** Metody zwiazane z obsluga okna ******/

	static LRESULT CALLBACK MessageRouter(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

	LRESULT CALLBACK DlgProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

	int run(HINSTANCE hInstance, int nCmdShow);

	void setWindowHWND(HWND parrentHWND)
	{
		this->windowHWND;
		this->kinectSensor.setMainHWND(parrentHWND);
	}

	/****** END Metody zwiazane z obsluga okna ******/

};

#endif
