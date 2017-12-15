#include <stdio.h>

int	ft_sqrt(int nb)
{
	int sqrt;
	int i;

	sqrt = 1;
	i = 0;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return(1);
	while ((sqrt * sqrt) < nb)
		sqrt++;	
	if ((nb % sqrt) == 0)
		return (sqrt); 
	return(0);
}

int main()
{
	printf("%d", ft_sqrt(27));
	return (0);
}	
