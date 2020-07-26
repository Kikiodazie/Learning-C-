#include <iostream>
#include <cmath>

using namespace std;

/** questionOne "a"
 *  To Compute this "V = U + at" and display result
 */

double questionOneA(){
    //declare variables
    double V,U,a,t;

    //take inputs from the user
    cout << "Enter the value of 'U': ";
    cin >> U;

    cout << "Enter the value of 'a': ";
    cin >> a;

    cout << "Enter the value of 't': ";
    cin >> t;

    //print all values
    cout << "U: " << U << "  a: " << a << "  t: " << t << endl;

    //Compute the formula

    V = U + a*t;

    cout << "The value of V: " << V << endl;

    return 0;
}



/** questionOne "b"
 *  To Compute this "S = ut + 1/2(at2)" and display result
 */

double questionOneB(){
    //declare variables
    double S,u,a,t;

    //take inputs from the user
    cout << "Enter the value of 'u': ";
    cin >> u;

    cout << "Enter the value of 'a': ";
    cin >> a;

    cout << "Enter the value of 't': ";
    cin >> t;

    //print all values
    cout << "u: " << u << "  a: " << a << "  t: " << t << endl;

    //Compute the formula
    double tSquared = t*t;

    S = u*t + 0.5*a*tSquared;

    cout << "The value of S: " << S << endl;

    return 0;
}



/** questionOne "c"
 *  To Compute this "S = ut + 1/2(at2)" and display result
 */

double questionOneC(){
    //declare variables
    double T,b,a,c;

    //take inputs from the user
    cout << "Enter the value of 'b': ";
    cin >> b;

    cout << "Enter the value of 'a': ";
    cin >> a;

    cout << "Enter the value of 'c': ";
    cin >> c;

    //print all values
    cout << "b: " << b << "  a: " << a << "  c: " << c << endl;

    //Compute the formula
    double squareRootOfB = sqrt(b);


    T = (2 * a) + squareRootOfB + (9 * c);

    cout << "The value of T: " << T << endl;

    return 0;
}



/** questionOne "d"
 *  To Compute "Volume of a CUBE" and display result
 */

double questionOneD(){

    //declare variables
    double volume, width, depth, height;
    int choiceInput;

    cout << "Enter 1 if you want to enter in the values yourself and 2 to compute with a supplied 'pre-existing' value.";

    cin >> choiceInput;


    if(choiceInput == 1){

        //take inputs from the user
    cout << "Enter the value of 'width': ";
    cin >> width;

    cout << "Enter the value of 'depth': ";
    cin >> depth;

    cout << "Enter the value of 'height': ";
    cin >> height;

    //print all values
    cout << "Width: " << width << "  depth: " << depth << "  height: " << height << endl;

    //Compute the formula

    volume = (width * height * depth);

    cout << "The volume of cube: " << volume << endl;



    }else if(choiceInput == 2){
        //Supplying values depth=10, width = 15, height = 20.

        depth = 10;
        width = 15;
        height = 20;

        //Compute the formula
        volume = (width * height * depth);

        cout << "The volume of cube: " << volume << endl;


    }else{
        cout << "Wrong input....Start again";

        questionOneD();
    }

    return 0;
}

/** questionOne "e"
 *  To Compute "Compound Interest" and display result
 */


float questionOneE(){
    //declare variables
    float principle,rate,time,compoundInterest;

	// Take inputs from user
	cout<<"Enter Principle, Rate and Time:\n";
	cin>>principle>>rate>>time;

	compoundInterest=principle*pow((1+rate/100),time);

	cout<<"\nCompound Interest = "<<compoundInterest;

	return 0;

}
