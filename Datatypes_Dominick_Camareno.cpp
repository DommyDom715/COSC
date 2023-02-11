/*Dominick Camareno
 COSC Programming Fundamentals 1
 Visual Studio Code
 This program simply calculates the number of pennies, 
 and then calculates the number of dollars, quarters, dimes, nickels, 
 and pennies so one can calculate what they will recieve when traded at a bank */
#include <iostream>
using namespace std;

int main ()
{
    //declare variables
    int dollar_amt;
    int dollar_rem;

    int input;

    //accept input
    cout<<"Please, enter the pennies to be converted ";
    cin>>input;

    //display output
    dollar_amt = input/100;
    dollar_rem = input%100;

    
    int quarter_amt = dollar_rem/25;
    int quarter_rem = dollar_rem%25;

    int dime_amt = quarter_rem/10;
    int dime_rem = quarter_rem%10;

    int nickel_amt = dime_rem/5;
    int nickel_rem = dime_rem % 5;

    int penny_amt = nickel_rem;
    
    //display output
    cout<<"The dollar amount is = "<<dollar_amt<<endl;
    cout<<"The quarter amount is = "<<quarter_amt<<endl;
    cout<<"The dime amount is = "<<dime_amt<<endl;
    cout<<"The nickel amount is = "<<nickel_amt<<endl;
    cout<<"The penny amount is = "<<penny_amt<<endl;
      
    return 0;
}
