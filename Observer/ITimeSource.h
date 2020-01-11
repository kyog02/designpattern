#ifndef ITIMESOURCEH
#define ITIMESOURCEH

class ITimeSource
{
    int hours;
    int minutes;
    int seconds;

public:
    virtual void setTime(int h, int m, int s)
    {
        hours   = h;
        minutes = m;
        seconds = s;
    }
    virtual int getHours(){ return hours;}
    virtual int getMinutes(){ return minutes;}
    virtual int getSeconds(){ return seconds;}
};




#endif // ITIMESOURCEH