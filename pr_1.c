//PRIMER 1

#include <stdio.h>
int main(){
    int arr[100], i,n;
    scanf("%d", &n);
    for(i = 0;i < n;i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            arr[i] += 1;
        }else{
            arr[i] -= 1;
        }
     }
    for(i = 0; i < n;i++){
        printf("[%d] - %d\n", i, arr[i]);
    }
    return 0;
}
