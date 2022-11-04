# include<stdio.h>
# include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array a){
    printf("Elements of the array are: ");
    for(int i = 0; i < a.length; i++){
        printf("%d ",*(a.A+i));
    }
}

int main(){
    struct Array arr;
    printf("Tell me the size of array: ");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;
    int i;
    printf("Number of elements: ");
    scanf("%d", &arr.length);
    printf("Enter the elements: \n");
    for(i = 0; i < arr.length; i++){
        scanf("%d",&arr.A[i]);
    }
    display(arr);
}
