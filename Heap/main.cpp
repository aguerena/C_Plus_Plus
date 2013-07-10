#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
    const int SIZE = 10;
    int a[ SIZE ] = { 42, 13, 52, 71, 70, 96, 4, 3, 22, 31 };
    int i;
    
    vector< int > v( a, a+SIZE), v2;
    ostream_iterator< int > output( cout, " " );
    
    cout << "Vector v antes de apilar con make_heap:\n";
    copy( v.begin(), v.end(), output );
    
    make_heap( v.begin(), v.end() );
    cout << "Vector v despues de apilar con make_heap:\n";
    copy( v.begin(), v.end(), output );
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
