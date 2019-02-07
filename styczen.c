#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


// STYCZEN

//1.1
/*
typedef struct Student Student;

struct Student
{
    int Age;
    int Height;
    int Semester;
};


Student* Create(int age, int height, int semester) {
    Student * student = (Student*)malloc(sizeof(Student));
    student->Age = age;
    student->Height = height;
    student->Semester = semester;
    return student;
}
void printStudent(Student *s) {
    printf("Age= %d Height= %d Semester= %d\n", s->Age, s->Height, s->Semester);
}

int areEqual(Student *s1, Student *s2){
    if ((s1->Age == s2->Age)&&(s1->Height == s2->Height)&&(s1->Semester == s2->Semester)){
        printf("True");
    } else {
        printf("False");
    }
}

int main(){
    Student *s = Create(25, 180, 5);
    Student *f = Create(25, 198, 1);
    printStudent(s);
    printStudent(f);
    areEqual(s,f);
    free(s);
    free(f);
}
*/
