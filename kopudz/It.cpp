#include "It.h"
#include <iostream>

using namespace std;

Item::Item()
    : name(), type(None)
{
}

Item::Item(const char* name, ItClass type)
    : name(name), type(type)
{
}

Item::Item(const Item& other)
    : name(other.name), type(other.type)
{
}

void Item::print() const
{
    cout << "Назва: " << name.c_str() << '\n';

    cout << "Клас: ";

    switch (type)
    {
    case Weapon:
        cout << "Weapon";
        break;

    case Potion:
        cout << "Potion";
        break;

    case Food:
        cout << "Food";
        break;

    case None:
        cout << "None";
        break;
    }

    cout << '\n';
}