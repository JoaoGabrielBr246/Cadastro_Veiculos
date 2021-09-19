#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
    typedef struct carro{
	    char marca[50];
	    char modelo[30];
	    int ano; 
	    char placa[9];
	    int abc;
    } carro; carro carros[10];      


int main() {
setlocale(LC_ALL, "Portuguese");

    int digito, i, abc, ano, z, y, x;    z=0;    ano=0;    i=0;    carros[i].abc = 0;    char modelo[30];
               
    strcpy(carros[i].marca,"NULL");
    strcpy(carros[i].modelo,"NULL");
    strcpy(carros[i].placa,"NULL");
    carros[i].ano = 0;
    do{     printf("Digite 1 para cadastrar um veículo.\nDigite 2 para listar veículos cadastrados.\nDigite 3 para pesquisar modelo de carro..\nDigite 4 para ver os modelos de carro a partir de um ano.\n");
       scanf("%d", &digito);
       switch(digito){                  case 1:
		      if(carros[i].abc <= 9){
			      carros[i].abc = i;
			      printf("\nMarca do carro: ");
			      scanf("%s",&carros[i].marca);
			      printf("\nModelo do carro: ");
			      scanf("%s",&carros[i].modelo);
			      printf("\nAno do carro: "); 
			      scanf("%d",&carros[i].ano);
			      printf("\nPlaca do carro - (Ex: ABC-1234): ");
			      scanf("%s",&carros[i].placa);
			      i += 1;
		      }else{ 
			      printf("\nO limite de cadastro é 10!\n");
		      } break; 
		      case 2:  for(x=0; x<i; x++){
                    printf("\nA marca do veículo é: %s\n",carros[x].marca);
			      printf("\nO modelo do veículo é: %s\n",carros[x].modelo); 
			      printf("\nO ano do veículo é: %d\n",carros[x].ano); 
			      printf("\nA placa do veículo é: %s\n",carros[x].placa);
			      printf("\n\n ========//======== \n \n");
		      }                 break;
		      case 3:
        printf("\nInsira o modelo de carro desejado: ");
         scanf("%s", &modelo);
        for (x=0; x<i; x++){
		if (strcmp(carros[x].modelo,  strlwr(modelo)) != 0) {
			printf("\nA marca do veículo é: %s\n",carros[x].marca);
			printf("\nO modelo do veículo é: %s\n",carros[x].modelo);
			printf("\nO ano do veículo é: %d\n",carros[x].ano);
			printf("\nA placa do veículo é: %s\n",carros[x].placa);
			z++;
		}
	}if (z==0){
		printf("\nNão foi encontrado nenhum veículo com esse modelo: %s \n\n",modelo);
	}else {      z=0; 
	      }      break; case 4:
             printf("\nInsira o ano a ser pesquisado: ");
             scanf("%d",&ano);
                                                                                             
             for (x=0; x<i; x++){
                 if (carros[x].ano >= ano){
                   printf("\n A marca do veículo é: %s\n",carros[x].marca); 
			 printf("\n O modelo do veículo é: %s\n",carros[x].modelo); 
			 printf("\n O ano do veículo é: %d\n",carros[x].ano);  
			 printf("\n A placa do veículo é: %s\n",carros[x].placa); 
			 printf("\n\n ========//======== \n \n");
       z++;    
		 }
	     }if (z==0){
      printf("\nNão foi encontrado veículos acima de %d :/ \n\n",ano);
	     }else {z=0;
		   } break;
    default:
		      printf("\nOpção não existe\n");
		      break;
		     }
      } while (abc !=5 && i<=9);
	if (i==9){ printf("\nLimite de veículos ultrapassado!! \n \n \n"); 
		 }for (y=0; y<i; y++) { printf("\nA marca do veículo é: %s\n",carros[y].marca);
 printf("\nO modelo do veículo é: %s\n",carros[y].modelo);
 printf("\nO ano do veículo é: %d\n",carros[y].ano);
 printf("\nA placa do veículo é: %s\n",carros[y].placa);
 printf("\n\n ========//======== \n\n");   } 

return 0;}
