#include <bits/stdc++.h>
using namespace std;
// Take input for the number of courses taken by the student.
// ● For each course, input the grade and the credit hours.
// ● Calculate the total credits and total grade points (grade × credit hours).
// ● Compute the GPA for the semester and then the overall CGPA.
// ● Display individual course grades and the final CGPA to the user.
//  defining the function CGPA_calculator.
int CGPA_calculator(int No_of_semister)
{
   float GPA, CGPA;
   double overall_credits = 0.0;
   double overall_grade_points = 0.0;

   //  no of subjects taken in each semister by student
   for (int i = 1; i <= No_of_semister; i++)
   {
      int no_of_courses;
      cout << endl;
      cout << "******* Semister " << i << " *******" << endl;
      cout << "Enter Number of courses taken in " << i << " semister :";
      cin >> no_of_courses;
      double grade;
      double credits;
      double total_credits = 0.0;
      double total_grade_points = 0.0;

      // taking grade points and credit hours of each subject from student
      for (int j = 1; j <= no_of_courses; j++)
      {
         cout << "In course " << j << " - Enter grade points (eg. 4.0 for A ): ";
         cin >> grade;
         cout << "In course " << j << " - Enter credit hours : ";
         cin >> credits;

         // calculating total grade points  and gpa
         total_credits += credits;
         total_grade_points += grade * credits;
      }
      GPA = total_grade_points / total_credits;
      cout << endl;
      cout << "GPA of semister " << fixed << setprecision(2) << i << " is : " << GPA << endl;
      overall_credits += total_credits;
      overall_grade_points += total_grade_points;
   }

   // calculating overall CGPA of the student
   CGPA = overall_grade_points / overall_credits;
   cout << endl;
   cout << "***************************" << endl;
   cout << "Overall CGPA is :" << fixed << setprecision(2) <<CGPA << endl;
   cout << "***************************";
}
int main()
{

   // input from user no of semister
   int No_of_semister;
   cout << "Enter number of semisters :" << endl;
   cin >> No_of_semister;

   // calling function
   CGPA_calculator(No_of_semister);
}