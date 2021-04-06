#include <iostream>

using namespace std;

int i, j, col, row;
const int x = 100, y = 100;
float matrix[x][y], transposematrix[x][y];

void Num()
{
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col ; j++)
		{
			cout << "matrix [" << i << "][" << j << "]: "; cin >> matrix[i][j];
		}
	
	}
	system("CLS");
	cout << "The original matrix\n";

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << " "<< matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	Enter:
	cout << "Enter the number of collum: \n";
	cin >> col;
	cout << "Enter the number of row: \n";
	cin >> row;
	if (col != row)
	{
		cout << "That is not a square matrix, please try again\n";
		goto Enter;
	}
	Num();
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			transposematrix[j][i] = matrix[i][j] ;
		}
	}
	cout << "Transposed matrix\n";
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << " " << transposematrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
