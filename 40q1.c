#include <stdio.h>

int main() {
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++) scanf("%d",&mat[i][j]);
    for(i=0;i<m;i++){
        for(j=0;j<=i && j<n;j++)
            printf("%d ", mat[i-j][j]);
    }
    for(i=1;i<n;i++){
        for(j=0;j<m && i+j<n;j++)
            printf("%d ", mat[m-1-j][i+j]);
    }
    return 0;
}
