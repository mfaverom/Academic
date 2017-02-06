			    /* Murilo Favero Martin, CM: 3052944-1*/			
			/*Programa de maquina de refrigerante e outros*/
			

#include <stdio.h>
main()
{
	int rs2=100, rs1=100, cent50=100, cent25=100, cent10=100, cent5=100, cent1=100;
	float pdt, val, trc, cxa, prc, opc;
	
		printf("Entre com dinheiro ate 2 Reais:\n");
		scanf("%f", &val);
			/*Calcula o valor de cada nota ou moeda*/
			/*if(val==2)
				rs2;
				
			else
				{if (val==1)
					++rs1;
				else
					{
					if (val==1/2)
						++cent50;
					else
						{
						if (val==1/4)
							++cent25;
						else
							{
							if (val==1/10)
								++cent10;
							else
								{
								if (val==1/20)
									++cent5;
								else		
									if (val==1/100)
										++cent1;
								}
							}
						}
					}					
				}
		
			
		
		/*Menu de Opcoes*/
		printf("Digite o numero do produto desejado: ");
		printf("\t Coca-Cola = \t 1");
		printf("\t Coca-Cola Light = \t 2");
		printf("\t Guarana Antartica = \t 3");
		printf("\t Pepsi Twist = \t 4");
		printf("\t Suco Del Valle = \t 5");
		scanf("%f", &opc);
	
		if ( val == prc )
			printf("Ok.\n");
		else
			{
			if (val < prc)
				printf("Falta R$.\n");
			else
				{
				printf("Devolver troco em R$.\n");
			
				if (cxa > trc)
					printf("Devolver troco em R$.\n");
				else
					printf("Devolver dinheiro e nao entregar Produto.\n");
			
				}
			}
return 0;
}
/*
..............//\\\...............
............///_\\\\..............
...........||.^|^\\\..............
...........))\_-_/ ((\............
..........)'_/.".\_`\)............
.......././._.\.../...\...........
......././(_.\x/._).|.............
.......\.\.)".|."(/./.............
........\.'...'.. //./............
......../....`..././..............
.......|....V.\.\................
.......|.../.\...\/...............
.......|..|...\...\...............
.......|..|....\...\..............
.......|..|......\..\.............
.......|..|.......\..\............
.......|..|........\..\...........
.......|..|.........\..\..........
....../__\.........|__\...........
......./.|............|.\_........
 */