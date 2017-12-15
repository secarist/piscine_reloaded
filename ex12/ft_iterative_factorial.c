#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int fact;
	int resultat;
	
	fact = nb;
	resultat = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (fact > 1)
	{
		resultat = resultat * fact;
		fact--;
	}
	return (resultat);
}


int main()
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}

