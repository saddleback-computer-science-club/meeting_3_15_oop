#ifndef PUBLICUNI_HPP
#define PUBLICUNI_HPP

#include "University.hpp"

// Declaration of the PublicUni class which is a subclass of University
class PublicUni : public University {
private:
    float government_funding; // Private data member to store government funding amount

public:
    // Constructors and destructor

    // Default constructor
    PublicUni();

    // Destructor
    ~PublicUni(); 
    
    // Overloaded constructor
    PublicUni(string name, int num_s, int number_f, float tuition,float funding );

    // Getter method to retrieve the government funding amount
    float getGovernmentFunding();

    // Setter method to set the government funding amount
    void setGovernmentFunding(float funding);
};
#endif
