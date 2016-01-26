/**
 * @file tibacu.h
 * @brief Declarations for TiD1Linear class
 * @author Nicu Tofan <nicu.tofan@gmail.com>
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#ifndef GUARD_TIBACU_1D_LINEAR_H_INCLUDE
#define GUARD_TIBACU_1D_LINEAR_H_INCLUDE

#include <tibacu/tibacu.h>

//! Returns the result of A*T + B.
class TIBACU_EXPORT TiD1Linear : public TiBaCu {

public:

    //! Default constructor.
    TiD1Linear (double param_a, double param_b) : TiBaCu() {}

    //! Destructor.
    virtual ~TiD1Linear() {}

    //! Get the value of the coordinates at given time.
    virtual bool
    valueForTime (
            double time,
            double * output);

    //! Number of coordinates this curve reports (number of dimensions).
    virtual int
    dimensions () const {
        return 1;
    }

private:
    double param_a;
    double param_b;
};

#endif // GUARD_TIBACU_1D_LINEAR_H_INCLUDE
