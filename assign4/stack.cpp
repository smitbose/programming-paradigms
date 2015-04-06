#include <iostream>
using namespace std;


class Stack
{
private:
    int top;
    unsigned int size;
    int *arr;
public:
    void push(int);
    int pop();
    int getmaxsize();
    int getcurrentsize();
    bool isEmpty();
    Stack();
    Stack(const unsigned int);
};
Stack::Stack()
{
    top = -1;
    size = 100;
    arr = new int[100];
}
Stack::Stack(const unsigned int s):size(s)
{
    top = -1;
    arr = new int[s];
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


int main()
{
    cout<<"Initiating stack using default size 100..."<<endl;
    Stack s;
    cout<<"Done initialisation! Proceeding to next initialization..."<<endl;
    cout<<"Enter your custom size to generate a stack: "<<endl;
    unsigned int size;
    cin>>size;
    Stack st(size);
    cout<<"Entering the interactive data writing process..."<<endl;
    while(true)
    {
        cout<<"1.Push\n2.Pop\n3.Get maximum size\n4.Get current size\n5.Check if stack is empty\n6.Exit"<<endl;
        cout<<"Enter your choice: ";
        int ch,stch;
        cin>>ch;
        if(ch==6)
            break;
        cout<<"Enter the stack on which you want to perform the operation:\n1. Default stack\n2. Custom made stack\nEnter choice: ";
        cin>>stch;
        if(stch == 3)
        {
            cout<<"No such stack! Try again..."<<endl;
            continue;
        }
        if(ch == 1)
        {
            cout<<"Enter the data to be pushed into stack: ";
            int data;
            cin>>data;
            if(stch == 1)
                s.push(data);
            else if(stch == 2)
                st.push(data);
        }
        else if(ch == 2)
        {
            if(stch == 1)
                cout<<"The popped out item is: "<<s.pop()<<endl;
            else
                cout<<"The popped out item is: "<<st.pop()<<endl;
        }
        else if(ch==3)
        {
            if(stch == 1)
                cout<<"The maximum size of the stack is: "<<s.getmaxsize()<<endl;
            else
                cout<<"The maximum size of the stack is: "<<st.getmaxsize()<<endl;
        }
        else if(ch == 4)
        {
            if(stch == 1)
                cout<<"The current size of the stack is: "<<s.getcurrentsize()<<endl;
            else
                cout<<"The current size of the stack is: "<<st.getcurrentsize()<<endl;
        }
        else if(ch==5)
        {
            if(stch == 1)
            {
                if(s.isEmpty())
                    cout<<"The stack is empty!"<<endl;
                else
                    cout<<"The stack is not-empty"<<endl;
            }
            else
            {
                if(s.isEmpty())
                    cout<<"The stack is empty!"<<endl;
                else
                    cout<<"The stack is not-empty"<<endl;
            }
        }

        else
            cout<<"Sorry! Wrong choice!!"<<endl;
    }
    cout<<"Creating a copy of the default stack given to you..."<<endl;
    Stack defcopy = s;
    cout<<"Verification...Current and maximum sizes of the copied stack are: "<<defcopy.getcurrentsize()<<","<<defcopy.getmaxsize()<<"."<<endl;
    cout<<"Creating a copy of the stack you created..."<<endl;
    Stack cust_copy(st);
    cout<<"Verification...Current and maximum sizes of the copied stack are: "<<cust_copy.getcurrentsize()<<","<<cust_copy.getmaxsize()<<"."<<endl;
    return 0;
}
