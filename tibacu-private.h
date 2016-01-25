/**
 * @file tibacu-private.h
 * @brief Declarations for TiBaCu class
 * @author Nicu Tofan <nicu.tofan@gmail.com>
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#ifndef GUARD_TIBACU_PRIVATE_H_INCLUDE
#define GUARD_TIBACU_PRIVATE_H_INCLUDE

#include <tibacu/tibacu-config.h>

#if 0
#    define TIBACU_DEBUGM printf
#else
#    define TIBACU_DEBUGM black_hole
#endif

#if 0
#    define TIBACU_TRACE_ENTRY printf("TIBACU ENTRY %s in %s[%d]\n", __func__, __FILE__, __LINE__)
#else
#    define TIBACU_TRACE_ENTRY
#endif

#if 0
#    define TIBACU_TRACE_EXIT printf("TIBACU EXIT %s in %s[%d]\n", __func__, __FILE__, __LINE__)
#else
#    define TIBACU_TRACE_EXIT
#endif


static inline void black_hole (...)
{}

#endif // GUARD_TIBACU_PRIVATE_H_INCLUDE
