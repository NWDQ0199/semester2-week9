
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
	Node* node=pop(stack); //pop 2
	printf("two: %i\n",node->data->value);
	freeNode(pop(stack)); //pop 1 and free it since we won't use it
	/*Node* nothing=pop(stack); //nothing on stack, testing
	printf("nothing: %s\n",nothing==NULL?"NULL":"not NULL");
	if(nothing!=NULL)
	{
		freeNode(nothing);
	}*/

	freeNode(node);
	freeStack(stack);

    return 0;
}
