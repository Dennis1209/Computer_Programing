#include "resis.h"

double  resis( int32_t n, int32_t r )
{ 
     if( n==1 )
     {
     return ( int32_t ) 2.0*r;
     }
     return  ((resis(n-1,r) * r)/(resis(n-1,r)+r))+r;
}
