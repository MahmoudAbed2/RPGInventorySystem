#include "Armor.h"

Armor::Armor(const std::string& name, int weight, int defense)
    : Item(name, weight), defense(defense) {}

void Armor::use() {
    std::cout << "Equipping armor: " << name << " with " << defense << " defense." << std::endl;
}
