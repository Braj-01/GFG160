#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(4);
    cout<<"size of queue:"<<q.size()<<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    q.pop();
    cout<<"size of queue:"<<q.size()<<endl;
    q.push(18);
    q.push(20);
    cout<<"front element:"<<q.front()<<endl;
    cout<<"rear element:"<<q.back()<<endl;
}
    