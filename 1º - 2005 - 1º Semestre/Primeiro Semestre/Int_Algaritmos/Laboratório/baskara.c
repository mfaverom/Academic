			/*Mackenzie Ciencias da Computaçao*/
				/*Baskara - Equacao de 2 Grau*/
					/* Murilo Favero Martin  CM: 3052944-1*/
						/*Trabalho realizado em dupla com*/
								/*--> Daniel Rocha Stanzani*/

#include <stdio.h>
#include <math.h>
main()
{
	float A, B, C, D, X;
	printf("Para resolver a equação de segundo grau: ax² + bx + c = 0\n");
	printf("Digite o valor de 'a': ");
	scanf("%f", &A);
	printf("Digite o valor de 'b': ");
	scanf("%f", &B);
	printf("Digite o valor de 'c': ");
	scanf("%f", &C);
	D = (B*B) - 4*(A*C);
	if ( A == 0 ){
		if (B == 0 && C != 0)
			printf("Não há solução.\n");
		else{
			if (C == 0 )
				printf("Quaquer valor satisfaz X.\n");
			else
				printf("O valor de X = %f\n", -(C/B));
		}
	}
	else{
		if ( D >= 0 ){
			D = sqrt(D);
			printf("O valor de X1 = %f\n", (-B/(2*A)) + D/(2*A));
			printf("O valor de X2 = %f\n", (-B/(2*A)) - D/(2*A));
		}
		else{
			X = (-B/(2*A));
			if (A < 0){
				A = -A;
			}
			D = (sqrt(-D))/(2*A);
			printf("O valor de X1 = %f + %fi\n", X, D);
			printf("O valor de X2 = %f - %fi\n", X, D);
		}
	}
}

/* Daniel Rocha Stanzani */ 
/* Murilo Favero Martin  */
