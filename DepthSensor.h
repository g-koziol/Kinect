#ifndef __DEPTH_SENSOR__
#define __DEPth_SENSOR__
#include <Windows.h>
#include "NuiApi.h"

class DepthSensor{
	HANDLE hDepthNextEvent;
protected:


public:
	DepthSensor() : hDepthNextEvent{}
	{}

	void setDepthNextEvent(HANDLE eventHandle)
	{
		this->hDepthNextEvent = eventHandle;
	}

	HANDLE getHandleDepthEvent()
	{
		return this->hDepthNextEvent;
	}
};



#endif
