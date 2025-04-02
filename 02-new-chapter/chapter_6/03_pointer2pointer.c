#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("The value of i is %d", i)


    return 0
}