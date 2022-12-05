//Да се напише програма која за матрица внесена од тастатура ќе ја пресмета
//разликата на збирот на елементите на непарните колони и збирот на
//елементите на парните редици. Матрицата не мора да биде квадратна

#include <stdio.h>

int main(){
    int arr[100][100], i, j, m, n, sum_kol = 0, sum_red = 0;
    scanf("%d %d", &m, &n);
    for (i = 0;i < m; i++) {
        for(j = 0;j < n;j++){
            printf("arr[%d][%d] = ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0;i < m; i++) {
        for(j = 0;j < n;j++){
            if ((j + 1) % 2)
                sum_kol += arr[i][j];
            if (!((i + 1) % 2))
                sum_red += arr[i][j];
        }
    }
    printf("%d", sum_kol - sum_red);
    return 0;
}