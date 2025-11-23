#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
public:
    Animal();
    virtual ~Animal();               // VIRTUAALINEN DESTRUKTORI! Tärkeää polymorfismissa

    virtual void callOut() const;    // Virtuaalinen metodi
};

#endif // ANIMAL_H