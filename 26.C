#include <stdio.h>

struct student {
    int id;
    char name[20];
    float marks;
};

int main() {

    struct student s1;

    printf("Enter id name marks:\n");
    scanf("%d %s %f",&s1.id,s1.name,&s1.marks);

    printf("Student details:\n");
    printf("%d %s %.2f",s1.id,s1.name,s1.marks);
}
