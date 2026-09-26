class MyCircularQueue {
public:
    int *arr;
    int t,f,n;
    MyCircularQueue(int k) {
        n=k;
        t=-1;f=-1;
        arr=new int[n];
    }
    
    bool enQueue(int x) {
        if(f==(t+1)%n){
            return false;
        }
        if(f==-1){
            t=0;f=0;
        }
        else{
            t=(t+1)%n;
        }
        arr[t]=x;
        return true;
    }
    
    bool deQueue() {
        if(f==-1){
            return false;
        }
        if(t==f){
            t=-1;f=-1;
        }
        else{
            f=(f+1)%n;
        }
        return true;
    }
    
    int Front() {
        if(f==-1){
            return -1;
        }
        return arr[f];
    }
    
    int Rear() {
        if(t==-1){
            return t;
        }
        return arr[t];
    }
    
    bool isEmpty() {
        if(f==-1){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if((t+1)%n==f){
            return true;
        }
        return false;
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