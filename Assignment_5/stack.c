#define _CRT_SECURE_NO_WARNINGS

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// mattr - prog71990f24 - assignment5 (refactor)

// main implementation for stack's data

/*

Question 1: Create and use a stack
o Specifications : 4.00 / 8.00 (The program produces correct results but does not display them correctly or the following issues were noted : )
—Stack object is ‘char’ not string
o Readability + Design : 6.00 / 8.00 (The code has some elements of good design and layout, but is lacking in some respects or the following issues were noted.)
—Stack operations not generic (see https ://www.tutorialspoint.com/data_structures_algorithms/stack_algorithm.htm )
o Reusability : 4.00 / 4.00 (The code could be reused as a whole or each routine could be reused.)
o Documentation : 4.00 / 4.00 (The documentation is well written and clearly explains what the code is accomplishing and how.)

*/

Stack* createStack() {														// takes stack and its capacity
	Stack newStack;
	newStack.top = -1;														// saves top as -1;
	newStack.stackSize = STACK_SIZE;										// saves capacity
	newStack.data = (char*)malloc(newStack.stackSize * sizeof(char));
	if (!newStack.data) {
		fprintf(stderr, "Failed to allocate memory");						// makes sure malloc is good
		exit(EXIT_FAILURE);
	}


	return &newStack;
}

// pus takes the element (letter) 
// and adds it to top of stack (if there is space)
void push(Stack* Stack, char letter) {
	if (Stack->top < Stack->stackSize - 1)
		Stack->data[++Stack->top] = letter;
	else
		printf("Stack Overflow");											// so this it where it comes from lol	

}

// takes the top of stack if its over/equal to 0
// it returns the new top aka top - 1
char pop(Stack* Stack) {
	if (Stack->top >= 0)
		return Stack->data[Stack->top--];
	else 
		printf("Stack is empty");

	return '\0';															// returns null pointer if the stack is empty
}

// takes the top of stack if its over/equal to 0
// it returns the top or null pointer if empty
char top(Stack* Stack) {
	if (Stack->top >= 0)
		return Stack->data[Stack->top];										// only difference is that this doesnt top--
	else
		printf("Stack is empty");

	return '\0';
}

bool isEmpty(Stack* Stack) {
	return (Stack->top == -1);												// returns true if top == -1 (empty)
}

bool isFull(Stack* Stack) {
	return (Stack->top == Stack ->stackSize);								// returns true if top == stackSize (full)
}

void disposeStack(Stack* Stack) {
	// nothing
}