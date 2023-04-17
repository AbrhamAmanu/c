#include <stdio.h>

    /*
      CH-230-A
      a1 p3.[c]
      Abrham Amanu Eshetu
      aeshetu@jacobs-university.de
    */

int main()
{
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);

    /* We are missing two important pieces of our code to run it successfully.
     First, we must have included a '#" sign before we write anything at number 1. Without it, the information for our input and output are invalid.
     After that, if we run our program, the program still would not print our desired value. This is because we set both variables to "int".
     If we want to get a float result, we must use float in the calculations we perform.*/

    return 0;
}
