#ifndef _TERMIO_HPP_
#define _TERMIO_HPP_

#if defined(_WIN32) || defined(_WIN64) || defined(__WINDOWS__)
#include <conio.h>

#else

char getch();

#endif

#endif /* _TERMIO_HPP_ */
