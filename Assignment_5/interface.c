#include "stack.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// mattr - prog71990f24 - assignment5 (refactor)

// main implementation for stack's data

#define MAXINPUT		80

int main(void) {

	Stack* stack = createStack();

	
	char inputBuffer[MAXINPUT];
	printf("enter a word: ");
	scanf("%[^\n]s", &inputBuffer);


	int i = 0;
	while (inputBuffer[i] = "\0")
		push(stack, inputBuffer[i++]);


	char ch;
	while (ch = pop(stack))
		printf("%c", &ch);


	printf("\n");


	disposeStack(stack);
		return 0;
}