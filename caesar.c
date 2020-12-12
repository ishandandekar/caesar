#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int k=get_int("Enter the key for encryption \n");
    string s = get_string("Input the string: ");
    for (int i=0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]+k);
    }
    printf("\n");
}    
