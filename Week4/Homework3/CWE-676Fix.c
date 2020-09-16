#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//functions used
char* create_password(char* string);

int main()
{
    char str [100];
    printf("\nPlease enter an new password up to 8 characters: ");
	scanf("%s", str);
	printf(create_password(str));
}

char* create_password(char* string)
{
    if (strlen(string) > 3) 
    {
        return "The password is too long!";
    }
    else
    {
        char buf[8];
        return printf("\nYour new password is: "), strcpy(buf, string);
    }
}