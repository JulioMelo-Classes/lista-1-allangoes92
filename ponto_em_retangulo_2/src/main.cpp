/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 * INSIDE=0, BORDER=1, OUTSIDE=2
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

/*muito bom!*/
void verifica ( Ponto &A, Ponto &B)
{
    Ponto aux;
    if (A.x > B.x)
    {
        aux.x = A.x;
        A.x = B.x;
        B.x = aux.x;
        aux.y = A.y;
        A.y = B.y;
        B.y = aux.y;        
    }
    else if (A.y > B.y)
    {
        aux.y = A.y;
        A.y = B.y;
        B.y = aux.y;        
    }
}

int main(void)
{
     Ponto IE, SD, P;

    while( cin >> std::ws >> IE.x)
    {
        std::cin >> IE.y;
        std::cin >> SD.x;
        std::cin >> SD.y;
        verifica (IE, SD);
        std::cin >> P.x;
        std::cin >> P.y;
        if (IE.x == SD.x || IE.y == SD.y)
        {
            std::cout << "invalid" << endl;
        }
        else
        {
            switch (pt_in_rect( IE, SD, P ))
            {
            case 0:
                std::cout << "inside" << endl;
                break;
            case 1:
                std::cout << "border" << endl;
                break;
            case 2:
                std::cout << "outside" << endl;
                break;
            }
        }
    }
    return 0;
}
