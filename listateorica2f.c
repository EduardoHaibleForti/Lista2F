#include <stdio.h>
#include <stdlib.h>

int main (){
    float tempFarenheit;
    float tempCentigrados;

    printf("Digite uma temperatura em Farenheit :");
    scanf("%f",&tempFarenheit);

    tempCentigrados=0.55*(tempFarenheit-32);

    printf("A temperatura em graus centigrados : %f\n",tempCentigrados);

    return 0;

}
