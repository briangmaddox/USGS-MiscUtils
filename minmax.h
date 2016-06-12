#ifndef _MINMAX_H_
#define _MINMAX_H_
// $Id: minmax.h,v 1.2 2002-03-03 23:32:25 bmaddox Exp $
// Brian Maddox - 27 Dec 1999
// Last modified by $Author: bmaddox $ on $Date: 2002-03-03 23:32:25 $


// Definition of the min and max functions

namespace MiscUtils
{
  template<class T> T MAX(const T& x, const T& y) throw()
  {
    if (x >= y)
      return x;
    else
      return y;
  }

  template<class T> T MIN(const T& x, const T& y) throw()
  {
    if (x <= y)
      return x;
    else
      return y;
  }
}


#endif
