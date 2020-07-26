#include <iostream>

using namespace std;

int main()
{
    void arithmeticOperators();
    void logicalOperators();
    void relationalOperators();
    void assignmentOperators();
    void bitwiseOperators();
    void otherOperators();

    cout << "WELCOME TO THE SOLUTION FOR QUESTION 3 OF PRACTICAL EXERCISES FOR CHAPTER 2" << endl;


    cout << "Arithmetic Operators " << endl;
    arithmeticOperators();
    cout << " " << endl;

    cout << "Logical Operators " << endl;
    logicalOperators();
    cout << " " << endl;

    cout << "Assignment Operators " << endl;
    assignmentOperators();
    cout << " " << endl;

    cout << "Relational Operators " << endl;
    relationalOperators();
    cout << " " << endl;

    cout << "Bitwise Operators " << endl;
    bitwiseOperators();
    cout << " " << endl;

    cout << "Other Operators " << endl;
    otherOperators();
    cout << " " << endl;
    return 0;
}
