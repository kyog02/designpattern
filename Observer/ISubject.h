#ifndef ISUBJECTH
#define ISUBJECTH

#include <vector>

#include "IObserver.h"

class ISubject
{
protected:
    std::vector<IObserver*> Observers;

    virtual void notifyObservers()
    {
        for(IObserver* ob: Observers)
            ob->update();
    }

public:
    void registerObserver(IObserver* ob)
    {
        Observers.push_back(ob);
    }    
};

#endif //ISUBJECTH