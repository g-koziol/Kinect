#ifndef  __IMAGE_SENSOR__
#define __IMAGE_SENSOR__

#include <Windows.h>
#include "NuiApi.h"
#include <iostream>
#include "ErrorHandler.h"

class ImageSensor{

	HANDLE hImageNextEvent;
	HANDLE * hImageStream;

	NUI_IMAGE_TYPE eImageType;
	NUI_IMAGE_RESOLUTION eImageResolution;
	DWORD dwFrameFlags;
	DWORD dwFrameLimit;

protected:


public:
	ImageSensor() : 
		hImageNextEvent{ nullptr },
		hImageStream{ NULL },
		eImageType{ NUI_IMAGE_TYPE_COLOR },
		eImageResolution{ NUI_IMAGE_RESOLUTION_INVALID },
		dwFrameFlags{0},
		dwFrameLimit{0}
	{
	
	}
	

	void setImageNextEvent(HANDLE eventHandle)
	{
		this->hImageNextEvent = eventHandle;
	}

	HANDLE getHandleImageEvent()
	{
		return this->hImageNextEvent;
	}

	HRESULT openStream()
	{
		return NuiImageStreamOpen(eImageType, eImageResolution, dwFrameFlags, dwFrameLimit, hImageNextEvent, hImageStream);
	}
};

#endif // ! __IMAGE_SENSOR__
