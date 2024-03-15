// Implementation file for University Class

#include "University.hpp"

// Default Constructor
University::University()
{
    name = "";
    is_public = false;
    number_students = 0;
    number_faculty = 0;
    annual_tuition = 0.0;

    cout << "\nDefault Constructor...\n\n";
}

// Overloaded Constructor 1
University::University(string name, bool is_public, int num_s, int num_f, float tuition)
{
    this->name = name;                  // Highlight this pointer
    this->is_public = is_public;                
    number_students = num_s;              
    this->number_faculty = num_f;       // You can still use this pointer, even when the parameter name differs from attribute name
    annual_tuition = tuition;             

    cout << "\nOverloaded Constructor 1...\n\n";
}

// Overloaded Constructor 2
University::University(string name, bool public_status)
{
    this->name = name;
    is_public = public_status;

    cout << "\nOverloaded Constructor 2...\n\n";
}

// Destructor
University::~University()
{
    cout << "\nDefault Destructor...\n\n";
}


// Behaviors

void University::setTuition(float tuition)
{
    annual_tuition = tuition;
}

void University::changeNumStudents(int num_s)
{
    number_students = num_s;
}

void University::changeNumFaculty(int num_f)
{
    number_faculty = num_f;
}

bool University::getPublicStatus()
{
    return is_public;
}

float University::calcStudentToFacultyRatio()
{
    float ratio = 0.0;

    ratio = number_students / float (number_faculty);

    return ratio;
}

float University::calcRevenuePerFaculty()
{
    float total_revenue = 0.0;
    float avg_revenue_per_faculty = 0.0;

    total_revenue = number_students * annual_tuition;
    avg_revenue_per_faculty = total_revenue / float(number_faculty);

    return avg_revenue_per_faculty;
}

void University::displaySchoolInfo()
{
    cout << "University Name:\t" << name << endl
        << "Public or Private:\t";
    
    if (is_public)
        cout << "Public" << endl;
    else
        cout << "Private" << endl;
    
    cout << "Annual Tuition:\t$" << annual_tuition << endl << endl
    
        << name << " has " << number_faculty << " faculty members and " << number_students << " students." 
        << endl << endl;
}