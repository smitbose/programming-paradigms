#include <iostream>
using namespace std;

namespace myname{
    template <typename T>
    void sort(T arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
            T min = arr[i];
            int pos = i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<min)
                {
                    min = arr[j];
                    pos = j;
                }
            }
            arr[pos] = arr[i];
            arr[i] = min;
        }
    }
}
int main()
{
    cout<<"Enter 5 integers"<<endl;
    int arr[5];
    for(int i=0;i<5;i++)
        cin>>arr[i];
    cout<<"Enter some floating point numbers"<<endl;
    float f[5];
    for(int i=0;i<5;i++)
        cin>>f[i];
    cout<<"The sorted list of integers entered is: "<<endl;
    myname::sort(arr,5);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"The sorted list of floating point numbers are:"<<endl;
    myname::sort(f,5);
    for(int i=0;i<5;i++)
        cout<<f[i]<<" ";
    cout<<endl;
    return 0;
}
