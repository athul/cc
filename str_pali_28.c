#include <stdio.h>
#include <string.h>
void main()
{
    int i,j,len;
    char str[50];
    printf("Enter the string:\n");
    gets(str);
    len = strlen(str);
    j=len-1;
    for(i=0;i<(len)/2;i++,j--){
        if (str[i]!=str[j])
            printf("\nNot Palindrome!!\n");
        else
        {
           printf("\nPalindrome!!!...........\n"); /* code */
        }
            
        break;   
    }
        
}