#include <stdio.h>
#include <string.h>

int main() {

    // Convert to lowercase
    char a[] = "CRISTIANO ROLANDO";
    strlwr(a);
    printf("\nTo lowercase: %s\n", a);

    // Convert to uppercase
    char b[] = "lionel messias";
    strupr(b);
    printf("\nTo uppercase: %s\n", b);

    // Concat string
    printf("\nConcat: %s\n", strcat(a, b));

    // Replace first n char with another n times
    printf("\nChange: %s\n", strnset(a, 'k', 2));

    // Reverse a string
    char nome[] = "Lebron James";
    strrev(nome);
    printf("\nLebron James espelhado: %s\n", nome);

    // String length
    int length = strlen(nome);
    printf("\nLength: %d", length);
    
    return 0;
}