/**
 * Thread working procedure.
 * 
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2017-2018, Sergey Baigudin
 * @license   http://embedded.team/license/
 */ 
#ifndef THREAD_H_
#define THREAD_H_

#include "Types.h"
#include "Error.h"

/**
 * Causes the currently executing thread to sleep.
 *
 * @param millis - a time to sleep in milliseconds.
 */  
extern void Thread_sleep(int16 millis);

/**
 * This partially guards from calling these functions by a user program.
 */
#ifdef BOOS_SYSTEM_MODE

/**
 * Initiates the threads executing.
 *
 * @return error code, returned by application, or else zero if no errors have been occurred.
 */
extern int8 Thread_execute(void);

/**
 * Plugs the thread scheduling.
 *
 * @return error code or else zero if no errors have been occurred.
 */ 
extern int8 Thread_plug(void);

#endif /* BOOS_SYSTEM_MODE */

#endif /* THREAD_H_ */
