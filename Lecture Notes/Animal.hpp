#include <iostream>
using namespace std;

class Animal 
{
private:
    string coat;
    string name;
    int age;
    float weight;
public:
    Animal();
    Animal(string coat, string n, int a, float weight);
    ~Animal();

    void setCoat(string coat);
    void setName(string n);
    void setAge(int age);
    void setWeight(float weight);

    string getCoat();
    string getName();
    int getAge() const;
    float getWeight() const;

    void displayAnimal();
};