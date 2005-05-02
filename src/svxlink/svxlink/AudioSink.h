/**
@file	 AudioSink.h
@brief   A_brief_description_for_this_file
@author  Tobias Blomberg / SM0SVX
@date	 2005-04-17

A_detailed_description_for_this_file

\verbatim
<A brief description of the program or library this file belongs to>
Copyright (C) 2004-2005  Tobias Blomberg / SM0SVX

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
\endverbatim
*/

/** @example AudioSink_demo.cpp
An example of how to use the AudioSink class
*/


#ifndef AUDIO_SINK_INCLUDED
#define AUDIO_SINK_INCLUDED


/****************************************************************************
 *
 * System Includes
 *
 ****************************************************************************/



/****************************************************************************
 *
 * Project Includes
 *
 ****************************************************************************/



/****************************************************************************
 *
 * Local Includes
 *
 ****************************************************************************/



/****************************************************************************
 *
 * Forward declarations
 *
 ****************************************************************************/



/****************************************************************************
 *
 * Namespace
 *
 ****************************************************************************/

//namespace MyNameSpace
//{


/****************************************************************************
 *
 * Forward declarations of classes inside of the declared namespace
 *
 ****************************************************************************/

class AudioSource;
  

/****************************************************************************
 *
 * Defines & typedefs
 *
 ****************************************************************************/



/****************************************************************************
 *
 * Exported Global Variables
 *
 ****************************************************************************/



/****************************************************************************
 *
 * Class definitions
 *
 ****************************************************************************/

/**
@brief	A_brief_class_description
@author Tobias Blomberg
@date   2005-04-17

A_detailed_class_description

\include AudioSink_demo.cpp
*/
class AudioSink
{
  public:
    /**
     * @brief 	Default constuctor
     */
    AudioSink(void) : m_source(0) {}
  
    /**
     * @brief 	Destructor
     */
    virtual ~AudioSink(void) {}
  
    /**
     * @brief 	A_brief_member_function_description
     * @param 	param1 Description_of_param1
     * @return	Return_value_of_this_member_function
     */
    
    bool registerSource(AudioSource *source);
    void unregisterSource(void);
    bool isRegistered(void) const { return m_source != 0; }
    
    virtual int writeSamples(const short *samples, int len) = 0;
    
    virtual void flushSamples(void) = 0;    
    
    
  protected:
    void sourceResumeOutput(void);
    void sourceAllSamplesFlushed(void);
    
    
  private:
    AudioSource *m_source;
    
};  /* class AudioSink */


//} /* namespace */

#endif /* AUDIO_SINK_INCLUDED */



/*
 * This file has not been truncated
 */
