#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    
    char s1[30] = "Per";
    char *s2 = "Perros C";
    char *s3;
    char s4[] = "Perros Azules Comelones";
    char *s5 = "Perros Azules Comelones";
    char *token;

    //float x = 19.34;
    //float xPtr = &x;
    //std::cout << xPtr << std::endl;

    for(; *s2 != '\0'; s2++)
        std::cout << *s2 << std::endl; 

    strcat(s3, s1);
    std::cout << *s3 << std::endl; 
    //std::cout << strcat(s1,s2) << std::endl;    
    std::cout << s4 << std::endl;
    std::cout << s5 << std::endl;
    
    
    token = strtok(s4, " ");
    
    while( token != NULL )
    {
        std::cout << token << '\n';
        token = strtok(NULL, " ");       
    }
    std::cout << s4 << std::endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
