#ifndef ISTATEH
#define ISTATEH


/**
 *  @brief Stateインターフェース関数
 **/
class IState{
  public:
    virtual void ShowTime(int time)=0;
  private:
};

#endif //ISTATEH