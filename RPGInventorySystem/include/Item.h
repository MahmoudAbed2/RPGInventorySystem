#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
protected:
    std::string name;
    int weight;

public:
    Item(const std::string& name, int weight) : name(name), weight(weight) {}
    virtual void use() = 0; // Ren virtuell funktion
    virtual ~Item(); // Virtuell destruktor
    virtual std::string getName() const { return name; } // Returnera namnet
};

#endif // ITEM_H
