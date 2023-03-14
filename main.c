#include "stdio.h"
#include "Animal.h"

int main() {
	Animal a;
	Animal_Ctor(&a, 1, 2);
	printf("%d", Animal_GetAge(&a));
	return 0;
}

