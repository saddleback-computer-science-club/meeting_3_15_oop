// Implementation file for University Class
#ifndef Uni
#include "University.hpp"
using namespace std;

// Default Constructor
University::University()
{
    name = "";
    number_students = 0;
    number_faculty = 0;
    annual_tuition = 0.0;

    cout << "\nDefault Constructor...\n\n";
}

// Overloaded Constructor 1
University::University(string name, int num_s, int num_f, float tuition)
{
    this->name = name;                  // Highlight this pointer             
    number_students = num_s;              
    this->number_faculty = num_f;       // You can still use this pointer, even when the parameter name differs from attribute name
    annual_tuition = tuition;             

    cout << "\nOverloaded Constructor 1...\n\n";
}

// Overloaded Constructor 2
University::University(string name)
{
    this->name = name;

    cout << "\nOverloaded Constructor 2...\n\n";
}

// Destructor
University::~University()
{
    cout << "\nDestructor...\n\n";
}

// Behaviors

void University::setTuition(float tuition)
{
    annual_tuition = tuition;
}

// EXERCISE 1: Implement setter
void University::changeNumStudents(int num)
{
    number_students = num;
}

// EXERCISE 1: Implement setter
void University::changeNumFaculty(int num)
{
    number_faculty = num;
}

float University::calcStudentToFacultyRatio()
{
    float ratio = 0.0;

    ratio = number_students / static_cast<float>(number_faculty);

    return ratio;
}

// EXERCISE 1: Implement function
float University::calcRevenuePerFaculty()
{
    float total_revenue = 0.0;
    float avg_revenue_per_faculty = 0.0;

    total_revenue = number_students * annual_tuition;
    avg_revenue_per_faculty = total_revenue / static_cast<float>(number_faculty);

    return avg_revenue_per_faculty;
}

// EXERCISE 1: Implement function
void University::displaySchoolInfo()
{
    cout << "University Name:\t" << name << endl

        << "Annual Tuition:\t$" << annual_tuition << endl << endl
    
        << name << " has " << number_faculty << " faculty members and " << number_students << " students." 
        << endl << endl;
}

#endif