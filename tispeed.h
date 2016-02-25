/**
 * @file tibacu.h
 * @brief Declarations for TiBaCu class
 * @author Nicu Tofan <nicu.tofan@gmail.com>
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#ifndef GUARD_TIBACU_SPEED_H_INCLUDE
#define GUARD_TIBACU_SPEED_H_INCLUDE

#include <tibacu/tibacu.h>

//! Constant-speed based curves.
class TIBACU_EXPORT TiSpeed : public TiBaCu {

public:

    //! Default constructor.
    TiSpeed (double speed) : TiBaCu (), speed_(speed) {}

    //! Destructor.
    virtual ~TiSpeed();

    //! Get the value of the coordinates at given time.
    virtual bool
    valueForTime (
            double time,
            double * output) {
        return valueForLength (time * speed_, output);
    }

    //! Get the value of the coordinates at given length of curve.
    virtual bool
    valueForLength (
            double length,
            double * output) = 0;

private:

    double speed_;

};

#endif // GUARD_TIBACU_SPEED_H_INCLUDE
