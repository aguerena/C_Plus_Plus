#include <cstdlib>
#include <iostream>

using namespace std;

void max(const char *);
void max2(const char *);

int main(int argc, char *argv[])
{
    
    char serie_number [] = "123471111";
    char serie_number_char [2];
    int serie_number_int [2];
    short serie_number_short [2];
    char *paises[2] = {"ABC", "DE"};
    
    
    int x = 5;
    int *xPtr = &x;
    char *yPtr = serie_number;
    char *dPtr = &serie_number[1];
    
    
    std::cout << "Value: "  << *(paises[0]+1) << std::endl;
    
    std::cout << "x: "  << x << std::endl;
    *xPtr = 9;
    *dPtr = '8';
    *xPtr = x;
    std::cout << "x After: "  << x << std::endl;
    //std::cout << "Size Of Serie: "  << sizeof(serie_number) << std::endl;
    //std::cout << "Size Of Serie: "  << sizeof(serie_number) << std::endl;
    
    std::cout << "Size Of Serie: "  << sizeof(serie_number) << std::endl;
    std::cout << "Size Of Char: "  << sizeof(serie_number_char) << std::endl;
    std::cout << "Size Of Int: "   << sizeof(serie_number_int) << std::endl;
    std::cout << "Size Of Short: " << sizeof(serie_number_short) << std::endl;
    std::cout << "Serie Number is: " << serie_number << std::endl;
    max2(serie_number);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void max(const char *nPtr)
{
    
    char tmpmax = 0;
    
    if(*nPtr == '\0')
    {
        std::cout << "There is not numbers" << std::endl;          
    }    
    else
    {
    
        while(*nPtr != '\0')
        {
            //*nPtr = 5; //No se puede debido a que es const
            if(*nPtr > tmpmax)
                tmpmax = *nPtr;            
      
            nPtr++;           
        }
    
        std::cout << "Max number is: " << tmpmax << std::endl; 
    
    } 
}

void max2(const char *nPtr)
{
    
    char tmpmax = 0;
    int i = 0;
    
    std::cout << "Size of Apuntador *: " << sizeof(*nPtr) << std::endl; 
    std::cout << "Size of Apuntador  : " << sizeof(nPtr) << std::endl;
    std::cout << "Size of Apuntador &: " << sizeof(&nPtr) << std::endl;
    std::cout << "Size of Apuntador &*: " << sizeof(*&nPtr) << std::endl;
    
    if(nPtr[i] == '\0')
    {
        std::cout << "There is not numbers" << std::endl;          
    }    
    else
    {
    
        while(nPtr[i] != '\0')
        {
            //*nPtr = 5; //No se puede debido a que es const
            if(nPtr[i] > tmpmax)
                tmpmax = nPtr[i];            
      
            nPtr[i+1];
            i++;           
        }
    
        std::cout << "Max2 number is: " << tmpmax << std::endl; 
    
    } 
}

