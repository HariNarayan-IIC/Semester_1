//Create a program that converts temperatures between Celsius and Fahrenheit 
//using enums to represent the temperature scales

#include <stdio.h>

// Enum to represent temperature scales
enum TemperatureScale {
    CELSIUS,
    FAHRENHEIT
};

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to perform temperature conversion
float convert_temperature(float value, enum TemperatureScale from_scale, enum TemperatureScale to_scale) {
    if (from_scale == to_scale) {
        return value;
    }

    if (from_scale == CELSIUS && to_scale == FAHRENHEIT) {
        return celsius_to_fahrenheit(value);
    } else if (from_scale == FAHRENHEIT && to_scale == CELSIUS) {
        return fahrenheit_to_celsius(value);
    } else {
        printf("Invalid temperature scales\n");
        return 0.0;
    }
}

int main() {
    printf("Temperature Converter\n");

    float value;
    printf("Enter the temperature value: ");
    scanf("%f", &value);

    printf("\nSelect the source temperature scale:\n");
    printf("0 - Celsius\n");
    printf("1 - Fahrenheit\n");

    int from_scale;
    printf("Enter the source temperature scale: ");
    scanf("%d", &from_scale);

    printf("\nSelect the target temperature scale:\n");
    printf("0 - Celsius\n");
    printf("1 - Fahrenheit\n");

    int to_scale;
    printf("Enter the target temperature scale: ");
    scanf("%d", &to_scale);

    float result = convert_temperature(value, (enum TemperatureScale)from_scale, (enum TemperatureScale)to_scale);
    printf("\nResult: %.2f %s is equal to %.2f %s\n", value,
           from_scale == CELSIUS ? "Celsius" : "Fahrenheit",
           result,
           to_scale == CELSIUS ? "Celsius" : "Fahrenheit");

    return 0;
}
