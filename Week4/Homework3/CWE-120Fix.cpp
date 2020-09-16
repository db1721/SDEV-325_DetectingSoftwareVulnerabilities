#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{	
    //Previously writeen secret data that users should not have access to
    char storeSecretData [45] = "This secret needs to be kept safe!";
    
    //New string that a user needs to write characters to
	char str [4];
	printf("\nPlease enter up to 3 characters: ");
	scanf("%s", str);
	
	if (strlen(str) > 3) 
    {
        printf("Can not enter more than 3 characters\n");
    } 
    else 
    {
    	printf("\nYou have entered: %s\n", str);
    	
        //This shows that the secret data is safe
		printf("\nThe secret data is: %s\n\n", storeSecretData);
    }

	return 0;
}