#include "Player.h"
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"
#include <iostream>
#include <limits>

int main() {
    Player player;
    int choice;

    do {
        std::cout << "1. Add item\n2. Display inventory\n3. Use item\n4. Remove item\n5. Exit\n";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice. Try again." << std::endl;
            continue;
        }

        switch (choice) {
            case 1: {
                int itemType;
                std::cout << "Choose item type (1: Weapon, 2: Armor, 3: Potion): ";
                std::cin >> itemType;

                if (std::cin.fail() || itemType < 1 || itemType > 3) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid item type!" << std::endl;
                    continue; // Gå tillbaka till början av loopen
                }

                std::string name;
                int weight;
                if (itemType == 1) {
                    int damage;
                    double range;
                    std::cout << "Enter name, weight, damage, and range: ";
                    std::cin >> name >> weight >> damage >> range;
                    player.addItem(new Weapon(name, weight, damage, range));
                } else if (itemType == 2) {
                    int defense;
                    std::cout << "Enter name, weight, and defense: ";
                    std::cin >> name >> weight >> defense;
                    player.addItem(new Armor(name, weight, defense));
                } else if (itemType == 3) {
                    int healingAmount;
                    std::cout << "Enter name, weight, and healing amount: ";
                    std::cin >> name >> weight >> healingAmount;
                    player.addItem(new Potion(name, weight, healingAmount));
                }
                break;
            }
            case 2:
                player.displayInventory();
                break;
            case 3: {
                int index;
                std::cout << "Enter item index to use: ";
                std::cin >> index;
                player.useItem(index - 1); // Indexera från 0
                break;
            }
            case 4: {
                int index;
                std::cout << "Enter item index to remove: ";
                std::cin >> index;
                player.removeItem(index - 1); // Indexera från 0
                break;
            }
            case 5:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}
