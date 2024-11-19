#include "stack.h"
#include <stdio.h>

// mattr - prog71990f24 - assignment5

// main implementation for stack's data

int main(void) {
	STACK newStack;
	char inputString[STACK_DEPTH] = { '\0' };

	printf("\nEnter a string thats %d or less characters: ", STACK_DEPTH);						
	scanf_s("%s", inputString, STACK_DEPTH);													// gets string input

	if (strlen(inputString) > STACK_DEPTH || strlen(inputString) <= 0) {						// input validation
		printf("Your input is invalid");
		return 1;
	}

	newStack = CreateStack(inputString);
	PrintStack(&newStack);

	return 0; 

}