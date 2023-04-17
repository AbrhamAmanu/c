#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
CH-230-A
a8 p8.[c]
Abrham Amanu Eshetu
aeshetu@jacobs-university.de
*/
int main()
{
    FILE *ptr;
    char arr[50];
    scanf("%s", arr);
    char chr;
    int bool=0;
    int num= 0;

    ptr= fopen(arr, "r");
    if(ptr==NULL){
        printf("Cannot open file\n");
        exit(1);
    }
    chr= fgetc(ptr);//gets character from file
    while(chr != EOF){
        if(chr== ' ' || chr== ',' || chr== '?' || chr== '!' || chr=='.' || chr=='\t' || chr=='\r' || chr=='\n'){
            bool= 0;
        }
        else if(bool==0){
            bool= 1;
            num = num + 1;
        }
        chr= fgetc(ptr);
    }
    printf("The file contains %d words.\n", num);
    fclose(ptr);//closing file
    return 0;
}
