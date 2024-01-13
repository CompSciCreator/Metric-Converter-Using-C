void displayMenu(); 
void handleConversion(char choice);

double convertKilogramsToPounds(double kilograms);
double convertGramsToOunces(double grams);
double convertKilometersToMiles(double kilometers);
double convertMillimetersToInches(double millimeters);

int main() {
    char choice;

    printf("Welcome To The Metric Conversion App!\n");

    do {
        displayMenu();                  //NOTE: the percent sign is used as the modulus operator. It returns the remainder of a division operation between two numbers. For example, 5 % 2 would return 1, as 5 divided by 2 leaves a remainder of 1. The percent sign is most commonly used to indicate nonexecutable text within the body of a program.
        scanf(" %c", &choice);
        handleConversion(choice);
    } while (choice != '5');

    printf("Exiting The Metric Converter App. Goodbye!\n");
    
    return 0;
}

void displayMenu() {
    printf("Choose a conversion option:\n");
    printf("1. Kilograms to Pound\n");
    printf("2. Grams to Ounces\n");
    printf("3. Kilometers to Miles\n");
    printf("4. Millimeters to Inches\n");
    printf("Type '5' to exit the Application.'\n");

}

void handleConversion(char choice){
    double result;

    switch (choice) { 
        case '1' : 
            printf("Enter the weight in Kilograms: ");
            double kilograms;
            scanf("%lf", &kilograms);
            result = convertKilogramsToPounds(kilograms);
            printf("Result: %lf pounds\n", result);
            break;
        
        case '2' :
            printf("Enter the weight in Grams: ");
            double grams;
            scanf("%lf", &grams);
            result = convertGramsToOunces(grams);
            printf("Result: %lf ounces\n", result);
            break;
        
        case '3' :
            printf("Enter the distance in Kilometers: ");
            double kilometers;
            scanf("%lf", &kilometers);
            result = convertKilometersToMiles(kilometers);
            printf("Result: %lf miles\n",result);
            break;
        
        case '4' : 
            printf("Enter the measurement in millimeters: ");
            double millimeters;
            scanf("%lf","&millimeters");
            result=convertMillimetersToInches(millimeters);
            printf("Result: %lf inchs\n", result);
            break;
        
        case '5' :
            break;
        default:
            printf("Invalid Choice. Please try again.\n");
    }
    
}

    double convertKilogramsToPounds(double kilograms) {

        // Conversion factor: 1 kilogram = 2.20462 pounds

        return kilograms * 2.20462;

    }

    double convertGramsToOunces(double grams) {

        // Conversion factor: 1 gram = 0.03527396 ounces

        return grams * 0.03527396;

    }

    double convertKilometersToMiles(double kilometers) {

        // Conversion factor: 1 kilometer = 0.621371 miles

        return kilometers * 0.621371;

    }

    double convertMillimetersToInches(double millimeters) {

        // Conversion factor: 1 millimeter = 0.0393701 inches

        return millimeters * 0.0393701;

    }


















