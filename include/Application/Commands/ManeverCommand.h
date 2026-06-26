#ifndef MANEVER_COMMAND
#define MANEVER_COMMAND
#include "Application/Command.h"
#include <iostream>
class ManeverCommand: public Command{

    //  Have a receiver of Use Case class 

    public:
    void execute()override{};
};

#endif /* MANEVER_COMMAND */
