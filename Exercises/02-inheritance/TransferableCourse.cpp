#include "TransferableCourse.hpp"

// Default constructor
TransferableCourse::TransferableCourse() {
    TransferableCourse("Untitled", 0, "Unspecified");
}

// Overloaded constructor, calls base constructor
TransferableCourse::TransferableCourse(string title, int numCredits, string transferReqs) {
    Course(title, numCredits);
    setTransferReqs(transferReqs);
}

void TransferableCourse::print() {
    // call Course's print()
    Course::print();

    // supplement with our own data
    cout << "Transfer Requirements: " << getTransferReqs() << endl;
}

string TransferableCourse::getTransferReqs() const {
    return transferReqs;
}

void TransferableCourse::setTransferReqs(string transferReqs) {
    this->transferReqs = transferReqs;
}