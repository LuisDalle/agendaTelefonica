#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "agenda.c"


 int main()
 { 
 
 struct agenda contatos[100];
 int op=0;// tam;
 contatos[0].tam=0;
 //system("color 70");
 
 do
 {    
     system("cls");
     // Menu do programa , onde o usuário deverá escolher a opção desejada segundo a legenda .
     printf("\n"); 
     printf("||--------------------------------------------------------------|| \n");
     printf("       Bem Vindo ! Selecione uma opcao segundo a legenda : \n");
     printf("||--------------------------------------------------------------|| \n");
     printf(" | Inserir Contato :   1 | \n");
     printf(" | Excluir Contato :   2 | \n");
     printf(" | Alterar Contato :   3 | \n");
     printf(" | Pesquisar Contato : 4 | \n");
     printf(" | Exibir Contatos :   5 | \n");
     printf(" | Estado da Agenda :  6 | \n");
     printf(" | Sair :              0 | \n\n");
     printf(" Opcao : ");
     scanf("%i", &op);
     switch(op)
     {
     case 0 :
       printf("Agenda Finalizada \n");
        break; 
     case 1:
       cadastro(contatos);
       break;
     case 2:
       excluircontatos(contatos);
       break;
     case 3:
       alterarcontatos(contatos);   
       break;
     case 4:
       pesquisarcontatos(contatos);   
       break;
     case 5:
       exibircontatos(contatos);        
       break;
     case 6:
       statusagenda(contatos);        
       break;     
     default:
        printf("Opção invalida\n");  
     break;
    }
   }
   while(op!=0);  
   system("PAUSE");
}
