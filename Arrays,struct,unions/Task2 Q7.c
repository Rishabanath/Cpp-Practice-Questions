//7. Create a structure student having data members to store roll number, name of student, name of three subjects, max marks and minimum marks. Declare a structure variable of student provide facilities to input data in data member and display result of student.

#include <stdio.h>
// #include <string.h>

typedef struct student {
    char name[10];
    int roll,science,math,english,max,min;
}student;

student read();
void write(student c);

int main() {
    student s[5];
    char ch='y';
    int i=0;
    while(ch=='y')
    {
        s[i]=read();
        printf("\nContinue(y/n)?: ");
        getchar();
        scanf("%c",&ch);
        i++;
    }
    i--;
    for(;i>=0;i--)
    write(s[i]);

    return 0;
}

student read()
{
    student n1;
    printf("\nEnter name: ");
    scanf("%s", &n1.name);
    printf("\nEnter roll: ");
    scanf("%d", &n1.roll);
    printf("\nEnter math mark: ");
    scanf("%d", &n1.math);
    printf("\nEnter scienc mark: ");
    scanf("%d", &n1.science);
    printf("\nEnter english mark: ");
    scanf("%d", &n1.english);
    return(n1);
}

void write(student write)
{
    printf("\n======================RESULT===========================");
    printf("\nName: %s",write.name);
    printf("\nRoll: %d",write.roll);
    printf("\nMaths: %d",write.math);
    printf("\nScience: %d",write.science);
    printf("\nEnglish: %d",write.english);
    printf("\nMax mark: %d",((write.math>write.science)?((write.math>write.english)?write.math:write.english):((write.english<write.science)?write.science:write.english)));
    printf("\nMin mark: %d",((write.math<write.science)?((write.math<write.english)?write.math:write.english):((write.english>write.science)?write.science:write.english)));
    printf("\n=================================================");
}