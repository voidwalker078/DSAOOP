#include <iostream>
using namespace std;

class NumberSum
{
private:
    int start, end, oddsum = 0, evensum = 0;

public:
    void range()
    {
        cout << "Enter The Start Range: ";
        cin >> start;

        cout << "Enter The End range: ";
        cin >> end;
    }

    void sum()
    {
        for (int i = start; i <= end; i++)
        {
            if (i % 2 == 0)
            {
                evensum += i;
            }
            else
            {
                oddsum += i;
            }
        }
    }

    void display()
    {
        cout << "The Sum of Even Numbers is: " << evensum << endl;
        cout << "The Sum of Odd Numbers is: " << oddsum << endl;
    }
};

int main()
{
    NumberSum N;

    N.range();
    N.sum();
    N.display();

    return 0;
}