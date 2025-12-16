#include <iostream>
#include <iomanip> // For formatting output

using namespace std;

// Constants for conversion formulas
const double FREEZING_POINT_C = 0.0;    // Freezing point of water in Celsius
const double FREEZING_POINT_F = 32.0;   // Freezing point of water in Fahrenheit
const double ABSOLUTE_ZERO_C = -273.15; // Absolute zero in Celsius
const double F_TO_C_FACTOR = 5.0 / 9.0; // Multiplication factor to convert F to C
const double C_TO_F_FACTOR = 9.0 / 5.0; // Multiplication factor to convert C to F

// Convert Celsius to Kelvin
double celsiusToKelvin(double celsius)
{
    if (celsius < -273.15)
    {
        std::cout << "Temperature in degree celcius cannot be below -273.15 degrees." << std::endl;
    }
    return celsius - ABSOLUTE_ZERO_C;
}

// Convert Kelvin to Celsius
double kelvinToCelsius(double kelvin)
{

    if (kelvin < 0.0)
    {
        std::cout << "Temperature in kelvin cannot be below 0." << std::endl;
    }
    return kelvin + ABSOLUTE_ZERO_C;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return F_TO_C_FACTOR * fahrenheit;
}

double celsiusToFahrenheit(double celsius)
{
    if (celsius < -273.15)
    {
        std::cout << "Temperature in degree celcius cannot be below -273.15 degrees." << std::endl;
    }
    return C_TO_F_FACTOR * celsius;
}

// Convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit)
{
    // First convert to Celsius, then to Kelvin
    double celsius = fahrenheitToCelsius(fahrenheit);
    return celsiusToKelvin(celsius);
}

// Convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin)
{
    if (kelvin < 0.0)
    {
        std::cout << "Temperature in kelvin cannot be below 0." << std::endl;
    }
    // First convert to Celsius, then to Fahrenheit
    double celsius = kelvinToCelsius(kelvin);
    return celsiusToFahrenheit(celsius);
}

void displayTemperatureFacts(double celsius)
{
    cout << "\nInteresting facts about this temperature:" << endl;

    if (celsius < ABSOLUTE_ZERO_C)
    {
        cout << "This temperature is below absolute zero, which is physically impossible!" << endl;
    }
    else if (celsius == ABSOLUTE_ZERO_C)
    {
        cout << "This is absolute zero, the lowest possible temperature in the universe!" << endl;
    }
    else if (celsius < FREEZING_POINT_C)
    {
        cout << "This temperature is below the freezing point of water." << endl;
    }
    else if (celsius == FREEZING_POINT_C)
    {
        cout << "This is the freezing point of water at standard pressure." << endl;
    }
    else if (celsius < 20.0)
    {
        cout << "This is a cool temperature." << endl;
    }
    else if (celsius <= 30.0)
    {
        cout << "This is a comfortable room temperature." << endl;
    }
    else if (celsius <= 40.0)
    {
        cout << "This is a hot temperature." << endl;
    }
    else if (celsius <= 100.0)
    {
        cout << "This is a very hot temperature." << endl;
    }
    else if (celsius == 100.0)
    {
        cout << "This is the boiling point of water at standard pressure." << endl;
    }
    else
    {
        cout << "This is above the boiling point of water." << endl;
    }
}

int main()
{
    // Display program header
    cout << "=======================================" << endl;
    cout << "       TEMPERATURE CONVERTER           " << endl;
    cout << "=======================================" << endl;
    cout << "This program converts temperatures between" << endl;
    cout << "Celsius, Fahrenheit, and Kelvin." << endl
         << endl;

    // Variable to control the program loop
    bool keepRunning = true;

    while (keepRunning)
    {
        // Display the menu options
        cout << "\nTemperature Conversion Options:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Fahrenheit to Kelvin" << endl;
        cout << "6. Kelvin to Fahrenheit" << endl;
        cout << "7. Exit Program" << endl;
        cout << "\nEnter your choice (1-7): ";

        // Get user's menu choice
        int choice;
        cin >> choice;

        // Variable for temperature input and result
        double inputTemp, result;

        // Process the user's choice
        switch (choice)
        {
        case 1: // Celsius to Fahrenheit
            cout << "Enter temperature in Celsius: ";
            cin >> inputTemp;
            result = celsiusToFahrenheit(inputTemp);
            cout << fixed << setprecision(2);
            cout << inputTemp << " °C = " << result << " °F" << endl;
            displayTemperatureFacts(inputTemp);
            break;

        case 2: // Fahrenheit to Celsius
            cout << "Enter temperature in Fahrenheit: ";
            cin >> inputTemp;
            result = fahrenheitToCelsius(inputTemp);
            cout << fixed << setprecision(2);
            cout << inputTemp << " °F = " << result << " °C" << endl;
            displayTemperatureFacts(result);
            break;

            // More cases will go here
        case 3: // Celsius to Kelvin
            cout << "Enter temperature in Celsius: ";
            cin >> inputTemp;
            result = celsiusToKelvin(inputTemp);
            cout << fixed << setprecision(2);
            cout << inputTemp << " °C = " << result << " K" << endl;
            displayTemperatureFacts(inputTemp);
            break;

        case 4: // Kelvin to Celsius
            cout << "Enter temperature in Kelvin: ";
            cin >> inputTemp;
            result = kelvinToCelsius(inputTemp);
            cout << fixed << setprecision(2);
            cout << inputTemp << " K = " << result << " °C" << endl;
            displayTemperatureFacts(result);
            break;

        case 5: // Fahrenheit to Kelvin
            cout << "Enter temperature in Fahrenheit: ";
            cin >> inputTemp;
            result = fahrenheitToKelvin(inputTemp);
            cout << fixed << setprecision(2);
            cout << inputTemp << " °F = " << result << " K" << endl;
            displayTemperatureFacts(fahrenheitToCelsius(inputTemp));
            break;

        case 6: // Kelvin to Fahrenheit
            cout << "Enter temperature in Kelvin: ";
            cin >> inputTemp;
            result = kelvinToFahrenheit(inputTemp);
            cout << fixed << setprecision(2);
            cout << inputTemp << " K = " << result << " °F" << endl;
            displayTemperatureFacts(kelvinToCelsius(inputTemp));
            break;

        case 7: // Exit
            keepRunning = false;
            cout << "Thank you for using the Temperature Converter!" << endl;
            break;

        default:
            cout << "Invalid choice! Please select a number between 1 and 7." << endl;
            break;
        }
    }
}