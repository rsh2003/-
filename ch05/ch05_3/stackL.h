#pragma once
typedef char element;

typedef struct stackNode {
	element data;
	struct stackNode* link;
} stackNode;

stackNode* top;

int isStackEmtpy();
void pusj(element item);
element pop();
element peek();
void printStack();