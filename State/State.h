#ifndef STATEH
#define STATEH

#include <iostream>
#include "IState.h"

using namespace std;

/**
 *  @brief 午後の時間表示関数
 **/
class PMState:public IState{
  public:
    void ShowTime(int time){
      cout<<"PM"<<(time-12)<<":00"<<endl;
    }

  private:
};


/**
 *  @brief 午前の時間表示関数
 **/
class AMState:public IState{
  public:
    void ShowTime(int time){
      cout<<"AM"<<time<<":00"<<endl;
    }

  private:
};


#endif //STATEH