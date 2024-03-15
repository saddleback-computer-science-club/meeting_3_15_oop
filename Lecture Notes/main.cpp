//#include "University.cpp"
//#include "PublicUni.cpp"
#include "PublicUni.hpp"
#include "PrivateUni.hpp"
#include <iomanip>

using namespace std;

int main()
{
  // Part I of Lecture (Kaveh)
  University test;

  University uci("University of California, Irvine", 33467, 1553, 12522);

  uci.displaySchoolInfo();

  University usc("University of Southern California");

  usc.displaySchoolInfo();

  usc.setTuition(64726);
  usc.changeNumFaculty(4400);
  usc.changeNumStudents(49500);

  usc.displaySchoolInfo();

  cout << "Student to Faculty Ratios:\n"
       << "--------------------------\n"
       << setprecision(1) << showpoint << fixed
       << "UCI:\t" << uci.calcStudentToFacultyRatio() << endl
       << "USC:\t" << usc.calcStudentToFacultyRatio() << endl
       << "--------------------------\n\n";

  cout << "Average Tuition Revenue Per Faculty:\n"
       << "------------------------------------\n"
       << setprecision(2) << showpoint << fixed
       << "UCI:\t$" << uci.calcRevenuePerFaculty() << endl
       << "USC:\t$" << usc.calcRevenuePerFaculty() << endl
       << "------------------------------------\n\n";

  // Part II - Inheritance (Romina)
  // PublicUniversity 

     // Create an instance of PrivateUni
    PrivateUni privateUni("Private University", 5000, 200, 15000, 100000);

    // Create an instance of PublicUni
    PublicUni publicUni("Public University", 7000, 300, 12000, 500000);

    // Display information about private university
     cout << "Private University Information:" << endl;
    cout << "------------------------------------\n";
    privateUni.displaySchoolInfo();
    cout << "Donation: $" << privateUni.getDonation() << endl;
    cout << "------------------------------------\n\n";

    // Display information about public university
    cout << "\nPublic University Information:" << endl;
    cout << "------------------------------------\n";
    publicUni.displaySchoolInfo();
    cout << "Government Funding: $" << publicUni.getGovernmentFunding() << endl;
    cout << "------------------------------------\n\n";


    // Exercise II
    //using the public functions of the subclasses change the goernmentFunding and the donation
    // and output the new values
    publicUni.setGovernmentFunding(121212121212);
    privateUni.setDonation(1200000000);

    cout << "------------------------------------\n";
    cout << "Here is the updated government funding: ";
    cout <<  publicUni.getGovernmentFunding() << endl;
     cout << "------------------------------------\n";


    cout << "------------------------------------\n";
    cout << "Here is the donation: ";
    cout <<  privateUni.getDonation() << endl;
    cout << "------------------------------------\n";

    //Challenge : change the access specifier of the subclasses, what would it change?



  return 0;
}
