#include<stdio.h>
int main()
{
    int i,x,s=0;
    printf("enter the value");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        s=x*i;
        printf("\n %d*%d=%d",i,x,s);
    }
    
}
    
    
