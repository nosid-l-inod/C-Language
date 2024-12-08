#include <stdio.h>
#include <stdlib.h>

// Define the Car struct
struct Car {
    int id;
    char make[50];
    char model[50];
    int year;
    float price;
};

int main() {
    FILE *file = fopen("cars.dat", "rb+");  // Open file for reading and writing
    if (!file) {
        file = fopen("cars.dat", "wb+");  // Create the file if it doesn't exist
        if (!file) {
            perror("Error opening file");
            return 1;
        }
    }

    int nextId = 1;  // Initialize unique ID

    // Get last ID if file has data
    fseek(file, 0, SEEK_END);
    if (ftell(file) > 0) {  // If the file is not empty
        struct Car lastCar;
        fseek(file, -sizeof(struct Car), SEEK_END);  // Move to last record
        fread(&lastCar, sizeof(struct Car), 1, file);
        nextId = lastCar.id + 1;  // Set nextId to the next number
    }

    int choice;
    do {
        printf("\n1. Add a car\n");
        printf("2. Show all cars\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            struct Car car;
            car.id = nextId++;  // Assign and increment ID
            printf("Enter make: ");
            scanf("%s", car.make);
            printf("Enter model: ");
            scanf("%s", car.model);
            printf("Enter year: ");
            scanf("%d", &car.year);
            printf("Enter price: ");
            scanf("%f", &car.price);

            fwrite(&car, sizeof(struct Car), 1, file);  // Save to file
            printf("Car added with ID %d!\n", car.id);
        } else if (choice == 2) {
            struct Car car;
            rewind(file);  // Go to start of the file
            printf("\nID\tMake\tModel\tYear\tPrice\n");
            printf("---------------------------------\n");
            while (fread(&car, sizeof(struct Car), 1, file)) {
                printf("%d\t%s\t%s\t%d\t%.2f\n", car.id, car.make, car.model, car.year, car.price);
            }
        } else if (choice != 3) {
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    fclose(file);  // Close the file
    return 0;
}
