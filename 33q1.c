#include <stdio.h>

int main() {
    int n, key, l, r, mid, found=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);
    l=0; r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==key){found=1; break;}
        else if(arr[mid]<key) l=mid+1;
        else r=mid-1;
    }
    if(found) printf("Found");
    else printf("Not Found");
    return 0;
}
