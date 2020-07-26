#include <iostream>
#include <cmath>
#include <string>

using namespace std;


/**
 * Formula for voltage is V = IR
 *
 *   V	=	voltage
 *   I	=	current
 *   R	=	resistance
 */

double voltage(){

    //declare variables
    double voltage,current,resistance;

    //take inputs from the user
    cout << "Enter the value of 'current': ";
    cin >> current;

    cout << "Enter the value of 'resistance': ";
    cin >> resistance;


    //print all values
    cout << "Current: " << current << "  resistance: " << resistance << endl;

    //Compute the formula

    voltage = current * resistance;

    cout << "The value of VOLTAGE: " << voltage << endl;

    return 0;


}


/**
 * Formula for voltage is I = V/R
 *
 *   I	=	current
     V	=	voltage
 *   R	=	resistance
 */

double current(){

    //declare variables
    double current,voltage,resistance;

    //take inputs from the user
    cout << "Enter the value of 'voltage': ";
    cin >> voltage;

    cout << "Enter the value of 'resistance': ";
    cin >> resistance;


    //print all values
    cout << "Voltage: " << voltage << "  resistance: " << resistance << endl;

    //Compute the formula

    current = voltage / resistance;

    cout << "The value of CURRENT: " << current << endl;

    return 0;


}




/** Formula for Capacitance is C = q/V
 *
 *  q	=	charge
    C	=	capacitance
    V	=	voltage
 *
 */


double capacitance(){

    //declare variables
    double capacitance,voltage,charge;

    //take inputs from the user
    cout << "Enter the value of 'voltage': ";
    cin >> voltage;

    cout << "Enter the value of 'charge': ";
    cin >> charge;


    //print all values
    cout << "Voltage: " << voltage << "  charge: " << charge << endl;

    //Compute the formula

    capacitance = charge / voltage;

    cout << "The value of CAPACITANCE: " << capacitance << endl;

    return 0;


}






/**
 * Formula for voltage is R = V/I
 *   R	=	resistance
 *   I	=	current
     V	=	voltage
 */

double resistance(){

    //declare variables
    double resistance,voltage,current;

    //take inputs from the user
    cout << "Enter the value of 'voltage': ";
    cin >> voltage;

    cout << "Enter the value of 'current': ";
    cin >> current;


    //print all values
    cout << "Voltage: " << voltage << "  current: " << current << endl;

    //Compute the formula

    resistance = voltage / current;

    cout << "The value of Resistance: " << resistance << endl;

    return 0;

}





/**
 * Formula for force is F = MA
 *   F	=   force
 *   M	=	mass
     A	=	acceleration
 */



double force(){

    //declare variables
    double force,mass,acceleration;

    //take inputs from the user
    cout << "Enter the value of 'mass': ";
    cin >> mass;

    cout << "Enter the value of 'acceleration': ";
    cin >> acceleration;


    //print all values
    cout << "Mass: " << mass << "  acceleration: " << acceleration << endl;

    //Compute the formula

    force = mass / acceleration;

    cout << "The value of Resistance: " << resistance << endl;

    return 0;

}





