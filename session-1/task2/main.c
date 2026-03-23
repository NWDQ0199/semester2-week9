
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"
#include "stack_structures.h"
#include "stack.h"

int main(void)
{

    // create an empty stack
    Stack* stack=createStack();

    // push a node
    push(stack,1);
    traverseI(stack->top);  // display the stack
	Node* one=pop(stack);
	printf(one->value);

	freeNode(one);
	freeStack(stack);

    return 0;
}
