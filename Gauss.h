#ifndef __NORMAL__
#define __NORMAL__

#include <boost/random.hpp>
#include <time.h>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/variate_generator.hpp>

typedef  uint unsigned int;

class Gauss{
public:
	Gauss(double _mean = 0.0, double _variance = 1.0, unsigned int _seed = 0);
	double operator()() const;

private:
	double mean, variance;
	int seed;
	boost::mt19937 rng;
	boost::normal_distribution<double> dist_normal;
	boost::variate_generator<boost::mt19937, boost::normal_distribution<double> > generator;
};

#endif
