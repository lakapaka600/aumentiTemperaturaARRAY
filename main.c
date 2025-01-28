#include <stdio.h>

int main(void) {
    int contareTemp=0;

    int n;
    printf("inserisci il numero di temperature rilevate: ");
    scanf("%d",&n);
    float temperature[n];
    for(int i=0;i<n;i++) {
        printf("Enter temperature : ");
        scanf("%f",&temperature[i]);
    }
    for(int i=0;i<n-1;i++) {
        if(temperature[i+1]>temperature[i]) {
            contareTemp++;
    }
    }
    if(contareTemp==0) {
        printf("non ci sono stati aumenti di temperatura");
    }
    else {
        printf("la temperatura è aumentata di : %d",contareTemp);
    }
    return 0;
}
