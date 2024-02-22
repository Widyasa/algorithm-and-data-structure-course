#include <stdio.h>
#include <stdbool.h>
const float pi = 3.14159;
 float diameter;
 float radius;
 char validationJari;
 float circumference;
 float area;
int main() {
    printf("apakah memiliki jari-jari? (y/n)");
    scanf("%s", &validationJari);

    if(validationJari == 'y') {
        printf("masukkan jari-jari");
        scanf("%f", &radius);
        circumference = 2 * pi * radius;
        area = pi * radius * radius;
        diameter = radius * 2;
        printf("diameternya adalah %f \n", diameter);
        printf("luasnya adalah %f \n", area);
        printf("kelilingnya adalah %f \n", circumference);
    } else if(validationJari == 'n') {
        printf("masukkan diameter");
        scanf("%f", &diameter);

        circumference = pi * diameter;
        area = pi * diameter * diameter / 4;
        radius = diameter / 2;

        printf("jari - jarinya adalah %f \n", radius);
        printf("luasnya adalah %f \n", area);
        printf("kelilingnya adalah %f \n", circumference);

    }
    return 0;
}