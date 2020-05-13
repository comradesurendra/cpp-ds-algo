#include<iostream>
using namespace std;

class Stack{
    private:
    int *data;
    int nextCount;
    int capacity;
    public:
    Stack(){
        data = new int[4];
        nextCount = 0;
        capacity = 4;
    }

    bool isEmpty(){
        return nextCount == 0;
    }

    void top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        cout<<data[nextCount]<<endl;
    }

    void push(int item){
        if(nextCount == capacity){
            int *newData = new int[2*capacity];
            for(int i=0;i<capacity;i--){
                newData[i] = data[i];
            }
            delete(data);
            data = newData;
            data[nextCount] = item;
            nextCount++;
        } else {
            data[nextCount] = item;
            nextCount++;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        nextCount--;
        cout<<data[nextCount]<<endl;
    }
};


int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.top();
    cout<<s.isEmpty()<<endl;



    return 0;
}