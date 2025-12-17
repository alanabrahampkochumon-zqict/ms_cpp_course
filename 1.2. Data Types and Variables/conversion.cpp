#include <iostream>
using namespace std;
int main()
{
    // Fix the division problem with explicit casting
    int totalPoints = 95;
    int numTests = 3;
    double average2 = static_cast<double>(totalPoints) / numTests;
    cout << "Average (explicit): " << average2 << endl;
    // Demonstrate precision loss when converting back
    double preciseValue = 99.99;
    int truncated = static_cast<int>(preciseValue);
    cout << "Original value: " << preciseValue << endl;
    cout << "Truncated value: " << truncated << endl;
    return 0;
}
