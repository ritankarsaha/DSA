class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        StackNode *temp = new StackNode(x);
        temp->next = top;
        top = temp;
    }

    int pop() {
        if (top == NULL)
        return -1;
        
        StackNode *temp = top;
        top = top->next;
        int val = temp->data;
        delete temp;
        return val;
    }

    MyStack() { top = NULL; }
};