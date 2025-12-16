#include <iostream>

using namespace std;

class Calculation
{

public:
    int firstNumber, secondNumber;

    void doMath()
    {
        firstNumber = 10;
        secondNumber = 20;
        int result = firstNumber + secondNumber;
        cout << "result is " << result << endl;
        if (result > 25)
        {
            cout << "big number" << endl;
        }
        else
        {
            cout << "small number" << endl;
        }
    }
};

int main()
{
    Calculation c;
    c.doMath();
}
