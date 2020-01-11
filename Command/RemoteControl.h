#ifndef REMOTECONTROLH
#define REMOTECONTROLH

#include <map>

#include "ICommand.h"


class RemoteControl
{
    std::map<int, ICommand*> commandList;
    ICommand* UndoCommand;

public:
    virtual void setCommand(int slot, ICommand* command)
    {
        commandList[slot] = command;
    }

    virtual void onButtonPushed(int slot)
    {
        commandList[slot]->Execute();
        UndoCommand = commandList[slot];
    }

    virtual void undoButtonPushed()
    {
        UndoCommand->Undo();
    }
};

#endif //REMOTECONTROLH