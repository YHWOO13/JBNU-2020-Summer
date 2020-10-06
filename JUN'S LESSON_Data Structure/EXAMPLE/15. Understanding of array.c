/* Author: Yoonhyuck WOO / JBNU_Industrial Information system Engineering
 Date; -.-.-
 Title: Understanding of array*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[9][7] = { };
	int i = 0;
	int j= 0;
	int option = 0;

	while (1)
	{
		printf("What do you want number? ");
		scanf_s("%d", &option);

		if (option == 1)
		{
			for (i = 0; i < 9; i++)
			{
				for (j = 0; j < 7; j++)
				{
					arr[i][j] = ' ';
				}
			}
			arr[0][0] = 1;
			arr[0][6] = 2;
			arr[8][0] = 3;
			arr[8][6] = 4;
			for (j = 1; j < 6; j++)
			{
				arr[0][j] = 45;
				arr[8][j] = 45;
			}
			for (j = 1; j < 8; j++)
			{
				arr[j][0] = 5;
				arr[j][6] = 5;
			}

			for (j = 2; j < 7; j++)
			{
				arr[j][3] = 79;
			}

			//print
			for (i = 0; i < 9; i++)
			{
				for (j = 0; j < 7; j++)
				{
					printf("%c ", arr[i][j]);
				}
				printf("\n");
			}
		}

		else if (option == 2)
		{
			for (i = 0; i < 9; i++)
			{
				for (j = 0; j < 7; j++)
				{
					arr[i][j] = ' ';
				}
			}
			arr[0][0] = 1;
			arr[0][6] = 2;
			arr[8][0] = 3;
			arr[8][6] = 4;
			for (j = 1; j < 6; j++)
			{
				arr[0][j] = 45;
				arr[8][j] = 45;
			}
			for (j = 1; j < 8; j++)
			{
				arr[j][0] = 5;
				arr[j][6] = 5;
			}
			arr[3][4] = 84;
			arr[5][2] = 84;
			for (j = 2; j < 5; j++)
			{
				arr[2][j] = 84;
				arr[4][j] = 84;
				arr[6][j] = 84;
			}

			//print
			for (i = 0; i < 9; i++)
			{
				for (j = 0; j < 7; j++)
				{
					printf("%c ", arr[i][j]);
				}
				printf("\n");
			}
		}

		else if (option == 3)
		{
			for (i = 0; i < 9; i++)
			{
				for (j = 0; j < 7; j++)
				{
					arr[i][j] = ' ';
				}
			}
			arr[0][0] = 1;
			arr[0][6] = 2;
			arr[8][0] = 3;
			arr[8][6] = 4;
			for (j = 1; j < 6; j++)
			{
				arr[0][j] = 45;
				arr[8][j] = 45;
			}
			for (j = 1; j < 8; j++)
			{
				arr[j][0] = 5;
				arr[j][6] = 5;
			}

			arr[3][4] = 84;
			arr[5][4] = 84;
			for (j = 2; j < 5; j++)
			{
				arr[2][j] = 84;
				arr[4][j] = 84;
				arr[6][j] = 84;
			}

			//print
			for (i = 0; i < 9; i++)
			{
				for (j = 0; j < 7; j++)
				{
					printf("%c ", arr[i][j]);
				}
				printf("\n");
			}
		}

		else if (option == 4)
		{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				arr[i][j] = ' ';
			}
		}
		arr[0][0] = 1;
		arr[0][6] = 2;
		arr[8][0] = 3;
		arr[8][6] = 4;
		for (j = 1; j < 6; j++)
		{
			arr[0][j] = 45;
			arr[8][j] = 45;
		}
		for (j = 1; j < 8; j++)
		{
			arr[j][0] = 5;
			arr[j][6] = 5;
		}
		arr[4][3] = 70;
		for (j = 2; j < 5; j++)
		{
			arr[j][2] = 70;
		}
		for (j = 2; j < 7; j++)
		{
			arr[j][4] = 70;
		}

		//print
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
		}

		else if (option == 5)
		{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				arr[i][j] = ' ';
			}
		}
		arr[9][7] = {};
		arr[0][0] = 1;
		arr[0][6] = 2;
		arr[8][0] = 3;
		arr[8][6] = 4;
		for (j = 1; j < 6; j++)
		{
			arr[0][j] = 45;
			arr[8][j] = 45;
		}
		for (j = 1; j < 8; j++)
		{
			arr[j][0] = 5;
			arr[j][6] = 5;
		}

		arr[3][2] = 70;
		arr[5][4] = 70;
		for (j = 2; j < 5; j++)
		{
			arr[2][j] = 70;
			arr[4][j] = 70;
			arr[6][j] = 70;
		}

		//print
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
		}

		else if (option == 6)
		{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				arr[i][j] = ' ';
			}
		}
		arr[0][0] = 1;
		arr[0][6] = 2;
		arr[8][0] = 3;
		arr[8][6] = 4;
		for (j = 1; j < 6; j++)
		{
			arr[0][j] = 45;
			arr[8][j] = 45;
		}
		for (j = 1; j < 8; j++)
		{
			arr[j][0] = 5;
			arr[j][6] = 5;
		}

		arr[3][2] = 83;
		arr[5][4] = 83;
		arr[5][2] = 83;
		for (j = 2; j < 5; j++)
		{
			arr[2][j] = 83;
			arr[4][j] = 83;
			arr[6][j] = 83;
		}

		//print
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
		}

		else if (option == 7)
		{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				arr[i][j] = ' ';
			}
		}
		arr[0][0] = 1;
		arr[0][6] = 2;
		arr[8][0] = 3;
		arr[8][6] = 4;
		for (j = 1; j < 6; j++)
		{
			arr[0][j] = 45;
			arr[8][j] = 45;
		}
		for (j = 1; j < 8; j++)
		{
			arr[j][0] = 5;
			arr[j][6] = 5;
		}

		arr[2][3] = 83;
		for (j = 2; j < 5; j++)
		{
			arr[j][2] = 83;
		}
		for (j = 2; j < 7; j++)
		{
			arr[j][4] = 83;
		}

		//print
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
		}

		else if (option == 8)
		{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				arr[i][j] = ' ';
			}
		}
		arr[0][0] = 1;
		arr[0][6] = 2;
		arr[8][0] = 3;
		arr[8][6] = 4;
		for (j = 1; j < 6; j++)
		{
			arr[0][j] = 45;
			arr[8][j] = 45;
		}
		for (j = 1; j < 8; j++)
		{
			arr[j][0] = 5;
			arr[j][6] = 5;
		}

		arr[3][2] = 69;
		arr[3][4] = 69;
		arr[5][4] = 69;
		arr[5][2] = 69;
		for (j = 2; j < 5; j++)
		{
			arr[2][j] = 69;
			arr[4][j] = 69;
			arr[6][j] = 69;
		}

		//print
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
		}

		else if (option == 9)
		{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				arr[i][j] = ' ';
			}
		}
		arr[0][0] = 1;
		arr[0][6] = 2;
		arr[8][0] = 3;
		arr[8][6] = 4;
		for (j = 1; j < 6; j++)
		{
			arr[0][j] = 45;
			arr[8][j] = 45;
		}
		for (j = 1; j < 8; j++)
		{
			arr[j][0] = 5;
			arr[j][6] = 5;
		}

		arr[3][2] = 78;
		arr[3][4] = 78;
		arr[5][4] = 78;
		for (j = 2; j < 5; j++)
		{
			arr[2][j] = 78;
			arr[4][j] = 78;
			arr[6][j] = 78;
		}

		//print
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
		}

		else if (option == 0)
		{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				arr[i][j] = ' ';
			}
		}
		arr[0][0] = 1;
		arr[0][6] = 2;
		arr[8][0] = 3;
		arr[8][6] = 4;
		for (j = 1; j < 6; j++)
		{
			arr[0][j] = 45;
			arr[8][j] = 45;
		}
		for (j = 1; j < 8; j++)
		{
			arr[j][0] = 5;
			arr[j][6] = 5;
		}

		for (j = 1; j < 4; j++)
		{
			arr[2][j+1] = 90;
			arr[6][j+1] = 90;
			arr[j+2][2] = 90;
			arr[j+2][4] = 90;
		}
	

		//print
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 7; j++)
			{
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
		}
		else
		{
			printf("Out of order.\n");
		}
	}
return 0;
}