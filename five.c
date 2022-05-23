/*Try to find the maximum length of a dynamically allocated array in your setup.
	int n = 1000000000;
	int *a = (int*) malloc(n*sizeof(int));

In the above code, change the value of n, and see what values the allocation fails. Remember, if the allocation fails, you will get a null pointer.
*/

int main()
{

    int n = 10000000000;
    int *a = (int*) malloc(n*sizeof(int));
    printf("%d",*a);

    return 0;
}
