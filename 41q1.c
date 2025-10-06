#include <stdio.h>

int main() {
    char str[100];
    int count=0;
    fgets(str,100,stdin);
    for(int i=0; str[i]!='\0'; i++) count++;
    printf("Number of characters: %d", count-1); // subtract newline
    return 0;
}
