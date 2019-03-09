#include <stdio.h>

int main(void) {
	int* ptr = ( (void*) 0 );
	
	int x = 5;
	ptr = &x;
	
	printf("%d ", *ptr);
}
