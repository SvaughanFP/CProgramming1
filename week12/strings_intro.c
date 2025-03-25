#include <studio.h>
#include <ctype.h>

int main(void) {
    // Create a string
    char str[] = "Hello CoP2271!";

    // 1
    // Print the string
    puts("Printing the string with printf");
    printf("%s\n\n",str)

    // 2
    puts("print the string with a loop");
    for (int 1 = 0; str[1] != '\0'; i++) { 
        printf("%c", str[i]);
     }
     puts("\n")

     // 3
     puts("Printing with puts");
     puts(str);
     puts("\n")
    return 0:
}