#ifndef ICOMMANDH
#define ICOMMANDH

class ICommand
{
public:
    virtual void Execute() = 0;
    virtual void Undo() = 0;
};


#endif //ICOMMANDH