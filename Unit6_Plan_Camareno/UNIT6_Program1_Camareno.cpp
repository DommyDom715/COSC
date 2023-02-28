#include <stdio.h>
#include <stdlib.h>
#include "accounts.h"

#define SIZE 2010

int maxAccounts = 2010;

//This function prints the accountBalances
void printArray(int array[])
{
    int i; 
    //Loop for iterating through the array
    for (i = 0; <SIZE; i++)
    {
        printf("%d", array[i]);
        if((i+1)%10 == 0)
        {
            printf("\n");
        }
    }
    //This function is used for displaying the output at the standard output.
    //This is used in place of cout 
    printf("\n");
}

//Function for performing the bubble sort operation on the given array 
void bubbleSort(int array[])
{
    int i,j;
    for(i = 0; i < SIZE-1; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            //comparing the jth and the (j+1)th element
            if(array[j]>array[j+1]) //just change the sign to < if you want to sort in descending order
            {
                //performing swapping
                int temp = array[j];
                array[j]= array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main ()
{
    int accountBalances[] = 
    {
        //function call to built in sort 
        sort(accountBalances, accountBalances + maxAccounts);

    }

        void printArray(int array3[], int arrSize)
        {
            //Print sorted account
            cout<< "\nSorted account from built in function \n";
            for (int Value : accountBalances){
                cout<< Value <<"\n";
            }
        }
    }
}