#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_printf1(const char *test, ...)
{
	return (printf(test, 'A', "LOUCO", 0, 56, 10, 15, 556, 540));
}

int	ft_printf2(const char *test, ...)
{
	printf(test, 'a' , "aaaaaa" , test, 9, 'b', 'a', 'a', 'a');
	return (0);
}

int	main(void)
{
	const char *test1;
	const char *test2;

	test1 = "PEDRO:\n%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%\n";
	test2 = "%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%\n";
	printf("\nTEST 1:\n");
	printf("%d\n",ft_printf1(test1));
	printf("\nTEST 2: \n");
	ft_printf2(test2);
	printf("\n");
	return 0;
}
