#include "var9.h"

/*
9. Дана квадратная матрица. Найти сумму элементов в тех столбцах, которые не содержат отрицательные элементы, 
и заменить этой суммой значение элемента, стоящего в этом же столбце на главной диагонали.
*/

std::vector<double> DiagSum(std::vector<double> input_matrix)
{
    std::vector<double> matrix = input_matrix;
    int size = sqrt(input_matrix.size());
    double sum;
    for(int i = 0; i < size; i++)
    {
        sum = 0;
        for(int j = 0; j < size; j++)
        {
            if(matrix[j*size+i] < 0)
            {
                sum = -1;
                break;
            }
            else
                sum += matrix[j*size+i];
        }
        if(sum > 0)
            matrix[i*size+i] = sum;
    }

    return matrix;
}
