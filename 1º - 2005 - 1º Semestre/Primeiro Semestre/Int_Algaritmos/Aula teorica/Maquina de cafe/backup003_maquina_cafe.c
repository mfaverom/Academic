			    /* Murilo Favero Martin, CM: 3052944-1*/			
			    /*Simulacao de uma maquina de café*/
			

#include <stdio.h>
#include <conio.h>
main()
{
	int cent100=0,cent50=10,cent25=10,cent10=10,cent5=10,cafp=10,cafl=10,choc=10,trc100=0,trc50=0,trc25=0,trc10=0,trc5=0;

	float coin,opc,val=0,prc,trc;

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
                  
                    /*Resolver erro das moedas de 10 e 5 cents*/
                  
                    if (coin==0.10)
                	{ 
                        printf("\tMoeda de R$ 0.10\n\n\tInsira outra moeda ou tecle 0 (Zero) para escolher produto:\n\n");
                	   	cent10++;
                	   	val+=0.10;
                	}
                   
                   if (coin==0.05)
                    {  	printf("\tMoeda de R$ 0.05\n\n\tInsira outra moeda ou tecle 0 (Zero) para escolher produto:\n\n");
	            		cent5++;
        	    		val+=0.05;
            		}
            	   
                   if (coin!= 1 && coin!= 0.50 && coin!= 0.25 && coin!= 0.10 && coin!= 0.05 && coin!=0)
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
            {
			   prc=0.40;
                  
                           if (val == prc)
			                        /*verificar estoque*/
                                    if (cafp>=1)
                                           printf("\t Servir Cafe Puro.\n",cafp--);
                                    else
                                           printf("\t Cafe Puro em falta.\n Devolver a quantia de %f",val);
                           if (val < prc)
		                                   printf("\t Falta R$.\n");
		
                           if (val > prc)
                               {
                                    if (cafp>=1)
                                        {
                                           printf("\t Servir Cafe Puro.\n",cafp--);
                                           printf("\t Devolver R$: %.2f de troco\n",trc=val-prc);
                                           
                                                while (trc>=1)
                                                    {
                                                    trc100++;
                                                    trc-=1;
                                                    cent100--;
                                                    }
                                                while (trc>=0.50)
                                                    {
                                                    trc50++;
                                                    trc-=0.50;
                                                    cent50--;
                                                    }
                                                while (trc>=0.25)
                                                    {
                                                    trc25++;
                                                    trc-=0.25;
                                                    cent25--;
                                                    }
                                                while (trc>=0.10)
                                                    {
                                                    trc10++;
                                                    trc-=0.10;
                                                    cent10--;
                                                    }
                                                while (trc>=0.05)
                                                    {
                                                    trc5++;
                                                    trc-=0.05;
                                                    cent5--;
                                                    }
                                                    
                                           printf("\t Em %d moedas e 1 real\n",trc100);
                                           printf("\t Em %d moedas e 50 centavos\n",trc50);
                                           printf("\t Em %d moedas e 25 centavos\n",trc25);
                                           printf("\t Em %d moedas e 10 centavos\n",trc10);
                                           printf("\t Em %d moedas e 05 centavos\n\n",trc5);
                                       }
                                    else   
                                       { 
                                           printf("\t Cafe Puro em falta.\n Devolver a quantia de %f",val); 
                                           printf("\t Experimente nosso Cafe com Leite \n ou o nosso Chocolate quente!!!!!!");
                                        }
                               }
            }
         if (opc==2)
            {
			   prc=0.60;
			   
			               if (val == prc)
			                        /*verificar estoque*/
                                    if (cafl>=1)
                                           printf("\t Servir Cafe com Leite.\n",cafl--);
                                    else 
                                    {
                                           printf("\t Cafe com Leite em falta.\n Devolver a quantia de %f",val);
                                           printf("\t Experimente nosso Cafe Puro \n ou o nosso Chocolate quente!!!!!!");
                                    }
                           if (val < prc)
		                                   printf("\t Falta R$.\n");
		
                           if (val > prc)
                               {
                                    if (cafl>=1)
                                        {
                                           printf("\t Servir Cafe com Leite.\n",cafl--);
                                           printf("\t Devolver R$: %.2f de troco\n",trc=val-prc);
                                           
                                                while (trc>=1)
                                                    {
                                                    trc100++;
                                                    trc-=1;
                                                    cent100--;
                                                    }
                                                while (trc>=0.50)
                                                    {
                                                    trc50++;
                                                    trc-=0.50;
                                                    cent50--;
                                                    }
                                                while (trc>=0.25)
                                                    {
                                                    trc25++;
                                                    trc-=0.25;
                                                    cent25--;
                                                    }
                                                while (trc>=0.10)
                                                    {
                                                    trc10++;
                                                    trc-=0.10;
                                                    cent10--;
                                                    }
                                                while (trc>=0.05)
                                                    {
                                                    trc5++;
                                                    trc-=0.05;
                                                    cent5--;
                                                    }
                                                    
                                           printf("\t Em %d moedas e 1 real\n",trc100);
                                           printf("\t Em %d moedas e 50 centavos\n",trc50);
                                           printf("\t Em %d moedas e 25 centavos\n",trc25);
                                           printf("\t Em %d moedas e 10 centavos\n",trc10);
                                           printf("\t Em %d moedas e 05 centavos\n\n",trc5);
                                      }
                                   else
                                        { 
                                           printf("\t Cafe com Leite em falta.\n Devolver a quantia de %f",val); 
                                           printf("\t Experimente nosso Cafe Puro \n ou o nosso Chocolate quente!!!!!!");
                                        }   
                               }
			   
			   
			               }
			/*if (opc==3)
  			(
			   prc=0.70;
			               if (val == prc)
			                        /*verificar estoque*/
                                 /*   if (choc>=1)
                                           printf("\t Servir Chocolate quente.\n",choc--);
                                    else 
                                    {
                                           printf("\t Chocolate quente em falta.\n Devolver a quantia de %f",val);
                                           printf("\t Experimente nosso Cafe Puro \n ou o nosso Cafe com leite!!!!!!");
                                    }
                           if (val < prc)
		                                   printf("\t Falta R$.\n");
		
                           if (val > prc)
                               {
                                    if (choc>=1)
                                        {
                                           printf("\t Servir Cafe com Leite.\n",cafl--);
                                           printf("\t Devolver R$: %.2f de troco\n",trc=val-prc);
                                           
                                                while (trc>=1)
                                                    {
                                                    trc100++;
                                                    trc-=1;
                                                    cent100--;
                                                    }
                                                while (trc>=0.50)
                                                    {
                                                    trc50++;
                                                    trc-=0.50;
                                                    cent50--;
                                                    }
                                                while (trc>=0.25)
                                                    {
                                                    trc25++;
                                                    trc-=0.25;
                                                    cent25--;
                                                    }
                                                while (trc>=0.10)
                                                    {
                                                    trc10++;
                                                    trc-=0.10;
                                                    cent10--;
                                                    }
                                                while (trc>=0.05)
                                                    {
                                                    trc5++;
                                                    trc-=0.05;
                                                    cent5--;
                                                    }
                                                    
                                           printf("\t Em %d moedas e 1 real\n",trc100);
                                           printf("\t Em %d moedas e 50 centavos\n",trc50);
                                           printf("\t Em %d moedas e 25 centavos\n",trc25);
                                           printf("\t Em %d moedas e 10 centavos\n",trc10);
                                           printf("\t Em %d moedas e 05 centavos\n\n",trc5);
                                      }
                                   else
                                        { 
                                           printf("\t Cafe com Leite em falta.\n Devolver a quantia de %f",val); 
                                           printf("\t Experimente nosso Cafe Puro \n ou o nosso Chocolate quente!!!!!!");
                                        }   
                               }
			   
	  	
        		               
			}          
				*/
		        printf("\n\n\n A Maquina possui %d moedas de 1 Real \n",cent100);
		        printf("A Maquina possui %d moedas de 50 Centavos \n",cent50);
                printf("A Maquina possui %d moedas de 25 Centavos \n",cent25);
                printf("A Maquina possui %d moedas de 10 Centavos \n",cent10);
                printf("A Maquina possui %d moedas de 05 Centavos \n\n",cent5);
                
                printf("O usuario depositou %.2f \n \n",val);
                printf("O preco do produto escolhido e %.2f \n \n",prc);
                	
               	printf("A Maquina possui %d Cafe Puro \n",cafp);
               	printf("A Maquina possui %d Cafe com Leite \n",cafl);
               	printf("A Maquina possui %d Chocolates Quente \n",choc);
		
		
		getch();
return 0;
}

