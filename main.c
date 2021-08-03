/*

-- Title: COLLATZ CONJECTURE PROBLEM SIMULATION
-- Author: André Schuhmacher
-- Date: 4th of August 2021 / 23:50

*/

#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int input;

int main(){

    // Get user input
    printf("Please input a valid number: \n");
    scanf("%d", &input);

    // infinite loop
    while (true)
    {
        // check if input is even
        if (isEven(input))
        {
            // check if number is stuck in the 4->2->1 loop
            if (input == 4 || input == 2 || input == 1)
            {
                printf("EVEN (STUCK) - %d\n", input);
                sleep(1);
            }
            else
            {
                printf("EVEN - %d\n", input);
                sleep(1);
            }
            // do math
            input = input/2;  
        }
        // if not even
        else
        {
            // check if number is stuck in the 4->2->1 loop
            if (input == 4 || input == 2 || input == 1)
            {
                printf("ODD (STUCK) - %d\n", input);
                sleep(1);
            }
            else
            {
                printf("ODD - %d\n", input);
                sleep(1);
            }
            // do math
            input = input*3+1;
         
        }
    }
}