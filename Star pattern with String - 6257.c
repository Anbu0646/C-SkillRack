/*
The program must accept a string S as the input. The program must print the pattern as shown in the Example Input/Output section. 

Boundary Condition: 3 <= Length of S <= 101 

Input Format:  The first line contains the string S. 
Output Format: The list of lines contain the pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  omega 
Output: a*o*a 
        *gmg* 
        omega 
        *mgm* 
        o*a*o 

Example Input/Output 2: 

Input: killer 
Output: r**k*r 
        *e*ie* 
        **ll** 
        killer 
        *i*ei* 
        k**r*k


Solution:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int len,k=0,l;
char s[102];
scanf("%s%n", s, &len);
l=len-1;
for(int i=0; i<len; i++, printf("\n){
    for(int j=0; j<len; j++){
        if( j==(len/2) )
		printf("%c",s[k]);
        else if(j==i || j==len-i-1)
 		printf("%c",s[l]);
        else 
            printf("*");
    }
    if(i+1==len/2){
		printf("%s\n",s);
		i+=2;
		k+=2;
		l-=2;
	}
    else{ 
	i++;
	k++;
	l--;
	}
}
}
