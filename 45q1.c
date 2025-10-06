#include <stdio.h>

int main() {
    char str[100], ch;
    int freq=0;
    fgets(str,100,stdin);
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch) freq++;
    }
    printf("Frequency of '%c' = %d", ch, freq);
    return 0;
}
