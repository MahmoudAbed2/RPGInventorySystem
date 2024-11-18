#ifndef PLAYER_H
#define PLAYER_H

#include "Item.h"
#include <vector>

class Player {
private:
    std::vector<Item*> inventory;

public:
    ~Player(); // Destruktor
    void addItem(Item* item);
    void displayInventory() const;
    void useItem(int index);
    void removeItem(int index);
};

#endif // PLAYER_H
