#include<stdio.h>
#include<stdlib.h>

int main(){
        float *A, *B, *media, mediaTurma;
        int i, l;

	// Solicitando a quantidade de alunos da sala e verificando
	printf("Digite a quantidade de alunos da turma: ");
	scanf("%d", &l);
	if(l < 1){
		printf("Numero de alunos invalido!\n");
		exit(-1);
	}

	// Alocando vetores dinamicamente e verificando
        A = malloc(l * sizeof(float));
        B = malloc(l * sizeof(float));
	media = malloc(l * sizeof(float));
	if(A == NULL || B == NULL || media == NULL){
		printf("Memoria esgotada!\n");
		exit(-1);
	}

	// Loop para encher vetores
        for(i = 0; i < l; i++){
                printf("Digite a nota 1 do aluno %d: ", i + 1);
                scanf("%f", &A[i]);
                printf("Digite a nota 2 do aluno %d: ", i + 1);
                scanf("%f", &B[i]);

		// Enchendo vetor media e fazendo calculo da media da turma
                if((A[i] >= 0 && A[i] <= 10) && (B[i] >= 0 && B[i] <= 10)){
                        media[i] = (A[i] + B[i]) / 2;
                        mediaTurma += media[i] / l;
                }else{
                        printf("Nota(s) invalida(s), digite novamente\n");
                        i--;
                }
        }

	// Mostrando as medias individuais
        for(i = 0; media[i]; i++){
                printf("Media do aluno %d: %.2f\n", i + 1, media[i]);
                if(media[i] >= 7 && media[i] <= 10)
                        printf("Aluno %d: APROVADO\n", i + 1);
                else
                        printf("Aluno %d: REPROVADO\n", i + 1);
        }

	// Mostrando a media da turma
        printf("Media da turma: %.2f\n", mediaTurma);

	return 0;

}
