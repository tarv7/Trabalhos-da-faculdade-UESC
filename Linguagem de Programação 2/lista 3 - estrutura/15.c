#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int *val;
	int n;
	int max;
	int min;
	float media;
}TSeq;

int main(){
	TSeq nums;
	int i;

	do{
		printf("Digite a quantidade de elementos da sequencia: ");
		scanf("%d", &nums.n);
	}while(nums.n < 0);

	nums.val = malloc(nums.n * sizeof(int));
	if(nums.val == NULL){
		printf("Memoria esgotada\n");
		exit(-1);
	}

	nums.media = 0;

	printf("Valor %d: ", 1);
	scanf("%d", &nums.val[0]);
	nums.max = nums.val[0];
	nums.min = nums.val[0];
	nums.media += ((float)nums.val[0] / nums.n);

	for(i = 1; i < nums.n; i++){
		printf("Valor %d: ", i + 1);
		scanf("%d", &nums.val[i]);

		if(nums.val[i] > nums.max)
			nums.max = nums.val[i];
		else if(nums.val[i] < nums.min)
			nums.min = nums.val[i];

		nums.media += ((float)nums.val[i] / nums.n);
	}

	printf("Valor maximo: %d\n", nums.max);
	printf("Valor minimo: %d\n", nums.min);
	printf("Media: %.2f\n", nums.media);

	free(nums.val);

	return 0;
}
