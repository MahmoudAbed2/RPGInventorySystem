#include "Potion.h"

Potion::Potion(const std::string& name, int weight, int healingAmount)
    : Item(name, weight), healingAmount(healingAmount) {}

void Potion::use() {
    std::cout << "Drinking potion: " << name << " for " << healingAmount << " healing." << std::endl;
}
