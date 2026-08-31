#include<iostream>
#include<string>
using namespace std;
class Employee {
  private:
    int E_id;
    char E_name;
    float E_salary;
    float tax;
  public:
    void getdata() {
      cout<<"Enter employee id:";
      cin>>E_id;
      cout<<"Enter employee name:";
      getline(cin,E_name);
      cout<<"Enter employee salary:";
      cin>>E_salary;
      cout<<"Enter tax:";
    }
    void calculatetax() {
      tax=0.07+ E_salary;
    }
   void putdata() {
     cout<<"Enter employee id:"<<E_id<<endl;
     cout<<"Enter employee name:"<<E_name<<endl;
     cout<<"Enter employee salary:"<<E_salary<<endl;
     cout<<"Enter tax:"<<endl;
   }
int main() {
  Employee emp;
  emp.getdata();
  emp.calaculatetax();
  emp.putdata();
returm 0;
}
