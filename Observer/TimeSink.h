#ifndef TIMESINKH
#define TIMESINKH

// クラスのインタフェース
#include "IObserver.h"

// 委譲するクラス
#include "ITimeSource.h"

class TimeSink : public IObserver
{
    int hours;
    int minutes;
    int seconds;
    ITimeSource& timeSource;

public:
    TimeSink(ITimeSource& ts):timeSource(ts){}

    int getHours() { return hours; }
    int getMinutes() { return minutes; }
    int getSeconds() { return seconds; }

    virtual void update() override
    { 
        hours   = timeSource.getHours();
        minutes = timeSource.getMinutes();
        seconds = timeSource.getSeconds();
    }
};

#endif // TIMESINKH