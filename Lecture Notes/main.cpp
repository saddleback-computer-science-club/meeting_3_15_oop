#include "University.cpp"

int main()
{
  // Part I of Lecture (Kaveh)
  University test;

  University uci("University of California, Irvine", "Quarter", true, 1, 92697, 33467, 1553, 12522);

  uci.displaySchoolInfo();

  University usc("University of Southern California", "Semester", false, 2, 90089);

  usc.displaySchoolInfo();

  usc.setTuition(64726);
  usc.changeNumFaculty(4400);
  usc.changeNumStudents(49500);

  usc.displaySchoolInfo();

  cout << "Student to Faculty Ratios:\n"
       << "--------------------------\n\n"
       << "UCI:\t" << uci.calcStudentToFacultyRatio() << endl
       << "USC:\t" << usc.calcStudentToFacultyRatio() << endl
       << "--------------------------\n\n";

  cout << "Average Tuition Revenue Per Faculty:\n"
       << "--------------------------\n\n"
       << setprecision(2) << showpoint << fixed
       << "UCI:\t$" << uci.calcRevenuePerFaculty() << endl
       << "USC:\t" << usc.calcRevenuePerFaculty() << endl
       << "--------------------------\n\n";

  // Part II 


  return 0;
}
