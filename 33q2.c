#include <stdio.h>

int main() {
    int n, i, key;
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);
    for(i=n-1;i>=0 && arr[i]>key;i--)
        arr[i+1]=arr[i];
    arr[i+1]=key;
    n++;
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
