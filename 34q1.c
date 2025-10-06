#include <stdio.h>

int main() {
    int n, pos, val, i;
    scanf("%d", &n);
    int arr[n+1];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d %d",&pos,&val); // position starts from 1
    for(i=n-1;i>=pos-1;i--)
        arr[i+1]=arr[i];
    arr[pos-1]=val;
    n++;
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
