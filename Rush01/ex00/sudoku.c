//delete this -> just for testring
#include <stdio.h>

//Libraries
#include <unistd.h>
#include <stdlib.h>


//Print to stdo
void print_sudoku(char **board)
{
	int argument;

	argument = 1;

	while(board[argument] != NULL)
	{
		printf("\n%s\n", board[argument]);
		argument++;
	}

}


//PERFECT
int is_full(char **board){
	
	int flag;
	int x;
	int y;

	flag = 1;
	x = 0;
	y = 1;

	while (board[y] != NULL)
	{
		x = 0;
		while (board[y][x] != '\0')
		{
			if (board[y][x] == '.')
			{
				flag = 0;
			}
			x++;
		}
		if(flag == 0)
		{
			break;
		}
		y++;
	}
	//printf("\n\nSUDOKU IS %d\n\n",flag);
	return (flag);	
}




//PERFECT
//construct list of all possibilities for a particular spot;
int *all_possibilities(char **board, int y, int x)
{
	int *possibilities;
	int *possibilities_values;
	int pres_nb;
	int i;
	int j;
	int k;
	int l;

	i = 0;
	possibilities = (int *)malloc(sizeof(int) * 9);
	possibilities_values = (int *) malloc(sizeof(int) * 9);
	//fill the possibilities with 0's
	
	while (i < 9)
	{
		possibilities[i] = 0;
		i++;
	}
	possibilities[i] = -1;

	/*				POSSIBILITIES	When 0 we can still try, else we mark as present or 1
		
	INDEX			0	1	2	3	4	5	6	7	8	9
		
	BOARD VALUE		1	2	3	4	5	6	7	8	9	-1
	
	TRUE OR FLASE	0	0	0	0	0	0	0	0	0
	*/


	/*
		Careful with the first argument being program name;

		y = 1 => Prog name;

		rows => from 1 to 10;
		columns => from 0 to 9

		int num = (board[1][0]) - '0';
		printf("\n\n%d\n\n",num);
	*/

	//For horizontal entries
	i = 0;
	while (i < 9)
	{
		if( board[y][i] != '.')
		{
			pres_nb = (board[y][i] - '0') - 1;
			possibilities[pres_nb] = 1;
		}
		i++;
	}

	//For vertical different range because of the first argument
	i = 1;
	while (i < 10)
	{
		if (board[i][x] != '.')
		{
			pres_nb = (board[i][x] - '0') - 1;
			possibilities[pres_nb] = 1;
		}
		i++;
	}

	//For appropriate sqaure
	//define beginning
	// k = line corresponding with i
	k = 0;
	// l = column corresponding with j;
	l = 1;

	if (y >= 1 && y <= 3)
		l = 1;
	else if (y >= 4 && y <= 6)
		l = 4;
	else if (y >= 7 && y <= 9)
		l = 7;
	if (x >= 0 && x <= 2)
		k = 0;
	else if (x >= 3 && x <= 5)
		k = 3;
	else if (x >= 6 && x <= 9)
		k = 6;

	i = k;
	j = l;

	//eliminate numbers in the particular sqaure
	while (j < l+3)
	{	
		i = k;
		while (i < k+3)
		{
			if (board[j][i] != '.')
			{
				pres_nb = (board[j][i] - '0') - 1;
				possibilities[pres_nb] = 1;
			}
			i++;
		}
		j++;
	}

	//extract the actual nunmbers from possibilities;
	i = 0;
	j = 0;
	while(possibilities[i] != -1)
	{
		if(possibilities[i] == 0)
		{
			possibilities_values[j] = i+1;
			j++;
		}
		i++;
	}
	possibilities_values[j] = -1;

	//printf("\nPOssible value at j = %d\n\n",possibilities_values[j]);

	return possibilities_values;
}



//Solve Puzzle
char **solve_sudoku(char **board)
{
	int i;
	int j;
	int x;
	int y;
	int *possibilities;

	x = 0;
	y = 1;
	j = 0;

	//if board is succesfully filled
	//	return board;
	if(is_full(board) == 1)
		return board;


	/*Find the first vacant spot
		Loop through all rows
			Loop thrrough all colomns 
				assing: 	x && y
	*/

	//PERFECT
	while (board[y] != NULL)
	{
		x = 0;
		//printf("\n%s\n",board[y]);
		while (board [y][x] != '\0')
		{
			if (board[y][x] == '.')
			{
				j = 1;
				break;
			}
			x++;
		}
		if (j == 1)
		{
			break;
		}
		y++;
	}

	//printf("Starting point: x: %d  y: %d\n",x,y);


	// Get a list of possible entries for that particular spot
	possibilities = all_possibilities(board, y, x);

	/*
	i = 0;
	while(possibilities[i] != -1)
	{
		printf("Possible value:%d\n",possibilities[i]);
		i++;
	}
	*/

	/*
		Per each thing possibility for that particular spot
			if it is a valid possibility 
				vacant_spot_on_the board = > a_possibility
				solve_sudoku(board);

	*/

	/*
	i = 0;
	while(possibilities[i] != -1)
	{
		//printf("PS => %d\t",possibilities[i]);
		i++;
	}
	*/
	//printf("\n\n\n\n");

	i = 0;
	while(possibilities[i] != -1)
	{
		//printf("assing to %c with: %d\n\n",board[y][x],possibilities[i]);
		board[y][x] = possibilities[i] + '0';
		//print_sudoku(board);
		//printf("\n\n\n\n\n");
		solve_sudoku(board); 
		i++;
	}


	//Backtrack becasue we failed
	//vacant_spot_on_the_board => '.'
	board[y][x] = '.';
	//printf("\nGO BACKWARDS\n");
	return board;
}




int main(int argc, char **argv)
{
	
	/*
	TEST FOR IS_FULL
	int flag;
	flag = is_full(argv);
	printf("\n%d\n\n",flag);
	*/

	/*
	TEST FOR ALL_POSSIBILITIES
	int *possibilities;
	int i;

	i = 0;
	//possibilities = (int *) malloc(sizeof(int) * 10);
	possibilities = all_possibilities(argv, 1,0);
	while(possibilities[i] != -1)
	{
		printf("%d\t",possibilities[i]);
		i++;
	}
	*/

	//printf("\n\nSTRART\n\n");

	argv = solve_sudoku(argv);
	//print_sudoku(argv);
	
	//printf("\n\nDONE\n\n");


	/*
	int argument_flag;

	//Check if arguments are valid 
	argument_flag = check_argv(argc, argv);

	//if puzzle has a valid input ie is solvable
	if(argument_flag != 0)
	{
			//Solve sudoku
			argv = solve_sudoku(argv);
			//print it
			print_sudoku(argv);
	}
	//Catch argumnet error
	else
		printf("\nINVALID ARGSUMENTS\n");

	*/
}

//Check validity 
/*
int check_argv(int argc, char **argv)
{
	int is_valid = 1;

	
		check for: 
		1 -> number of argumnets
		2 -> length of each argument  
		3 -> contents of those arguments : valid number || '.'
		



		4 -> check for validity of: 
									a) line 
									b) culumn
									c) individual_square
	

	return is_valid;
}
*/
