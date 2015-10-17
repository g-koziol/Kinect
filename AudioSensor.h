#ifndef __AUDIO_SENSOR__
#define __AUDIO_SENSOR__

#include <Windows.h>
#include "NuiApi.h"

class AudioSensor
{
	HANDLE hAudioNextEvent;
protected:


public:
	AudioSensor() : hAudioNextEvent{}
	{}

	void setAudioNextEvent(HANDLE eventHandle)
	{
		this->hAudioNextEvent = eventHandle;
	}

	HANDLE getHandleAudioEvent()
	{
		return this->hAudioNextEvent;
	}
};

#endif /* __AUDIO_SENSOR__ */