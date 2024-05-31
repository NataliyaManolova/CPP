#ifndef VECTOR_COMPARISON_H
#define VECTOR_COMPARISON_H

#include "Vector.h"

struct VectorLengthComparer
{
	bool operator () (const Vector& a, const Vector& b) const
	{
		return a.getLength() < b.getLength();
	}
};

template <typename T, typename Comparator> struct ReverseComparer
{
	Comparator compare;

	bool operator () (const T& a, const T& b) const
	{
		return !compare(a, b); //или compare(b, a); или !Comparator() (a,b);
	}
};

#endif

