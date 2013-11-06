#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int count_down;


void wait(int seconds)
{
 clock_t endwait;

 endwait = clock () + seconds * CLOCKS_PER_SEC;
 while (clock() < endwait) {}
}



