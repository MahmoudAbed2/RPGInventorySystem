#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item {
private:
    int damage;
    double range;

public:
    Weapon(const std::string& name, int weight, int damage, double range);
    void use() override; // Överskriver use()
};

#endif // WEAPON_H
