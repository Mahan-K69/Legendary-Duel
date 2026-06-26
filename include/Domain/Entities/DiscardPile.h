#ifndef DISCARD_PILE_H
#define DISCARD_PILE_H

#include "Card.h"
#include <memory>
#include <vector>
#include <cstddef>

class DiscardPile {
    private:
        std::vector<std::unique_ptr<Card>> cards;

    public:
        DiscardPile() = default;

        void addCard(std::unique_ptr<Card> card);

        std::unique_ptr<Card> takeTopCard();
        std::vector<std::unique_ptr<Card>> takeAllCards();

        const Card* peekTopCard() const;

        bool isEmpty() const;
        std::size_t size() const;

        void clear();
};

#endif /* DISCARD_PILE_H */
