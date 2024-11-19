#pragma once

#include <string.h>

// mattr - prog71990f24 - assignment5

// header file for stacks

#define STACK_DEPTH						50											// size of the stack, easily editable

typedef struct stack {
	char stackData[STACK_DEPTH];													// data within stack
} STACK;

STACK CreateStack(char stackData[]);

void PrintStack(STACK* newStack);

void DestroyStack(STACK* newStack);