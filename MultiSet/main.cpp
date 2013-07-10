#include <cstdlib>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    const int SIZE = 12;
    int a[ SIZE ] = {7, 22, 15, 15, 20, 1, 18, 33, 100, 20, 85, 13};
    typedef multiset< int, less< int > > ims;
    ims intMultiset;
    //ostream_iterator< int > output( cout, " ");
    ims::const_iterator result;
    
    
    intMultiset.insert(a, a+SIZE);
    cout << "Multiset contiene:\n";
    
    for(result = intMultiset.begin(); result != intMultiset.end(); result++)
        cout << *result << " ";
    
    cout << "\nLimite inferior de 22: "
         << *(intMultiset.lower_bound(22) );
    cout << "\nLimite superior de 22: "
         << *(intMultiset.upper_bound(22) );           
    
    //copy( intMultiset.begin(), intMultiset.end(), output);
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
    
}
