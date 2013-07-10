#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

template < class T >
void printVector(const vector< T > &vec);
 
int main(int argc, char *argv[])
{
    const int SIZE = 6;
    int a[SIZE] = {1,2,3,4,5,6};
    vector< int > v;
    
    cout << "El tamano incial de v es: " << v.size()
         << "\nLa capacidad inicial de v es: " << v.capacity();
          
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    cout << "\nEl tamano incial de v es: " << v.size()
         << "\nLa capacidad inicial de v es: " << v.capacity();
    cout << "\n\nContenido del arreglo a utilizando notacion de apuntador: ";
    
    for(int *ptr = a; ptr != a+SIZE; ++ptr)
        cout << *ptr << ' ';

    cout << "\n\nContenido del arreglo a utilizando notacion de iterador: ";
    printVector(v);
    
    cout << "\nContenido invertido del vector v: ";
    
    vector< int >::reverse_iterator p2;
    for(p2 = v.rbegin(); p2 != v.rend(); ++p2)
        cout << *p2 << ' ';
     cout << endl;
                       
    system("PAUSE");
    return EXIT_SUCCESS;
}

template < class T >
void printVector( const vector< T > &vec )
{

    vector< int >::const_iterator p1;
    
    for( p1 = vec.begin(); p1 != vec.end(); p1++ )
        cout << *p1 << ' ';
    
}
