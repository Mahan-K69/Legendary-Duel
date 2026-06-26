#ifndef COMMAND_INVOKER
#define COMMAND_INVOKER
#include <memory>
#include "Command.h"

class Invoker{

    std::unique_ptr<Command> command;

    public:
        void executeCommand(){command->execute();};
        void SetCommand(std::unique_ptr<Command> NewCommand){command=std::move(NewCommand);};
};

#endif /* COMMAND_INVOKER */
