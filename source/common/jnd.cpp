#include "common.h"
#include "jnd.h"

using namespace X265_NS;

/*
int JND::cal_deltaQP(int curQP)
{
	double Qstep = pow(2, (double)(curQP - 4) / 6);
	Qstep = Qstep + jnd;
	double deltaQP = 6 * log(Qstep) / log(2) + 4;
	return  (int)deltaQP;
}
*/
