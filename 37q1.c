#include <stdio.h>

int main() {
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int mat[m][n], rowSum[m];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    for(i=0;i<m;i++){
        rowSum[i]=0;
        for(j=0;j<n;j++)
            rowSum[i]+=mat[i][j];
    }
    for(i=0;i<m;i++) printf("Row %d sum = %d\n", i+1, rowSum[i]);
    return 0;
}
