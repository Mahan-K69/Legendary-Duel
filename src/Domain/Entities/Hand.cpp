#include "Domain/Entities/Hand.h"
#include <stdexcept>

Hand::Hand(std::size_t maxSize)
    : maxSize(maxSize) {}

bool Hand::addCard(std::unique_ptr<Card> card) {
    if (!card) {
        throw std::invalid_argument("Cannot add null card to hand.");
    }

    if (isFull()) {
        return false;
    }

    cards.push_back(std::move(card));
    return true;
}

std::unique_ptr<Card> Hand::removeCard(std::size_t index) {
    if (index >= cards.size()) {
        throw std::out_of_range("Hand card index is out of range.");
    }

    std::unique_ptr<Card> selectedCard = std::move(cards[index]);
    cards.erase(cards.begin() + static_cast<std::ptrdiff_t>(index));
    return selectedCard;
}

const Card* Hand::getCard(std::size_t index) const {
    if (index >= cards.size()) {
        throw std::out_of_range("Hand card index is out of range.");
    }

    return cards[index].get();
}

bool Hand::isFull() const {
    return cards.size() >= maxSize;
}

bool Hand::isEmpty() const {
    return cards.empty();
}

std::size_t Hand::size() const {
    return cards.size();
}

std::size_t Hand::capacity() const {
    return maxSize;
}

void Hand::clear() {
    cards.clear();
}
