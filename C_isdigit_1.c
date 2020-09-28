#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = '3', b = '5.8'; //자료형을 char형으로 해야 한다. 

	printf("%d %d\n", isdigit(a), isdigit(b));

	return 0;
}