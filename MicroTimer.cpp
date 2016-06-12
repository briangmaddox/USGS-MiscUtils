#ifndef _MICROTIMER_CPP_
#define _MICROTIMER_CPP_
// $Id: MicroTimer.cpp,v 1.2 2002-03-03 23:32:25 bmaddox Exp $
// Christopher B. Bilderback - cbilder@umr.edu


/***************************************************************************
                          MicroTimer.cpp  -  a cross compatible microsecond
                          timer class.
                             -------------------
    begin                : Tue Jul 17 2001
    copyright            : (C) 2001 by 
    email                : cbilder@mcpc1159
 ***************************************************************************/

#include "MicroTimer.h"

using namespace MiscUtils;

//***************************************************************************
MicroTimer::MicroTimer() : starttime_sec(0),
                           starttime_usec(0),
                           valid(false), minPeriod(0)
{
#ifdef _WIN32
  TIMECAPS res;
  //get the time capiabilities
  if (timeGetDevCaps(&res, sizeof (TIMECAPS)) == TIMERR_NOERROR)
  {
    minPeriod = res.wPeriodMin;
    //on most systems this will be 1 usec
    if (timeBeginPeriod(minPeriod) != TIMERR_NOERROR)
      valid = false;
    else
      valid = true;
  }
  else
    valid = false;
#else
  valid = true;   //get time of day needs no setup
#endif

}

//***************************************************************************
MicroTimer::~MicroTimer()
{
#ifdef _WIN32
  if (valid)
    timeEndPeriod(minPeriod);
#endif
}

#endif
