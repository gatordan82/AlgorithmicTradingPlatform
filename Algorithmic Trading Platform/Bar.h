#ifndef _BAR_H
#define _BAR_H

#include <string>
#include "boost\date_time\posix_time\posix_time.hpp"

class Bar
{
private:
	boost::posix_time::ptime timestamp;
	std::string ticker;
	double openPrice;
	double highPrice;
	double lowPrice;
	double closePrice;
	int volume;
	double adjClosePrice;

	Bar();

public:
	Bar(boost::posix_time::ptime _timestamp, std::string _ticker, double _openPrice,
		double _highPrice, double _lowPrice, double _closePrice, int _volume);
	Bar(boost::posix_time::ptime _timestamp, std::string _ticker, double _openPrice,
		double _highPrice, double _lowPrice, double _closePrice, int _volume,
		double _adjClosePrice);
	Bar(const Bar& b);

	virtual ~Bar();

	Bar& operator=(const Bar& b);

	boost::posix_time::ptime getTimestamp();
	std::string getTicker();
	double getOpenPrice();
	double getHighPrice();
	double getLowPrice();
	double getClosePrice();
	int    getVolume();
	double getAdjClosePrice();
	void setAdjClosePrice(double _adjClosePrice);

	bool isBefore(const Bar& b);
};

#endif