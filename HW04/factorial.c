#include "factorial.h"

uint64_t  factorial( int32_t i )
{
    if( 2 == i||1== i )
    {
        return ( uint64_t ) i;
    }
    
    return  i * factorial( i-1 );
}
