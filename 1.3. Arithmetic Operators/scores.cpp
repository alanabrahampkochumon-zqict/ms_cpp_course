#include <iostream>
using namespace std;
int main()
{
    // Demonstrate precedence in arithmetic operations
    int baseDamage = 10;
    int weaponBonus = 5;
    int strengthMultiplier = 2;
    // Without parentheses - multiplication happens first
    int damage1 = baseDamage + weaponBonus * strengthMultiplier;
    cout << "Damage without parentheses: " << damage1 << endl;
    // With parentheses - addition happens first
    int damage2 = (baseDamage + weaponBonus) * strengthMultiplier;
    cout << "Damage with parentheses: " << damage2 << endl;
    // Complex expression with multiple operators
    int level = 5;
    int experience = 100;
    bool isAdvanced = level > 3 && experience >= 50 * 2;
    cout << "Advanced player: " << (isAdvanced ? "Yes" : "No") << endl;

    int result = 5 + 3 * 2 > 10 && 4 - 1 < 5;
    cout << result << endl;
    return 0;
}