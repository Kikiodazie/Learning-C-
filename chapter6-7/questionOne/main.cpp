#include <iostream>

using namespace std;

int main()
{

    cout << "WELCOME TO THE SOLUTION FOR QUESTION 1 OF PRACTICAL EXERCISES FOR CHAPTER 6&7" << endl;
    cout<< " "<< endl;

    int arithmeticOperationWIthUserDefinedFunction();
    int swapping();
    int fibonaccciSeriesUsingRecursion();
    int sumOfNaturalNumbersUsingRecursion();
    int reverseDigits();

    cout<< "Add, subtract, multiply and divide two integers using user defined functions"<< endl;
    arithmeticOperationWIthUserDefinedFunction();
    cout<< " "<< endl;

    cout<< " Swap two integers using call by value and call by reference"<< endl;
    swapping();
    cout<< " "<< endl;

    cout<< "Calculate sum of first 20 natural numbers using recursive function. "<< endl;
    fibonaccciSeriesUsingRecursion();
    cout<< " "<< endl;

    cout<< "Generate Fibonacci series using recursive function. "<< endl;
    sumOfNaturalNumbersUsingRecursion();
    cout<< " "<< endl;

    cout<< "Read an integer number and print the reverse of that number using recursion. "<< endl;
//    reverseDigits(123);
    cout<< " "<< endl;

    return 0;
}
