/*Write a function that will take as input an array and return an array via parameter. The signature will be void makeCopy(int n, int input[], int output[] ). Here the output array will store your return value.
*/

#include<stdio.h>
#include<stdlib.h>

void makeCopy(int n,int a[],int output[]){

    for(int i=0;i<n;i++){
        output[i] = a[i];
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int out[n];

    makeCopy(n,a,out);

    for(int i=0;i<n;i++){

        printf("%d ",out[i]);
    }


    return 0;
}
