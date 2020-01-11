#include "Clock.h"

int main(void){
  cout<<"State Pattern Sample Start!!"<<endl;

  int i = 0;
  Clock clock(i);

  for(i=0;i<24;i++){
    cout<<i<<":00=";
    clock.ShowTime(i);
  }

  return 0;
}