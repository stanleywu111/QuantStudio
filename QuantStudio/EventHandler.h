#ifndef __EVENTHANDLER_H__
#define __EVENTHANDLER_H__

template <typename T>
class IEventHandler
{
public:
	virtual ~IEventHandler() {};
	virtual void onEvent(T& event) = 0;
};

#endif

