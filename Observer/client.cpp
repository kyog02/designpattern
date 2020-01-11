#include <iostream>

#include "TimeSource.h"
#include "TimeSink.h"


int main()
{
    TimeSource* source = new TimeSource();
    TimeSink* sink = new TimeSink(*source);

    source->registerObserver(sink);
    source->setTime(1,2,3);

    std::cout << sink->getHours() << sink->getMinutes() << sink->getSeconds() << std::endl;

    return 0;
}