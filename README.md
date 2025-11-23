# Inheritance and Method Overriding (C++)
![C++](https://img.shields.io/badge/C++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Qt](https://img.shields.io/badge/Qt-%23217346.svg?style=for-the-badge&logo=Qt&logoColor=white)<br>
This project demonstrates **inheritance**, **method overriding**, and **basic polymorphism** in C++.

## Overview

The project implements two classes:

* **Animal** (base class)

  * Virtual method: `callOut()`
  * Virtual destructor
  * Prints debug information in constructor/destructor

* **Dog** (derived class)

  * Overrides `callOut()`
  * Prints debug information

## File Structure

```
animal.h
animal.cpp
dog.h
dog.cpp
main.cpp
```

## Class Functionality

### Animal Class

* Provides a virtual method `callOut()` that prints:

  ```
  Eläin ääntelee.
  ```
* Has a **virtual destructor**, required for correct polymorphic destruction.

### Dog Class

* Inherits from `Animal`.
* Overrides `callOut()` to print:

  ```
  Koira haukkuu!
  ```
* Prints constructor/destructor messages.

## Polymorphism

The program demonstrates two ways to create objects:

### 1. **Direct instances (non-polymorphic)**

```cpp
Animal a;
a.callOut();

Dog d;
d.callOut();
```

### 2. **Polymorphic object using smart pointer**

```cpp
std::unique_ptr<Animal> animalDog = std::make_unique<Dog>();
animalDog->callOut();
```

This correctly calls `Dog::callOut()` due to the virtual method.

## Example Output

```
Animal konstruktori
Eläin ääntelee.
Animal konstruktori
Dog konstruktori
Koira haukkuu!

Animal konstruktori
Dog konstruktori
Koira haukkuu!

Dog destruktori
Animal destruktori
Dog destruktori
Animal destruktori
```

## How to Build

1. Create a Qt Creator C++ project.
2. Add two classes via **Add New → C++ Class**.
3. Copy the provided code into the appropriate files.
4. Build and run.
---
