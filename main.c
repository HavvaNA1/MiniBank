#include <stdio.h>

int main() {
    char ad[50];
    float bakiye, tutar;
    int secim;
    printf("Merhaba, adınızı girin: ");
    scanf("%s", ad);
    
    printf("Lütfen bakiyenizi giriniz: ");
    scanf("%f", &bakiye);
    printf("\nMerhaba %s!\n", ad);
    printf("Lütfen aşağıdaki seçeneklerden birini seçin:\n");
    printf("Para çekmek için 1'e\n");
    printf("Para yatırmak için 2'ye\n");
    printf("Bakiyenizi öğrenmek için 3'e tıklayınız.\n");
    printf("Seçiminiz: ");
    scanf("%d", &secim);
    if (secim == 1) {
        printf("Çekmek istediğiniz tutarı giriniz: ");
        scanf("%f", &tutar);
        if (tutar <= bakiye) {
            bakiye -= tutar;
            printf("Güncel bakiyeniz: %.2f\n", bakiye);
        } else {
            printf("Yetersiz bakiye.\n");
        }
    } 
    if (secim == 2) {
        printf("Yatırmak istediğiniz tutarı giriniz: ");
        scanf("%f", &tutar);
        bakiye += tutar;
        printf("Güncel bakiyeniz: %.2f\n", bakiye);
    } 
    if (secim == 3) {
        printf("Bakiyeniz: %.2f\n", bakiye);
    }
    return 0;
}