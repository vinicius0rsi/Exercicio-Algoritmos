#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 15
#define notas 3
#define alunos 5

float calcular_media(float n[], int qtd) {
    float soma = 0;
    for (int i = 0; i < qtd; i++) {
        soma += n[i];
    }
    return soma / qtd;
}

int main () {

//variaveis

char nome_alunos[alunos][tam];
float matriz_nota[alunos][notas];
int num_alunos = 1;
float media_maior = 0;
int save = 0;

float media[alunos];
for (int i = 0; i<alunos; i++) {
    media[i] = 0;
}

char situacao[alunos][tam];

//codigo

printf("Calculadora de Médias\n");

for (int i = 0; i<alunos; i++) {

    printf("Digite o nome do aluno %d: ", i+1);
    scanf("%s", nome_alunos[i]);
    
    int validas = 0;
    do {
    printf("Digite as notas de %s: ", nome_alunos[i]);
    scanf("%f %f %f", &matriz_nota[i][0], &matriz_nota[i][1], &matriz_nota[i][2]);
    validas = 1;
    for (int j = 0; j < notas; j++) {
        if (matriz_nota[i][j] < 0 || matriz_nota[i][j] > 10) {
            printf("NOTA INVALIDA: Digite numeros de 0 a 10.\n");
            validas = 0;
            break;
        }
    }
} while (!validas);
    

    system("cls");

    media[i] = calcular_media(matriz_nota[i], notas);

    if (media[i]>media_maior) {
        media_maior = media[i];
        save = i;
    }

    if (media[i]<7) {
        strcpy(situacao[i], "Reprovado");
    } else {
        strcpy(situacao[i], "Aprovado");
    }

    num_alunos++;
}

printf("%-12s %6s %6s %6s %8s   %s\n",
    "ALUNO", "N1", "N2", "N3", "MEDIA", "SITUACAO");
for (int i = 0; i<alunos; i++) {
    printf("%-12s %6.1f %6.1f %6.1f %8.1f   %s\n",
           nome_alunos[i], matriz_nota[i][0], matriz_nota[i][1], matriz_nota[i][2], media[i], situacao[i]);
}

printf("\nAluno com maior media: %s (%.1f)\n", nome_alunos[save], media[save]);


    return 0;
}