/*
Two soccer teams A and B play a series of matches over a period of time. In a match, the winning team gets 3 points. If the match ends in a tie (draw) with both teams scoring same goals, then both the teams get one point each. The losing team does not get any point. The program must accept the goals scored by both team A and B in certain number of matches and print the cumulative scores of team A and B separated by a space. 

Input Format:  First line will contain the goals scored by team A, with the goal values separated by a space. 
               Second line will contain the goals scored by team B, with the goal values separated by a space. 
Output Format: First line will contain the scores of team A and B separated by a space. 

Boundary Conditions: The length of the input with the space separated goals is from 3 to 100. 

Example Input/Output 1: 

Input: 3 5 1 3 2 0 
Output: 7 1 

Explanation: Team A drew the first match and hence both team A and B got one point each. Team A won both matches two and three and hence got additional 6 points. So the final score of team A is 7 and team B is 1.


Solution:
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t[101], t1[101], i=0, j=0, k, s=0, s1=0;
    while(scanf("%d", &t[i])==1) i++;
    
    for(j=0, k=i/2; j<i/2, k<i; j++, k++)
    {
        if(t[j]>t[k])
            s+=3;
        else if(t[j]==t[k])
        {
            s+=1;
            s1+=1;
        }
        else
            s1+=3;
    }
    printf("%d %d", s, s1);
}
