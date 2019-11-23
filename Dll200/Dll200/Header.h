#pragma once


#ifdef MATHFUNCS_EXPORTS
#define MATHFUNCS_API __declspec(dllexports)
#else
#define MATHFUNCS_API __declspec(dllimport)
#endif

namespace MathOperation

{
	class MyOperations
	{
	public:
		static MATHFUNCS_API void Raz(double x, double y, double a, double b, double& P);
	};
}
