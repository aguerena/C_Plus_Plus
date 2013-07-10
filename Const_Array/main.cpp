#include <cstdlib>
#include <iostream>

using namespace std;

//void tryToModifyArray( const int b[]);
void tryToModifyElement( int b);
void tryToModifyElementRef( int &b);
void tryToModifyArray( int b[]);

int main(int argc, char *argv[])
{
    
    int a[] = {10, 20, 30};
    
    std::cout << "Before modifying Element " << a[0] << std::endl;
    tryToModifyElement(a[0]);
    std::cout << "After modifying Element " << a[0] << std::endl;
    
    std::cout << "Before modifying ElementRef " << a[0] << std::endl;
    tryToModifyElementRef(a[0]);
    std::cout << "After modifying ElementRef " << a[0] << std::endl;
    
    std::cout << "Before modifying Array " << a[0] << std::endl;
    tryToModifyArray(a);
    std::cout << "After modifying Array " << a[0] << std::endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
void tryToModifyArray( const int b[])
{
    b[0] = 2;
    b[1] = 2;
    b[2] = 2;     
     
}
*/

void tryToModifyElement( int b)
{
    b= 4;      
}

void tryToModifyElementRef( int &b)
{
    b = 2;     
}

void tryToModifyArray( int b[])
{
    b[0] = 3;
    b[1] = 2;
    b[2] = 2;     
     
}
