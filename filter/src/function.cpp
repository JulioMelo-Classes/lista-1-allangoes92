/*! 
 * Remove negative and zero values from an array, preserving the relative order of the original values that will remain in the resulting array.
 * We do not alter the origimal memory associated withe the input array. Rather, we just rearrange the values inside the array
 * and return a pointer to the new 'logical' end of the array,
 * after the processes of eliminating the required elements is finished.
 *
 * @param first Pointer to the beginning of the range we want to filter.
 * @param last Pointer just past the last valid value of the range we want to filter.
 * @return a pointer to the new 'logical' end of the array.
 */

#include "function.h"

int * filter( int * first, int * last )
{
    int* right = first;
    int* ret = first;
    /*faltaram alguns casos
      no caso de todos os valores serem negativos vc teria que retornar 'last'
      o valor de ret deveria ser ret+1, mas está dando certo em alguns casos rsrsrs
    */
    while (last >= right)
    {
        if (*right > 0)
        {
            *ret = *right;
            ret += 1;
        }
        right += 1;
    }
    
    return ret;
}