/* Calculate factorial using while loop */

#include<stdio.h>
int main()
{
    int a,f,i;
    printf("Enter a number: ");
    scanf("%d",&a);
    f=1;
    i=1;
    while(i<=a)
    {
        f = f * i;
        i++;
    }
    printf("Factorial: %d",f);
    return 0; 
}