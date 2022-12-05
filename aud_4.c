//Да се напише програма која ќе провери дали дадена низа од n елементи која се
//чита од стандарден влез е строго растечка, строго опаѓачка или ниту строго
//растечка ниту строго опаѓачка. Резултатот да се испечати на екран.

#include <stdio.h>
int main(){
    int arr[100], i, n;
    short flag_rast = 1, flag_opad = 1;
    scanf("%d", &n);
    for(i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n;i++){
        if(a[i] >= a[i + 1]){
            flag_rast = 0;
        }
    }
    for(i = 0; i < n;i++){
        if(a[i] <= a[i + 1]){
            flag_opad = 0;
        }
    }
    if (!flag_rast && !flag_opad)
        printf("Nizata ne e nitu rastechka nitu opagjachka\n");
    else if (flag_opad)
        printf("Nizata e opagjachka\n");
    else if (flag_rast)
        printf("Nizata e rastechka\n");

    return 0;
}
