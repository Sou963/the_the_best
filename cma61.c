#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User {
    char username[20];
    char password[20];
};

struct Post {
    char image[50];
    char caption[100];
};

int main() {
    int choice, i, n = 0, flag = 0;
    struct User user[100];
    struct Post post[100];

    while (1) {
        printf("Welcome to ImageBook.com!\n");
        printf("1. Create an account\n");
        printf("2. Log in\n");
        printf("3. Post an image\n");
        printf("4. Exit\n");
        printf("Enter your choice\n: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter username: ");
                scanf("%s", user[n].username);
                printf("Enter password: ");
                scanf("%s", user[n].password);
                printf("Account created successfully!\n\n");
                n++;
                break;

            case 2:
                flag = 0;
                char temp_username[20], temp_password[20];
                printf("\nEnter username: ");
                scanf("%s", temp_username);
                printf("Enter password: ");
                scanf("%s", temp_password);

                for (i = 0; i < n; i++) {
                    if (strcmp(temp_username, user[i].username) == 0 && strcmp(temp_password, user[i].password) == 0) {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 1) {
                    printf("Logged in successfully!\n\n");
                }
                else {
                    printf("Invalid username or password.\n\n");
                }
                break;

            case 3:
                if (flag == 1) {
                    printf("\nEnter image filename: ");
                    scanf("%s", post[n].image);
                    printf("Enter caption: ");
                    scanf(" %[^\n]s", post[n].caption);
                    printf("Image posted successfully!\n\n");
                    n++;
                }
                else {
                    printf("You need to log in to post an image.\n\n");
                }
                break;

            case 4:
                printf("Thanks for using ImageBook.com!\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    }

    return 0;
}
