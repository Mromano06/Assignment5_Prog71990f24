#define _CRT_SECURE_NO_WARNINGS

#include "stack.h"
#include <stdio.h>

// mattr - prog71990f24 - assignment5

// main implementation for stack's data

STACK CreateStack(char stackData[]) {
	STACK newStack;
	int stackDepthFinder = 0;
	char saveData[STACK_DEPTH] = { '\0' };
	strncpy(saveData, stackData, STACK_DEPTH);

	for (int i = 0; i < STACK_DEPTH; i++) {									// this for loop see if each element has something in it 
		if (stackData[i] != '\0')
			stackDepthFinder++;												// adds one per element in the 
		else
			break;
	}
	for (int x = 0; x < stackDepthFinder; x++) {
		if (stackData[x] != '\0')
			stackData[stackDepthFinder - x] = saveData[x];
		else
			break;
	}

	strncpy(newStack.stackData, stackData, STACK_DEPTH);

	return (newStack);
}

void PrintStack(STACK* newStack) {
	for (int x = 0; x < STACK_DEPTH; x++) {
		if (newStack->stackData[x] != '\0')
			printf("%c", newStack->stackData[x]);
		else
			break;
		}
}

void DestroyStack(STACK* newStack) {
	// nothing
}