#include <stdio.h>

void	ft_board(char *str)
{
	printf("\n %c |  %c  | %c \n", str[6], str[7], str[8]);
	printf("---+-----+---\n");
	printf(" %c |  %c  | %c \n", str[3], str[4], str[5]);
	printf("---+-----+---\n");
	printf(" %c |  %c  | %c \n", str[0], str[1], str[2]);
}

int	ft_checkwinner(char *str)
{
	if (str[0] == str[1] && str[1] == str[2] && str[0] != ' ')
	{
		if (str[0] == 'X')
			return (1);
		return (2);
	}
	if (str[3] == str[4] && str[4] == str[5] && str[3] != ' ')
		{
		if (str[3] == 'X')
			return (1);
		return (2);
	}
	if (str[6] == str[7] && str[7] == str[8] && str[6] != ' ')
		{
		if (str[6] == 'X')
			return (1);
		return (2);
	}
	if (str[0] == str[3] && str[3] == str[6] && str[0] != ' ')
		{
		if (str[0] == 'X')
			return (1);
		return (2);
	}
	if (str[1] == str[4] && str[4] == str[7] && str[1] != ' ')
		{
		if (str[1] == 'X')
			return (1);
		return (2);
	}
	if (str[2] == str[5] && str[5] == str[8] && str[2] != ' ')
		{
		if (str[2] == 'X')
			return (1);
		return (2);
	}
	if (str[0] == str[4] && str[4] == str[8] && str[0] != ' ')
		{
		if (str[0] == 'X')
			return (1);
		return (2);
	}
	if (str[2] == str[4] && str[4] == str[6] && str[2] != ' ')
		{
		if (str[2] == 'X')
			return (1);
		return (2);
	}
	if (str[0] != ' ' && str[1] != ' ' && str[2] != ' ' && str[3] != ' ' && str[4] != ' ' && str[5] != ' ' && str[6] != ' ' && str[7] != ' ' && str[8] != ' ')
		return (3);
	return (0);
}

int	main()
{
	char	*str;
	int		checkwinner;
	int		player;
	int		move;
	int		counter;
	

	str[0] = ' ';
	str[1] = ' ';
	str[2] = ' ';
	str[3] = ' ';
	str[4] = ' ';
	str[5] = ' ';
	str[6] = ' ';
	str[7] = ' ';
	str[8] = ' ';
	player = 0;
	checkwinner = 0;
	counter = 0;
	move = 0;
	while (checkwinner == 0)
	{
		
		if (player == 0)
		{
			printf("\n\nPLAYER 1\n\n..............\n");
			ft_board(str);
			printf("\n..............\n\nchoose a spot from 1 to 9: \n\n");
			while (move < 1 || move > 9 || str[move - 1] != ' ')
			{
				scanf("%d", &move);
				if (move < 1 || move > 9)
					printf("thats is not a number between 1 and 9, try again: \n\n");
				else if (str[move - 1] == 'X' || str[move - 1] == 'O')
					printf("that spot has already been used, try again:\n\n");
			}
			str[move - 1] = 'X';
			checkwinner = ft_checkwinner(str);
			player = 1;
		}
		else
		{
			printf("\n\nPLAYER 2\n\n..............\n");
			ft_board(str);
			printf("\n..............\n\nchoose a spot from 1 to 9: \n\n");
			while (move < 1 || move > 9 || str[move - 1] != ' ')
			{
				scanf("%d", &move);
				if (move < 1 || move > 9)
					printf("invalid input, try again: \n\n");
				else if (str[move - 1] == 'X' || str[move - 1] == 'O')
					printf("a piece in that spot already, try again: \n\n");
			}
			str[move - 1] = 'O';
			checkwinner = ft_checkwinner(str);
			player = 0;
		}
		if (checkwinner != 0)
			printf("\n\n\n\n");
		ft_board(str);
	}
	printf("\n--GAME-OVER--\n\n");
	if (checkwinner == 1)
		printf("\nPLAYER 1 WINS\n\n");
	else if (checkwinner == 2)
		printf("\nPLAYER 2 WINS\n\n");
	else
		printf("\n----DRAW----\n\n");
}
