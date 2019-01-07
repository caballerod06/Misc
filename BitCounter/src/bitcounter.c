#include "stdio.h"
#include "bitcounter.h"

int BitCounter(unsigned int num)
{
	int cnt = 0;
	int i;

	for (i = 0; i < 8 * sizeof(unsigned int); i++)
	{
		if (num & (1 << i))
		{
			cnt++;
		}
	}

	return cnt;
}
