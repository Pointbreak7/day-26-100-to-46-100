#include <stdio.h>

int main() {
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    return 0;
}
