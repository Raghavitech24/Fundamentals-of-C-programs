#include<stdio.h>
int main()
{
    int p,n,r;
    float SI;
    printf("Enter the p value:");
    scanf("%d",&p);
    printf("Enter the n value:");
    scanf("%d",&n);
    printf("Enter the r value:");
    scanf("%d",&r);
    SI=p*n*r/100;
    printf("%f",SI);
    return 0;
}