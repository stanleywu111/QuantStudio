#ifndef __EVENT_H__
#define __EVENT_H__


//TODO 模板参数特例化
template <typename T, typename  E>
class IEvent
{
public:
	virtual ~IEvent() {};
	virtual void on(T& handler) = 0;
};

#endif
