#include <stdio.h>

int main() {
    char str[100];
    fgets(str,100,stdin);
    int j=0;
    char result[100];
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') continue;
        result[j++]=ch;
    }
    result[j]='\0';
    printf("%s",result);
    return 0;
}
