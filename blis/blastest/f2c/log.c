/****************************************************************
Copyright 1990 - 1997 by AT&T, Lucent Technologies and Bellcore.

Permission to use, copy, modify, and distribute this software
and its documentation for any purpose and without fee is hereby
granted, provided that the above copyright notice appear in all
copies and that both that the copyright notice and this
permission notice and warranty disclaimer appear in supporting
documentation, and that the names of AT&T, Bell Laboratories,
Lucent or Bellcore or any of their entities not be used in
advertising or publicity pertaining to distribution of the
software without specific, written prior permission.

AT&T, Lucent and Bellcore disclaim all warranties with regard to
this software, including all implied warranties of
merchantability and fitness.  In no event shall AT&T, Lucent or
Bellcore be liable for any special, indirect or consequential
damages or any damages whatsoever resulting from loss of use,
data or profits, whether in an action of contract, negligence or
other tortious action, arising out of or in connection with the
use or performance of this software.
****************************************************************/

#include "f2c.h"

#ifdef __cplusplus
extern "C" {
#endif

    double r_log(real *x)
    {
        return( log(*x) );
    }
    double d_log(const doublereal *x)
    {
        return( log(*x) );
    }

    void c_log(complex *r, complex *z)
    {
        double zi, zr;
        r->i = atan2(zi = z->i, zr = z->r);
        r->r = log( hypot(zr, zi) );
    }
    void z_log(doublecomplex *r, doublecomplex *z)
    {
        double zi, zr;
        r->i = atan2(zi = z->i, zr = z->r);
        r->r = log( hypot(zr, zi) );
    }
#ifdef __cplusplus
}
#endif
