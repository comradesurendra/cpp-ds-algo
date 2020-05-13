#include<iostream>
#include<climits>
using namespace std;

class stackArray{
    private:
    int *data;
    int indexCount;
    int overflow;

    public:
    stackArray(int size){
        data = new int[size];
        indexCount = 0;
        overflow = size;
    }

    bool isEmpty(){
        return indexCount == 0;
    }

    void push(int item){
        if(indexCount == overflow){
            cout<<"Stack is full"<<endl;
            return;
        }
            data[indexCount] = item;
            indexCount++;
    }

    void top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        cout<<data[indexCount-1]<<endl;
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        indexCount--;
        return data[indexCount];
    }
};

int main(){
  
    stackArray s(10);
    s.push(10);
    s.top();
    s.push(20);
    s.top();
    //s.pop();
    //s.pop();
    cout<<s.isEmpty()<<endl;
    return 0;
}