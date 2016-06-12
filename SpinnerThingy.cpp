#ifndef _SPINNERTHINGY_CPP_
#define _SPINNERTHINGY_CPP_
// $Id: SpinnerThingy.cpp,v 1.3 2002-06-16 20:27:58 bmaddox Exp $
// Christopher B. Bilderback - cbilder@umr.edu
// Last modified by $Author: bmaddox $ on $Date: 2002-06-16 20:27:58 $


#include "SpinnerThingy.h"

using namespace MiscUtils;

// ***************************************************************************
SpinnerThingy::SpinnerThingy()
{
   updt[0] = '|';
   updt[1] = '/';
   updt[2] = '-';
   updt[3] = '\\';
   status = 0;
   lastMsgLength = 0;
}


// ***************************************************************************
void SpinnerThingy::update(int step) throw()
{
  std::string temp;
  std::stringstream tempstream;
  int counter, length;

  //get the temporary output string
  tempstream << updt[status] << " " << step << std::ends;
  temp = tempstream.str();

  tempstream.str("");
  tempstream.clear();

  //get the length of the last string
  length = lastMsgLength - temp.size();
  
  //store this as the last msg length
  lastMsgLength = temp.size();

  //formulate output
  tempstream << temp;
  for (counter = 0; counter < length; counter++)
    tempstream << " ";
  tempstream << std::ends;

  //output the line
  std::cout << tempstream.str() << "\r" << std::flush;
  
  //update status
  status++;
  status = status%4;

}


// ***************************************************************************
void SpinnerThingy::update(long step) throw()
{
  std::string temp;
  std::stringstream tempstream;
  int counter, length;

  //get the temporary output string
  tempstream << updt[status] << " " << step << std::ends;
  temp = tempstream.str();

  tempstream.str("");
  tempstream.clear();

  //get the length of the last string
  length = lastMsgLength - temp.size();
  
  //store this as the last msg length
  lastMsgLength = temp.size();

  //formulate output
  tempstream << temp;
  for (counter = 0; counter < length; counter++)
    tempstream << " ";
  tempstream << std::ends;

  //output the line
  std::cout << tempstream.str() << "\r" << std::flush;
  
  //update status
  status++;
  status = status%4;
}


// ***************************************************************************
void SpinnerThingy::update(double step) throw()
{
  std::string temp;
  std::stringstream tempstream;
  int counter, length;

  //get the temporary output string
  tempstream << updt[status] << " " << step << std::ends;
  temp = tempstream.str();

  tempstream.str("");
  tempstream.clear();

  //get the length of the last string
  length = lastMsgLength - temp.size();
  
  //store this as the last msg length
  lastMsgLength = temp.size();

  //formulate output
  tempstream << temp;
  for (counter = 0; counter < length; counter++)
    tempstream << " ";
  tempstream << std::ends;

  //output the line
  std::cout << tempstream.str() << "\r" << std::flush;
  
  //update status
  status++;
  status = status%4;
}


// ***************************************************************************
void SpinnerThingy::update(const char* step) throw()
{
  std::string temp;
  std::stringstream tempstream;
  int counter, length;

  //get the temporary output string
  tempstream << updt[status] << " " << step << std::ends;
  temp = tempstream.str();

  tempstream.str("");
  tempstream.clear();

  //get the length of the last string
  length = lastMsgLength - temp.size();
  
  //store this as the last msg length
  lastMsgLength = temp.size();

  //formulate output
  tempstream << temp;
  for (counter = 0; counter < length; counter++)
    tempstream << " ";
  tempstream << std::ends;

  //output the line
  std::cout << tempstream.str() << "\r" << std::flush;
  
  //update status
  status++;
  status = status%4;
}


// ***************************************************************************
void SpinnerThingy::done(const char* msg) throw()
{
  std::string temp;
  std::stringstream tempstream;
  int counter, length;

  //get the temporary output string
  tempstream << msg  << std::ends;
  temp = tempstream.str();

  tempstream.str("");
  tempstream.clear();

  //get the length of the last string
  length = lastMsgLength - temp.size();
  
  //store this as the last msg length
  lastMsgLength = temp.size();

  //formulate output
  tempstream << temp;
  for (counter = 0; counter < length; counter++)
    tempstream << " ";
  tempstream << std::ends;

  //output the line
  std::cout << tempstream.str() << std::endl;
  
  //update status
  status=0;
}

#endif
