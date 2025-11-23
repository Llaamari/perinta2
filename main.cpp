#include <iostream>
#include <Windows.h>
#include <memory>
#include "Animal.h"
#include "Dog.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "--- Suorat oliot (ei polymorfismia) ---" << std::endl;

    Animal a;
    a.callOut();   // "Eläin ääntelee."

    Dog d;
    d.callOut();   // "Koira haukkuu!"

    std::cout << "\n--- Polymorfiset oliot ---" << std::endl;

    std::unique_ptr<Animal> animalDog = std::make_unique<Dog>();
    animalDog->callOut();    // Kutsuu Dog::callOut()

    std::cout << "\nOhjelma päättyy ja oliot tuhoutuvat." << std::endl;

    return 0;
}
