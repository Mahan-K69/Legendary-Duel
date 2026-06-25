#ifndef CARD_H
#define CARD_H
#include <string>
#include "enums/HeroType.h"
#include "enums/CardCategory.h"
#include "enums/PlayTiming.h"

class Card{

    std::string Name;
    HeroType owner;
    CardCategory category;
    PlayTiming timing;

    public:

};

#endif /* CARD_H */
