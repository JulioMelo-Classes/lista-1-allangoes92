#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n;
    while( cin >> std::ws >> m)
    {
        int soma = m;
        std::cin >> n; 
        if (n>0)
        {
            for (int i = 1; i < n; i++)
            {
                m += 1;
                soma += m;
            }
        }
        else if (n<0)
            {
            for (int i = -1; i > n; i--)
            {
                m -= 1;
                soma += m;
            }
        }
        std::cout << soma << "\n";
    }
    return 0;
}