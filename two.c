/*To dynamically allocate an array of n elements and int type, we use the following syntax.

int *a = (int*) malloc(n*sizeof(int));

	How to declare an array of double type and 5 elements. How much space does it take?
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 5;
    double *a = (double*)malloc(n*sizeof(double));

    printf("%d",sizeof(a)*n);

return 0;
}

