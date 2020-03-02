#ifndef X265_JND_H
#define X265_JND_H

#include "common.h"

namespace X265_NS {

class JND
{
public:
	//enum { NUM_SIZES = 4 };            // 4x4, 8x8, 16x16, 32x32
	const double jnd_b[4] = { 0.715, 1.5038, 3.0075, 6.0150 };

	double jnd;

	int cuQp;

	JND() {};

	int cal_deltaQP(int curQP) {
		double Qstep = pow(2, (double)(curQP - 4) / 6);
		Qstep = Qstep + 2*jnd;
		double deltaQP = 6 * log(Qstep) / log(2) + 4;
		return  (int)deltaQP;
	};

	double f_luma4x4() {}
	double f_luma8x8() {}
	double f_luma16x16() {}
	double f_luma32x32() {}
};

}


#endif
