class MyCircularQueue {

private:
    int front, rear,maxSize, counter;
    vector<int> arr;

public:
    MyCircularQueue(int k) {
        arr.resize(k);
        counter=0;
        front=0;
        rear=-1;
        maxSize=k;
    }

    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        rear=(rear+1)%maxSize;
        arr[rear]=value;
        counter++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        front=(front+1)%maxSize;

        counter--;
        return true;

        
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        return counter==0;
    }
    
    bool isFull() {
        return counter==maxSize;
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