#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 15
#define notas 3
#define alunos 5

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

    for (int j = 0; j<notas; j++) {
        media[i] += matriz_nota[i][j];
    }
    media[i] /= notas;

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

printf("ALUNO        N1     N2     N3     MEDIA      SITUACAO\n");
for (int i = 0; i<alunos; i++) {
    printf("%-12s %.1f    %.1f    %.1f    %.1f       %s\n", nome_alunos[i], matriz_nota[i][0], matriz_nota[i][1], matriz_nota[i][2], media[i], situacao[i]);
}

printf("\n\nAluno com maior média: (%.1f)  -  %s", media[save], nome_alunos[save]);


    return 0;
}