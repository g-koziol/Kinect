#ifndef __SENSOR__
#define __SENSOR__

#include "DepthSensor.h"
#include "ImageSensor.h"
#include "SkeletonSensor.h"
#include <windows.h>
#include "NuiApi.h"


class Sensor{
	DepthSensor depthSensor;
	ImageSensor imageSensor;
	SkeletonSensor skeletonSensor;
protected:


public:
	Sensor() : depthSensor{}, imageSensor{}, skeletonSensor{}
	{}


};



#endif
