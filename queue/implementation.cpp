#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int data){
        if(rear==size-1){
            cout<<"overflow:"<<endl;
        }
        else if(front==-1&&rear==-1){
            front++;
            rear++;
            arr[rear]==data;
        }
        else{
            rear++;
            arr[rear]=data;
        }

    }
    void pop(){
        if(front==-1 && rear==-1){
            cout<<"underflow:";
            return;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;

        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    bool isempty(){
        if(front==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int getsize(){
        if(front==-1&&rear==-1){
            return 0;
        }
        else{
            return rear-front+1;
        } 
    }
    int getfront(){
        if(front==-1){
            cout<<"no element"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    void print(){
        cout<<"printing queue:";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    };
    int main(){
        Queue q(5);
        q.print();
    }
