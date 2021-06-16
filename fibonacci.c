#include <stdio.h>
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
 
int main ()
{
    int n=0;
    printf("Enter the number of terms you want in the fibonacci series: ");
    scanf("%d", &n);
    printf("\nThe factorial is: %d", fib(n));
    printf("\n");
    return 0;
}