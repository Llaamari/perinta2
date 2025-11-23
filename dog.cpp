#include "Dog.h"

Dog::Dog()
{
    std::cout << "Dog konstruktori" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destruktori" << std::endl;
}

void Dog::callOut() const
{
    std::cout << "Koira haukkuu!" << std::endl;
}