// sleep.hpp -- <lib> sleep function

#ifndef SLEEP_H
#define SLEEP_H

#include <ctime>

void sleep(double secs) {
	clock_t delay = secs * CLOCKS_PER_SEC;
	clock_t start = clock();
	while (clock() - start < delay);
}
void sleep(int secs) {
	clock_t delay = secs * CLOCKS_PER_SEC;
	clock_t start = clock();
	while (clock() - start < delay);
}
void sleep(float secs) {
	clock_t delay = secs * CLOCKS_PER_SEC;
	clock_t start = clock();
	while (clock() - start < delay);
}

#endif

// last edit: 18/07/2021
// created by:	https://github.com/Dolfost
// license:	https://github.com/Dolfost/sleep-cpp/blob/main/COPYING
