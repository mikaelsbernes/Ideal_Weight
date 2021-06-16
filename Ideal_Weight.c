// [EUA] Program created for educational use only
// EXAMPLE OF FUNCTIONALITY:
// INFORM YOUR WEIGHT: 1.64
// INFORM YOUR GENDER: MASCULINE   | OR POSSIBILYT: FEMALE
// WEIGHT = 61.23

// [BR] Programa criado apenas para uso didático
// EXEMPLO DE FUNCIONALIDADE:
// INFORME A SUA ALTURA: 1.64
// INFORME O SEU GÊNERO: MASCULINE | OU POSSIBILIDADE: FEMALE
// PESO: 61.23


#include<stdio.h>
#include<math.h>
#include<string.h>


int main(){

float HEIGHT, WEIGHTMASC, WEIGHTFEM;
char GENDER[10];


// [EUA] Gets the height value as input
// [BR] Obtem o valor de altura como entrada

    printf("INFORM YOUR WEIGHT: ");
scanf("%f",&HEIGHT);

// [EUA] Get gender value as input
// [BR] Obtém o valor de gênero como entrada

 printf("INFORM YOUR GENDER: ");
scanf("%s",GENDER);

// [EUA] If you are male, do the calculation (72.7 * height) - 58
// [BR] Caso for masculino fazer o cálculo (72.7 * altura) - 58

if (strcmp(GENDER,"MASCULINE") == 0){
WEIGHTMASC = (72.7 * HEIGHT) - 58;
printf("WEIGHT = %.2f\n",WEIGHTMASC);
}

// [EUA] If you are female, make the calculation (62.1 * height) - 44.7
// [BR] Caso for feminino fazer o cálculo (62.1 * altura) - 44.7

else if (strcmp(GENDER,"FEMALE") == 0) {
WEIGHTFEM = (62.1 * HEIGHT) - 44.7;
printf("WEIGHT = %.2f\n",WEIGHTFEM);
}

return 0;

}
