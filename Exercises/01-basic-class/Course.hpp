#include <iostream>
using namespace std;

class Course {
    private:
        string title;
        string code;
        int numCredits;
    
    public:
        Course();
        Course(string title, string code, int numCredits);
        void print() const;

        string getTitle() const;
        string getCode() const;
        int getNumCredits() const;
        void setTitle(string title);
        void setCode(string code);
        void setNumCredits(int numCredits);
};