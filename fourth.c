#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Take input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Print message
    printf("Hello \"%s\", you are %d years old.\n", name, age);



/// converter hours into  minutes
  
    int hours, minutes;

    printf("Enter number of hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf("%d minutes in %d hours\n", minutes, hours);


    ///  power 

    int  x, n;
    int result;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    result = pow(x, n);

    printf("%d\n", result);

    return 0;
}


