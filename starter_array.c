#include <stdio.h>

int main(){
    int arr[100][100], i, j, n, max, min;
    scanf("%d",&n);
    for (i = 0;i < n; i++) {
        for(j = 0;j < n;j++){
            printf("arr[%d][%d] = ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}