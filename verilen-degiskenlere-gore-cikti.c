#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2;
    int b = 10;
    int c = 50;

    float f = 1.05;
    float g = 25.5;
    float h = -0.1;



    printf("TAB Kullanilmadan yazilan tamsayilar: %d %d %d\n", a,b,c);
    printf("TAB Kullailarak yazilan tamsayilar:\t%d\t%d\t%d\n", a,b,c);
    printf("Uc reel sayi tek satirda: %.1f  %.2f  %.3f\n", f,g,h);
    printf("Uc reel sayi 3 satirda:\n%f\n%f\n%f\n", f,g,h);

    printf("%f/%f isleminin  sonucu = %f\n", g,f,g/f);
    printf("Program sonunda  beep cikar...\a");




    return 0;
}
