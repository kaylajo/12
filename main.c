#include <stdio.h>
#include <string.h>   

struct student {
    int id;
    char name[20];
    double grade;
};

int main(void) {
    struct student s = { 111111, "Yewon", 3.5 };

    s.id = 123456;
    strcpy(s.name, "Juyeop");  
    s.grade = 4.2;

    printf("ID : %d\n", s.id);
    printf("name : %s\n", s.name);
    printf("grade : %f\n", s.grade);

    return 0;
}