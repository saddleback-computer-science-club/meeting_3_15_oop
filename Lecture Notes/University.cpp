// Implementation file for University Class

#include "University.hpp"

// Default Constructor
University::University()
{
    name = "";
    calendar_system = "";
    is_public = false;
    school_uid = 0;
    zipcode = 0;
    number_students = 0;
    number_faculty = 0;
    annual_tuition = 0.0;

    cout << "\nDefault Constructor...\n\n";
}

// Overloaded Constructor 1
University::University(string name, string cal, bool is_public, int id, int zip, int num_s, int num_f, float tuition)
{
    this->name = name;                  // Highlighting the "this" pointer
    calendar_system = cal;
    this->is_public = is_public;
    school_uid = id;
    zipcode = zip;
    number_students = num_s;
    this->number_faculty = num_f;       // You can still use this pointer, even when the parameter name differs from attribute name
    this->annual_tuition = tuition;

    cout << "\nOverloaded Constructor 1...\n\n";
}

// Overloaded Constructor 2
University::University(string name, string cal, bool is_public, int id, int zip)
{
    this->name = name;                  // Highlighting the "this" pointer
    calendar_system = cal;
    this->is_public = is_public;
    school_uid = id;
    zipcode = zip;

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
        << "Academic Calendar System:\t" << calendar_system << endl
        << "Public or Private:\t";
    
    if (is_public)
        cout << "Public" << endl;
    else
        cout << "Private" << endl;
    
    cout << "Annual Tuition:\t$" << annual_tuition << endl << endl
    
        << name << " has " << number_faculty << " faculty members and " << number_students << " students." 
        << endl << endl;
}