#include <iostream>
#include "TickEvent.h"
#include "boost\date_time\gregorian\gregorian.hpp"

using boost::posix_time::ptime;
using boost::posix_time::time_duration;
using boost::gregorian::date;

int main()
{
	std::string sym{ "GOOG" };
	date d{ 2016, 9, 16 };
	ptime timeStamp(d, time_duration(16, 0, 0));
	double bid{ 500.0 };
	double ask{ 501.0 };

	TickEvent tick(sym, timeStamp, bid, ask);

	std::cout << tick.toString() << std::endl;

	std::cin.get();

	return 0;

}
