#include <stdio.h>

int main() {
    char str[100];
    fgets(str,100,stdin);
    int freq[26]={0}, i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z') freq[str[i]-'a']++;
    }
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z' && freq[str[i]-'a']>1){
            printf("First repeating lowercase: %c", str[i]);
            break;
        }
    }
    return 0;
}
