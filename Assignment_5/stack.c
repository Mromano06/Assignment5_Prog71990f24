#define _CRT_SECURE_NO_WARNINGS

#include "stack.h"
#include <stdio.h>

// mattr - prog71990f24 - assignment5

// main implementation for stack's data

STACK CreateStack(char stackData[]) {
	STACK newStack;
	int stackDepthFinder = 0;
	char saveData[STACK_DEPTH] = { '\0' };									// temp string
	strncpy(saveData, stackData, STACK_DEPTH);								// saves data into temp variable

	for (int i = 0; i < STACK_DEPTH; i++) {									// this for loop see if each element has something in it 
		if (stackData[i] != '\0')
			stackDepthFinder++;												// adds one per element in the 
		else
			break;
	}

	for (int x = 0; x < stackDepthFinder; x++) {							// sorts data back to front
		if (stackData[x] != '\0')
			stackData[stackDepthFinder - (x+1)] = saveData[x];				// puts the last element into first and then keeps going
		else
			break;
	}

	strncpy(newStack.stackData, stackData, STACK_DEPTH);

	return (newStack);
}

void PrintStack(STACK* newStack) {
	printf("%s", newStack->stackData);
}

void DestroyStack(STACK* newStack) {
	// nothing
}