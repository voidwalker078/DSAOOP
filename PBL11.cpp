#include <iostream>
using namespace std;

// Class Template
template <class T>
class Calculator
{
T a, b;

public:
Calculator(T x, T y)
{
a = x;
b = y;
}

void display()
{
    cout << "Sum = " << a + b << endl;
}

};

// Function Template
template <class T>
T findMax(T a, T b)
{
return (a > b) ? a : b;
}

int main()
{
Calculator<int> c1(10, 20);
c1.display();

Calculator<float> c2(2.5, 3.5);
c2.display();

cout << "Maximum integer = " << findMax(10, 20) << endl;
cout << "Maximum float = " << findMax(4.5f, 2.5f) << endl;

return 0;

}