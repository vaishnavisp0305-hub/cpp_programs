#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
      int empId;
      string empName;
      string department;
      float basicSalary;

    public:
      void inputDetails()
      {
        cout<<"Enter employee ID:";
        cin>>empId;
        cout<<"Enter employee Name:";
        getline(cin>>ws,empName);
        cout<<"Enter Department:";
        getline(cin>>ws,department);
        cout<<"Enter basic Salary:";
        cin>>basicSalary;
      }
      void displayDetails()
      {
        cout<<"Employee Details"<<"\n";
        cout<<"Employee ID:"<<empId<<"\n";
        cout<<"Department:"<<department<<"\n";
        cout<<"Basic Salary:"<<basicSalary<<"\n";
      }
      void claculateAnnualSalary()
      {
        float annualSalary=basicSalary*12;
        cout<<"Annual Salary:"<<annualSalary<<"\n";
      }
};
int main()
{
    Employee emp;
    emp.inputDetails();
    emp.displayDetails();
    emp.claculateAnnualSalary();
    return 0;
}
