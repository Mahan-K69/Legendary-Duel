#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
#include <memory>
#include <cstddef>

class Deck {
    
    private:
        std::vector<std::unique_ptr<Card>> cards;
    
    public:
        Deck() = default;

        void addCard(std::unique_ptr<Card> card);
        void shuffle();
        std::unique_ptr<Card> drawCard();

        bool isEmpty() const;
        std::size_t remainingCards() const;
};

#endif /* DECK_H */
