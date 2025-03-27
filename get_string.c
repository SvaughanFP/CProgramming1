#include <stdio.h>

#include<string.h>

#define SIZE 1000

int main(void) {
    char str[SIZE];
    puts("Enter the string");
    //Scan the string with scanf
    //scanf("%s", str);

    fgets(str, SIZE -1,stdin);
    
    str[strlen(str) - 1] = '\0';
    //Remove the ending new line
    printf("%ld\n",strlen(str));

    char str2[SIZE];
puts("Enter the string");
    int i = 0;
    char c;
    while((i < SIZE -1) && (c = getchar()) !='\n') {
        str2[i]=c;
        i++;
    }
    str2[i] = '\0';

    printf("The enter string \"%s\"\n",str);
    printf("The second string \"%s\"\n",str2);


    //add the first string to the second
    strcat(str2,str);
    printf("The enter string \"%s\"\n",str);
    printf("The second string \"%s\"\n",str2);

    ctrcpy(str,str2);
    printf("The enter string \"%s\"\n",str);
    printf("The second string \"%s\"\n",str2);





    
    return 0;
}