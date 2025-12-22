#include <iostream>
#include <array>

std::array<std::array<int, 3>, 3> addMatrix(const std::array<std::array<int, 3>, 3> &mat1, const std::array<std::array<int, 3>, 3> &mat2)
{
    std::array<std::array<int, 3>, 3> result = {{}};
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            result.at(i).at(j) = mat1.at(i).at(j) + mat2.at(i).at(j);
        }
    }

    return result;
}

std::array<std::array<int, 3>, 3> multiplyMatrix(const std::array<std::array<int, 3>, 3> &mat1, const std::array<std::array<int, 3>, 3> &mat2)
{
    std::array<std::array<int, 3>, 3> result = {};
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            int sum = 0;
            for (size_t k = 0; k < 3; k++)
            {
                sum += mat1.at(i).at(k) * mat2.at(k).at(j);
            }
            result.at(i).at(j) = sum;
        }
    }

    return result;
}

std::array<std::array<int, 3>, 3> transpose(const std::array<std::array<int, 3>, 3> mat)
{
    std::array<std::array<int, 3>, 3> result = {};
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            result.at(i).at(j) = mat.at(j).at(i);
        }
        std::cout << std::endl;
    }
    return result;
}

void printMatrix(const std::array<std::array<int, 3>, 3> mat)
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            std::cout << mat.at(i).at(j) << " ";
        }
        std::cout << std::endl;
    }
}

std::array<std::array<int, 3>, 3> transpose(const std::array<std::array<int, 3>, 3> mat)
{
    std::array<std::array<int, 3>, 3> result = {};
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            for (size_t k = 0; k < 3; k++)
            {
                result.at(i).at(j) = mat.at(j).at(i);
            }
            result.at(i).at(j) = mat.at(j).at(i);
        }
        std::cout << std::endl;
    }
    return result;
}

int main()
{
    std::array<std::array<int, 3>, 3> mat1 = {{
        {1, 2, 3}, // Row 0
        {4, 5, 6}, // Row 1
        {7, 8, 9}  // Row 2
    }};

    std::array<std::array<int, 3>, 3> mat2 = {{
        {1, 2, 3}, // Row 0
        {4, 5, 6}, // Row 1
        {7, 8, 9}  // Row 2
    }};

    std::cout << "Matrix Addition\n";
    auto result = addMatrix(mat1, mat2);
    printMatrix(result);

    std::cout << "\nMatrix Multiplication\n";

    result = multiplyMatrix(mat1, mat2);
    printMatrix(result);

    std::cout << "\nMatrix Transpose\n";
    result = transpose(mat1);
    printMatrix(result);
}