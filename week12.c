#include <stdio.h>

int main(void) {
   //create an array of integers
   int arr[10];
    
   // Initialize the first element of the arrays with 999
   arr[0]=999;

   // Initialize the last element of the arrays with 111
   arr[9]=111;

   //print the first and the last elements of the array
   printf("First %d; Last %d\n", arr[0], arr[9])

   //Initialize an array with an loop
   for(int i = 0; i < 10; i++){
        arr[i] = 1;
   }

   int val = 10;
   for(int i = 0; i < 100; i++){
    arr[i] = val;
    val += 10;
   }
   int val = randi;
   for(int i = 0; i < 100; i++){
    arr[i] = val;
   }
   //Print an array
   for (int i = 0; i < 10; i++){
    printf("%d", arr[i]);
   }
   puts("");
    return 0;
}