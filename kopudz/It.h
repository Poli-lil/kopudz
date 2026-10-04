#pragma once

#include "String.h"

enum ItClass
{
    Weapon,
    Potion,
    Food,
    None
};

class Item
{
private:
    String name;
    ItClass type;

public:
    Item();
    Item(const char* name, ItClass type);
    Item(const Item& other);

    void print() const;
};