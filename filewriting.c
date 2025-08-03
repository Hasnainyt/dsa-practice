#include <stdio.h>
#include <string.h>

struct student
{

    char name[100];
    int age;
    int roll;
};

int main()
{
    FILE *fptr;
    FILE *fptr2;
    char tempo[50];
    fptr = fopen("has.txt", "r");
    char str[100];
    while (fgets(str, 100, fptr) != NULL)
    {
        printf("%s \n", str);
    }
    fclose(fptr);

    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("enter details of students \n ");
        scanf("%s%d%d", s[i].name, &s[i].age, &s[i].roll);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("name of student %d is %s\nage is %d\n class is %d\n", i, s[i].name, s[i].age, s[i].roll);
    }
    for (int i = 0; i < 3 - 1; i++)
    {

        if (s[i].age == s[i + 1].age)
        {
            printf("age matched of student %dwith%d", i, i + 1);
        }
    }

    // file write

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            if (s[j].age < s[j + 1].age)
            {
                int temp = s[j].age;
                s[j].age = s[j + 1].age;
                s[j + 1].age = temp;

                strcpy(tempo, s[j].name);
                strcpy(s[j].name, s[j + 1].name);
                strcpy(s[j + 1].name, tempo);

                int temp = s[j].roll;
                s[j].roll = s[j + 1].roll;
                s[j + 1].roll = temp;
            }
        }
    }
    fptr = fopen("has.txt", "a");
    for (int i = 0; i < 3; i++)
    {

        fprintf(fptr, "\n name is %s\nage is %d\n roll is %d\n", s[i].name, s[i].age, s[i].roll);
    }
    fclose(fptr);

    fptr2 = fopen("destination.txt", "a");
    char str2[100];
    /*for (int i=0; i <3; i++)
        {

        fprintf(fptr2,"\n name is %s\nage is %d\n roll is %d\n",s[i].name,s[i].age,s[i].roll);
        }*/
    while (fgets(str2, 100, fptr) != NULL)
    {

    } // fprintf(fptr2,"%s",str2);

    fclose(fptr2);

    return 0;
}
