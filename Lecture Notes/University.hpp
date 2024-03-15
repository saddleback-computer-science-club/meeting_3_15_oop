// Specification file for University Class

#include <iostream>
using namespace std;

class University
{
    private:
        // Properties
        string name;
        string calendar_system;          // Semester or Quarter system
        bool is_public;                  // Differentiate public from private schools, 1 if public, 0 for private
        int school_uid;                  // University ID used to find schools for transcripts...
        int zipcode;                            
        int number_students;                
        int number_faculty;
        float annual_tuition;                   // Annual Dollar Amount

    public:
        // Default Constructor
        University();
        // Overloaded Constructor 1
        University(string name, string cal, bool is_public, int id, int zip, int num_s, int num_f, float tuition);
        // Overloaded Constructor 2
        University(string name, string cal, bool is_public, int id, int zip);
        // Destructor
        ~University();

        // Behaviors

        // Setters/ Mutators
        void setTuition(float tuition);
        void changeNumStudents(int num_s);
        void changeNumFaculty(int num_f);

        // Getter
        bool getPublicStatus();

        // Various Functions
        float calcStudentToFacultyRatio();
        float calcRevenuePerFaculty();
        void displaySchoolInfo();
};