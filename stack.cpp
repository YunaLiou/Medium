#include <iostream>
#include <cstdlib>
using namespace std;
 
template<class T>
class mystack
{
    T *arr;
    int top;
    int capacity;
 
public:
    mystack(int);         
    ~mystack();                     
 
    void push(T);
    T pop();
    T peek();
 
    int size();
    bool isEmpty();
    bool isFull();
};

template<class T>
mystack<T>::mystack(int size)
{
    arr = new T[size];
    capacity = size;
    top = -1;

}
 
template<class T>
mystack<T>::~mystack() {
    delete[] arr;
}
 
template<class T>
void mystack<T>::push(T x)
{
    if (isFull())
    {
        exit(EXIT_FAILURE);
    }
    arr[++top] = x;
}
 
template<class T>
T mystack<T>::pop()
{
    if (isEmpty())
    {
        exit(EXIT_FAILURE);
    }
    return arr[top--];
}

template<class T>
T mystack<T>::peek()
{
    if (!isEmpty()) {
        return arr[top];
    }
    else {
       return 0;
    }
}

template<class T>
int mystack<T>::size() {
    return top + 1;
}
 
template<class T>
bool mystack<T>::isEmpty() {
    return top == -1;               
}
 

template<class T>
bool mystack<T>::isFull() {
    return top == capacity - 1;    
}
