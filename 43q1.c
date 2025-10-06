#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    fgets(str,100,stdin);
    int n = 0;
    while(str[n] != '\0' && str[n] != '\n') n++;
    for(int i=0;i<n/2;i++){
        temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    printf("%s\n",str);
    return 0;
}
