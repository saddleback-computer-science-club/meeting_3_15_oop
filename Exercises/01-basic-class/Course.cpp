#include "Course.hpp"

//Default constructor, calls detailed constructor
Course::Course() {
    Course("Untitled", "N/A", 0);
}

//Detailed constructor, calls mutators to assign data
Course::Course(string title, string code, int numCredits) {
    this->setTitle(title);
    this->setCode(code);
    this->setNumCredits(numCredits);
}

//Display this course's information
void Course::print() const {
    cout << "Course title: " << this->getTitle()
        << "Course code: " << this->getCode()
        << "Number of Credits: " << this->getNumCredits()
        << endl;
}


//Accessors

string Course::getTitle() const {
    return title;
}

string Course::getCode() const {
    return code;
}

int Course::getNumCredits() const {
    return numCredits;
}


//Mutators

void Course::setTitle(string title) {
    this->title = title;
}

void Course::setCode(string code) {
    this->code = code;
}

void Course::setNumCredits(int numCredits) {
    this->numCredits = numCredits;
}