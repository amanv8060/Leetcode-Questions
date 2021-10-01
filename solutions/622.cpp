#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue {
public:
    int front = 0, rear = -1;
    int size; int max_size;
    vector <int> vec;
    
    MyCircularQueue(int k) {
        front = 0;
        rear = -1;
        vec.resize(k);
        size = 0;
        max_size = k;
    }
    
    bool enQueue(int value) {
        if(isFull()==true){return false;}
        rear = (rear+1)%max_size;
        vec[rear] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()==true){return false;}
        front = (front+1)%max_size;
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty()==true){return -1;}
        return vec[front];
    }
    
    int Rear() {
        if(isEmpty()==true){return -1;}
        return vec[rear];
    }
    
    bool isEmpty() {
        if(size==0){return true;}
        return false;
    }
    
    bool isFull() {
        if(size==max_size){return true;}
        return false;
    }
};
