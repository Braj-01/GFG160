#include<iostream>
using namespace std;
class cqueue{
    public:
    int* arr;
    int size;
    int rear;
    int front;
    cqueue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    void push(int data){
        // overflow
        if(front==0 && rear==size-1){
            cout<<"overflow";
        }
        // empty
        else if(front==-1&&rear==-1){
            front++;
            rear++;
            arr[rear]=data;
        }
        // circular
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=data;
        }
        // normal flow
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void pop(){
        // underflow
        if(front==-1&&rear==-1){
            cout<<"underflow";
        }
        // single element
        else if(front==rear){
            arr[front]=-1;
            front++;
        }
        // circular
        else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        // normal flow
        else{
            arr[front]=-1;
            front++;
        }
    }
    void print(){
        cout<<"printing queue"<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    cqueue q(5);
    // q.print();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();
    q.pop();
    q.pop();
    q.print();

    
}