/* Equação de primeiro grau*/
#include <stdio.h>
main()
{
	float B, C;
		printf("Digite o valor de 'b':");
		scanf("%f", &B);
		printf("Digite o valor de 'c':");
		scanf("%f", &C);
	
	if (B == 0)
		printf("Não existe divisão por ZERO\n");
	
	else{
		if (C == 0 )
			printf("O valor da equação é: 0\n");
		else
			printf("O valor da equação é: %f\n", -(C/B));
	}
}