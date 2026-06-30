#include <stdio.h>
#define tam 15

int main () {

//variaveis

char aluno_1[tam];
char aluno_2[tam];
char aluno_3[tam];
char aluno_4[tam];
char aluno_5[tam];
int num_alunos = 0;

float a1_n1, a1_n2, a1_n3;
float a2_n1, a2_n2, a2_n3;
float a3_n1, a3_n2, a3_n3;
float a4_n1, a4_n2, a4_n3;
float a5_n1, a5_n2, a5_n3;

float media_a1;
float media_a2;
float media_a3;
float media_a4;
float media_a5;

char resultado[tam];

//apresentação
printf("Calculadora de Médias\n");
printf("Digite o nome do aluno 1: ");
scanf("%s", &aluno_1);



if (media_a1 < 7) {
    resultado[tam] = "Reprovado";
} else {
    resultado[tam] = "Aprovado";
}

printf("ALUNO         N1    N2    N3    MÉDIA    SITUAÇÃO\n");
printf("%s         %.1f    %.1f    %.1f    %.1f    %s\n", aluno_1, a1_n1, a1_n2, a1_n3, media_a1, resultado);









    
    return 0;
}