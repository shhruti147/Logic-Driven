#include <stdio.h>
//#include <stdlib.h> // For exit()

int main() {
    // 1. Initialize to -1 so it doesn't match any valid menu option (1, 2, 0)
    int choice = -1; 
    int num;

    // 2. while(1) keeps the program running forever until we tell it to 'break'
    while (1) {
        printf("\n--- MATH MENU ---\n");
        printf("1. Check Odd/Even\n");
        printf("2. Calculate Square\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice); // Choice becomes the user's input

        // 3. Process the choice
        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num % 2 == 0) printf("%d is Even\n", num);
                else printf("%d is Odd\n", num);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Square is: %d\n", num * num);
                break;

            case 0:
                printf("Exiting program...\n");
                return 0;
                // 4. This 'exit(0)' or a 'break' is the only way to stop while(1)
                //exit(0); 

            default:
                // Handles any input that isn't 1, 2, or 0
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
