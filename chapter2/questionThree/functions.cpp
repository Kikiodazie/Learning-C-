#include <iostream>
#include <cmath>
#include <string>

using namespace std;






 /** QuestionThree""
 *  Write a well documented C++ program to illustrate how each operator in C++ works,
 *  using values supplied and displaying results of your computation.
 */




//demonstrates the first five arithmetic operators in C++

 void arithmeticOperators() {

    int op1=3,op2=4;
    float op3=10.1,op4=5.4;
    cout<<"Operands are op1 = "<<op1<<" op2 = "<<op2;
    cout<<" op3 = "<<op3<<" op4 = "<<op4;
    cout<<endl;
    cout<<"op1 + op2 = "<<op1+op2<<endl;
    cout<<"op1 - op2 = "<<op1-op2<<endl;
    cout<<"op3 * op4 = "<<op3*op4<<endl;
    cout<<"op3 / op4 = "<<op3/op4<<endl;
    cout<<"op2 % op1 = "<<op2%op1<<endl;

 }


 //shows the usage of logical operators
 void logicalOperators(){


    int a=10, b=8,c=12,d=14;

    if(!(a==0))
     cout<<"a is not zero"<<endl;
    else
        cout<<"a is zero"<<endl;

    if((a>b)&&(c<d))
        cout<<"Logical AND is true"<<endl;
    else
       cout<<"Logical AND is false"<<endl;

    if((a<c)||(b<d))
     cout<<"Logical OR is true"<<endl;
    else
     cout<<"Logical OR is false"<<endl;


 }



 //shows the usage of relational operators
 void relationalOperators(){


  int a=10, b=8,c=12,d=14;

  if(a==b)
     cout<<"a is equal to b"<<endl;
  else
    cout<<"a is not equal to b"<<endl;

  if(c!=d)
     cout<<"c is not equal to d"<<endl;
  else
    cout<<"c is equal to d"<<endl;

  if((a+b) <= (c+d))
     cout<<" (a+b) less than/equal to (c+d)"<<endl; if((a-b)>=(d-c))
     cout<<"(a-b) greater than/equal to (d-c)"<<endl;



 }


 // demonstrates the usage Bitwise Operators.

 void bitwiseOperators(){

  int a=8,b=4,c;

  c = a&b;
  cout<<"Result of & : "<<c<<endl;
  c = a|b;
  cout<<"Result of | : "<<c<<endl;
  c = a^b;
  cout<<"Result of ^ : "<<c<<endl;

  c = a<<2;
  cout<<"Result of << by 2 bits : "<<c<<endl; c = b>>2;
  cout<<"Result of >> by 2 bits : "<<c<<endl;

  c = ~3;
  cout<<"Result of ~ : "<<c<<endl;


 }



 // demonstrates the usage of Assignment Operators.

 void assignmentOperators(){

  int x,y;

  cout<<"Enter input variable y: "; cin>>y;
  x = y;
  cout<<"\nValue of x = "<<x<<endl;

  int a = 3,b = 5,c = 8;
  a += b;
  c -= b;
  cout<<"\na += b: "<<a;
  cout<<"\nc -= b: "<<c;

  a *= b;
  b /= c;
  cout<<"\na *= b: "<<a;
  cout<<"\nb /= c: "<<b;

 }




 //usage of sizeof, Comma and Conditional Operator.
 void otherOperators(){


  int x,y;

  x = (y=3,y+4);
  cout<<"Value of x = "<<x;

  y = (x<5)?0:1;
  if(y == 0)
    cout<<"\nVariable x is less than 5"<<endl;
  else
    cout<<"\nVariable x is greater than 5"<<endl;

    cout<<"sizeof(x): "<<sizeof(x)<<"\t"<<"sizeof(y): "<<sizeof(y);

}



