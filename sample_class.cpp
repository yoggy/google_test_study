#include "sample_class.h"

SampleClass::SampleClass() : value_(0)
{
}

void SampleClass::add(const int &val)
{
	value_ += val;
}

int SampleClass::value() const
{
	return value_;
}
