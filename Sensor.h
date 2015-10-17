#ifndef __SENSOR__
#define __SENSOR__

#include "DepthSensor.h"
#include "ImageSensor.h"
#include "SkeletonSensor.h"
#include "AudioSensor.h"
#include <windows.h>
#include "NuiApi.h"
#include "resource.h"

static const float g_JointThickness = 3.0f;
static const float g_TrackedBoneThickness = 6.0f;
static const float g_InferredBoneThickness = 1.0f;

class Sensor{
	HWND mainHwnd;
	bool isSeatedMode;
	INuiSensor * actualSensor;
	DepthSensor depthSensor;
	ImageSensor imageSensor;
	SkeletonSensor skeletonSensor;
	AudioSensor audioSensor;

protected:


public:

	/* default paraeters initialization */
	const int cScreenWidth;
	const int cScreenHeight;

	const int cMessageMaxLen;
	Sensor() : mainHwnd{ NULL }, depthSensor{}, imageSensor{}, skeletonSensor{}, audioSensor{}, cScreenWidth{ 320 }, cScreenHeight{ 240 }, cMessageMaxLen{ MAX_PATH * 2 }
	{

	}

	Sensor(const int width, const int height, const int maxMessageLength, HWND parrentHwnd) : mainHwnd{ parrentHwnd }, depthSensor{}, imageSensor{}, skeletonSensor{}, audioSensor{}, cScreenWidth{ width }, cScreenHeight{ height }, cMessageMaxLen{ maxMessageLength }
	{

	}


	HRESULT init()
	{
		INuiSensor * temporarySensor;
		int numberOfSensors = 0;
		HRESULT hr = NuiGetSensorCount(&numberOfSensors);
		if (FAILED(hr))
		{
			return hr;
		}

		for (int i = 0; i < numberOfSensors; ++i)
		{
			hr = NuiCreateSensorByIndex(i, &(temporarySensor));
			if (FAILED(hr))
			{
				continue;
			}
			hr = temporarySensor->NuiStatus();
			if (hr == S_OK)
			{
				this->actualSensor = temporarySensor;
				break;
			}
			temporarySensor->Release();
		}

		if (this->actualSensor != NULL)
		{
			hr = this->actualSensor->NuiInitialize(NUI_INITIALIZE_FLAG_USES_AUDIO | NUI_INITIALIZE_FLAG_USES_DEPTH_AND_PLAYER_INDEX | NUI_INITIALIZE_FLAG_USES_COLOR | NUI_INITIALIZE_FLAG_USES_SKELETON | NUI_INITIALIZE_FLAG_USES_DEPTH);
			if (SUCCEEDED(hr))
			{
				this->skeletonSensor.setSkeletonNextEvent(CreateEventW(NULL, TRUE, FALSE, NULL));
				this->imageSensor.setImageNextEvent(CreateEventW(NULL, TRUE, FALSE, NULL));
				this->depthSensor.setDepthNextEvent(CreateEventW(NULL, TRUE, FALSE, NULL));
				this->audioSensor.setAudioNextEvent(CreateEventW(NULL, TRUE, FALSE, NULL));
				hr = this->actualSensor->NuiSkeletonTrackingEnable(this->skeletonSensor.getHandleSkeletonEvent(), 0);
			}
		}
		if (this->actualSensor == NULL)
		{
			setStatusMessage(L"Nie znaleziono urzadzenia Kinect!");
			return E_FAIL;
		}
		else if (FAILED(hr))
		{
			setStatusMessage(L"Problem z inicjalizowaniem modulu Kinect!");
			return E_FAIL;
		}

		return hr;
	}

	void setStatusMessage(WCHAR * szMessage)
	{
		SendDlgItemMessage(this->mainHwnd, IDC_STATUS, WM_SETTEXT, 0, (LPARAM)szMessage);
	}

	void setMainHWND(HWND hWnd)
	{
		this->mainHwnd = hWnd;
	}
};



#endif
