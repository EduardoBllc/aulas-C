#include <stdio.h>

int main() {
	printf("Digite dois números inteiros\n");
	
	int x;
	int y;
	
	printf("1.: ");
	scanf("%d", &x);
	printf("2.: ");
	scanf("%d", &y);

    int multiplicacao = x * y;
    printf("\n");
    printf("O resultado da multiplicação de %d e %d é %d\n", x, y, multiplicacao);
    
    return 0;
}