/* Equa��o de primeiro grau*/
#include <stdio.h>
main()
{
	float B, C;
		printf("Digite o valor de 'b':");
		scanf("%f", &B);
		printf("Digite o valor de 'c':");
		scanf("%f", &C);
	
	if (B == 0)
		printf("N�o existe divis�o por ZERO\n");
	
	else{
		if (C == 0 )
			printf("O valor da equa��o �: 0\n");
		else
			printf("O valor da equa��o �: %f\n", -(C/B));
	}
}