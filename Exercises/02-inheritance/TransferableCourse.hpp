#include "../01-basic-class/Course.hpp"
using namespace std;

class TransferableCourse : Course {
    private:
        string transferReqs;

    public:
        TransferableCourse();
        TransferableCourse(string title, int numCredits, string transferReqs);

        void print();

        string getTransferReqs() const;
        void setTransferReqs(string transferReqs);
};