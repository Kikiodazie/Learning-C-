#include <iostream>

using namespace std;




/** Question "a"
 *
 * Print the sum of digits of a number using for loop.
 *
 */

int sumOfDigits(){

    //Declare variables
    int val, num, sum = 0;

    cout << "Enter the number : ";
    cin >> val;
    num = val;

    //using for loop

    for(int i = 0; i < 20; i++){
    // I used < 20 for the loop to go 20 times, because hypothetically speaking users will rarely input up to 20 digit numbers
        sum = sum + num % 10;
        num = num / 10;
    }

    cout << "The sum of the digits of "
         << val << " is " << sum;

    return 0;
}



/** Question "b"
 *
 *  Check whether a number is a Palindrome or not.
 *
 *  A number is a palindrome if it reads the same forwards and
    backwards. For example, the number 1233321 is a palindrome.
 */



int isPalindromeOrNot(){

    int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;

}



/**  Question "c"
 *
 * Generate Fibonacci series.
 *
 */


int fibonaccciSeries(){

 int n1=0,n2=1,n3,i,number;

 cout<<"Enter the number of elements: ";
 cin>>number;
 cout<<n1<<" "<<n2<<" "; //printing 0 and 1
 for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed
 {
  n3=n1+n2;
  cout<<n3<<" ";
  n1=n2;
  n2=n3;
  }
   return 0;

}



/** Question "d"
 *
 * Display each of the following patterns.
 *
 */


 int patternI(){


    // Number of rows the display has.
    int rows = 5;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
 }


 int patternII(){

     // initializing starting number
    int num = 1;
    int rows = 5;

    // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < rows; i++) {

        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++)
            cout << num << " ";

        // Incrementing number at each column
        num = num + 1;

        // Ending line after each row
        cout << endl;
    }

    return 0;

 }

 int patternIII(){


  int i,j,k;
  int n=5;

  for(i=1;i<=n;i++)
     {
        for(j=1;j<=n-i;j++)
        {
           cout<<" ";
        }
        for(k=1;k<=i;k++)
         {
             cout<<((char)(k+64));
         }

         cout<<endl;
     }

  return 0;

 }




 int patternIV(){

    int rows = 5;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }


    return 0;
 }
