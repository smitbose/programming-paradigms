#include <iostream>
using namespace std;
template <class T>
class Stack
{
private:
    int top;
    unsigned int size;
    T *arr;
public:
    void push(T);
    T pop();
    int getmaxsize();
    int getcurrentsize();
    bool isEmpty();
    Stack();
    Stack(const unsigned int);
};

template <class T>
Stack<T>::Stack()
{
    top = -1;
    size = 100;
    arr = new T[100];
}

template <class T>
Stack<T>::Stack(const unsigned int s):size(s)
{
    top = -1;
    arr = new T[s];
}

template <class T>
void Stack<T>::push(T d)
{
    if(top == size-1)
    {
        cout<<"Overflow...cannot perform operation"<<endl;
    }
    top++;
    arr[top]=d;
}

template <class T>
T Stack<T>::pop()
{
    if(top==-1)
    {
        cout<<"Underflow...cannot perform operation"<<endl;
    }
    return arr[top--];
}

template <class T>
int Stack<T>::getmaxsize()
{
    return size;
}

template <class T>
int Stack<T>::getcurrentsize()
{
    return (top+1);
}

template <class T>
bool Stack<T>::isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}

struct point{
    int x = 1;
    int y = 1;
};
int main()
{
    cout<<"Creating stacks..."<<endl;
    Stack<int> s1;
    Stack<double> s2(5);
    Stack<struct point> s3(6);
    s1.push(5);
    s2.push(5.5);
    struct point p;
    s3.push(p);
    cout<<"Current and max sizes of integer stack is: "<<s1.getcurrentsize()<<","<<s1.getmaxsize()<<endl;
    cout<<"Current and max sizes of double stack is: "<<s2.getcurrentsize()<<","<<s2.getmaxsize()<<endl;
    cout<<"Current and max sizes of structure stack is: "<<s3.getcurrentsize()<<","<<s3.getmaxsize()<<endl;
    return 0;
}
