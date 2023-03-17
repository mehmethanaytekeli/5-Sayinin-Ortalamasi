#include <stdio.h>

int main()
{
    printf("**************************\n");
    float sayi1,sayi2,sayi3,sayi4,sayi5;
    printf("1.Sayiyi Giriniz:");
    scanf("%f", &sayi1);
    printf("2.Sayiyi Giriniz:");
    scanf("%f", &sayi2);
    printf("3.Sayiyi Giriniz:");
    scanf("%f", &sayi3);
    printf("4.Sayiyi Giriniz:");
    scanf("%f", &sayi4);
    printf("5.Sayiyi Giriniz:");
    scanf("%f", &sayi5);

    float toplamsayi = (sayi1 + sayi2 + sayi3 + sayi4 + sayi5) / 5;

    printf("Girilen Sayilarin Ortalamasi: %.2f", toplamsayi);
    printf("\n**************************");
    
    return 0;

}