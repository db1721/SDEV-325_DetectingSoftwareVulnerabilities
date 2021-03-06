// Copyright 2012 Andrew Meneely and Samuel Lucidi
// Licensed under the Educational Community License, Version 2.0 (the "License"); 
// you may not use this file except in compliance with the License. 
// You may obtain a copy of the License at http://www.osedu.org/licenses/ECL-2.0. 
// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions 
// and limitations under the License.

#include <stdio.h>

int main(){	

	/*
		The behavior of the example is dependent on the implementation
		of the stack. On most hardware, the stack grows down from the highest 
		memory address to the lowest. This is why overflowing the end of 'str' 
		overwrites the array that was declared before it.

		The small size of the buffer 'str' means it will
		likely be padded for memory alignment purposes, so you may need
		to type several characters past the end of the buffer before a change
		to 'secret' is apparent.
	*/

	char secret [15] = "sesquipedalian";
	char str [4];
	
	printf("\nPlease enter up to 3 characters: ");
	scanf("%s", str);
	printf("The pointer addr of the first byte of our buffer is %p\n", str);
	printf("The pointer addr of the first byte of our secret is %p\n", secret);	
	printf("\nThe secret was sesquipedalian. Now it's become: %s\n\n", secret);

	return 0;
}
