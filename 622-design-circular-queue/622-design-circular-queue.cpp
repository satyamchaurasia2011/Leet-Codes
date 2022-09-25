class MyCircularQueue {
    int *arr;
    int rear, front, size;
public:
    MyCircularQueue(int k) {
        arr = new int[k];
        rear = front = -1;
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        else if(front == -1)
            front = rear = 0;
        else if(rear == size-1 && front != 0)
            rear = 0;
        else
            rear = rear+1;
        arr[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        else if(front == rear)
            front = rear = -1;
        else if(front == size-1)
            front = 0;
        else
          front++;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return ((rear == size-1 && front == 0) || rear == front-1);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */