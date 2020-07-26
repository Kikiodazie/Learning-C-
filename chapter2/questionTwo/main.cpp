#include <iostream>

using namespace std;

int main()
{
    int swapValues();
    int displayMaximum();
    int findLargest();
    int rootsOfQuadraticEquation();
    int studentGradeResultSheet();

    cout<< " Swaps values of two variables with and without using third variable."<< endl;
    swapValues();
    cout<< " "<< endl;

    cout<< "Receives numbers as input and displays the maximum. "<< endl;
    displayMaximum();
    cout<< " "<< endl;

    cout<< "Finds the largest of three numbers using ternary operators. "<< endl;
    findLargest();
    cout<< " "<< endl;

    cout<< "Finds the roots of quadratic equation. "<< endl;
    rootsOfQuadraticEquation();
    cout<< " "<< endl;

    cout<< " Formatted result sheet of student's grade"<< endl;
    studentGradeResultSheet();
    cout<< " "<< endl;


    return 0;
}
