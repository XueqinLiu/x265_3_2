#ifndef X265_JND_H
#define X265_JND_H

#include "common.h"

class JND
{
public:
	enum { NUM_SIZES = 4 };            // 4x4, 8x8, 16x16, 32x32
	const double jnd_b[NUM_SIZES] = { 0.715, 1.5038, 3.0075, 6.0150 };

	double jnd;

	double f_luma4x4() {}
	double f_luma8x8() {}
	double f_luma16x16() {}
	double f_luma32x32() {}
};


#endif
