#ifndef __PERFORMANCE_H__
#define __PERFORMANCE_H__

template <typename T>
class Performance<T>
{
public:
	Performance();

	void valueChanged();

	void updateEquity(long& dateTime, double coreEquity, double equity);









private:
	bool enabled = true;
	double equity;
	double coreEquity;
	double lowEquity;
	double highEquity;
	double pnl;
	double drawdown;
	double drawdownPercent;
	double currentDrawdown;
	double currentRunUp;

	//TODO DoubleTimeSeries equitySeries;
	//TODO DoubleTimeSeries coreEquitySeries;
	//TODO DoubleTimeSeries pnlSeries;
	//TODO DoubleTimeSeries drawdownSeries;
	//TODO DoubleTimeSeries drawdownPercentSeries;
};

#endif

template<typename T>
inline Performance<T>::Performance()
{
}
