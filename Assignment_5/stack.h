#pragma once

#include <stdbool.h>

// mattr - prog71990f24 - assignment5 (refactor)

// header file for stacks

#define STACK_SIZE			80

// data = array of characters
// top = top of stack
// capacity is the stacks capacity
typedef struct stack {
	char* data;
	int top;
	int stackSize;
} Stack;

Stack createStack();

void push(Stack* Stack, char letter);

char pop(Stack* Stack);

char top(Stack* Stack);

bool isEmpty(Stack* Stack);

bool isFull(Stack* Stack);

void disposeStack(Stack* Stack);