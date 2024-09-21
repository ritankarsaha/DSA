class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
        
    }
    
    int pop() {
        if(output.size()){
            int x = output.top();
            output.pop();
            return x;
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            int x = output.top();
            output.pop();
            return x;
        }
        
    }
    
    int peek() {
        if (output.size())
        return output.top();
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }

            return output.top();
        }
        
    }
    
    bool empty() {
        if(output.size())
        return false;
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            return output.empty();
        }
        
    }
};


