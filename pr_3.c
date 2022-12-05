//Niza so zavrsuva koga uneses razlicno od cel broj i sporeduvas ako nekoj od nizata e ednakov i sea treba da go zgolemes posledovatelnio so razlikata od poziciite na ednakvite broevi

#include <stdio.h>
int main(){
    int arr[100],i, j, arr_count = 0, flag_za_ciklus = 1;
    while(flag_za_ciklus){
        if(scanf("%d", &arr[arr_count])){
            printf("VAlid\n");
            arr_count++;
        }else{
            printf("INVALIID\n");
            flag_za_ciklus = 0;
        }
    }
    for(i = 0; i < arr_count;i++){
        for(j = i+1; j < arr_count; j++){
            printf("INDEX[%d] - (%d) -> INDEX[%d] - (%d)\n",i, arr[i],j, arr[j]);
            if(arr[i] == arr[j]){
                printf("ISTI BROEVI\n");
//ako se ednakvi zgolemi go vtoriot od razlikata na indexite
                arr[j] += j - i;
            }
        }
    }
//  PROVERKA na krajna niza
    for(i = 0; i < arr_count; i++){
        printf("[%d] = %d\n", i, arr[i]);
    }
    return 0;
}