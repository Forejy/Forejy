#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%d", atoi("			596"));
	printf("\n1");
	printf("%d", atoi("+596"));
	printf("\n2");
	printf("%d", atoi(" +596"));
	printf("\n3");
	printf("%d", atoi("    +-596"));
	printf("\n4");
	printf("%d", atoi("bonjour596"));
	printf("\n5");
	printf("%d", atoi("bj596"));
	printf("\n6");
	printf("%d", atoi("596bonjour"));
	printf("\n7");
	printf("%d", atoi("@596"));
	printf("\n8");
	printf("%d", atoi("{596"));
	printf("\n9");
	printf("%d", atoi("[NULL]596"));
	printf("\n10");
	printf("%d", atoi("A"));
	printf("\n11");
	printf("%d", atoi("-0"));
	printf("\n12");
	printf("%d", atoi("    \r\n\t\v\f596"));
	return (0);

}
