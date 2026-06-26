#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include <memory>
#include <vector>
#include <cstddef>

class Hand {
    private:
        std::vector<std::unique_ptr<Card>> cards;
        std::size_t maxSize;

    public:
    explicit Hand(std::size_t maxSize = 7);

    bool addCard(std::unique_ptr<Card> card);
    std::unique_ptr<Card> removeCard(std::size_t index);

    const Card* getCard(std::size_t index) const;

    bool isFull() const;
    bool isEmpty() const;

    std::size_t size() const;
    std::size_t capacity() const;

    void clear();
};

#endif /* HAND_H */