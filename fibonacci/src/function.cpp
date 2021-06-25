#include "function.h"


std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> fib;
    if(n==1)
    {
        return std::vector<unsigned int>{};
    }
    else
    {
        fib.push_back(1);
        fib.push_back(1);
        int i=1;
        while (fib[i] < n)
        {
            if(fib[i-1] + fib[i] < n)
            {
                int soma = fib[i-1] + fib[i];                                               
                fib.push_back(soma);
                i++;
            }
            else
            {
                break;
            }
        }
    }
    return fib;
}