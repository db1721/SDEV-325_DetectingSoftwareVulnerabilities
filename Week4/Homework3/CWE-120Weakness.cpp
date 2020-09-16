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
	
	//This shows if the secret data was affeced
	printf("\nThe secret data is now: %s\n\n", storeSecretData);

	return 0;
}