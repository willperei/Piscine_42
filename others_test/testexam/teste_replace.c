#include <unistd.h>

void	ft_search(char *argc, char arga, char argb)
{
	while (*argc !='\0')
	{
		if (*argc == arga)
		{
			*argc = argb;
		}
		write(1, argc, 1);
		argc++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			ft_search(argv[1], argv[2][0], argv[3][0]);
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
