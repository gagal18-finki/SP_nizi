//Да се напише програма која за две низи кои се внесуваат од тастатура ќе
//провери дали се еднакви или не. На екран да се испачати резултатот од
//споредбата. Максимална големина на низите е 100.

#include <stdio.h>

int main(){
    int arr_1[100], arr_2[100], i, a1, a2;
    scanf("%d", &a1);
    scanf("%d", &a2);
    if(a1 != a2){
        printf("Nizite ne se ednakvi");
        return 0;
    }
    for (i = 0; i < a1; ++i) {
        printf("arr_1[%d] = ", i);
        scanf("%d", &arr_1[i]);
    }
    for (i = 0; i < a1; ++i) {
        printf("arr_2[%d] = ", i);
        scanf("%d", &arr_2[i]);
    }
    for (i = 0; i < a1; ++i) {
        if(arr_1[i] != arr_2[i]){
            break;
        }
    }
    if(i == a1){
        printf("Nizite se ednakvi");
    }else{
        printf("Nizite ne se ednakvi");
    }


    return 0;
}