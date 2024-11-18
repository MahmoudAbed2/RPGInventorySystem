#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"

class Armor : public Item {
private:
    int defense;

public:
    Armor(const std::string& name, int weight, int defense);
    void use() override; // Överskriver use()
};

#endif // ARMOR_H
