#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_printf(const char *test, ...)
{
	printf(test, 'A' , "LOUCO", 0, 56, 10, 15, 556, 540, 540);
	return (0);
}

int	main(void)
{
	char *test;

	test = "%c\n%s\n%p\n%d\n%d\n%i\n%u\n%x\n%X\n%%\n";
	ft_printf(test);
	return 0;
}
