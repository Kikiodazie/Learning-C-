#include <iostream>

using namespace std;



/** Question "a"
 *
 *  Add, subtract, multiply and divide two integers using user defined
 *  type function with return type.
 *
 */

 int a,b,m,su,s,d;
 int res=0;

    int sum(int,int);
    int sub(int,int);
    int mul(int,int);
    int divison(int,int);

int arithmeticOperationWIthUserDefinedFunction(){


	//Enter numbers
	cout<<"\nEnter 1st number :: ";
    cin>>a;
    cout<<"\nEnter 2nd number :: ";
    cin>>b;


    s=sum(a,b);
    su=sub(a,b);
    m=mul(a,b);
    d= divison(a,b);

    cout<<"\nAddition of two Numbers [ "<<a<<" + "<<b<<" ] = "<<s<<"\n";
    cout<<"\nSubtraction of two Numbers [ "<<a<<" - "<<b<<" ] = "<<su<<"\n";
    cout<<"\nMultiplication of two Numbers [ "<<a<<" * "<<b<<" ] = "<<m<<"\n";
    cout<<"\nDivision of two Numbers [ "<<a<<" / "<<b<<" ] = "<<d<<"\n";

    return 0;
}


//USER DEFINED FUNCTIONS FOR ARITHMETIC OPERATIONS


//Addition

int sum(int a,int b)
{
    res=a+b;
    return(res);
}

int sub(int a,int b)
{
    res=a-b;
    return(res);
}

int mul(int a,int b)
{
    res=a*b;
    return(res);
}

int divison(int a, int b){

    res = a/b;
    return(res);
}



/** Question "b"
 *
 * Swap two integers using call by value and call by reference
 * methods of passing arguments to a function.
 *
 */


int swapping(){

   void swapByReference(int &x, int &y);
   void swapByValues(int x, int y);

    // local variable declaration:
   int a = 100;
   int b = 200;
   int type;
   cout<< "Enter 1 to swap by reference and 2 by values";
   cin >> type;

   if(type == 1){

    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    /* calling a function to swap the values using variable reference.*/
    swapByReference(a, b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;
   }else{


    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    /* calling a function to swap the values using variable reference.*/
    swapByValues(a, b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;


   }

   return 0;

}




void swapByReference(int &x, int &y) {
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   return;
}

void swapByValues(int x, int y) {
   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   return;
}





/** Question "c"
 *
 * Calculate sum of first 20 natural numbers using recursive function.
 *
 */



int sumOfNaturalNumbersUsingRecursion(){
    int recurSum(int);
    int n = 20;
    cout << recurSum(n);
    return 0;
}

//Recursive function
int recurSum(int n) {
    if (n <= 1)
        return n;
    return n + recurSum(n - 1);
}




/** Question "d"
 *
 * Generate Fibonacci series using recursive function.
 *
 */



int fibonaccciSeriesUsingRecursion(){

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



/** Question "e"
 *
 * Read an integer number and print the reverse of that number using
    recursion.
 */



int reverseDigits(int) {
    static int rev_num = 0;
    static int base_pos = 1;
    int num;

    cout << "Enter number: ";
    cin >> num;

    if(num > 0) {
        reverseDigits(num/10);
        rev_num += (num%10)*base_pos;
        base_pos *= 10;
    }

    cout << "Reverse of no. is "
         << rev_num;

    return 0;
}



