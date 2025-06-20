#include <iostream>  
#include "Header5.7.h" 
using namespace std; 

int main() 
{ 
    int size; 
    cout << " Enter size of matrix \n"; 
    cin >> size; 

    cout << " Enter elements of matrix \n";
    int** matrix = new int* [size]; 
    for (int i = 0; i < size; i++)
    { 
        matrix[i] = new int[size];
    }

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < size; ++i)
    {
        cout << " \n";
        for (int j = 0; j < size; ++j)
        {
            cout << matrix[i][j];
        }
    }
    cout << '\n';

    int rowIndex = findRowWithMinElement(matrix, size); // ����� ������� ��� ������ ������ � ����������� ���������
    int columnIndex = findColumnWithMaxElement(matrix, size); // ����� ������� ��� ������ ������� � ������������ ���������
    int product = scalarProduct(matrix, rowIndex, columnIndex, size); // ���������� ���������� ������������ ������ � �������
    int minK = findMinK(matrix, size); // ����� ������� ��� ���������� ������������ �������� K

    cout << "\nSkalyarnoye proizvedenie: " << product << '\n';
    cout << "The smallest K: " << minK << '\n';
    return 0;
}