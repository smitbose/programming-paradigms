#include <iostream>
using namespace std;


class Stack
{
private:
    int top;
    unsigned int size;
    int *arr;
public:
    static int nstacks;
    void push(int);
    int pop();
    int getmaxsize();
    int getcurrentsize();
    bool isEmpty();
    Stack();
    Stack(const unsigned int);
    Stack operator+(Stack &);
    ~Stack();
};
Stack::Stack()
{
    if(nstacks == 3)
    {
        cout<<"Sorry, no more stacks can be created!"<<endl;
        this->~Stack();
        return;
    }
    top = -1;
    size = 100;
    arr = new int[100];
    nstacks++;
}
Stack::Stack(const unsigned int s):size(s)
{
    top = -1;
    arr = new int[s];
    nstacks++;
}
Stack::~Stack()
{
    delete[] arr;
}
Stack Stack::operator+(Stack &one)
{
    int a = one.getmaxsize();
    int b = this->getmaxsize();
    Stack C(a+b);
    Stack temp1 = one;
    while(!temp1.isEmpty())
    {
        int c = temp1.pop();
        C.push(c);
    }
    Stack temp2 = *this;
    while(!(temp2.isEmpty()))
    {
        int c = temp2.pop();
        C.push(c);
    }
    return C;
}
void Stack::push(int d)
{
    if(top == size-1)
    {
        cout<<"Overflow...cannot perform operation"<<endl;
    }
    top++;
    arr[top]=d;
}
int Stack::pop()
{
    if(top==-1)
    {
        cout<<"Underflow...cannot perform operation"<<endl;
    }
    return arr[top--];
}
int Stack::getmaxsize()
{
    return size;
}
int Stack::getcurrentsize()
{
    return (top+1);
}
bool Stack::isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}
int Stack::nstacks = 0;
int main()
{

    Stack s1(5);
    Stack s2(6);
    cout<<"The number of stacks created is: "<<Stack::nstacks<<endl;
    cout<<"Entering the data write process for first stack..."<<endl;
    while(1)
    {
        cout<<"1.Push\n2.Pop\n3.Exit"<<endl;
        cout<<"Enter your choice: ";
        int ch;
        cin>>ch;
        if(ch == 3)
            break;
        else if(ch == 1)
        {
            cout<<"Enter the data to push: ";
            int data;
            cin>>data;
            s1.push(data);
        }
        else if(ch == 2)
        {
            cout<<"The popped data is: "<<s1.pop()<<endl;
        }
        else
            cout<<"Wrong choice...please try again"<<endl;
    }
    cout<<"Entering the data write process for second stack..."<<endl;
    while(1)
    {
        cout<<"1.Push\n2.Pop\n3.Exit"<<endl;
        cout<<"Enter your choice: ";
        int ch;
        cin>>ch;
        if(ch == 3)
            break;
        else if(ch == 1)
        {
            cout<<"Enter the data to push: ";
            int data;
            cin>>data;
            s2.push(data);
        }
        else if(ch == 2)
        {
            cout<<"The popped data is: "<<s2.pop()<<endl;
        }
        else
            cout<<"Wrong choice...please try again"<<endl;
    }
    Stack s3 = s1+s2;
    cout<<"The current and maximum sizes of s1 is: "<<s1.getcurrentsize()<<","<<s1.getmaxsize()<<endl;
    cout<<"The current and maximum sizes of s2 is: "<<s2.getcurrentsize()<<","<<s2.getmaxsize()<<endl;
    cout<<"The current and maximum sizes of s3 is: "<<s3.getcurrentsize()<<","<<s3.getmaxsize()<<endl;
    cout<<"Number of stacks created at this point of time: "<<Stack::nstacks<<endl;
    cout<<"Trying to create another stack..."<<endl;
    Stack four;
    cout<<"The number of stacks presently: "<<Stack::nstacks<<endl;
    return 0;
}
