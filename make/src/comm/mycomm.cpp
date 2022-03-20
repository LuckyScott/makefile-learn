#include "mycomm.h"
#include <math.h>

namespace Comm 
{
    float Sin( float x )
    {
        return (float)sin( Deg2Rad(x) );
    }

    float Cos( float x )
    {
        return (float)cos( Deg2Rad(x) );
    }

    unsigned int PrevPowerOfTwo( unsigned int x )
    {
        x |= x >> 16;
        x |= x >> 8;
        x |= x >> 4;
        x |= x >> 2;
        x |= x >> 1;

        return (x + 1) >> 1;
    }

    unsigned int NextPowerOfTwo( unsigned int x )
    {
        x -= 1;

        x |= x >> 16;
        x |= x >> 8;
        x |= x >> 4;
        x |= x >> 2;
        x |= x >> 1;

        return x + 1;
    }
}