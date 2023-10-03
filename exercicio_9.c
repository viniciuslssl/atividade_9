#include<stdio.h>
#include<math.h>

main(){

int valor [6] = {0 , 1, 5, -2, -5, -7};
int soma;

soma = valor [0] + valor [1] + valor [5];
valor [4] = 100,

printf("\nValor da soma das posicoes 0, 1 e 5 : %d", soma);
printf("\nOrdem dos numeros:");
printf("\n%d \n%d \n%d \n%d \n%d \n%d", valor [0], valor [1], valor [2], valor [3], valor [4], valor [5]);
}
#include<stdio.h>
#include<math.h>

main(){

float nota [15], media;


for(int i = 0; i < 15; i++){

    printf("Digite a nota do aluno:");
    scanf("%f", &nota[i]);

} for(int i = 0; i < 15; i++){

    media += nota[i];
}

media = media/15;

printf("A media das notas: %.2f", media);

}
#include<stdio.h>
#include<math.h>

main(){

int valor [10], soma = 0, neg = 0;



for(int i = 0; i < 10; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} for(int i = 0; i < 10; i++){

    if(valor[i] < 0){
        neg++;
    }

    if(valor[i] > 0){

        soma += valor[i];

    }
}

printf("A soma dos valores positivos: %d. \nQuantidade de valores negativo: %d.", soma, neg);

}
#include<stdio.h>
#include<math.h>

main(){

int valor [5], Vmaior = 0, Vmenor = 6, media = 0;



for(int i = 0; i < 5; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} for(int i = 0; i < 5; i++){
    if(valor[i] > Vmaior){
        Vmaior = valor[i];
    }

    if(valor[i] < Vmenor){
        Vmenor = valor[i];
    }
    
    media += valor[i];
}
media = media / 5 ;

printf("O maior valor: %d. \nO menor valor: %d. \nA media dos 5 valores = %d", Vmaior, Vmenor, media);
}
#include<stdio.h>
#include<math.h>

main(){

int valor [5], maior = 0, menor = 0 , posmaior = 0, posmenor = 0;

for(int i = 0; i < 5; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);
}

maior = valor[0];
menor = valor[0];

for(int i = 0; i < 5; i++){

    if(valor[i] > maior){
        maior = valor[i];
        posmaior = i;
    }

    if(valor[i] < maior){
        menor = valor[i];
        posmenor = i;
    }

}

printf("\nMaior: %d na posicao: %d.\nMenor: %d na posicao: %d", maior, posmaior, menor, posmenor);

}
#include<stdio.h>
#include<math.h>

main(){

int num[6];

for(int i = 0; i < 6; i++){

    printf("Digite 6 valores: ");
    scanf("%d", &num[i]);
}
for(int i = 0; i < 6; i++){
    printf("\n%d %d", i, num[i]);
}

}
#include<stdio.h>
#include<math.h>

main(){


int reais[10], reais2[10];

for(int i = 0; i < 10; i++){

    printf("Digite um numero: ");
    scanf("%d", &reais[i]);
}

for(int i = 0; i < 10; i++){
    reais2[i] = reais[i] * reais[i];

    printf("\nOs valor digitado - (primero conjunto): %d - A potencia: %d", reais[i], reais2[i]);
}

#include<stdio.h>
#include<math.h>

main(){

int valor [8];
int x, y, soma;

for(int i = 0; i < 8; i++){

printf("Escolha um valor: ");
scanf("%d", &valor[i]);

}

printf("\nAgora escolha 2 posicoes: ");
scanf("%d %d", &x, &y);

//soma tem apresentado um valor a mais, por isso coloquei -1 para regular o valor

soma = valor[x -1] + valor[y - 1];

printf("\nSoma dos valores: %d ", soma);

}
#include<stdio.h>
#include<math.h>

main(){

int valor [10], Vpar = 0;

for(int i = 0; i < 10; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} for(int i = 0; i < 10; i++){

    if(valor[i] % 2 == 0){
        Vpar++;
    }

}

printf("\nDos numeros citados, %d sao numeros pares", Vpar); 

}
#include<stdio.h>
#include<math.h>

main(){

int valor [10], Vmaior = 0, Vmenor = 11;

for(int i = 0; i < 10; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} for(int i = 0; i < 10; i++){

    if(valor[i] > Vmaior){
        Vmaior = valor[i];
    }

    if(valor[i] < Vmenor){
        Vmenor = valor[i];
    }
}

printf("O maior valor: %d, e o menor valor: %d", Vmaior, Vmenor);

}
#include<stdio.h>
#include<math.h>

main(){

int valor [10], Vmaior = 0, pos = 0;


for(int i = 0; i < 10; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} for(int i = 0; i < 10; i++){

    printf("\nOs valores do vetor: ", valor[i]);

    if(valor[i] > Vmaior){

        Vmaior = valor[i];
        pos = 1 + i;
    }
}
    printf("\nO maior valor: %d, e sua posicao: %d", Vmaior , pos);
}
#include<stdio.h>
#include<math.h>

main(){

int valor [6];


for(int i = 0; i < 6; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} 

printf("\nA ordem inversa:");

for(int i = 5; i > -1; i = i - 1){

    printf("\n%d", valor[i]);

}

}
#include<stdio.h>
#include<math.h>

main(){

int valor [6];


for(int i = 0; i < 6; i++){

    printf("Digite um valor par:");
    scanf("%d", &valor[i]);

    if (valor[i]%2 != 0){
    printf("\nValor invalido!\n");
        i -= 1;
    }

}

printf("\nA ordem inversa:");

for(int i = 5; i > -1; i = i - 1){

    printf("\n%d", valor[i]);

}

#include<stdio.h>
#include<math.h>

main(){
//declaração e atribuição

int numeros [5] = {20, 100, 350, 1, 30};

printf("%d", numeros[0]);
printf("\n%d", numeros[1]);
printf("\n%d", numeros[2]);
printf("\n%d", numeros[3]);
printf("\n%d", numeros[4]);

numeros[2] = 100;

printf("\n\n%d", numeros[0]);
printf("\n%d", numeros[1]);
printf("\n%d", numeros[2]);
printf("\n%d", numeros[3]);
printf("\n%d", numeros[4]);

}
//vetores (arrays) - sempre com uma estrutura de repetição//

#include<stdio.h>
#include<math.h>

main(){

int num[5];

/* num[0] = 2;
num[1] = 2;
num[2] = 2;
num[3] = 2;
num[4] = 2;

printf("%d", num[0]);
printf("\n%d", num[1]);
printf("\n%d", num[2]);
printf("\n%d", num[3]);
printf("\n%d", num[4]); */


printf("Digite um numero: ");
scanf("%d", &num[0]);

printf("Posicao 0: %d", num[0]);
}
clude<stdio.h>
#include<math.h>

main(){
    //declaracao e atribuicao

int num[5];

for(int i = 0; i < 5; i++){

    printf("Digite um numero: ");
    scanf("%d", &num[i]);
}
for(int i = 0; i < 5; i++){
    printf("\n%d %d", i, num[i]);
}

}
#include<stdio.h>
#include<math.h>

main(){

char alunos[3][20] = {"Maria", "Jose", "Pedro Luis"};

printf("%s", alunos [2]);

char nomes [3][20];

for(int i = 0; i < 3; i++){

    printf("\nDigite um nome:");
    fgets(nomes [i], 20, stdin);

} for(int i = 0; i < 3; i++){

    printf("\nNome : %d %s", i, nomes[i]);
}

}