/******************************************************************************

Creating, Updating and accessing a  2D array of integers in heap.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 3,c = 4; // Number of rows and columns
    int **A = (int **)malloc(sizeof(int*)*r);
    *A = (int*) malloc(sizeof(int)*c);
    *(A + 1) = (int*) malloc(sizeof(int)*c);
    *(A + 2) = (int*) malloc(sizeof(int)*c);
    
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            *(*(A + i) + j) = i + j + 1;
        }
    }
    
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d ",*(*(A + i) + j));
        }
        printf("\n");
    }
    
    for(int i = 0; i < r; i++){
        free(*(A + i));
    }
    
    free(A);
    
    return 0;
}
