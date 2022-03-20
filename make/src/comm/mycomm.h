#pragma once

namespace Comm
{
    constexpr float ONE_PI = 3.14159f;
    constexpr float TWO_PI = ONE_PI*2;
    constexpr float	HALF_PI = ONE_PI*0.5f;
    constexpr float EPSILON = 0.00001f;
    constexpr float RADS_PER_DEG = (0.01745329251994329576f);
    constexpr float DEGS_PER_RAD = (57.2957795130823208767f);

    inline float Deg2Rad(float x)
    {
        return x*RADS_PER_DEG;
    }

    inline float Rad2Deg( float x )
    {
        return x*DEGS_PER_RAD;
    }

    float Sin( float x );
    float Cos( float x );

    inline bool IsPowerOfTwo( int n )
    {
        return (((n & (n-1)) == 0) && (n != 0));
    }

    unsigned int PrevPowerOfTwo( unsigned int x );
	unsigned int NextPowerOfTwo( unsigned int x );

}