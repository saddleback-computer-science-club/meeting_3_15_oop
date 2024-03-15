// Specification file for University Class

#include <iostream>
#include <iomanip>
using std::string;

class University
{
    private:
        // Properties
        string name;
        int number_students;                
        int number_faculty;              // Number of full-time faculty
        float annual_tuition;            // Dollar Amount

    public:
        // Default Constructor
        University();
        // Overloaded Constructor 1
        University(string name, int num_s, int number_f, float tuition);
        // Overloaded Constructor 2
        University(string name);
        // Destructor
        ~University();

        // Behaviors

        // Setters/ Mutators
        void changeNumStudents(int num);
        void changeNumFaculty(int num);
        void setTuition(float tuition);

        // Various Functions
        float calcStudentToFacultyRatio();
        float calcRevenuePerFaculty();
        void displaySchoolInfo();
};