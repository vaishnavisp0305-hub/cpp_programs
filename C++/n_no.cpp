#include<iostream>
using namespace std;
int main() {
  int n,i=1;
  cout<<"Enter a number: ";
  cin>>n;
  for(i;i<11;i++) {
      cout<<n<<" * "<<i<<" = "<<i*n<<endl;
  }
  return 0;
}
