/**
 * @file tibacu.h
 * @brief Declarations for TiBaCu class
 * @author Nicu Tofan <nicu.tofan@gmail.com>
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#ifndef GUARD_TIBACU_H_INCLUDE
#define GUARD_TIBACU_H_INCLUDE

#include <tibacu/tibacu-config.h>

//! Base class for all time-based curves.
class TIBACU_EXPORT TiBaCu {

public:

    //! Default constructor.
    TiBaCu ();

    //! Destructor.
    virtual ~TiBaCu();

    //! Get the value of the coordinates at given time.
    virtual bool
    valueForTime (
            double time,
            double * output) = 0;

    //! Number of coordinates this curve reports (number of dimensions).
    virtual int
    dimensions () const = 0;

};

#endif // GUARD_TIBACU_H_INCLUDE
