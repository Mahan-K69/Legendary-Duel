#include "Domain/Entities/Deck.h"
#include <algorithm>
#include <random>
#include <stdexcept>

void Deck::addCard(std::unique_ptr<Card> card) {

    if (!card) {
        throw std::invalid_argument("Cannot add null card to deck.");
    }

    cards.push_back(std::move(card));
}

void Deck::shuffle() {

    std::random_device rd;
    std::mt19937 generator(rd());
    std::shuffle(cards.begin(), cards.end(), generator);
}

std::unique_ptr<Card> Deck::drawCard() {
    
    if (cards.empty()) {
        return nullptr;
    }

    std::unique_ptr<Card> topCard = std::move(cards.back());
    cards.pop_back();
    return topCard;
}

bool Deck::isEmpty() const {
    return cards.empty();
}

std::size_t Deck::remainingCards() const {
    return cards.size();
}