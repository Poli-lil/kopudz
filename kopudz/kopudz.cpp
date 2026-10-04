#include <iostream>
#include "in.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukrainian");

    Item sword("Sword", Weapon);
    Item potion("Health Potion", Potion);
    Item apple("Apple", Food);

    In inventory(3);

    inventory.setItem(0, sword);
    inventory.setItem(1, potion);
    inventory.setItem(2, apple);

    inventory.print();

    cout << '\n';
    cout << "КОПІЯ INVENTOR " << '\n';

    In inventoryCopy(inventory);

    inventoryCopy.print();

    return 0;
}