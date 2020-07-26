#include <iostream>

using namespace std;


/** Question "a"
 *Determine if a given number is even or odd and print it
 *
 */

int isEvenOrOdd(){

   int num;

   cout << "Enter number: ";
   cin >> num;

   if(num % 2 == 0)
   cout<<num<<" is even" << endl;
   else
   cout<<num<<" is odd"<< endl;
   return 0;

}



/** Question "b"
 *
 * Find the largest and smallest among any number of values supplied and
    also display whether the identified largest/smallest number is even or odd.
 *
 */


 int findLargestSmallestAndDisplayEvenOrOdd(){

    //Declare variables
    int firstNo = 4, secondNo = 10, thirdNo = 6, largest, smallest;

    //logic to find the largest of the three numbers using tenary.


	largest=(firstNo > secondNo && firstNo > thirdNo)? firstNo
            :(secondNo>thirdNo)?secondNo
            : thirdNo;

    smallest = (firstNo < secondNo && firstNo < thirdNo)? firstNo
            :(secondNo<thirdNo)?secondNo
            : thirdNo;

	cout<<"Largest number is "<<largest<< endl;

	cout << "Smallest number is "<< smallest << endl;

	//Using a function
	int isEvenOrOddForQuestionB(int num);

	cout << "The largest number "<< isEvenOrOddForQuestionB(largest) << endl;

	cout << "The smallest number "<< isEvenOrOddForQuestionB(smallest) << endl;


	return 0;
}


int isEvenOrOddForQuestionB(int num){


   if(num % 2 == 0)
   cout<<num<<" is even";
   else
   cout<<num<<" is odd";
   return 0;

}


/** Question "c"
 *
 * Compute grade of students using one of the control structures. The grades are assigned as followed:
 *
    SCORES    GRADE
   70 - 100     A
   60 - 69      B
   50 - 59      C
   45 - 49      D
   0 - 44       F
 *
 */



int gradeOfStudents(){

    int marksCount = 0;
    int subjectsCount = 1;

    //Know the number of subjects
    int numberOfSubjects;

    cout << "Enter number of subjects: ";
    cin >> numberOfSubjects;

    // Store marks of all the subjects in an array

    int marks[numberOfSubjects];

    int len = sizeof(marks) / sizeof(marks[0]);

    for (int i = 0; i < len; i++){
       cout << "Enter enter subject " <<  subjectsCount++ << ":  ";
       cin >> marks[marksCount++];
    }

    // Max marks will be 100 * number of subjects
    int max_marks = len * 100;

    // Initialize student's total marks to 0
    int total = 0;

    // Initialize student's grade marks to F
    char grade = 'F';

    // Traverse though the marks array to find the sum.
    for (int i = 0; i < len; i++)
    {
        total += marks[i];
    }

    // Calculate the percentage.
    // Since all the marks are integer,
    // typecast the calculation to double.
    double percentage = ((double)(total) / max_marks) * 100;

    // Nested if else
    if (percentage >= 70){
        grade = 'A';
    }
    else{
        if (percentage >= 60 && percentage <= 69){
            grade = 'B';
        }
        else{
            if (percentage >= 50 && percentage <= 59){
                grade = 'C';
            }
            else{
                if (percentage >= 45 && percentage <= 49){
                    grade = 'D';
                }
                else{
                    grade = 'F';
                }
            }
        }
    }
    cout << "Final grade of student: " << (grade) << endl;

    return 0;
}


/** Question 1 "d"
 *
 * Check whether any year supplied, is a leap year or not (a year is leap if it
    is divisible by 4)
 *
 */

int isLeapOrNot(){


   int year = 2016;

   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
   cout<<year<<" is a leap year";
   else
   cout<<year<<" is not a leap year";

   return 0;
}

/** Question "e"
 *
 *Print out names of days of the week using selection control structure.
 *
 */




int dayOfTheWeek(){

    int weeknumber;

   //Reading week number from user
   cout<<"Enter week number(1-7): ";
   cin>>weeknumber;

    switch(weeknumber)
    {
        case 1: cout<<"Monday";
            break;
        case 2: cout<<"Tuesday";
            break;
        case 3: cout<<"Wednesday";
            break;
        case 4: cout<<"Thursday";
            break;
        case 5: cout<<"Friday";
            break;
        case 6: cout<<"Saturday";
            break;
        case 7: cout<<"Sunday";
            break;
        default: cout<<"Invalid input! Please enter week no. between 1-7.";
    }

    return 0;

}



