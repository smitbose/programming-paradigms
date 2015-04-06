#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    private:
        char *name;
        char *dept;
        unsigned int year;
        unsigned int age;
    public:
        void readStudentData();
        void printStudentData();
};
void Student::readStudentData()
{
    cout<<"Enter the name of the student: ";
    char readname[100];
    cin>>readname;
    name = new char[strlen(readname)+1];
    strcpy(name,readname);
    cout<<"Enter the age of the student: ";
    cin>>age;
    cout<<"Enter the department of the student: ";
    char deptread[100];
    cin>>deptread;
    dept = new char[strlen(deptread)+1];
    strcpy(dept,deptread);
    cout<<"Enter the year of the student: ";
    cin>>year;
}
void Student::printStudentData()
{
    cout<<"The name of the student is: "<<name<<endl;
    cout<<"The age of the studnet is: "<<age<<endl;
    cout<<"The department of the student is: "<<dept<<endl;
    cout<<"The year of the student is: "<<year<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number of students' data to be recorded: ";
    cin>>n;
    Student *s;
    s = new Student[n];
    cout<<"Enter the data for all the students:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the data for student number "<<i+1<<endl;
        s[i].readStudentData();
    }
    cout<<"The datas recorded for the student are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"The details of the student number "<<i+1<<"is: "<<endl;
        s[i].printStudentData();
    }
    return 0;
}
