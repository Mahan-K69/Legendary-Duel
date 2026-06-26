#include "Domain/Entities/DiscardPile.h"
#include <stdexcept>

void DiscardPile::addCard(std::unique_ptr<Card> card) {
    if (!card) {
        throw std::invalid_argument("Cannot add null card to discard pile.");
    }

    cards.push_back(std::move(card));
}

std::unique_ptr<Card> DiscardPile::takeTopCard() {
    if (cards.empty()) {
        return nullptr;
    }

    std::unique_ptr<Card> topCard = std::move(cards.back());
    cards.pop_back();
    return topCard;
}

std::vector<std::unique_ptr<Card>> DiscardPile::takeAllCards() {
    std::vector<std::unique_ptr<Card>> allCards = std::move(cards);
    cards.clear();
    return allCards;
}

const Card* DiscardPile::peekTopCard() const {
    if (cards.empty()) {
        return nullptr;
    }

    return cards.back().get();
}

bool DiscardPile::isEmpty() const {
    return cards.empty();
}

std::size_t DiscardPile::size() const {
    return cards.size();
}

void DiscardPile::clear() {
    cards.clear();
}
