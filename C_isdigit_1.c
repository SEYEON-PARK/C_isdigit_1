#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = '3', b = '5.8'; //�ڷ����� char������ �ؾ� �Ѵ�. 

	printf("%d %d\n", isdigit(a), isdigit(b));

	return 0;
}