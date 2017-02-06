			    /* Murilo Favero Martin, CM: 3052944-1*/			
		     	/*Programa de calculo fatorial*/
			

#include <stdio.h>
#include <conio.h>
main()
{
	int num,aux,cont=0;
		
        printf("Entre com o um numero:\n");
		scanf("%d", &num);
 	               
                     cont=num-1;
 	                 aux=num;
                   
 	                
            if (num==0)
                      printf(" 0! = 1\n");
                            
                      while(cont!=1)
                      {
		              aux = aux-1;
                      num *= aux;
                      cont 
                      = cont-1;
                      
                      }
                      
                  
		printf("O fatorial e %d\n",num);
		getch();
					
return 0;
}
