#include "Animal.h"

Animal::Animal()
{
    coat = "";
    name = "";
    age = 0;
}

Animal::Animal(string coat, string n, int a)
{
    this->coat = coat;
    name = n;
    this->age = a; // unneccessary use of this pointer
}

Animal::~Animal()
{
    cout << "\n\nBye bye\n\n";
}

void Animal::setCoat(string coat)
{
    this->coat = coat;
}

void Animal::setName(string n)
{
    name = n;
}

void Animal::setAge(int age)
{
    this->age = age;
}

string Animal::getCoat()
{
    return coat;
}

string Animal::getName()
{
    return name;
}

int Animal::getAge() const
{
    return age;
}

void Animal::displayAnimal()
{
    cout << "Coat:\t" << coat << endl
         << "Name:\t" << name << endl
         << "Age:\t" << age << endl << endl;
}