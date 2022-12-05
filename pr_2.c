//primer2
#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[100], sum = 0, i, n, close_el;
    float ar_sr;
    scanf("%d", &n);
    for (i = 0; i< n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    ar_sr = sum / (float)n;
//    SREDNA VREDNOST
    printf("%.2f\n", ar_sr);
//    PROVERKA ZA bliskost
    close_el = arr[0];
    for (i = 1; i < n; i++) {
        printf("%d rastojanie najmalo\n",abs(close_el - ar_sr));
        printf("%d rastojanie proverka\n",abs(arr[i] - ar_sr));
        if((abs(arr[i] - ar_sr)) < (abs(close_el - ar_sr))){
            close_el = arr[i];
        }
    }
    printf("%d e najmaloto rastojanie od sredna vrednost => %.2f", close_el, ar_sr);
    return 0;
}
