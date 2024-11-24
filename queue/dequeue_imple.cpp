#include<iostream>
using namespace std;
class dequeue{
    public:
    int* arr;
    int size;
    int front;
    int rear;
    dequeue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    void pushBack(int data){
        // overflow
        if(rear==size-1){
            cout<<"overflow";
        }
//   empty case
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=data;
        }
        // normal flow
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void pushFront(int data){
        if(front==0){
            cout<<"overflow";
        }
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[front]=data;
        }
        else{
            front--;
            arr[front]=data;
        }
   
    }
    void popFront(){
        

    }
    void popBack(){

    }
}