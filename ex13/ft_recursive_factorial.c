#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int f;
	int resultat;
	
	if (nb < 0)
		return(0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
		return(ft_recursive_factorial(nb -1) * nb);
	return (0);
}

int main()
{
	printf("%d", ft_recursive_factorial(4));
	return(0);
}
