#include <iostream>

using namespace std;

int main()
{
    int isEvenOrOdd();
    int findLargestSmallestAndDisplayEvenOrOdd();
    int gradeOfStudents();
    int isLeapOrNot();
    int dayOfTheWeek();

    cout<< "Determine if a given number is even or odd and print it "<< endl;
    isEvenOrOdd();
    cout<< " "<< endl;

    cout<< "Find the largest and smallest among any number of values supplied "<< endl;
    findLargestSmallestAndDisplayEvenOrOdd();
    cout<< " "<< endl;

    cout<< "Compute grade of students using one of the control structures. "<< endl;
    gradeOfStudents();
    cout<< " "<< endl;

    cout<< "Check whether any year supplied, is a leap year or not "<< endl;
    isLeapOrNot();
    cout<< " "<< endl;

    cout<< "Print out names of days of the week using selection control structure "<< endl;
    dayOfTheWeek();
    cout<< " "<< endl;

    return 0;
}
