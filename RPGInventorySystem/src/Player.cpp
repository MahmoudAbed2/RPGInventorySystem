#include "Player.h"
#include <iostream>

void Player::addItem(Item* item) {
    inventory.push_back(item);
}

void Player::displayInventory() const {
    std::cout << "Inventory:" << std::endl;
    for (size_t i = 0; i < inventory.size(); ++i) {
        std::cout << i + 1 << ". " << inventory[i]->getName() << std::endl; // Anropa getName()
    }
}

void Player::useItem(int index) {
    if (index >= 0 && index < inventory.size()) {
        inventory[index]->use();
    } else {
        std::cout << "Invalid index!" << std::endl;
    }
}

void Player::removeItem(int index) {
    if (index >= 0 && index < inventory.size()) {
        delete inventory[index]; // Frigör minne
        inventory.erase(inventory.begin() + index);
    } else {
        std::cout << "Invalid index!" << std::endl;
    }
}

Player::~Player() {
    for (Item* item : inventory) {
        delete item; // Frigör minne för alla föremål
    }
}
