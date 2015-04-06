#include <iostream>
#define SIZE 100
using namespace std;
template <typename T>
struct stack{
    int top;
    unsigned int size;
    T *arr;
};
struct inp{
    int a;
};
void initialise(struct stack &s,int siz=SIZE)
{
    s.top = -1;
    s.arr = new T[siz];
    s.size = siz;
}
void push(struct stack &s,T p)
{
    s.top++;
    if(s.top == s.size)
    {
        cout<<"Overflow..Cannot perform mentioned operation"<<endl;
        s.top--;
    }
    s.arr[s.top] = p;
}
T pop(struct stack &s)
{
    if(s.top == -1)
    {
        cout<<"Underflow...Cannot perform required operation"<<endl;
    }
    return s.arr[s.top--];
}
unsigned int getmaxsize(const struct stack &s)
{
    return s.size;
}
int getcurrentsize(const struct stack &s)
{
    return s.top;
}
bool isEmpty(const struct stack &s)
{
    if(s.top == s.size-1)
        return true;
    else
        return false;
}
int main()
{
    struct stack *s;
    int n;
    cout<<"Enter the number of stacks"<<endl;
    cin>>n;
    s = new struct stack[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the size of the present stack or -1 to use default size: ";
        int size;
        cin>>size;
        if(size>=0)
            initialise(s[i],size);
        else
            initialise(s[i]);
    }
    while(true)
    {
        cout<<"Enter the stack you want to choose: ";
        int st;
        cin>>st;
        cout<<"Enter the operation code...\n1.Push\n2.Pop\n3.Check Maximum size\n4.Check Current size\n5.Check whether stack is empty\n6.Exit"<<endl;
        int ch;
        cin>>ch;
        if(ch == 1)
        {
            cout<<"Enter the data too store: ";
            int d;
            cin>>d;
            push(s[st-1],d);
        }
        else if(ch == 2)
        {
            cout<<pop(s[st-1])<<endl;
        }
        else if(ch == 3)
        {
            int size = getmaxsize(s[st-1]);
            cout<<"Size of the choosen stack is: "<<size<<endl;
        }
        else if(ch == 4)
        {
            int size = getcurrentsize(s[st-1]);
            cout<<"The current size of the stack choosen: "<<size<<endl;
        }
        else if(ch==5)
        {
            bool b = isEmpty(s[st-1]);
            if(b == true)
                cout<<"The choosen stack is empty"<<endl;
            else
                cout<<"The choosen stack is not empty"<<endl;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
