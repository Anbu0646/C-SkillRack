/*
A string S is passed as the input. The program must print the number of articles (a, an and the) in S. The string S passed as the input NEED NOT be correct grammatically. 

Input Format:  The first line will contain S 
Output Format: The first line will contain the count of articles in S. 

Boundary Conditions: The length of the string S will be from 3 to 1000. 
                     Each word in S will not be more than 100 characters. 

Example Input/Output 1: 

Input:  I went to a movie yesterday along with an old man. 
Output: 2
 
Example Input/Output 2: 

Input:  In 1885 it was banished from the shelves of the Concord Public Library, an act that attracted a lot of publicity and discussion in the press. It is still frequently in the news, as various schools and school systems across the country either ban it from or restore it to their classrooms. The texts and illustrations below attempt to capture both the novel's achievement and some aspects of its controversiality.
Output: 8


Solution:
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001][1001];
    int c=0, i=0;
    while(scanf("%s", &s[i])>0) i++;
    for(int j=0; j<i; j++){
        if(strcmp(s[j], "a")==0 || strcmp(s[j], "an")==0 || strcmp(s[j], "the")==0 || /*strcmp(s[j], "A")==0 || strcmp(s[j], "AN")==0 || strcmp(s[j], "THE")==0 || strcmp(s[j], "An")==0 || strcmp(s[j], "The")==0*/ strcmp(s[j], "a,")==0 || strcmp(s[j], "an,")==0 || strcmp(s[j], "the,")==0 || strcmp(s[j], "a.")==0 || strcmp(s[j], "an.")==0 || strcmp(s[j], "the.")==0 )
            c++;
    }
    printf("%d", c);
}
