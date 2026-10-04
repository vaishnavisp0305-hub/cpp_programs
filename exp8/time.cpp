#include <iostream>
using namespace std;
class Time {
public:
int hours, minutes;
Time()
{
this->hours = 0;
this->minutes = 0;
}
Time(int h, int m)
{
this->hours = h;
this->minutes = m;
}
// Overloading (+) operator to perform addition of two distance object Call by reference
Time operator+(Time& t2)
{
// Create an object to return
Time t3;
t3.hours = this->hours + t2.hours;
t3.minutes = this->minutes + t2.minutes;
// Return the resulting object
return t3;
}
};
// Driver Code
int main()
{
Time t1(10, 6);
Time t2(10, 12);
Time t3;
// Use overloaded operator
t3 = t1 + t2;
cout << "\nTotal Hours & Minutes: " <<
t3.hours << "'" << t3.minutes;
return 0;
}