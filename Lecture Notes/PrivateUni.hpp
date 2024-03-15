#ifndef PRIVATEUNI_HPP
#define PRIVATEUNI_HPP

#include "University.hpp"


//---- Exercise : Create a subclass of the University class---------
/*
     private data members--> float donation
     constructor, destructor , getDonation, setDonation
*/

// Declaration of the PrivateUni class which is a subclass of University
class PrivateUni : public University{
private:
    // Private data member to store donation amount
    float donation; 

public:
    // Constructors and destructor
 
    // Default constructor
    PrivateUni(); 

    // Destructor
    ~PrivateUni(); 
    //Overloaded Constructur
    PrivateUni(string name, int num_s, int number_f, float tuition,float donation ); // Overloaded constructor


    // Getter method to retrieve the donation amount
    float getDonation();

    // Setter method to set the donation amount
    void setDonation(float d);
};

#endif