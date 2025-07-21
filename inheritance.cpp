#include<iostream>
using namespace std;
class human
{
    string religion,color;
    protected:
    string name;
    int age,weight;
};
class Student:private human
{
    int roll_number,fees;
    public:
    Student(string n,int a,int w,int r,int f)
    {
        name=n;
        age=a;
        weight=w;
        roll_number=r;
        fees=f;
    }
    
    void display()
    {
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<" "<<fees<<endl;
    }
};
int main()
{
    Student A("Vivek",18,100,1500,2000);
    A.display();   
}