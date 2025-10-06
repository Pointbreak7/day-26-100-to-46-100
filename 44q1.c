#include <stdio.h>

int main() {
    char str[100];
    int space=0,digit=0,special=0;
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ') space++;
        else if(str[i]>='0' && str[i]<='9') digit++;
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) continue;
        else special++;
    }
    printf("Spaces: %d, Digits: %d, Special Characters: %d", space,digit,special);
    return 0;
}
