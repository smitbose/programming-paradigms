#include <iostream>
using namespace std;

namespace myname{
    template <typename T>
    void swap(T & a,T & b)
    {
        T temp = a;
        a=b;
        b=temp;
    }
}
int main()
{
    cout<<"Enter two integers respectively: ";
    int a,b;
    cin>>a;
    cin>>b;
    myname::swap(a,b);
    cout<<"The ordered pair has now become: "<<a<<","<<b<<endl;
    cout<<"Now enter two floating point numbers: ";
    double x,y;
    cin>>x;
    cin>>y;
    myname::swap(x,y);
    cout<<"The ordered pair has now become: "<<x<<","<<y<<endl;
    return 0;
}
