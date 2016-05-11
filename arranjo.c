#include <stdio.h>
#define SIZE 100

int main()
{
	int s[ SIZE ]; 
	int j;
	int total = 0;
	
	for(j = 0; j < SIZE; j++) {
		s[ j ] = 2 + 2 * j;
	}

	for(j = 0; j < SIZE; j++) {
	total += s[j];
	}

	printf( "%s%13s\n", "Elemento", "Valor" );
	
	for ( j = 0; j < SIZE; j++){
		printf( "%7d%13d\n", j, s[ j ]);
	}

	printf("%s%d\n", "total: ", total);

return 0;
}
	
