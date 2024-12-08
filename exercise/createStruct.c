// Date: 24-11-2024
// Description: Struct exercise

#include <stdio.h>
#include <string.h>

typedef struct {
    char username[50];
    char password[50];
    int id;
} User;

int main() {
    User user1;
    
    printf("Type the username: ");
    fgets(user1.username, sizeof(user1.username), stdin);
    user1.username[strlen(user1.username) - 1] = '\0';
    
    printf("Type the password: ");
    fgets(user1.password, sizeof(user1.password), stdin);
    user1.password[strlen(user1.password) - 1] = '\0';

    printf("Type your id: ");
    scanf("%d", &user1.id);

    return 0;
}