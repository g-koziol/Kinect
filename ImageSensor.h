#ifndef  __IMAGE_SENSOR__
#define __IMAGE_SENSOR__

#include <Windows.h>
#include "NuiApi.h"
#include <iostream>

class ImageSensor{

	HANDLE hImageNextEvent;
protected:


public:
	ImageSensor() : hImageNextEvent{}
	{}

	void setImageNextEvent(HANDLE eventHandle)
	{
		this->hImageNextEvent = eventHandle;
	}

	HANDLE getHandleImageEvent()
	{
		return this->hImageNextEvent;
	}
};

#endif // ! __IMAGE_SENSOR__
