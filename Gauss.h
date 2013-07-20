#ifndef __NORMAL__
#define __NORMAL__

#include <boost/random.hpp>
#include <time.h>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/variate_generator.hpp>

typedef unsigned int uint;

class Gauss{
public:
	Gauss(double _mean = 0.0, double _variance = 1.0, uint _seed = 0);
	double operator()() const;

private:
	double mean, variance;
	uint seed;
	boost::mt19937 rng;	// Générateur Mers. twistter
	boost::normal_distribution<double> dist_normal;		// la distribution
	boost::variate_generator<boost::mt19937, boost::normal_distribution<double> > generator;
};

#endif
