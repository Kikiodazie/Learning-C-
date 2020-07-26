#include <iostream>
#include <cmath>
#include <string>

using namespace std;


    /** QuestionTwo "a"
        Swap values of two variables with
        and without using third variable.
     *
     */

int swapValues(){

    //Declare variables
    int firstNumber, secondNumber;

    // Take input from user
    cout << "First Number: ";
    cin >> firstNumber;

    cout << "Second Number: ";
    cin >> secondNumber;

    //By * and /
    cout<<"Before swap first number= "<<firstNumber<<" second number= "<<secondNumber<<endl;
    firstNumber=firstNumber*secondNumber;
    secondNumber=firstNumber/secondNumber;
    firstNumber=firstNumber/secondNumber;

    cout<<"After swap first number= "<<firstNumber<<" second number= "<<secondNumber<<endl;
    return 0;

}


    /** QuestionTwo "b"
        Receives numbers as input and displays the maximum.
     *
     */

int displayMaximum(){
    //Declare variables
    int firstNo, secondNo, thirdNo;

    cout<< "Enter the first number: ";
    cin >> firstNo;
    cout << "Enter the second number: ";
    cin >> secondNo;
    cout << "Enter the third number: ";
    cin >> thirdNo;

    //logic to determine maximum of the numbers.

    if(firstNo > secondNo && firstNo > thirdNo){
        cout << "First Number: "<<firstNo << " Is the biggest number of the three." << endl;
    }else if(secondNo > firstNo && secondNo > thirdNo){
        cout << "Second Number: "<<secondNo << " Is the biggest number of the three." << endl;

    }else if( thirdNo > firstNo && thirdNo > secondNo){
        cout << "Third Number: "<< thirdNo << " Is the biggest number of the three." << endl;
    }


    return 0;
}

/** QuestionTwo "c"
 *  Receives numbers as input and displays the maximum.
 *
 */


int findLargest(){

    //Declare variables
    int firstNo = 4, secondNo = 10, thirdNo = 6, largest;

    //logic to find the largest of the three numbers using tenary.


	largest=(firstNo > secondNo && firstNo > thirdNo)? firstNo
            :(secondNo>thirdNo)?secondNo
            : thirdNo;

	cout<<"Largest number is "<<largest;


	return 0;
}

/**  QuestionTwo "d"
 *
 *  Finding the roots of quadratic equation.
 *  For a quadratic equation ax2+bx+c = 0 (where a, b and c are coefficients),
 *  it's roots is given by following the formula.
 *
 *  quadratic formula = (-b±√(b²-4ac))/(2a)
 *
 *  The term b2-4ac is known as the discriminant of a quadratic equation. The discriminant tells the nature of the roots.

 *  If discriminant is greater than 0, the roots are real and different.
    If discriminant is equal to 0, the roots are real and equal.
    If discriminant is less than 0, the roots are complex and different.
 *
 */




int rootsOfQuadraticEquation(){

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;



}

/** QuestionTwo "e"
 *  Receives name and scores of 5 subjects of a student as input and displays a well
 *  formatted result sheet with the name of the student, the percentage score in
    each subject, total score and other information you think are necessary.
 *
 */


 int studentGradeResultSheet(){

    //Declare variables.

    string studentName;
    string studentLevel;
    int subjectScores[5];
    int subjectCount = 1;
    int resultSubjectCount = 1;
    int subjectScoresCount = 0;
    int totalScore = 0;

    //Size of array for looping
    int arrSize = sizeof(subjectScores)/sizeof(subjectScores[0]);

    cout << "Enter your full name: ";
    cin >> studentName;

    cout << "Enter your level: ";
    cin >> studentLevel;

    // Looping structure to input subject scores and store in the subject scores array easily
    for(int i = 1; i <= arrSize; ++i){
        cout << "Enter subject " << subjectCount++ << " Score ";

        cin >> subjectScores[subjectScoresCount++];

    }

    // Formatted result sheet

    cout << "RESULT SHEET \n \n";
    cout << "\n";
    cout << studentName << " Level: " << studentLevel << endl;
    cout << "                                               Highest possible Score = 100"<<endl;

    cout << "Subject|    " << "Score|    " << "Percentage"<< endl;

    for(int score : subjectScores ){

        cout << "Subject "<< resultSubjectCount++ << "|    "<< score << "|    " <<score<< "%" << endl;

        totalScore = totalScore + score;

    }

    cout << "Total Score: " << totalScore << "                  Well done. ";



    return 0;

 }





