#include "Bar.h"



Bar::Bar()
{
}

Bar::Bar(boost::posix_time::ptime _timestamp, std::string _ticker, 
	double _openPrice, double _highPrice, double _lowPrice, 
	double _closePrice, int _volume)
	: timestamp{ _timestamp }, ticker{ _ticker }, openPrice{ _openPrice },
	highPrice{ _highPrice }, lowPrice{ _lowPrice }, closePrice{ _closePrice },
	volume{ _volume }
{
	adjClosePrice = closePrice;
}

Bar::Bar(boost::posix_time::ptime _timestamp, std::string _ticker, 
	     double _openPrice, double _highPrice, double _lowPrice, 
	     double _closePrice, int _volume, double _adjClosePrice)
	: timestamp{ _timestamp }, ticker{ _ticker }, openPrice{ _openPrice },
	highPrice{ _highPrice }, lowPrice{ _lowPrice }, closePrice{ _closePrice },
	volume{ _volume }, adjClosePrice{ _adjClosePrice }
{
}

Bar::Bar(const Bar& b)
	: timestamp{ b.timestamp }, ticker{ b.ticker }, openPrice{ b.openPrice },
	highPrice{ b.highPrice }, lowPrice{ b.lowPrice }, closePrice{ b.closePrice },
	volume{ b.volume }, adjClosePrice{ b.adjClosePrice }
{
}


Bar::~Bar()
{
}

Bar& Bar::operator=(const Bar& b)
{
	if (&b != this)
	{
		timestamp = b.timestamp;
		ticker = b.ticker;
		openPrice = b.openPrice;
		highPrice = b.highPrice;
		lowPrice = b.lowPrice;
		closePrice = b.closePrice;
		volume = b.volume;
		adjClosePrice = b.adjClosePrice;
	}

	return *this;
}

boost::posix_time::ptime Bar::getTimestamp()
{
	return timestamp;
}

std::string Bar::getTicker()
{
	return ticker;
}

double Bar::getOpenPrice()
{
	return openPrice;
}

double Bar::getHighPrice()
{
	return highPrice;
}

double Bar::getLowPrice()
{
	return lowPrice;
}

double Bar::getClosePrice()
{
	return closePrice;
}

int Bar::getVolume()
{
	return volume;
}

double Bar::getAdjClosePrice()
{
	return adjClosePrice;
}

void Bar::setAdjClosePrice(double _adjClosePrice)
{
	adjClosePrice = _adjClosePrice;
}

bool Bar::isBefore(const Bar& b)
{
	return timestamp < b.timestamp;
}
