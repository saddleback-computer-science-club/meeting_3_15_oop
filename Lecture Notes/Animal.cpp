#include "Animal.hpp"

Animal::Animal()
{
    coat = "";
    name = "";
    age = 0;
    weight = 0;
}

Animal::Animal(string coat, string n, int a, float weight)
{
    this->coat = coat;
    name = n;
    this->age = a; // unneccessary use of this pointer
    this->weight = weight;
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

void Animal::setWeight(float w)
{
    weight = w;
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

float Animal::getWeight() const
{
    return weight;
}

void Animal::displayAnimal()
{
    cout << "Coat:\t" << coat << endl
         << "Name:\t" << name << endl
         << "Age:\t" << age << endl
         << "Weight:\t" << weight << endl;
}