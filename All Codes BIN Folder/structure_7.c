// C program to accept student details and display their result using array of structures.
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
} s[5];

int main() {
    int i;
    printf("Enter Student Details:");
    // storing student information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nfor Roll Number %d:\n", s[i].roll);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying student information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll Number: %d\n", i + 1);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
