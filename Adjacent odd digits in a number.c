#include<stdio.h>
#include<stdlib.h>

int main()
{ 
    long int a;
    scanf("%ld",&a);
    int b[1000];
    int c=0;
    while(a>0)
    {
        b[c]=a%10;
        a=a/10;
        c=c+1;
    }
    for(int i=c-1;i>=0;i--)
    {
        if(i==0)
        {
            if(b[i+1]%2!=0)
            {
                printf("%d",b[i]);
            }
        }
        else if(i==c-1)
        {
            if(b[c-2]%2!=0)
            printf("%d",b[c-1]);
        }
        else
        {
            if(b[i-1]%2!=0 && b[i+1]%2!=0)
            {
                printf("%d",b[i]);
            }
        }
    }

}
