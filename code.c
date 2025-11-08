#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double temperature;
    double init_temp;
    char choice;
    
    printf("Welcome to Temperature Converter\n");
    
    printf("Input temperature value: ");
    scanf("%lf", &init_temp);
    
    printf("Is this in Celsius or Fahrenheit? (C/F): ");
    scanf(" %c", &choice);  // space skips newline
    
    switch (choice) {
        case 'C':   // Convert Celsius → Fahrenheit
        case 'c':
            temperature = (9.0/5.0) * init_temp + 32;
            printf("Fahrenheit = %.2lf°F\n", temperature); //Fahrenheit
            printf("Celsius = %.2lf°C\n", init_temp); //Celsius
            if (temperature > 38.0)
            {
                printf("Warning! High body temperature.\n");
            }
            break;
            
        case 'F':   // Convert Fahrenheit → Celsius
        case 'f':
            temperature = (5.0/9.0) * (init_temp - 32);
            printf("Fahrenheit = %.2lf°F\n", init_temp); //Fahrenheit
            printf("Celsius = %.2lf°C\n", temperature); //Celsius
            if (temperature > 38.0)
            {
                printf("Warning! High body temperature.\n");
            }
            break;
            
        default:
            printf("Invalid choice. Please use C or F.\n");
            
            
    }
    return EXIT_SUCCESS;


}