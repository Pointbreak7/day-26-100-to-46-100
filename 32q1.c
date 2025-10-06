#include <stdio.h>

int main() {
    int n1, n2, i;
    scanf("%d %d", &n1, &n2);
    int a[n1], b[n2], merged[n1+n2];
    for(i=0;i<n1;i++) scanf("%d",&a[i]);
    for(i=0;i<n2;i++) scanf("%d",&b[i]);
    for(i=0;i<n1;i++) merged[i]=a[i];
    for(i=0;i<n2;i++) merged[n1+i]=b[i];
    for(i=0;i<n1+n2;i++) printf("%d ",merged[i]);
    return 0;
}
