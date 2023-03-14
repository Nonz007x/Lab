#include <stdio.h>

void AskSizeMatrix(int *row, int *col)
{
    printf("\nEnter the row and column of the matrix: ");
    scanf("%d %d", row, col);
}

int CheckPossible(int rowA, int colA, int rowB, int colB)
{
    if (colA != rowB)
    {
        printf("Matrix multiplication is not possible.\n");
        printf("Column of first matrix must be the same as row of second matrix.\n");
        return 0;
    }
    return 1;
}

void EnterMatrix(int Matrix[5][5], int row, int col)
{
    printf("\nEnter the matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &Matrix[i][j]);
        }
    }
}

void DisplayMatrix(int Matrix[5][5], int row, int col)
{
    printf("\nThe matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
    }
}

void MultiplyMatrix(int MatrixA[5][5], int rowA, int colA, int MatrixB[5][5], int rowB, int colB, int MatrixC[5][5])
{
    int sum = 0;
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            sum = 0;
            for (int k = 0; k < colA; k++)
            {
                sum += MatrixA[i][k] * MatrixB[k][j];
            }
            MatrixC[i][j] = sum;
        }
    }
}

int main()
{
    int MatrixA[5][5], MatrixB[5][5], MatrixC[5][5];
    int rowA, colA, rowB, colB;

    AskSizeMatrix(&rowA, &colA);

    AskSizeMatrix(&rowB, &colB);

    if (!CheckPossible(rowA, colA, rowB, colB))
    {
        printf("Matrix mutiplication is not possible");
        printf("\nColumn of first matrix must be same as row of second matrix");
        return 0;
    }

    EnterMatrix(MatrixA, rowA, colA);

    EnterMatrix(MatrixB, rowB, colB);

    DisplayMatrix(MatrixA, rowA, colA);

    DisplayMatrix(MatrixB, rowB, colB);

    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            MatrixC[i][j] = 0;
        }
    }

    MultiplyMatrix(MatrixA, rowA, colA, MatrixB, rowB, colB, MatrixC);

    DisplayMatrix(MatrixC, rowA, colB);

    return 0;
}
