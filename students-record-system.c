#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s[100];
    int choice, count = 0, i, searchRoll;

    while (1) {
        printf("\n--- Student Record Management ---\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Roll Number: ");
            scanf("%d", &s[count].roll);
            printf("Enter Name: ");
            scanf("%s", s[count].name);
            printf("Enter Marks: ");
            scanf("%f", &s[count].marks);
            count++;
            printf("Student Added Successfully!\n");
        }

        else if (choice == 2) {
            for (i = 0; i < count; i++) {
                printf("\nRoll: %d", s[i].roll);
                printf("\nName: %s", s[i].name);
                printf("\nMarks: %.2f\n", s[i].marks);
            }
        }

        else if (choice == 3) {
            printf("Enter Roll Number to Search: ");
            scanf("%d", &searchRoll);
            for (i = 0; i < count; i++) {
                if (s[i].roll == searchRoll) {
                    printf("\nStudent Found!");
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %.2f\n", s[i].marks);
                    break;
                }
            }
            if (i == count)
                printf("Student Not Found!\n");
        }

        else if (choice == 4) {
            break;
        }

        else {
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}