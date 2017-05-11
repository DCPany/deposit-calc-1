#include <ctest.h>
#include <../src/deposit.h>

CTEST(test_number_one, dataent)
{
    // Given
    const int a = 199;
    const int b = 39999;
    
    // When
    int result = dataent (a,b);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}
