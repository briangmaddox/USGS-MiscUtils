#ifndef _COMPARE_NOCASE_CPP_
#define _COMPARE_NOCASE_CPP_
// $Id: compare_nocase.cpp,v 1.3 2002-06-16 20:27:58 bmaddox Exp $
// Brian Maddox - 27 Dec 1999
// Last modified by $Author: bmaddox $ on $Date: 2002-06-16 20:27:58 $


#include "compare_nocase.h"

#include <cctype>

// ***************************************************************************
// Implementation is based on the Stroustrup function.  I basically changed
// it since I really don't like how strcmp works :)
bool MiscUtils::compare_nocase(const std::string& s1, const std::string& s2)
  throw()
{
  std::string::const_iterator p  = s1.begin();
  std::string::const_iterator p2 = s2.begin();

  while ( (p != s1.end()) && (p2 != s2.end()) )
  {
    if (std::toupper(*p) != std::toupper(*p2) )
      return false;
    ++p;
    ++p2;
  }

  // If here, we must have hit the end of one of the strings so check to see
  // if the sizes are the same.  If so, the strings must be equal.  If not, 
  // return false

  if ( s2.size() == s1.size() )
    return true;
  else
    return false;
}

// ***************************************************************************
// This allows the user to send a char* to compare it to a string.  Note that
// this simply creates a temporary string and sends it to the above function
bool MiscUtils::compare_nocase(const std::string& s1, const char* s2) throw()
{
  std::string str2 = std::string(s2); // create the temp string
  
  return compare_nocase(s1, str2);
}

#endif // #ifndef _COMPARE_NOCASE_CPP_




