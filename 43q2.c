#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str,100,stdin);
    int n = 0, flag=1;
    while(str[n] != '\0' && str[n] != '\n') n++;
    for(int i=0;i<n/2;i++){
        if(str[i] != str[n-1-i]) {flag=0; break;}
    }
    if(flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
