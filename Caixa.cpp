#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main(void){
float dinheiro_total;
float dinheiro_original;
int escolha;
int escolha2;
float deposito;
float saque;
float saldo;
int digito1;
int digito2;
int resultado;

FILE *caixa;
caixa = fopen("saldo.txt", "r");

if(caixa == NULL)
{
printf("Arquivo não encontrado!");
system("pause");
return 0;	
}
fscanf(caixa, "%f", &dinheiro_original);
fclose(caixa);

printf("Sistema Caixa, bem vindo!\n \n");
printf("Dinheiro total: %.2f \n \n", dinheiro_original);
printf("Por favor, informe o que gostaria de fazer. \n 1-Depositar\n 2-Sacar\n 3-Calculadora \n 4-Cancelar \n \n>");
fflush(stdin);
scanf("%d", &escolha);

switch(escolha){
	


case 1:
printf("Quanto gostaria de depositar?\n>");
caixa = fopen("saldo.txt", "w");
fflush(stdin);
scanf("%f", &deposito);
dinheiro_total = deposito + dinheiro_original;
fprintf(caixa, "%f", dinheiro_total);
printf("Voce depositou %.2f$ \nO seu saldo total agora e %.2f$ \n Tenha um bom dia.", deposito, dinheiro_total);
fclose(caixa);
system("pause \n");
break;

case 2:
printf("Quanto gostaria de sacar?\n>");
caixa = fopen("saldo.txt", "w");
fflush(stdin);
scanf("%f", &saque);
dinheiro_total = dinheiro_original -= saque;
fprintf(caixa, "%f", dinheiro_total);
printf("Voce sacou %.2f$ \nO seu saldo total agora e %.2f$ \n Tenha um bom dia.", saque, dinheiro_total);
fclose(caixa);
system("pause \n");

break;


case 3:
printf("Qual operacao matematica deseja? \n \n1-Adicao 2-Subtracao 3-Multiplicacao 4-Divisao 5-Cancelar \n>");
scanf("%d",&escolha2);
//----------------------------------------------
switch(escolha2){
case 1:
printf("Digite o numero\n>");
scanf("%d" ,&digito1);
printf("Digite o segundo\n>");
fflush(stdin);
scanf("%d",&digito2);
resultado = digito1 + digito2;
printf("Resultado: %d", resultado);
system("pause \n");
break;
case 2:
printf("Digite o numero\n>");
scanf("%d" ,&digito1);
printf("Digite o segundo\n>");
fflush(stdin);
scanf("%d",&digito2);
resultado = digito1 - digito2;
printf("Resultado: %d", resultado);	
break;
case 3:
printf("Digite o numero\n>");
fflush(stdin);

scanf("%d" ,&digito1);
printf("Digite o segundo\n>");
scanf("%d",&digito2);
resultado = digito1 * digito2;
printf("Resultado: %d", resultado);
system("pause \n");

break;
case 4:
printf("Digite o numero\n>");
fflush(stdin);

scanf("%d" ,&digito1);
printf("Digite o segundo\n>");
fflush(stdin);

scanf("%d",&digito2);
resultado = digito1 / digito2;
printf("Resultado: %d", resultado);	
system("pause \n");

break;


case 5:
break;



fflush(stdin);
	
}
}
return 0;	

}
