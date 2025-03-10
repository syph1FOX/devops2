#include "var9.h"

int main()
{
    std::vector<double> input_matrix;
    int counter = 2;
    double value;

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
    
    std::vector<double> output_matrix = DiagSum(input_matrix);
    
    std::cout <<  "Output matrix:\n";
    for(int i = 0; i < size; i++)
    {
        std::cout << "\n";
        for(int j = 0; j < size; j++)
        {
            std::cout << output_matrix[i*size+j] <<"\t";
        }
    }
    std::cout <<"\n";
    
    return 0;
}
