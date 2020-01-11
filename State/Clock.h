#ifndef CLOCKH
#define CLOCKH

#include "State.h"

/**
 *  @brief 時計用クラス 
 **/
class Clock{
  public:
    Clock(int time){
      SetState(time);
    }

    /**
     *  @brief 時間を表示する関数
     */
    void ShowTime(int time){
      state_->ShowTime(time);
      SetState(time);
    }

  private:
    IState* state_;
    AMState AMstate;
    PMState PMstate;

    void SetState(int time)
    {
      if(time>=12){
        state_= &PMstate;
      }
      else{
        state_= &AMstate;
      }
    }

};

#endif //CLOCKH