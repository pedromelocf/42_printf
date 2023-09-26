#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_printf1(const char *test, ...)
{
	printf("%s", test);
	return (0);
}

int	ft_printf2(const char *test, ...)
{
	printf(test, 'a' , "aaaaaa" , test, 9, 'b', 'a', 'a', 'a');
	return (0);
}

int	main(void)
{
	char *test1;
	char *test2;

	test1 = "%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%";
	test2 = "%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%";
	printf("\nTest 1:\n");
	ft_printf1(test1, 'A', "LOUCO", 0, 56, 10, 15, 556, 540);
	printf("\n\nTest 2: \n\n");
	ft_printf2(test2);
	printf("\n");
	return 0;
}
