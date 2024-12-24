#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter name: ");
        getchar(); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    printf("Name\t\tRoll No\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
