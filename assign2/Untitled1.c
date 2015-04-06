#include <iostream>
using namespace std;
struct student{
    string name;
    int age;
    int year;
    string department;
};
void readStudentData(struct student &s)
{
    cout<<"Enter the name of the student"<<endl;
    cin>>s.name;
    cout<<"Enter the age of the student"<<endl;
    cin>>s.age;
    cout<<"Enter the department of the student"<<endl;
    cin>>s.department;
    cout<<"Enter the year of the student"<<endl;
    cin>>s.year;
}
void printStudentData(struct student &s)
{
    cout<<"The name of the student is: "<<s.name<<endl;
    cout<<"The age of the student is: "<<s.age<<endl;
    cout<<"The department of the student is: "<s.department<<endl;
    cout<<"The year of the student is: "<<s.year<<endl;
}
int main()
{
    struct student *s;
    int n;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    s = new struct strudent[n];
    cout<<"Reading the details of the students..."<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<"Enter the details of the "<<i<<"th student"<<endl;
        readStudentData(s[i]);
    }
    cout<<"Reading successfull..."<<endl;
    cout<<"Now displaying read data..."<<endl;
    for(int i=0;i<n;i++)
    {
        printStudentData(s[i]);
    }
    cout<<"Exiting program..."<<endl;
    return 0;
}
