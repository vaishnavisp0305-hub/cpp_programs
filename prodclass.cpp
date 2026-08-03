#include<iostream>
#include<string>
using namespace std;

class product
{
    private:
      int prodId;
      string prodName;
      int quantity;
      float unitPrice;
      float totalCost;
    public:
      void inputDetails()
      {
        cout<<"Enter product ID:";
        cin>>prodId;
        cout<<"Enter product Name:";
        getline(cin>>ws,prodName);
        cout<<"Enter quantity:";
        cin>>quantity;
        cout<<"Enter unit price:";
        cin>>unitPrice;
      }
      void claculatetotalCost()
      {
        totalCost=quantity*unitPrice;
      }
      void displayDetails()
      {
        cout<<"Product Details"<<"\n";
        cout<<"Enter Product ID:"<<prodId<<"\n";
        cout<<"Enter Product Name:"<<prodName<<"\n";
        cout<<"Enter quantity:"<<quantity<<"\n";
        cout<<"Enter Unit Price:"<<unitPrice<<"\n";
        cout<<"Enter Total Cost:"<<totalCost<<"\n";
      }
};
int main()
{
    product prod;
    prod.inputDetails();
    prod.claculatetotalCost();
    prod.displayDetails();
    return 0;
}