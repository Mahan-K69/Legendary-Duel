#ifndef ENDTURN_COMMAND
#define ENDTURN_COMMAND
#include "Application/Command.h"

class EndTurnCommand:public Command{

    //  Have a receiver of Use Case class 
    public:
    void execute()override{};
};

#endif /* ENDTURN_COMMAND */
