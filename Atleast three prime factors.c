/*
The program must accept N integers as the input. 
The program must print the integers which have at least three prime integers as factors in the reverse order as the output. 
If there is no integer with at least three prime factors then the program must print -1 as the output. 

Boundary Condition(s): 1 <= N <= 10^4 

Input Format:  The first line contains the integer N. The second line contains N integers separated by space(s). 
Output Format: The first line contains the integers which have at least three prime integers as factors in the reverse order. 

Example Input/Output 1: 

Input:  6 
        30 20 16 70 98 210 
Output: 210 70 30 

Explanation: For integer 30, the prime factors of 30 are 2, 3 and 5. So there are 3 prime factors. 
For integer 20, the prime factors of 20 are 2 and 5. So there are 2 prime factors. 
For integer 16, the prime factor of 16 is 2. So there is 1 prime factor. 
For integer 70, the prime factors of 70 are 2, 5 and 7. So there are 3 prime factors. 
For integer 98, the prime factors of 98 are 2 and 7. So there are 2 prime factors. For integer 210, the prime factors of 210 are 2, 3, 5 and 7. So there are 4 prime factors. 
The integers with at least 3 prime factors are 30, 70 and 210 which are printed in reverse order. 
Hence the output is 210 70 30 

Example Input/Output 2: 

Input:   3 
         2 12 4 
Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int prime(int n)
{
    int c=0;
    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            int f1=1;
            for(int j=2; j<i; j++)
            {
                if(i%j==0)
                {
                    f1=0; 
                    break;
                }
            }
            if(f1)
            {
                c++;
            }
        }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], f=0;
    for(int i=0; i<n; i++)  scanf("%d ", &arr[i]);
    for(int i=n - 1; i>=0; i--)
    {
        if(prime(arr[i])>=3)
        {
            printf("%d ", arr[i]);
            f=1;
        }
    }
    if(f==0)    printf("-1");
}
