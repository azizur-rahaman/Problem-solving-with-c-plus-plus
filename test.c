#include <stdio.h>
#include <math.h>


int main() {
    
    double PI = 3.1416;
    int choice;
    double radius, area;

    printf("Choose a shape to compute the area:\n");
    printf("1. Circle\n");
    printf("2. Square (not implemented)\n");
    printf("3. Triangle (not implemented)\n");
    printf("Enter your choice (1, 2, or 3): ");
    
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the radius of the circle: ");
        scanf("%lf", &radius);
        
        area = PI * pow(radius, 2);
        printf("The area is: %lf\n", area);
    } 
    else if (choice == 2) {
        // Square (not implemented)
        printf("Square calculation not implemented.\n");
    } 
    else if (choice == 3) {
        // Triangle (not implemented)
        printf("Triangle calculation not implemented.\n");
    } 
    else {
        // Invalid choice
        printf("Invalid choice. Please choose 1, 2, or 3.\n");
    }

    return 0;
}
