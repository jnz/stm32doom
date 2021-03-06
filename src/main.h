/*
 * main.h
 *
 *  Created on: 13.05.2014
 *      Author: Florian
 */

#ifndef MAIN_H_
#define MAIN_H_

/*---------------------------------------------------------------------*
 *  additional includes                                                *
 *---------------------------------------------------------------------*/

/*---------------------------------------------------------------------*
 *  global definitions                                                 *
 *---------------------------------------------------------------------*/

#define elements_in(t) (sizeof (t) / sizeof (t[0]))

/*---------------------------------------------------------------------*
 *  type declarations                                                  *
 *---------------------------------------------------------------------*/

/*---------------------------------------------------------------------*
 *  function prototypes                                                *
 *---------------------------------------------------------------------*/

int main (void);

void sleep_ms (uint32_t ms);

void fatal_error (const char* message) __attribute__ ((noreturn));

/*---------------------------------------------------------------------*
 *  global data                                                        *
 *---------------------------------------------------------------------*/

extern volatile uint32_t systime;

/*---------------------------------------------------------------------*
 *  inline functions and function-like macros                          *
 *---------------------------------------------------------------------*/

/*---------------------------------------------------------------------*
 *  eof                                                                *
 *---------------------------------------------------------------------*/

#endif /* MAIN_H_ */
