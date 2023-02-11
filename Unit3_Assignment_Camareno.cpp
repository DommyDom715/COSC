#include <iostream>
using namespace std;
/*Dominick Camareno
COSC Programming Fundamentals 1
Visual Studio Code */

int main(){
    
    //Variable declaration
    double number1, number2;
    int number3, number4;

    double addition,subtraction,multiplication,division;

    int modulus;

    //Accept input from user
    cout<<"Enter number 1: ";
    cin>>number1;
    cout<<endl;

    cout<<"Enter number 2: ";
    cin>>number2;
    cout<<endl;

    cout<<"Enter number 3: ";
    cin>>number3;
    cout<<endl;

    cout<<"Enter number 4: ";
    cin>>number4;
    cout<<endl;

    //Process
    //Add the numbers
    addition = number1 + number2;
    cout<<"The addition of the number 1 and number 2 is = "<<addition<<endl;

    //Subtract the numbers
    subtraction = number1 - number2;
    cout<<"The diffrence between the number 1 and number 2 is = "<<subtraction<<endl;

    //Multiply the numbers
    multiplication = number1 * number2;
    cout<<"The product of number 1 and number 2 is = "<<multiplication<<endl;

    //Divide the numbers
    division = number1 / number2;
    cout<<"The quotient of number 1 and number 2 is = "<<division<<endl;

    //The Modulus divide of the numbers
    modulus = number3 % number4;
    cout<<"The moudulo of number 1 and number 2 is = "<<modulus<<endl;


    return 0;
}