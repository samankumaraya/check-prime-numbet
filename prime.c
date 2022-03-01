#include <stdio.h>

int main()
{
    int n,i,m=0;
    int num=0;
    printf("Enter the number that you want to check :");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0){
            printf("Number is not prime");
            num=1;
            break;
        }
    }
    if(num==0);
    printf("Number is prime");

    return 0;
}
