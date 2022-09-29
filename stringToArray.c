#include <stdio.h>

int main(){

    printf("convert string to array\n");
    printf("strings in c are basically an array of chars\n");


    char name[] = "alex";
    printf("array index 2 of %s is %c",name, name[2]);
    return 0;
}