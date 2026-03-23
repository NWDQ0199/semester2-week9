
Queue* createQueue(void);
void freeQueue(Queue* queue);

void join(Queue* queue, int val);
Node *leave(Queue* queue);
