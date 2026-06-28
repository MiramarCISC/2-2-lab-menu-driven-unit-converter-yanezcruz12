#include "converter.hpp"
#include <iostream>

using namespace std;

double inchesToCentimeters(double inches) {
    return inches * 2.54;   // Converts inches to centimeters.
}

double centimetersToInches(double centimeters) {
    return centimeters / 2.54;   // Converts centimeters to inches.
}

double poundsToKilograms(double pounds) {
    return pounds * 0.453592;   // Converts pounds to kilograms.
}

double kilogramsToPounds(double kilograms) {
    return kilograms / 0.453592;   // Converts kilograms to pounds.
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;   // Converts Fahrenheit to Celsius.
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;   // Converts Celsius to Fahrenheit.
}

bool isValidMenuChoice(int choice) {
    return choice >= EXIT_CHOICE && choice <= CELSIUS_TO_FAHRENHEIT;
    // Returns true if the user selects a valid menu option.
}

bool requiresNonNegativeValue(int choice) {
    return choice >= INCHES_TO_CENTIMETERS && choice <= KILOGRAMS_TO_POUNDS;
    // Returns true for length and weight conversions, which cannot be negative.
}

bool isValidValueForChoice(int choice, double value) {
    // Checks whether the user's input value is valid for the selected conversion.

    if (!isValidMenuChoice(choice)) {
        return false;   // Invalid menu choice.
    }

    if (requiresNonNegativeValue(choice) && value < 0) {
        return false;   // Reject negative values for length and weight conversions.
    }

    return true;   // Input is valid.
}

void printMenu() {
    cout << endl;
    cout << "Unit Converter" << endl;
    cout << endl;
    cout << "1. Inches to centimeters" << endl;
    cout << "2. Centimeters to inches" << endl;
    cout << "3. Pounds to kilograms" << endl;
    cout << "4. Kilograms to pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter choice: ";
}
