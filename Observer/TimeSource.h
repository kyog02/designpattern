#ifndef TIMESOURCEH
#define TIMESOURCEH

#include "ITimeSource.h"
#include "ISubject.h"


/**
 * 
 * 
 */
class TimeSource : public ITimeSource, public ISubject
{
public:
    virtual void setTime(int h, int m, int s)override
    {
        ITimeSource::setTime(h,m,s);
        notifyObservers();
    }
};




#endif // TIMESOURCEH