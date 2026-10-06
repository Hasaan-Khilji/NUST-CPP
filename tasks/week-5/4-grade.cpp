#include <iostream>

using namespace std;

int main()
{
    // Initialize marks and grade
    float marks;
    char grade = 'F';


    // Get input forom user
    cout << "Please enter your marks: ";
    cin >> marks;

    // Print grade
    if (marks >= 60)
    {
        if (marks >= 70)
        {
            if (marks >= 80)
            {
                if (marks >= 90)
                {
                    grade = 'A';
                }
                else
                {
                    grade = 'B';
                }
            }
            else    
            {
                grade = 'C';
            }
        }
        else
        {
            grade = 'D';
        }
    }

    // Print grade
    cout << "\nGrade: " << grade << endl;

    return 0;
}
