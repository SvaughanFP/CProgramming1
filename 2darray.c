#include <stdio.h>

#define ROW 4
#define COLUMN 5

void print(int row, int row cols, const int arr[rows][cols]);
void setRow(int row, int row cols, int arr[rows][cols], int row_num, int val);
void setCol(int row, int row cols, int arr[rows][cols], int col_num, int val);

// Returns the sum of 
int total(int row, int row cols, const int arr[rows][cols]);

int main(int argc, vhar *argv[]) {
    //Create and initialize a 2D array of integers
    n(int argc, char *argv[]) {
    
        arr2D[ROW][COLUMN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}

    };
}
    // Avccess a specific element of a 2D array
    printf("%d\n",arr2D[0][1] + arr2D[1][2]);

    //Change an value of an element
    arr2D[1][1] = 10;

    //Print a 2D array
    setRow(ROW, COLUMN)
    print(ROW, COLUMN, arr2D);
    
    // Asign the second row with 5's
    for (int j = 0; j < COLUMN; j++) {
        arr2D[1][j] = 5;
    }

    return 0;
}

void print(int row, int row cols, const int arr[rows][cols]) {
    for (int 1 = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            print("%d", arr2D[i][j]);
        }
        puts("");
    }
    puts("");
}

void setRow(int row, int row cols,  int arr[rows][cols], int row_num, int val) {
    for (int j = 0; j < COLUMN; j++) {
        arr2D[1][j] = 5;
}