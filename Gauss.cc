#include "Gauss.h"

Gauss::Gauss(uint _seed) : seed(_seed), rng(seed){ 
	boost::variate_generator<mt19937, DIST> generator(rng, DIST(0.0, 1.0));
}

double Gauss::operator()() const{
	return generator();
}

