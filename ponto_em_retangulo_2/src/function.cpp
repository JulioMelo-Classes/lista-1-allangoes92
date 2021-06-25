#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 INSIDE=0, BORDER=1, OUTSIDE=2
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    if (P.x > IE.x && P.x < SD.x)
    {
        if (P.y < IE.y || P.y > SD.y)
        {
            return location_t::OUTSIDE;
        }
        else if (P.y == IE.y || P.y == SD.y)
        {
            return location_t::BORDER;
        }

        else 
        {
            return location_t::INSIDE;
        } 
    }
    else if (P.x == IE.x || P.x == SD.x)
    {
        if (P.y >= IE.y || P.y <= SD.y)
        {
            return location_t::BORDER;
        }
        else 
        {
            return location_t::OUTSIDE;
        }   
    }
    else if(P.x < IE.x || P.x > SD.x)
    {
        return location_t::OUTSIDE;
    }
}