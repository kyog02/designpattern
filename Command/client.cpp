
#include "RemoteControl.h"
#include "Command.h"


int main()
{
    RemoteControl* remoteControl = new RemoteControl();
    Light* light = new Light();

    LightOnCommand* lightOnCommand = new LightOnCommand(*light);
    LightOffCommand* lightOffCommand = new LightOffCommand(*light);

    remoteControl->setCommand(0, lightOnCommand);
    remoteControl->setCommand(1, lightOffCommand);

    remoteControl->onButtonPushed(0);
    remoteControl->onButtonPushed(1);
    remoteControl->undoButtonPushed();

    return 0;
}