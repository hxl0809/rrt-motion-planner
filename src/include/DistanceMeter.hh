#ifndef __DISTANCE_METER_HH__
#define __DISTANCE_METER_HH__

#include "Constants.hh"
#include "MathFunctions.hh"

class DistanceMeter
{
    public:
        virtual double DistanceWeight(const double *, const double *);
        virtual double NearestNodeMetric(const double *, double *);
        virtual bool GoalStateAchieved(const double *, const double *);
        virtual double Euclidean(const double *, const double *);
    
};

#endif
