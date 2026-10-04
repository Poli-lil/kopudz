#include "in.h"
#include <iostream>

using namespace std;

In::In(int size)
{
    this->size = size;
    items = new Item[size];
}

In::In(const In& other)
{
    size = other.size;
    items = new Item[size];

    for (int i = 0; i < size; i++)
    {
        items[i] = other.items[i];
    }
}

In::~In()
{
    delete[] items;
}

void In::setItem(int index, const Item& item)
{
    if (index >= 0 && index < size)
    {
        items[index] = item;
    }
}

void In::print() const
{
    cout << "===== INVENTOR =====" << '\n';

    for (int i = 0; i < size; i++)
    {
        cout << '\n';
        cout << "Предмет #" << i + 1 << '\n';

        items[i].print();
    }
}