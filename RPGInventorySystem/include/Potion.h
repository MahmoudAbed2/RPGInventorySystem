#ifndef POTION_H
#define POTION_H

#include "Item.h"

class Potion : public Item {
private:
    int healingAmount;

public:
    Potion(const std::string& name, int weight, int healingAmount);
    void use() override; // Överskriver use()
};

#endif // POTION_H
