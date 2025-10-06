#include <stdio.h>

int main() {
    int m,n,p,i,j,k;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    scanf("%d",&p);
    int b[n][p], c[m][p];
    for(i=0;i<n;i++)
        for(j=0;j<p;j++) scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<p;j++){
            c[i][j]=0;
            for(k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    for(i=0;i<m;i++){
        for(j=0;j<p;j++) printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
