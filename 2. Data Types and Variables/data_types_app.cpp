#include <iostream>
#include <climits>
#include <string> // For data type limits like INT_MAX

int main()
{
    // Display program header
    std::cout << "=======================================" << std::endl;
    std::cout << "   PRACTICAL DATA TYPE APPLICATION     " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "This program demonstrates appropriate usage of different data types" << std::endl;
    std::cout << "for various kinds of information." << std::endl
              << std::endl;

    // Program sections will go here
    // ------ AGE DATA SECTION ------
    std::cout << "\n------ AGE DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for age information:" << std::endl;

    // Integer type for ages (no fractional years needed)
    int childAge = 8;
    int teenAge = 15;
    int adultAge = 42;

    // Display age information
    std::cout << "Child age: " << childAge << " years" << std::endl;
    std::cout << "Teen age: " << teenAge << " years" << std::endl;
    std::cout << "Adult age: " << adultAge << " years" << std::endl;

    // Show memory usage
    std::cout << "\nAge data memory usage:" << std::endl;
    std::cout << "Size of int (for ages): " << sizeof(int) << " bytes" << std::endl;

    // Demonstrate age calculations
    std::cout << "\nAge calculations:" << std::endl;
    int totalAges = childAge + teenAge + adultAge;
    std::cout << "Total of all ages: " << totalAges << " years" << std::endl;

    int ageOne = 22, ageTwo = 33, ageThree = 43;
    int averageAge = (ageOne + ageTwo + ageThree) / 3;
    std::cout << "Average age of 3 people: " << averageAge << std::endl;
    std::cout << "Age difference calculation: " << ageTwo - ageOne << std::endl;
    std::cout << "My age(NOT): " << 2025 - 2004 << std::endl;

    // ------ PRICE DATA SECTION ------
    std::cout << "\n------ PRICE DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for price information:" << std::endl;

    // Use double for prices (needs decimal precision)
    double coffeePrice = 3.99;
    double laptopPrice = 1299.99;
    double housePrice = 350000.00;

    // Display price information
    std::cout << "Coffee price: $" << coffeePrice << std::endl;
    std::cout << "Laptop price: $" << laptopPrice << std::endl;
    std::cout << "House price: $" << housePrice << std::endl;

    // Show memory usage comparison
    float priceAsFloat = 19.99f;
    double priceAsDouble = 19.99;
    std::cout << "\nPrice storage comparison:" << std::endl;
    std::cout << "Price as float: $" << priceAsFloat << " (uses " << sizeof(float) << " bytes)" << std::endl;
    std::cout << "Price as double: $" << priceAsDouble << " (uses " << sizeof(double) << " bytes)" << std::endl;

    // Simple price calculations
    double totalPrice = coffeePrice + laptopPrice;
    std::cout << "\nPrice calculations:" << std::endl;
    std::cout << "Coffee + Laptop total: $" << totalPrice << std::endl;

    // ------ CHARACTER DATA SECTION ------
    std::cout << "\n------ CHARACTER DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for character information:" << std::endl;

    // Character variables for single characters
    char grade = 'A';
    char symbol = '#';
    char initial = 'J';

    // Display character information
    std::cout << "Student grade: " << grade << std::endl;
    std::cout << "Special symbol: " << symbol << std::endl;
    std::cout << "First initial: " << initial << std::endl;

    // Show how characters relate to numbers (ASCII values)
    std::cout << "\nCharacter to number conversion:" << std::endl;
    std::cout << "Grade '" << grade << "' has ASCII value: " << (int)grade << std::endl;
    std::cout << "Symbol '" << symbol << "' has ASCII value: " << (int)symbol << std::endl;

    // Show memory usage
    std::cout << "\nCharacter data memory usage:" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;

    char firstName = 'A';
    char lastName = 'K';
    std::cout << "Initials with ASCII: " << firstName << " : " << (int)firstName << ".\t" << lastName << " : " << (int)lastName << std::endl;
    char favoriteLetter = 'J';
    std::cout << "Favorite Letter: " << favoriteLetter << std::endl;

    // ------ BOOLEAN DATA SECTION ------
    std::cout << "\n------ BOOLEAN DATA SECTION ------" << std::endl;
    std::cout << "Using boolean data types for true/false information:" << std::endl;

    // Boolean variables for simple flags
    bool isActive = true;
    bool hasPermission = false;
    bool isCompleted = true;

    // Display boolean values (they show as 1 for true, 0 for false)
    std::cout << "User account active: " << isActive << std::endl;
    std::cout << "User has admin permission: " << hasPermission << std::endl;
    std::cout << "Task completed: " << isCompleted << std::endl;

    // Show memory usage
    std::cout << "\nBoolean data memory usage:" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;

    // Simple boolean comparisons
    std::cout << "\nBoolean comparisons:" << std::endl;
    std::cout << "Are both account active AND task completed? ";
    if (isActive == true && isCompleted == true)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    // ------ SIMPLE PRODUCT EXAMPLE ------
    std::cout << "\n------ SIMPLE PRODUCT EXAMPLE ------" << std::endl;
    std::cout << "Combining multiple data types for a product:" << std::endl;

    // Product information using different data types
    int productId = 12345;
    double productPrice = 29.99;
    char productGrade = 'B';
    bool inStock = true;

    // Display product information
    std::cout << "\nProduct Information:" << std::endl;
    std::cout << "Product ID: " << productId << std::endl;
    std::cout << "Price: $" << productPrice << std::endl;
    std::cout << "Quality Grade: " << productGrade << std::endl;
    std::cout << "In Stock: " << inStock << std::endl;

    // Simple calculations
    double salesTax = productPrice * 0.08; // 8% tax
    totalPrice = productPrice + salesTax;

    std::cout << "\nPrice Calculations:" << std::endl;
    std::cout << "Sales tax (8%): $" << salesTax << std::endl;
    std::cout << "Total with tax: $" << totalPrice << std::endl;

    // Memory usage summary
    int totalMemory = sizeof(productId) + sizeof(productPrice) + sizeof(productGrade) + sizeof(inStock);
    std::cout << "\nTotal memory used for this product: " << totalMemory << " bytes" << std::endl;

    int productId2 = 12345;
    double productPrice2 = 14.25;
    char productGrade2 = 'A';
    bool inStock2 = true;

    std::string expensiveProduct;
    if (productPrice2 > productPrice)
        expensiveProduct = "Product 2";
    else
        expensiveProduct = "Product 1";

    std::cout << "Most expensive product is " << expensiveProduct << std::endl;
}
