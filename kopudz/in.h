#pragma once
#include "it.h"

class In
{
private:
    int size;
    Item* items;

public:
    In(int size);
    In(const In& other);

    ~In();

    void setItem(int index, const Item& item);
    void print() const;
};
