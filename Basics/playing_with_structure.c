/*************************************************************************************

In this program I'm playing with structures.
Here I am Creating, accessing, modifying, and returning members of a structure in diferent ways.

*************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char Name[20];
    int cls;
    char academics[15];
};

// Function describing how to pass a structure to a function as call by value 
void print_student_info(struct Student S)
{
    printf("Student's name: %s\n", S.Name);
    printf("%s is studying in class: %d\n", S.Name, S.cls);
    printf("%s's academic record: %s\n", S.Name, S.academics);
}

//Accessing structure as pass by address and modifying it
void update_info(struct Student *S, int n)
{
    S->cls = 11;
    char A[15] = "Average";
    for (int j = 0;j<n;j++)
    {
        S->academics[j] = A[j];
    }
} 

// Function that returns a sructure
struct Student student_info(char N[], int C, char A[], int S_N, int S_A)
{
    struct Student S;
    for (int i = 0;i<S_N;i++)
    {
        S.Name[i] = N[i];
    }
    
    S.cls = C;
    
    for (int j = 0;j<S_A;j++)
    {
        S.academics[j] = A[j];
    }
    return S;
}

// Function that creates a structure of type Student in heap memory and returns pointer to it
struct Student *struct_from_heap()
{
    struct Student *S;
    S = (struct Student *) malloc(sizeof(struct Student));
    char N[] = "Prithvi";
    int clas = 12;
    char P[] = "Remarkable";
    
    for (int i = 0; i<(sizeof(N)/sizeof(char)); i++)
    {
        S->Name[i] = N[i];
    }
    
    S->cls = clas;
    for (int j = 0; j<(sizeof(P)/sizeof(char)); j++)
    {
        S->academics[j] = P[j];
    }
    
    return S;
}

int main()
{
    
    //instanstiating student using a function that returns a structure
    struct Student student = student_info("Ramesh", 10, "Good", 20, 15); 
    
    //Printing student's information using a function which access a structure as Call by value
    printf("Values of Student1 before modification\n\n");
    print_student_info(student);
    printf("\n\n");
    
    //Modifying student's information using a function which access a structure as call by address
    update_info(&student, 15); // Call by address
    printf("Values of student after modification\n\n");
    print_student_info(student);
    printf("\n\n");
    
    printf("Accessing a structure of type Student from heap memory\n\n");
    struct Student *ptr = struct_from_heap();
    printf("Student's name: %s\n", ptr->Name);
    printf("%s is studying in class: %d\n", ptr->Name, ptr->cls);
    printf("%s's academic record: %s\n", ptr->Name, ptr->academics);
    return 0;
}
