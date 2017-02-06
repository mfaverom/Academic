 /*   /\____________________________________________________/\
     / ------------------------------------------------------ \
     \ NOME          : Murilo Favero Martin                   /
     | CM            : 3052944-1                             |
     | CURSO         : 5117-9                                |
     | ATIVIDADE     : Simulacao de uma maquina de café      |
    / ------------------------------------------------------- \
    \_         Universidade Presbiteriana MACKENZIE          _/
      \		         Ciência da Computação                  /
       \                  ____________                     / 
        \  __________    /            \    _____________  /
         \/          \  /              \  /             \/
                      \/    .      .    \/ 
                       \_____\    /_____/ 
                              \  /  
                               \/
*/			    			

#include <stdio.h>
#include <conio.h>
main()
{
	int coin,opc,
        cent100=0,cent50=10,cent25=10,cent10=10,cent5=10,
        cafp=10,cafl=10,choc=10,
        trc100=0,trc50=0,trc25=0,trc10=0,trc5=0,
        p100=0,p50=0,p25=0,p10=0,p5=0;
        
	float val=0,val2,prc,trc;

	    /*Entrada de Moedas*/
do { 
        printf("\n\n\t Digite o numero referente as \n\t moedas nos seguintes valores:\n\n");
		
        printf("\t 1 --> R$ 0.05\n");
		printf("\t 2 --> R$ 0.10\n");
		printf("\t 3 --> R$ 0.25\n");
		printf("\t 4 --> R$ 0.50\n");
		printf("\t 5 --> R$ 1.00\n\n");
		
        printf("\t Digite 0 (Zero) para escolher produto:\n\n");
        printf("\t Digite 9 (Nove) para encerrar programa:\n\n");
		
      while (coin != 0){
              
        scanf("%d",&coin);
        
        /*Se != de 1,2,3,4,5,9 ou 0 (zero) inserir outra moeda no valor certo*/
                  
                  if (coin==5)
                        {
                        printf("\tMoeda de R$ 1.00\n\n");
                        cent100++;
                        val+=1.00;
                        p100++;
                        }                       
                   
                  if (coin==4)
                        {
                 	    printf("\tMoeda de R$ 0.50\n\n");
	        	        cent50++;
    		 	        val+=0.50;
    		 	        p50++;
	                    }
                   
                  if (coin==3)
               		{
                        printf("\tMoeda de R$ 0.25\n\n");
                	   	cent25++;
               	    	val+=0.25;
               	    	p25++;
                	}
                               
                    if (coin==2)
                	{ 
                        printf("\tMoeda de R$ 0.10\n\n");
                	   	cent10++;
                	   	val+=0.10;
                	   	p10++;
                	}
                   
                   if (coin==1)
                    {  	printf("\tMoeda de R$ 0.05\n\n");
	            		cent5++;
        	    		val+=0.05;
        	    		p5++;
            		}
            	   
                   if (coin!= 1 && coin!= 2 && coin!= 3 && coin!= 4 && coin!= 5 && coin!=0 && coin!=9)
                        printf("Moeda invalida insira uma moeda nos seguintes valores:\n\n\tR$ 0.05\n\tR$ 0.10\n\tR$ 0.25\n\tR$ 0.50\n\tR$ 1.00\n\n");
        }
        
            		/*Menu de Opcoes*/
	     
     	printf("Digite o numero do produto desejado: \n\n");
		printf("\t 1 --> Cafe Puro = R$ 0.40\n");
		printf("\t 2 --> Cafe com Leite = R$ 0.60\n");
		printf("\t 3 --> Chocolate Quente = R$ 0.70\n\n");
		scanf("%d",&opc);
		if (opc!= 1 && opc!= 2 && opc!= 3){
            printf("\t\t---Opcao invalida!!!!!--- \n\t\t Devolver Dinheiro\n");
            val=0;p100=0;p50=0;p25=0;p10=0;p5=0;}
        	
			/*Atribuiçao de preço em relacao a escolha*/
			if (opc==1)
			   prc=0.40;
            if (opc==2)
               prc=0.60;
            if (opc==3)
               prc=0.70;
               /*Verificaçao de troco caso necessário*/
            
            if (val>prc)
            
            trc=val-prc;
         
            while (trc>=1){
                 trc100++;
                 trc-=1;
                 cent100--;}
            while (trc>=0.50){
                 trc50++;
                 trc-=0.50;
                 cent50--;}
            while (trc>=0.25){
                 trc25++;
                 trc-=0.25;
                 cent25--;}
            while (trc>=0.09){
                 trc10++;
                 trc-=0.10;
                 cent10--;}
           while(trc>=0.049){
                 trc5++;
                 trc-=0.05;
                 cent5--;}
            
                           
						
        if (opc==1)
          {
			               /*verificar estoque*/
			  if (cafp>=1)                 
                 {
                   if (val < prc)
                           printf("\t Quantia insuficiente. Entre com outra(s) moeda(s).\n");
                   if (val == prc)
                       {
                           printf("\t ---Servir Cafe Puro---.\n",cafp--);
                           val=0;p100=0;p50=0;p25=0;p10=0;p5=0;
                           trc100=0,trc50=0,trc25=0,trc10=0,trc5=0;
                           getch();
                       }
                   
                   if (val > prc)
                      {
                           printf("\t ---Servir Cafe Puro---.\n\n",cafp--);
                           printf("\t Devolver R$: %.2f de troco\n\n",trc=val-prc);
                                 
                           printf("\t Em %d moedas e 1 real\n",trc100);
                           printf("\t Em %d moedas e 50 centavos\n",trc50);
                           printf("\t Em %d moedas e 25 centavos\n",trc25);
                           printf("\t Em %d moedas e 10 centavos\n",trc10);
                           printf("\t Em %d moedas e 05 centavos\n\n",trc5);
                           trc100=0,trc50=0,trc25=0,trc10=0,trc5=0;
                           val=0;p100=0;p50=0;p25=0;p10=0;p5=0;
                           getch();
                      }                   
                           
                  }
                else
                  {
                           
                           printf("\t Cafe Puro em FALTA.\n\t Devolver a quantia de %.2f \n",val);
                           val=0;
                           printf("\t Em %d moedas e 1 real\n",p100);
                           printf("\t Em %d moedas e 50 centavos\n",p50);
                           printf("\t Em %d moedas e 25 centavos\n",p25);
                           printf("\t Em %d moedas e 10 centavos\n",p10);
                           printf("\t Em %d moedas e 05 centavos\n",p5);
                           for(;p100>=1;cent100--,p100--)
                           for(;p50>=1;cent50--,p50--)
                           for(;p25>=1;cent25--,p25--)
                           for(;p10>=1;cent10--,p10--)
                           for(;p5>=1;cent5--,p5--)
                           getch();
                  }       
                                         
                   
           }     
           
        if (opc==2)
          {
			               /*verificar estoque*/
			  if (cafl>=1)                 
                 {
                   if (val < prc)
                           printf("\t Quantia insuficiente. Entre com outra(s) moeda(s).\n");
                   if (val == prc)
                       {
                           printf("\t ---Servir Cafe com Leite---.\n",cafl--);
                           val=0;p100=0;p50=0;p25=0;p10=0;p5=0;
                           trc100=0,trc50=0,trc25=0,trc10=0,trc5=0;
                           getch();
                       }
                   
                   if (val > prc)
                      {
                           printf("\t ---Servir Cafe com Leite---.\n\n",cafl--);
                           printf("\t Devolver R$: %.2f de troco\n\n",trc=val-prc);
                                 
                           printf("\t Em %d moedas e 1 real\n",trc100);
                           printf("\t Em %d moedas e 50 centavos\n",trc50);
                           printf("\t Em %d moedas e 25 centavos\n",trc25);
                           printf("\t Em %d moedas e 10 centavos\n",trc10);
                           printf("\t Em %d moedas e 05 centavos\n\n",trc5);
                           trc100=0,trc50=0,trc25=0,trc10=0,trc5=0;
                           val=0;p100=0;p50=0;p25=0;p10=0;p5=0;
                           getch();
                      }                   
                           
                  }
                else
                  {
                           
                           printf("\t Cafe com Leite em FALTA.\n\t Devolver a quantia de %.2f \n",val);
                           val=0;
                           printf("\t Em %d moedas e 1 real\n",p100);
                           printf("\t Em %d moedas e 50 centavos\n",p50);
                           printf("\t Em %d moedas e 25 centavos\n",p25);
                           printf("\t Em %d moedas e 10 centavos\n",p10);
                           printf("\t Em %d moedas e 05 centavos\n",p5);
                           for(;p100>=1;cent100--,p100--)
                           for(;p50>=1;cent50--,p50--)
                           for(;p25>=1;cent25--,p25--)
                           for(;p10>=1;cent10--,p10--)
                           for(;p5>=1;cent5--,p5--)
                           getch();
                  }       
                                         
                   
           }      
           if (opc==3)
          {
			               /*verificar estoque*/
			  if (choc>=1)                 
                 {
                   if (val < prc)
                           printf("\t Quantia insuficiente. Entre com outra(s) moeda(s).\n");
                   if (val == prc)
                       {
                           printf("\t ---Servir Chocolate Quente---.\n",choc--);
                           val=0;p100=0;p50=0;p25=0;p10=0;p5=0;
                           trc100=0,trc50=0,trc25=0,trc10=0,trc5=0;
                           getch();
                       }
                   
                   if (val > prc)
                      {
                           printf("\t *---Servir Chocolate Quente---.\n\n",choc--);
                           printf("\t Devolver R$: %.2f de troco\n\n",trc=val-prc);
                                 
                           printf("\t Em %d moedas e 1 real\n",trc100);
                           printf("\t Em %d moedas e 50 centavos\n",trc50);
                           printf("\t Em %d moedas e 25 centavos\n",trc25);
                           printf("\t Em %d moedas e 10 centavos\n",trc10);
                           printf("\t Em %d moedas e 05 centavos\n\n",trc5);
                           trc100=0,trc50=0,trc25=0,trc10=0,trc5=0;
                           val=0;p100=0;p50=0;p25=0;p10=0;p5=0;
                           getch();
                      }                   
                           
                  }
                else
                  {
                           
                           printf("\t Chocolate Quente em FALTA.\n\t Devolver a quantia de %.2f \n",val);
                           val=0;
                           printf("\t Em %d moedas e 1 real\n",p100);
                           printf("\t Em %d moedas e 50 centavos\n",p50);
                           printf("\t Em %d moedas e 25 centavos\n",p25);
                           printf("\t Em %d moedas e 10 centavos\n",p10);
                           printf("\t Em %d moedas e 05 centavos\n",p5);
                           for(;p100>=1;cent100--,p100--)
                           for(;p50>=1;cent50--,p50--)
                           for(;p25>=1;cent25--,p25--)
                           for(;p10>=1;cent10--,p10--)
                           for(;p5>=1;cent5--,p5--)
                           getch();
                  }       
                                         
                   
           }      
           
               
                       /*Atribuição de um valor qualquer para coin
                       fazendo com que o mesmo deixe de ser 0 (Zero)
                       Possibilitando nova inserçao de moedas*/
             coin=8;
            
 }/*<-- Refente ao dowhile*/
		 while (coin!=9);
			
		getch();
 return 0;

}/*<-- Refente ao main*/

              
