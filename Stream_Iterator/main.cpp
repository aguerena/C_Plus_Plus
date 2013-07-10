#include <cstdlib>
#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Introduzca dos numeros enteros: ";
    
    istream_iterator< int > inputInt( cin );
    int number1, number2;
    
    number1 = *inputInt;
    ++inputInt;
    number2 = *inputInt;
    
    cout << "La suma es: ";
    
    ostream_iterator< int > outputInt( cout );
    
    *outputInt = number1 + number2;
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
