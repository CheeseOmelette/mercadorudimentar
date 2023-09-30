#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


struct lista
{
char nome[50]; //É aqui onde é colocado a base da lista de produtos, o nome, código e preço.
int real;
int centavo;
};
float estoqueO;
float estoqueT;
float add;
int codigo;
int valor;
int vacfa;
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

//----------------------------------------------------------

int main(void){
printf("Bem vindo ao sistema de Mercados VACFA! \nQual função deseja acessar? \n 1-Caixa 2-Produtos 3-Sair \n");
fflush(stdin);
scanf("%d", &vacfa);
switch(vacfa){
	
case 1:
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
fflush(stdin);

scanf("%d" ,&digito1);
printf("Digite o segundo\n>");
scanf("%d",&digito2);
resultado = digito1 + digito2;
printf("Resultado: %d", resultado);
system("pause \n");

break;
case 2:
printf("Digite o numero\n>");
scanf("%d" ,&digito1);
printf("Digite o segundo\n>");
scanf("%d",&digito2);
resultado = digito1 - digito2;
printf("Resultado: %d", resultado);
system("pause \n");
	
break;
case 3:
printf("Digite o numero\n>");
scanf("%d" ,&digito1);
printf("Digite o segundo\n>");
scanf("%d",&digito2);
resultado = digito1 * digito2;
printf("Resultado: %d", resultado);
system("pause \n");

break;
case 4:
printf("Digite o numero\n>");
scanf("%d" ,&digito1);
printf("Digite o segundo\n>");
scanf("%d",&digito2);
resultado = digito1 / digito2;
printf("Resultado: %d", resultado);	
system("pause \n");

break;

case 5:
break;




	
}

return 0;	

}
break;


//ESAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
case 2:	
printf("\n----------Mercado do EngcompJR.-----------\n\n\n"); 
printf("Bem vindo, por favor digite o codigo do produto! \n\n Codigo: "); //Aqui é feita as boas vindas e onde o proprietário irá digitar o código do produto. 
struct lista p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
{
//codigo = 01
strcpy(p1.nome, "Saco de Arroz\0");   // É aqui onde a mágica acontece, nesse sistema é registrado todos os items do mercado em um sistema de structs.
p1.real = 3;                         //No caso, eu registrei 5 produtos, mas a capacidade é bem maior, eu cooloquei o sistema para registrar até 10 deles
p1.centavo = 0;                     //mas é possível colocar muito mais produtos. Sempre que alguém quiser registar mais coisas, bastaria fazer duas coisas                                   //Uma seria por template do código e prenche-lo e a outra você verá abaixo! 
//codigo = 02                     // Template: strcpy(pX.nome, "Nome do produto\0"); pX.real = X; pX.centavo = X;
strcpy(p2.nome, "Saco de Feijao\0"); 
p2.real = 7;
p2.centavo = 0;
//codigo = 03
strcpy(p3.nome, "Saco de Farinha\0");
p3.real = 6;
p3.centavo = 0;
//codigo = 04
strcpy(p4.nome, "Saco de Acucar\0");
p4.real = 2;
p4.centavo = 50;
//codigo = 05
strcpy(p5.nome, "Agua de Limao\0");
p5.real = 7;
p5.centavo = 0;
};
fflush(stdin);
scanf("%d", &codigo);


//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
if(codigo == 1) {
FILE *arroz;
arroz = fopen("arroz.txt", "r"); 
fscanf(arroz, "%f", &estoqueO);
printf("Produto: %s \nPreco: %d.%d$ \n Em estoque: %.0f \n \n" , (p1.nome), p1.real ,p1.centavo, estoqueO);
fclose(arroz);	
system("pause \n");

}

else{
	
if(codigo == 2){
FILE *feijao;
feijao = fopen("feijao.txt", "r"); 
fscanf(feijao, "%f", &estoqueO);
printf("Produto: %s \nPreco: %d.%d$ \n Em estoque: %.0f \n \n" , (p2.nome), p2.real ,p2.centavo, estoqueO);
system("pause \n");

fclose(feijao);
}

else {
if(codigo == 3){
FILE *farinha;
farinha = fopen("farinha.txt", "r"); 
fscanf(farinha, "%f", &estoqueO);
printf("Produto: %s \nPreco: %d.%d$ \n Em estoque: %.0f \n \n" , (p3.nome), p3.real ,p3.centavo, estoqueO);
system("pause \n");

fclose(farinha);	
}	

else{
if (codigo == 4) {
FILE *acucar;
acucar = fopen("acucar.txt", "r"); 
fscanf(acucar, "%f", &estoqueO);
printf("Produto: %s \nPreco: %d.%d$ \n Em estoque: %.0f \n \n" , (p4.nome), p4.real ,p4.centavo, estoqueO);
system("pause \n");

fclose(acucar);	
}

else{
if (codigo == 5) {
FILE *alimao;
alimao = fopen("alimao.txt", "r"); 
fscanf(alimao, "%f", &estoqueO);
printf("Produto: %s \nPreco: %d.%d$ \n Em estoque: %.0f \n \n" , (p5.nome), p5.real ,p5.centavo, estoqueO);
system("pause \n");

fclose(alimao);		
	
}

else{
printf("Produto Indisponível");	
system("pause \n");

}	
}	
}
}
}


return 0;
}
}
