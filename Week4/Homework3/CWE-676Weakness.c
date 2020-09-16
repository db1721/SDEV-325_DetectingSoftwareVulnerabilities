#include <stdio.h>
#include <string.h>

//functions used
char* create_password(char* string);

int main()
{
    char str [100];
    printf("\nPlease enter an new password up to 8 characters: ");
	scanf("%s", str);
	printf("\nYour new password is: ");
	printf(create_password(str));
}

char* create_password(char* string)
{
    char buf[8];
    return strcpy(buf, string);
}
