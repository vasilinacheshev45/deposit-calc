#include "../thirdparty/ctest.h"
#include <stdio.h>

CTEST(suite1, test1)
{
    const int real = 90;
    printf("Корректность срока вклада:");
    ASSERT_INTERVAL(0, 365, real);
}

CTEST(suite1, test2)
{
	const int real = 20;
    printf("Корректность вклада, min 10000:");
    ASSERT_INTERVAL(10,1000000, real);
}
