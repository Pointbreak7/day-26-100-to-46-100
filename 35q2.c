#include <stdio.h>

int main() {
    int n, k, i, temp;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    k=k%n;
    int rotated[n];
    for(i=0;i<n;i++)
        rotated[(i+k)%n]=arr[i];
    for(i=0;i<n;i++) printf("%d ",rotated[i]);
    return 0;
}
