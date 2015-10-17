#ifndef __SKELETON_SENSOR__
#define __SKELETON_SENSOR__
#include <Windows.h>
#include "NuiApi.h"

class SkeletonSensor{

	HANDLE hSkeletonNextEvent;
protected:


public:
	SkeletonSensor() : hSkeletonNextEvent{}
	{}

	void setSkeletonNextEvent(HANDLE eventHandle)
	{
		this->hSkeletonNextEvent = eventHandle;
	}

	HANDLE getHandleSkeletonEvent()
	{
		return this->hSkeletonNextEvent;
	}
};


#endif
