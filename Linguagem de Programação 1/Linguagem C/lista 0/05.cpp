#include<stdio.h>
#include<stdlib.h>

int main(){
	int num_cont, num_banc, num_agen;
	float cheq_deb, tot_din, cheq_cred, lim_cred, sal_atu, sal_disp;
	
	printf("Numero da conta: ");
	scanf("%d", &num_cont);
	printf("Numero do banco: ");
	scanf("%d", &num_banc);
	printf("Numero da agencia: ");
	scanf("%d", &num_agen);
	printf("Valor total de cheques a debitar: R$");
	scanf("%f", &cheq_deb);
	printf("Total de dinheiro: R$");
	scanf("%f", &tot_din);
	printf("Cheques a creditar: R$");
	scanf("%f", &cheq_cred);
	printf("Limite de credito: R$");
	scanf("%f", &lim_cred);
	printf("Saldo atual: R$");
	scanf("%f", &sal_atu);
	
	sal_disp = (sal_atu + cheq_cred + lim_cred) - cheq_deb;
	printf("Saldo disponivel: R$%.2f", sal_disp);
	
	system("pause");
	return 0;
}
