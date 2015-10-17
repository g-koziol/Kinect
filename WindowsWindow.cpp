#include "WindowsWindow.h"
#include "resource.h"

HWND globalHWND;

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
	WindowsWindow windowsWindow{ cScreenWidth, cScreenHeight, cMessageMaxLen };
	windowsWindow.run(hInstance, nCmdShow);
}

int WindowsWindow::run(HINSTANCE hInstance, int nCmdShow)
{
	MSG       msg = { 0 };
	WNDCLASS  wc = { 0 };

	// Dialog custom window class
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.cbWndExtra = DLGWINDOWEXTRA;
	wc.hInstance = hInstance;
	wc.hCursor = LoadCursorW(NULL, IDC_ARROW);
	wc.hIcon = LoadIconW(hInstance, MAKEINTRESOURCE(IDI_MAINWINDOW));
	wc.lpfnWndProc = DefDlgProcW;
	wc.lpszClassName = L"KinectRecognitionAppDlgWndClass";

	if (!RegisterClassW(&wc))
	{
		return 0;
	}

	// Create main application window
	HWND hWndApp = CreateDialogParamW(
		hInstance,
		MAKEINTRESOURCE(IDD_APP),
		NULL,
		(DLGPROC)WindowsWindow::MessageRouter,
		reinterpret_cast<LPARAM>(this));
	this->setWindowHWND(hWndApp);
	this->kinectSensor.init();
	// Show window
	ShowWindow(hWndApp, nCmdShow);

	const int eventCount = 1;
	HANDLE hEvents[eventCount];

	// Main message loop
	while (WM_QUIT != msg.message)
	{
		//hEvents[0] = m_hNextSkeletonEvent;

		// Check to see if we have either a message (by passing in QS_ALLEVENTS)
		// Or a Kinect event (hEvents)
		// Update() will check for Kinect events individually, in case more than one are signalled
		MsgWaitForMultipleObjects(eventCount, hEvents, FALSE, INFINITE, QS_ALLINPUT);

		// Explicitly check the Kinect frame event since MsgWaitForMultipleObjects
		// can return for other reasons even though it is signaled.
		//Update();

		while (PeekMessageW(&msg, NULL, 0, 0, PM_REMOVE))
		{
			// If a dialog message will be taken care of by the dialog proc
			if ((hWndApp != NULL) && IsDialogMessageW(hWndApp, &msg))
			{
				continue;
			}

			TranslateMessage(&msg);
			DispatchMessageW(&msg);
		}
	}

	return static_cast<int>(msg.wParam);
}

// <summary>
/// Main processing function
/// </summary>
//void WindowsWindow::Update()
//{
//	if (NULL == m_pNuiSensor)
//	{
//		return;
//	}
//
//	// Wait for 0ms, just quickly test if it is time to process a skeleton
//	if (WAIT_OBJECT_0 == WaitForSingleObject(m_hNextSkeletonEvent, 0))
//	{
//		ProcessSkeleton();
//	}
//}

/// <summary>
/// Handles window messages, passes most to the class instance to handle
/// </summary>
/// <param name="hWnd">window message is for</param>
/// <param name="uMsg">message</param>
/// <param name="wParam">message data</param>
/// <param name="lParam">additional message data</param>
/// <returns>result of message processing</returns>
LRESULT CALLBACK WindowsWindow::MessageRouter(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	//CSkeletonBasics* pThis = NULL;

	if (WM_INITDIALOG == uMsg)
	{
		//pThis = reinterpret_cast<CSkeletonBasics*>(lParam);
		//SetWindowLongPtr(hWnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(pThis));
	}
	else
	{
		//pThis = reinterpret_cast<CSkeletonBasics*>(::GetWindowLongPtr(hWnd, GWLP_USERDATA));
	}

	/*if (pThis)
	{
		return pThis->DlgProc(hWnd, uMsg, wParam, lParam);
	}
*/
	return 0;
}

/// <summary>
/// Handle windows messages for the class instance
/// </summary>
/// <param name="hWnd">window message is for</param>
/// <param name="uMsg">message</param>
/// <param name="wParam">message data</param>
/// <param name="lParam">additional message data</param>
/// <returns>result of message processing</returns>
LRESULT CALLBACK WindowsWindow::DlgProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_INITDIALOG:
	{
		// Bind application window handle
		//m_hWnd = hWnd;

		// Init Direct2D
		//D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &m_pD2DFactory);

		// Look for a connected Kinect, and create it if found
		//CreateFirstConnected();
	}
	break;

	// If the titlebar X is clicked, destroy app
	case WM_CLOSE:
		DestroyWindow(hWnd);
		break;

	case WM_DESTROY:
		// Quit the main message pump
		PostQuitMessage(0);
		break;

		// Handle button press
	case WM_COMMAND:
		// If it was for the near mode control and a clicked event, change near mode
		if (IDC_CHECK_SEATED == LOWORD(wParam) && BN_CLICKED == HIWORD(wParam))
		{
			// Toggle out internal state for near mode
			//m_bSeatedMode = !m_bSeatedMode;

			//if (NULL != m_pNuiSensor)
			//{
			//	// Set near mode for sensor based on our internal state
			//	m_pNuiSensor->NuiSkeletonTrackingEnable(m_hNextSkeletonEvent, m_bSeatedMode ? NUI_SKELETON_TRACKING_FLAG_ENABLE_SEATED_SUPPORT : 0);
			//}
		}
		break;
	}

	return FALSE;
}