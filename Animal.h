#include <iostream>
using std::cout, std::cin, std::endl, std::string;

class Animal 
{
private:
    string coat;
    string name;
    int age;
public:
    Animal();
    Animal(string coat, string n, int a);
    ~Animal();

    void setCoat(string coat);
    void setName(string n);
    void setAge(int age);

    string getCoat();
    string getName();
    int getAge() const;

    void displayAnimal();

};