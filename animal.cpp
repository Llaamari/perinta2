#include "Animal.h"

Animal::Animal()
{
    std::cout << "Animal konstruktori" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destruktori" << std::endl;
}

void Animal::callOut() const
{
    std::cout << "Eläin ääntelee." << std::endl;
}