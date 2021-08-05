/*
-- Title: COLLATZ CONJECTURE PROBLEM SIMULATION
-- Author: André Schuhmacher
-- Date: 4th of August 2021 / 23:50
*/

#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>

bool isEven(int num) {

  if (num % 2 == 0) {

    return true;

  } else {

    return false;

  }

}

int input;
int steps;

int main() {

  // Get user input
  printf("Please input a valid number: \n");
  scanf("%d", & input);

  // infinite loop
  while (true) {
    // check if input is even
    if (isEven(input)) {
        steps++;
      // check if number is stuck in the 4->2->1 loop
      if (input == 1) {

        printf("ODD - %d\n", input);
        sleep(1);
        printf("Finished with: %d steps.\n", steps);
        return 0;

      } else {

        printf("EVEN - %d\n", input);
        sleep(1);

      }
      // do math
      input/= 2;
    }
    // if not even
    else {
        steps++;
      // check if number is stuck in the 4->2->1 loop
      if (input == 1) {

        printf("ODD - %d\n", input);
        sleep(1);
        printf("Finished with: %d steps.\n", steps);
        return 0;

      } else {
          
        printf("ODD - %d\n", input);

        sleep(1);

      }
      // do math
      input = (input*3)+1;

    }
  }
}
