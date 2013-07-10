#include <cstdlib>
#include <iostream>
#include <ctype.h>

using namespace std;

void convertToUpperCase(char *);

int main(int argc, char *argv[])
{
    
    char string [] = "caracteres y $32.98";
    
    std::cout << "Antes de conversion" << std::endl;
    std::cout << string << std::endl;
    
    convertToUpperCase(string);
    
    std::cout << "Despues de conversion" << std::endl;
    std::cout << string << std::endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void convertToUpperCase(char *sPtr)
{
     
    //while(*sPtr !=  NULL)
    while(*sPtr !=  '\0')
    {
        if( (*sPtr >= 'a') && (*sPtr <= 'z') )
            *sPtr = toupper(*sPtr);       
        
        sPtr++;   
           
    } 
     
     
}
