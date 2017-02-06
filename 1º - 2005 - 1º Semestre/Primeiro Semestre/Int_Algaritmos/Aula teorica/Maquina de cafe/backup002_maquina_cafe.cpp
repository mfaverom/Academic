			    /* Murilo Favero Martin, CM: 3052944-1*/			
			    /*Simulacao de uma maquina de café*/
			

#include <stdio.h>
#include <conio.h>
main()
{
	int cent100=0,cent50=10,cent25=10,cent10=10,cent05=10,cafp=10,cafl=10,choc=10;

	float coin,opc,val=0,prc;

	    /*Entrada de Moedas*/
		
        
        printf("Entre com as moedas nos seguintes valores:\n\n");
		
        printf("\tR$ 0.05\n");
		printf("\tR$ 0.10\n");
		printf("\tR$ 0.25\n");
		printf("\tR$ 0.50\n");
		printf("\tR$ 1.00\n\n");
		
        printf("Digite 0 (zero) para escolher produto:\n\n");
		
  while (coin != 0){
  
        scanf("%f",&coin);
        
        /*Se != dos valores ou de 0 (zero)devolver moeda e inserir outra*/
        
       
                   
                  if (coin==1.00)
                        {
                        printf("\tMoeda de R$ 1.00\n\n\tTecle 0 (Zero) para escolher produto:\n\n");
                        cent100++;
                        val+=1.00;
                        }                       
                   
                  if (coin==0.50)
                        {
                 	    printf("\tMoeda de R$ 0.50\n\n\tInsira outra moeda ou tecle 0 (Zero) para escolher produto:\n\n");
	        	        cent50++;
    		 	        val+=0.50;
	                    }
                   
                  if (coin==0.25)
               		{
                        printf("\tMoeda de R$ 0.25\n\n\tInsira outra moeda ou tecle 0 (Zero) para escolher produto:\n\n");
                	   	cent25++;
               	    	val+=0.25;
                	}
                   
                   if (coin==0.10)
                	{ 
                        printf("\tMoeda de R$ 0.10\n\n\tInsira outra moeda ou tecle 0 (Zero) para escolher produto:\n\n");
                	   	cent10++;
                	   	val+=0.10;
                	}
                   
                   if (coin==0.05)
                   	{
                       	printf("\tMoeda de R$ 0.05\n\n\tInsira outra moeda ou tecle 0 (Zero) para escolher produto:\n\n");
	            		cent05++;
        	    		val+=0.05;
            		}
            	   
                  if (val==0)
         		                  
                        printf("Insira uma moeda nos seguintes valores:\n\n\tR$ 0.05\n\tR$ 0.10\n\tR$ 0.25\n\tR$ 0.50\n\tR$ 1.00\n\n");
                        
                  if (coin!= 1.00 && coin!= 0.50 && coin!= 0.25 && coin!= 0.10 && coin!= 0.05 && coin!=0)
                        printf("Moeda invalida insira uma moeda nos seguintes valores:\n\n\tR$ 0.05\n\tR$ 0.10\n\tR$ 0.25\n\tR$ 0.50\n\tR$ 1.00\n\n");
                        
                        
    }
        
        
            		/*Menu de Opcoes*/
	     
     	printf("Digite o numero do produto desejado: \n\n");
		printf("\t 1 --> Cafe Puro = R$ 0.40\n");
		printf("\t 2 --> Cafe com Leite = R$ 0.60\n");
		printf("\t 3 --> Chocolate Quente = R$ 0.70\n");
		scanf("%f", &opc);
	
			/*Atribuiçao de preço em relacao a escolha*/
			
            if (opc==1)
			   prc=0.40;
			if (opc==2)
			   prc=0.60;
			if (opc==3)
			   prc=0.70;
			   
	  	
        if (val == prc)
			{
                  printf("Valor Ok.\n");
			      
                  if (opc==1)
			               printf("\t Servir Cafe Puro.\n",cafp--);
                  if (opc==2)
			               printf("\t Servir Cafe com Leite.\n",cafl--);
			      if (opc==3)
			               printf("\t Servir Chocolate quente.\n",choc--);
			 }         
		
		if (val < prc)
			printf("Falta R$.\n");
		
		if (val > prc)
		        {
                  printf("Devolver troco em R$.\n");
				  
                  if (opc==1)
			               printf("\t Servir Cafe Puro.\n",cafp--);
                  if (opc==2)
			               printf("\t Servir Cafe com Leite.\n",cafl--);
			      if (opc==3)
			               printf("\t Servir Chocolate quente.\n",choc--);
			               
			     }          
			
		        printf("A Maquina possui %d moedas de 1 Real \n",cent100);
		        printf("A Maquina possui %d moedas de 50 Centavos \n",cent50);
                printf("A Maquina possui %d moedas de 25 Centavos \n",cent25);
                printf("A Maquina possui %d moedas de 10 Centavos \n",cent10);
                printf("A Maquina possui %d moedas de 05 Centavos \n\n",cent05);
                
                printf("O usuario depositou %.2f \n \n",val);
                	
               	printf("A Maquina possui %d Cafe Puro \n",cafp);
               	printf("A Maquina possui %d Cafe com Leite \n",cafl);
               	printf("A Maquina possui %d Chocolates Quente \n",choc);
		
		
		getch();
return 0;
}

