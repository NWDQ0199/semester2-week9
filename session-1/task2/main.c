
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
    push(stack,2);
    traverseI(stack->top);  // display the stack
	Node* node=pop(stack);
	printf(" %i",node->data->value);

	freeNode(node);
	freeStack(stack);

    return 0;
}
