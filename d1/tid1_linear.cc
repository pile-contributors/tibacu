/**
 * @file TiD1Linear.cc
 * @brief Definitions for TiD1Linear class.
 * @author Nicu Tofan <nicu.tofan@gmail.com>
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#include "tid1_linear.h"
#include "../tibacu-private.h"

/**
 * @class TiD1Linear
 *
 */

/* ------------------------------------------------------------------------- */
bool TiD1Linear::valueForTime (double time, double *output)
{
    output[0] = param_a * time + param_b;
    return true;
}
/* ========================================================================= */
