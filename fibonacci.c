#include<stdio.h>    

static int n1=0,n2=1,n3;

void Fibonacci(int n)
{        
    if(n>0)
    {    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         Fibonacci(n-1);    
    }    
}    
int main()
{    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    Fibonacci(n-2);
    printf("\n");
    return 0;
 }    