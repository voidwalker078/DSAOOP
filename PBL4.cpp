#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    void read()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> img;
    }

    void display()
    {
        if (img >= 0)
        {
            cout << real << " + " << img << "i" << endl;
        }
        else
        {
            cout << real << " - " << -img << "i" << endl;
        }
    }

    void add(Complex c1)
    {
        Complex sum;

        sum.real = real + c1.real;
        sum.img = img + c1.img;

        cout << "Sum (Member function): ";
        sum.display();
    }

    Complex Multiply(Complex c1)
    {
        Complex product;

        product.real = (real * c1.real) - (img * c1.img);
        product.img = (real * c1.img) + (img * c1.real);

        return product;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "For C1:\n";
    c1.read();

    cout << "For C2:\n";
    c2.read();

    c1.add(c2);

    c3 = c1.Multiply(c2);

    cout << "Product: ";
    c3.display();

    return 0;
}