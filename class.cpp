#include<iostream>
using namespace std;
class student
{
    int rollno;
    float marks;
public:
    int getdata(int a, float b);
    int putdata()
    {
        cout<<"Roll no is"<<rollno<<"\n";
        cout<<"Marks are"<<marks<<"\n";
        return 0;
    }
};
int student::getdata(int a, float b)
{
    rollno=a;
    marks=b;
    return 0;
}
int main()
{
    student x;
    cout<<"student x"<<"\n";
    x.getdata(101, 85.4);
    x.putdata();
    student y;
    cout<<"student y"<<"\n";
    y.getdata(105, 97.2);
    y.putdata();
}