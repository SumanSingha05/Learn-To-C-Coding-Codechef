/*Give a program to print 1st, 4th and 6th character of a string
Find out the logical error and solve it*/
#include <stdio.h>
#include<string.h>
int main() 
    {
    char s[100];
    scanf("%s", &s);
    if (strlen(s) >= 7) 
    {
        printf("%c%c%c\n", s[0], s[3], s[5]);
    } 
        else
    {
        printf("Input string is too short\n");
    }
    
}
