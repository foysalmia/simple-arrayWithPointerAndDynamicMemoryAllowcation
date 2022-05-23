/*Do the same task, but return by pointer. The signature will be int* makeCopy(int n, int input[]). Hint: Use dynamic allocation.
*/

#include<stdio.h>
#include<stdlib.h>

int* makeCopy(int n,int a[])
{
    int*output = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        output[i] = a[i];
    }
    return output;
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int *out;

    out = makeCopy(n,a);

    for(int i=0; i<n; i++)
    {

        printf("%d ",out[i]);
    }


    return 0;
}
