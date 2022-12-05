// Да се напише програма која за матрица внесена од тастатура ќе ги замени
//елементите од главната дијагонала со разликата од максималниот и
//минималниот елемент во матрицата. Резултантната матрица да се испечати
//на екран.

#include <stdio.h>

int main(){
    int arr[100][100], i, j, n, max, min;
    scanf("%d",&n);
    for (i = 0;i < n; i++) {
        for(j = 0;j < n;j++){
            printf("arr[%d][%d] = ", i,j);
            scanf("%d", &arr[i][j]);
            if (i == 0 && j == 0) {
                min = max = arr[i][j];
            } else if (arr[i][j] > max) {
                max = arr[i][j];
            } else if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    for (i = 0; i < n; ++i) {
        arr[i][i] = max - min;
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}