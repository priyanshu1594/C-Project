#include<stdio.h>
int main()
{
    int a;
    int count = 0;
    printf("Enter the number in the A : ");
    scanf("%d",&a);
    if(a<0)
    {
        a = -a;
    }
    do
    {
        count++;
        a /= 10;
    } while (a != 0);
    printf("The total number of the digits is : %d\n",count);
    
}