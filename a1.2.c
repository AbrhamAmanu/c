#include <stdio.h>
#include <stdlib.h>

    /*
      CH-230-A
      a1 p2.[c]
      Abrham Amanu Eshetu
      aeshetu@jacobs-university.de
    */

int main()
{
    int result; /* The result of our calculation */
     result = (2 + 7) * 9 / 3;
     printf("The result is %d\n", result);

     /*The problem here is that we are missing one more key word to finish off the process.
       If we do not add ', result' after we end the line (\n"), our output will be a random number every time we run our program.
       By adding ', result' we can see that the program prints '27', which is the correct answer.*/

    return 0;
}
