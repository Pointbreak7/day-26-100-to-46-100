#include <stdio.h>

int main() {
    int n, freq[10]={0}, max=0, digit, i;
    scanf("%d",&n);
    while(n>0){
        digit = n%10;
        freq[digit]++;
        n/=10;
    }
    for(i=0;i<10;i++){
        if(freq[i]>max) max=freq[i];
    }
    for(i=0;i<10;i++){
        if(freq[i]==max){
            printf("Most frequent digit: %d",i);
            break;
        }
    }
    return 0;
}
