#include "Course.hpp"

//Default constructor, calls detailed constructor (constructor chaining)
Course::Course() {
    Course("Untitled", 0);
}

//Detailed constructor, calls mutators to assign data
Course::Course(string title, int numCredits) {
    setTitle(title);
    setNumCredits(numCredits);
}

//Display this course's information
void Course::print() const {
    cout << "Course title: " << getTitle()
        << "\nNumber of Credits: " << getNumCredits()
        << endl;
}


//Accessors

string Course::getTitle() const {
    return title;
}

int Course::getNumCredits() const {
    return numCredits;
}


//Mutators

void Course::setTitle(string title) {
    this->title = title;
}

void Course::setNumCredits(int numCredits) {
    this->numCredits = numCredits;
}