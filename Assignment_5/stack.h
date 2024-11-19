#pragma once

#include <string.h>

// mattr - prog71990f24 - assignment5

// header file for stacks

#define STACK_DEPTH						50											// size of the stack, easily editable

typedef struct stack {
	char stackData[STACK_DEPTH];													// data within stack
	int counter;																	// counter to help find next open spot in stack
} STACK;

STACK CreateStack(STACK* newStack, char stackData[], int counter);

STACK SortStack(STACK* newStack, char stackData[], int counter);					// sorts data (LIFO)

STACK PrintStack(STACK* newStack);

void DestroyStack(STACK* newStack);