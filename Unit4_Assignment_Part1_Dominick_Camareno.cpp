#include <iostream>
#include <math.h>
using namespace std;
/*Dominick Camareno, COSC-1436, Visual Studio, 
This program takes a value from the user 
and multiplies and divides it by the same input*/
int main(){
    

    int input;
    int counter = 0;
    
    
    cout<<"Enter number (To stop enter -1): "; //int value from user
    cin>> input;
    
    
    while(input != -1) //loop executes until input is equal to -1
    {
        double m = pow(input, input); //number entered times iteself
        cout <<"The number entered times itself: " <<m << endl;

        double n = (input / input); //number entered times itself
        cout <<"The number entered divided by itself : " << n << endl;

        double o = (input + 3)/5;
        cout << o << endl;

        double p = ((input + 3)/5) + ((input + 7)/2);
        cout<< p << endl;

        cout<<"\nEnter number (To stop enter -1): ";
        cin>> input;

        counter += 1; //count number of inputs
    }
    cout << "\nTotal number of inputs entered: " << counter; //displays total inputs entered

return 0;
}