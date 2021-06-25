#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    if( n == 0)
    {
        return {-1, -1};
    }
    int min = V[0];
    int minpos = 0;
    int max = V[0];
    int maxpos = 0;
    for (int i = 1; i < n; i++)
    {
        if (min > V[i])
        {
            min = V[i];
            minpos = i;
        }
        else
        {
            if (max <= V[i])
            {
                max = V[i];
                maxpos = i;
            }
        }
    }
    return {minpos, maxpos};
}
