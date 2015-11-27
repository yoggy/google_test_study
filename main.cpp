#include <iostream>

#include "sample_class.h"

int main(int argc, char *argv[])
{
	SampleClass sample;

	std::cout << "sample.value()=" << sample.value() << std::endl;
	sample.add(1);
	std::cout << "sample.value()=" << sample.value() << std::endl;
	sample.add(2);
	std::cout << "sample.value()=" << sample.value() << std::endl;

	return 0;
}

