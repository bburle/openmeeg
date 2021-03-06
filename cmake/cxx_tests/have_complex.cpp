// DESCRIPTION
//
//   Test to check whether the C++ compiler has complex<T>.
//   In sync with AC_CXX_HAVE_COMPLEX (2008-04-12).
//
// COPYLEFT
//
//   Copyright (c) 2009 Theo Papadopoulo <Theodore.Papadopoulo@sophia.inria.fr>
//   Copyright (c) 2008 Todd Veldhuizen
//   Copyright (c) 2008 Luc Maisonobe <luc@spaceroots.org>
//
//   Copying and distribution of this file, with or without modification, are
//   permitted in any medium without royalty provided the copyright notice
//   and this notice are preserved.

#include <complex>

#ifdef HAVE_NAMESPACES
using namespace std;
#endif

int main() {
    complex<float> a;
    complex<double> b;
    return 0;
}
