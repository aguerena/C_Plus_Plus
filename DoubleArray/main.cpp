#include <cstdlib>
#include <iostream>

using namespace std;

void printArray( int a[][3] );

int main(int argc, char *argv[])
{
    
    int array1[2][3] = { {1,2,3}, {4,5,6} };
    int array2[2][3] = { 1,2,3,4,5 };
    int array3[2][3] = { {1,2}, {4} };
    
    std::cout << "Valores array1" << std::endl; 
    printArray(array1);
    std::cout << "Valores array2" << std::endl; 
    printArray(array2);
    std::cout << "Valores array3" << std::endl; 
    printArray(array3);    
       
    system("PAUSE");
    return EXIT_SUCCESS;
}

void printArray( int a[][3] )
{
     
    for(int i = 0; i<2; i++){
            
        for(int j = 0; j<3; j++)
            std::cout << a[i][j] << " ";
    
        std::cout << std::endl;
    }     
     
}
