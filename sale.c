#include <stdio.h>
int main() {
    float goods1,goods2,goods3,total1,total2,total3;
   
    scanf("%f",&goods1);
    total1 = goods1*0.95;
    printf("%.2f\n",total1);

    scanf("%f",&goods2);
    total2 = (goods1+goods2)*0.85;
    printf("%.2f\n",total2);

    scanf("%f",&goods3);
    total3 = (goods1+goods2+goods3)*0.7;
    printf("%.2f\n",total3);
}

