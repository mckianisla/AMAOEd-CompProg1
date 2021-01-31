/* ****************************************************************
 * @author: Mc Kian Isla
 * @app name: pause.h
 * @app desc: This library shall contain a function that imitates Windows' PAUSE command
 * @history:
 *  - 01.31.2021
 *      -- Created _pause() function
 * ****************************************************************/

#ifndef _PAUSE
#define _PAUSE

#include <iostream>

// A function to imitate Windows' PAUSE command
void _pause() {
    std::cout << "Press any key to continue...";
    std::cin.get();
}

#endif
