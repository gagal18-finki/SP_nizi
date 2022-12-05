//Да се напише програма која за низа чии елементи се внесуваат од тестатура, ќе
//го пресмета збирот на парните елементи, збирот на непарните елементи, како
//и односот помеѓу бројот на парни и непарни елементи. Резултатот да се
//испечати на екран.

#include <stdio.h>

int main(){
    int arr[100], suma_parni = 0, suma_neparni = 0, br_p = 0, br_n = 0, n, i;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            suma_parni += arr[i];
            br_p++;
        }else{
            suma_neparni += arr[i];
            br_n++;
        }
    }
    printf("Suma parni: %d\nSuma neparni: %d\n", suma_parni, suma_neparni);
    printf("Odnos: %.2f\n", (float)br_p / br_n);
    return 0;
}