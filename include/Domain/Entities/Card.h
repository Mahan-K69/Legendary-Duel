#ifndef CARD_H
#define CARD_H
#include <string>
#include "HeroType.h"
#include "CardCategory.h"
#include "PlayTiming.h"

class Card{

    std::string Name;
    HeroType owner;
    CardCategory category;
    PlayTiming timing;

    public:

};

#endif /* CARD_H */
