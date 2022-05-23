/*
The following code finds the product of all elements in an array. Rewrite it using pointers.
int a[n];
int prod=1;
for (int i=0; i<n; i++) {
    prod = prod * a[i];
}
printf("%d", prod);
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of Array : ");
    scanf("%d",&n);

    int *prod;
    *prod = 1;


    int*a = (int*)calloc(n,sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(int i=0;i<n;i++){
         *prod = *prod * a[i];
    }
    printf("%d",*prod);




return 0;
}
