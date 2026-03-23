#include <stdio.h>
#include <stdlib.h>

#include "stack_structures.h"
#include "stack.h"

int main(void)
{
    Stack* stack=createStack();

    // push() - add some data to the stack
    push(stack,createData(1));
    displayStack(stack);
	//Data* data=pop(stack);
	//printf("data: %i\n",data->value);
	//free(data);

    // free stack dynamic memory
    freeStack2(stack);
    
    return 0;
}
