#include <iostream>
using namespace std;

class University
{
    private:
        
        string name;
        string calendar_system;          // Semester or Quarter system
        bool is_public;
        int school_uid;
        int zipcode;                            
        int number_students;                
        int number_faculty;
        float tuition;                   // Dollar Amount

    public:
        // Default Constructor
        University();
        // Overloaded Constructor
        University(string name, string cal, bool is_public, int id, int zip, int num_s, int num_f, float tuition);
        // Destructor
        ~University();

        // What the
        void setTuition(float tuition);
        void changeNumStudents(int num_s);
        void changeNumFaculty(int num_f);

        float calcFacultyToStudentRatio();
        float calcRevenuePerStudent();

};