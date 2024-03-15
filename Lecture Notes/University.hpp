// Specification file for University Class

#include <iostream>
#include <iomanip>
using namespace std;

class University
{
    private:
        // Properties
        string name;
        bool is_public;                  // Differentiate public from private schools, 1 if public, 0 for private
        int number_students;                
        int number_faculty;              // Number of full-time faculty
        float annual_tuition;            // Dollar Amount

    public:
        // Default Constructor
        University();
        // Overloaded Constructor 1
        University(string name, bool is_public, int num_s, int number_f, float tuition);
        // Overloaded Constructor 2
        University(string name, bool public_status);
        // Destructor
        ~University();

        // Behaviors

        // Setters/ Mutators
        void changeNumStudents(int num_s);
        void changeNumFaculty(int num_f);
        void setTuition(float tuition);

        // Getter
        bool getPublicStatus();

        // Various Functions
        float calcStudentToFacultyRatio();
        float calcRevenuePerFaculty();
        void displaySchoolInfo();
};