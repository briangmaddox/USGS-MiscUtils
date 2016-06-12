#ifndef _CMP_NOCASE_H_
#define _CMP_NOCASE_H_
// $Id: cmp_nocase.h,v 1.2 2002-03-03 23:32:25 bmaddox Exp $
// Brian G. Maddox - 27 Dec 1999
// Last Modified by $Author: bmaddox $ on $Date: 2002-03-03 23:32:25 $


#include <string>

// These are the cmp_nocase functions from Stroustup's "The C++ Programming
// Language" 3rd edition.  They function as C's strcmp and strncmp do.

namespace MiscUtils
{

  int cmp_nocase(const std::string& s, const std::string& s1) throw();
  int cmp_nocase(const std::string& s, const char* s1) throw();

}

#endif // #ifndef _CMP_NOCASE_H_
