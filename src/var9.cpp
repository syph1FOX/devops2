#include <iostream>
#include <vector>
#include <cmath>

/*
9. Дана квадратная матрица. Найти сумму элементов в тех столбцах, которые не содержат отрицательные элементы, 
и заменить этой суммой значение элемента, стоящего в этом же столбце на главной диагонали.
*/

int main()
{
    std::vector<double> input_matrix;
    double value;
    int counter = 2;

    setlocale(LC_ALL, "");

    std::cout << "Enter numbers to create square matrix (to abort input, write any non-numeric value):\n1) ";
    while(std::cin >> value)
    {
        std::cout << counter++ << ") ";
        input_matrix.push_back(value);
        if(counter > 100)
            break;
    }
    if(input_matrix.empty())
    {
        std::cout <<  "Matrix is empty. Shutdown...\n";
        return 1;
    }

    int size = sqrt(input_matrix.size());
    std::cout <<  "Input matrix:\n";
    for(int i = 0; i < size; i++)
    {
        std::cout << "\n";
        for(int j = 0; j < size; j++)
        {
            std::cout << input_matrix[i*size+j] <<"\t";
        }
    }
    std::cout <<"\n";
        
    double sum;
    for(int i = 0; i < size; i++)
    {
        sum = 0;
        for(int j = 0; j < size; j++)
        {
            if(input_matrix[j*size+i] < 0)
            {
                sum = -1;
                break;
            }
            else
                sum += input_matrix[j*size+i];
        }
        if(sum > 0)
            input_matrix[i*size+i] = sum;
    }

    std::cout <<  "Output matrix:\n";
    for(int i = 0; i < size; i++)
    {
        std::cout << "\n";
        for(int j = 0; j < size; j++)
        {
            std::cout << input_matrix[i*size+j] <<"\t";
        }
    }
    std::cout <<"\n";

    return 0;
}
