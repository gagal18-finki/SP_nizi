//Да се напише програма која за квадратна матрица внесена од тастатура ќе
//испечати на екран дали таа е симетрична во однос на главната дијагонала.
#include <stdio.h>

int main(){
    int arr[100][100], i, j, n;
    short flag_sim = 1;
    scanf("%d",&n);
    for (i = 0;i < n; i++) {
        for(j = 0;j < n;j++){
            printf("arr[%d][%d] = ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n;j++) {
            printf("%d\t", arr[i][j]);
            if(arr[i][j] != arr[j][i]){
                flag_sim = 0;
            }
        }
        printf("\n");
    }
    if (flag_sim)
        printf("Matricata e SIMETRICHNA vo odnos na glavnata dijagonala\n");
    else
        printf("Matricata ne e SIMETRICHNA vo odnos na glavnata dijagonala\n");
    return 0;
}