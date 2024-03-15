#include <iostream>
using namespace std;

class Course {
    private:
        string title;
        int numCredits;
    
    public:
        Course();
        Course(string title, int numCredits);

        void print() const;

        string getTitle() const;
        int getNumCredits() const;
        void setTitle(string title);
        void setNumCredits(int numCredits);
};