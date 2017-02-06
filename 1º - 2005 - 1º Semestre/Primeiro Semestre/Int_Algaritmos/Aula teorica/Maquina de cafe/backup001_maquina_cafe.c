			    /* Murilo Favero Martin, CM: 3052944-1*/			
			    /*Simulacao de uma maquina de café*/
			

#include <stdio.h>
#include <conio.h>
main()
{
	int cent100=0,cent50=10,cent25=10,cent10=10,cent05=10;
	float coin,opc,val,prc;

	    /*Entrada de Moedas*/
		printf("Entre com as moedas nos seguintes valores:\n\n");
		
        printf("\tR$ 0.05\n");
		printf("\tR$ 0.10\n");
		printf("\tR$ 0.25\n");
		printf("\tR$ 0.50\n");
		printf("\tR$ 1.00\n\n");
		
        printf("Digite 0 (zero) para escolher produto:\n\n");
		
        scanf("%f",&coin);
        
        /*Se != dos valores ou de 0 (zero)devolver moeda e inserir outra*/
        
        if (coin != 0){
                   if (coin=1.00)
                  	 }
                   	     printf("\tMoeda de R$ 1.00\n\n\tTecle 0 (Zero) para escolher produto:\n\n");
                   		cent100+=1;
                   		val+=1.00;
                 	 }	                   
	           if (coin=0.50)
                  	 {
                 	       printf("\tMoeda de R$ 0.50\n\n\tInsira outra moeda ou tecle 0 (Zero) para escolher produto:\n\n");
	        	      	cent50+=1;
	              		val+=0.50;
	              	}
                   if (coin=0.25)
               		{
                	        printf("\tMoeda de R$ 0.25\n\n\tInsira outra moeda ou tecle 0 (Zero) para escolher produto:\n\n");
                	   	cent25+=1;
               		    	val+=0.25;
                	}
                   if (coin=0.10)
                	{ 
                	        printf("\tMoeda de R$ 0.10\n\n\tInsira outra moeda ou tecle 0 (Zero) para escolher produto:\n\n");
                	   	cent10+=1;
                	   	val+=0.10;
                	}
                   if (coin=0.05)
                   	{
                        	printf("\tMoeda de R$ 0.05\n\n\tInsira outra moeda ou tecle 0 (Zero) para escolher produto:\n\n");
	            		cent05+=1;
        	    		val+=0.05;
            		}
            	   if (val=0)
         		printf("Moeda invalida insira uma moeda nos seguintes valores:\n\n\tR$ 0.05\n\tR$ 0.10\n\tR$ 0.25\n\tR$ 0.50\n\tR$ 1.00\n\n");
        
                      }
        else
            		/*Menu de Opcoes*/
	      
        	printf("Digite o numero do produto desejado: ");
		printf("\t 1 --> Cafe Puro = R$ 0.40");
		printf("\t 2 --> Cafe com Leite = R$ 0.60");
		printf("\t 3 --> Chocolate Quente = R$ 0.70");
		scanf("%f", &opc);
	
		if (val == prc)
			printf("Ok.\n");
		
		if (val < prc)
			printf("Falta R$.\n");
		
		if (val > prc)
			printf("Devolver troco em R$.\n");
			
				
		
		
		
		
		getch();
return 0;
}
