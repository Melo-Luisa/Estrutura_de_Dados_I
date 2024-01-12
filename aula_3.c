#include <stdio.h>

int main(){
    int a;
    printf("sizeof(a) = %1d bytes\n", sizeof(a));
    printf("sizeof(int) = %1d bytes\n", sizeof(int));
    printf("sizeof(short) = %1d bytes\n", sizeof(short));
    printf("sizeof(long) = %1d bytes\n", sizeof(long));
    printf("sizeof(float) = %1d bytes\n", sizeof(float));
    printf("sizeof(double) = %1d bytes\n\n", sizeof(double));

    printf("sizeof(void *) = %1d bytes\n", sizeof(void *));
    printf("sizeof(int *) = %1d bytes\n", sizeof(int *));
    printf("sizeof(int **) = %1d bytes\n", sizeof(int **));
    printf("sizeof(float *) = %1d bytes\n", sizeof(float *));

}