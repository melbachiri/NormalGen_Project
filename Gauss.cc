#include "Gauss.h"

Gauss::Gauss(double mean = 0.0, double variance = 1.0, int _seed = 0) : 
  seed(_seed), 
	rng(boost::mt19937(seed)), 
	dist_normal(boost::normal_distribution<double>(mean,variance)),
	generator(boost::variate_generator<boost::mt19937,boost::normal_distribution<double> > (rng, dist_normal)){}

double Gauss::operator()() const{
	return generator();
}
