/**
 * @file tibacu.cc
 * @brief Definitions for TiBaCu class.
 * @author Nicu Tofan <nicu.tofan@gmail.com>
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#include "tibacu.h"
#include "tibacu-private.h"

/**
 * @class TiBaCu
 *
 * This is a simple base class for functions that can generate
 * a number of parameters based on a single parameter.
 * A choice is made to interpret that parameter as being the time
 * measured in miliseconds.
 *
 * The number of coordinates that describe a point in the results space
 * are reported via dimensions() and the class will
 * fill exactly that many members in
 * the array used by valueForTime().
 */

/* ------------------------------------------------------------------------- */
TiBaCu::TiBaCu()
{
    TIBACU_TRACE_ENTRY;
    TIBACU_TRACE_EXIT;
}
/* ========================================================================= */

/* ------------------------------------------------------------------------- */
TiBaCu::~TiBaCu()
{
    TIBACU_TRACE_ENTRY;
    TIBACU_TRACE_EXIT;
}
/* ========================================================================= */
