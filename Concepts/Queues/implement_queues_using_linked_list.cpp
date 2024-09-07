void MyQueue:: push(int x)
{
     QueueNode *temp = new QueueNode(x);
     if(rear == NULL)
     {
         front = rear = temp;
         return;
     }
     rear->next = temp;
     rear = temp;
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    if(front == NULL)
    return -1;
    QueueNode *temp = front;
    int val = temp->data;
    front = front->next;
    if(front == NULL)
    rear = NULL;
    delete(temp);
    return val;
}