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


    int digito, i, abc, ano, z, y, x;
    z=0;
    ano=0;
    i=0;
    carros[i].abc = 0;
    char modelo[30];

               

    strcpy(carros[i].marca,"NULL");

    strcpy(carros[i].modelo,"NULL");

    strcpy(carros[i].placa,"NULL");

    carros[i].ano = 0;

    do{
    	printf("Digite 1 para cadastrar um ve�culo.\nDigite 2 para listar ve�culos cadastrados.\nDigite 3 para pesquisar modelo de carro..\nDigite 4 para ver os modelos de carro a partir de um ano.\n");
        scanf("%d", &digito);
        switch(digito){
        	
        	case 1:
       if(carros[i].abc <= 9){
       		carros[i].abc = i;
                printf("\nMarca do carro: ");
                scanf("%s",&carros[i].marca);
                printf("\nModelo do carro: ");
                scanf("%s",&carros[i].modelo);
                printf("\nAno do carro: ");
                scanf("%d",&carros[i].ano);
                printf("\nPlaca do carro: (Ex: ABC-1234)");
                scanf("%s",&carros[i].placa);
                
                i += 1;
            }else{
            	printf("\nO limite de cadastro � 10!");
			}
			break;    
			
			
			case 2:
				 for(x=0; x<i; x++){

                    printf("\nA marca do ve�culo �: %s",carros[x].marca);
				    printf("\nO modelo do ve�culo �: %s",carros[x].modelo);
                    printf("\nO ano do ve�culo �: %d",carros[x].ano);
                    printf("\nA placa do ve�culo �: %s",carros[x].placa);
                   printf("\n\n ========//======== \n \n");
				   }
                	break;
                	
      	case 3:

        printf("\nInsira o modelo de carro desejado: ");

         scanf("%s", &modelo);

        for (x=0; x<i; x++){
if (strcmp(carros[x].modelo,  strlwr(modelo)) == 0) {
printf("\nA marca do ve�culo �: %s",carros[x].marca);
 printf("\nO modelo do ve�culo �: %s",carros[x].modelo);
 printf("\nO ano do ve�culo �: %d",carros[x].ano);
	 printf("\nA placa do ve�culo �: %s",carros[x].placa);
			z++;
		}
	}
if (z==0){
    printf("\nN�o foi encontrado nenhum ve�culo com esse modelo: %s \n\n",modelo);
}else {
      z=0;
	}
      break;
 case 4:

             printf("\nInsira o ano a ser pesquisado: ");

             scanf("%d",&ano);

                                                                                             

             for (x=0; x<i; x++){

                 if (carros[x].ano >= ano){

                   printf("\n A marca do ve�culo �: %s",carros[x].marca);
                   printf("\n O modelo do ve�culo �: %s",carros[x].modelo);
                   printf("\n O ano do ve�culo �: %d",carros[x].ano);
                   printf("\n A placa do ve�culo �: %s",carros[x].placa);
                   printf("\n\n ========//======== \n \n");

       z++;  
	   }
 }if (z==0){

      printf("\nN�o foi encontrado ve�culos acima de %d :/ \n\n",ano);
}else {
z=0;
} break;

    default:
		printf("\nOp��o n�o existe");
		break;}
		}
 
while (abc!=5 && i<=9);
 if (i==9){
	printf("\nLimite de ve�culos ultrapassado!! \n \n \n");
 }for (y=0; y<i; y++) {
 printf("\nA marca do ve�culo �: %s",carros[y].marca);

 printf("\nO modelo do ve�culo �: %s",carros[y].modelo);

 printf("\nO ano do ve�culo �: %d",carros[y].ano);

 printf("\nA placa do ve�culo �: %s",carros[y].placa);

 printf("\n\n ========//======== \n\n");
   }
 


return 0;
}



