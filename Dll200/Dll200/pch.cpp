#include "pch.h"
#include "Header.h"
#include "math.h"
using namespace std;

namespace MathOperation
{
	void MyOperations::Raz(double x, double y, double a, double b, double& P)
	{
		if (x > 0) {
			double max = y;
			if (x > max)
				max = x;
			P = max;
		}
		else if (x <= 0 && x >= -1) {
			double min = x;
			if (b < min)
				min = b;
			P = min;
		}
		else {
			double min = sin(a);
			if (cos(b) < min)
				min = cos(b);
			double max = x * x;
			if (a + b > max)
				max = a + b;
			if (max < min)
				min = max;
			P = min;
		}
	}
}