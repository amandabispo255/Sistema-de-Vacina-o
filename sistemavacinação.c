#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct vacinacao{
	
	char nome[50];
	char cpf[11];
	char vacina[20];
	char data[10];
	int lote;
};

int main() {
	
	int quantcadastros,opc,i,acha;
    char busca[11];
    
    
	printf("Por favor, digite a quantidade de cadastros que serao realizados no sistema\n");
	scanf("%d",&quantcadastros);

	struct vacinacao informacoes[quantcadastros];
	
do{
		
		printf("Ola, Seja Bem Vindo(a) ao Sistema de dados da Vacinacao contra COVID19!!\n ");
		printf("Por favor, digite uma opcao:\n");
		printf("1-Cadastrar Vacina\n 2- Listar Aplicacoes\n 3-Consultar por CPF\n 4-Sair\n");
		scanf("%d",&opc);
	
	switch(opc)
	
   {
		case 1:
			for(i=0;i<quantcadastros;i++)
		 {
	         
	    
			printf("Por favor, informe o nome:\n");
			scanf("%s",&informacoes[i].nome);
			printf("Por favor, informe o cpf:\n");
			scanf("%s",&informacoes[i].cpf);
			printf("Por favor, informe qual a vacina:\n");
			scanf("%s",&informacoes[i].vacina);
			printf("Por favor, informe qual a data:\n");
			scanf("%s",&informacoes[i].data);
			printf("Por favor, informe o numero do lote :\n");
			scanf("%d",&informacoes[i].lote);
	   	}
			
		break;
		
		case 2: 
	
		     for(i=0;i<quantcadastros;i++)
		 {
		     	printf("------------Relatorio Geral--------------\n");
		     	printf("Codigo: %d\n",i);
		     	printf("Nome: %s\n",informacoes[i].nome);
		     	printf("CPF: %s\n",informacoes[i].cpf);
		     	printf("Vacina: %s\n",informacoes[i].vacina);
		     	printf("Data: %s\n",informacoes[i].data);
		     	printf("Lote: %d\n",informacoes[i].lote);
		 }
		     
		break;
		
		case 3:
		     
		    printf("Informe o CPF que deseja buscar:\n");
		    scanf("%s",&busca);
		
		         while(acha==0 && i<quantcadastros)
				{
			        if(strcmp(informacoes[i].cpf,busca))
					{
			        	acha=1;
			     	}else
					
					{
				       i++; 
				    }
				}
				if(acha==1)
				{
			        for(i=0;i<1;i++)
					{
			        printf("O CPF %s foi encontrado\n",busca);
				   	printf("Codigo:%d\n",i);
				   	printf("Nome:%s\n",informacoes[i].nome);
				   	printf("Vacina:%s\n",informacoes[i].vacina);
				   	printf("Data:%s\n",informacoes[i].data);
				   	printf("Lote:%d\n",informacoes[i].lote);
					}
				}else{
						printf("CPF não encontrado\n"); 
					}
		break;
		         
		case 4:
		break;
		default:
	             	printf("Opcão inválida");	
	}
}while(opc!=4);
	
	
	return 0;
}
