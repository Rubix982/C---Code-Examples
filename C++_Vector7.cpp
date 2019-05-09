#include <iostream>
#include <vector>

int main(void)
{
    // A method to create a 2D vector array.
    // Assume that each row of the 2D table has n rows and m columns
    // The rows in the 2D are represented by '3', where each row
    // is also a vector of the 3 elements.
    // the std::vector<int>(4, 0) part represents the number of columns
    // (m) that the table will have.
    std::vector<std::vector<int>> grid(3, std::vector<int>(4, 7));

    for ( int row = 0 ; row < grid.size() ; ++row ) {
        for ( int column = 0 ; column < grid[row].size() ; ++column ) 
            std::cout << grid[row][column] << "   ";
        std::cout << std::endl;    
    }
}