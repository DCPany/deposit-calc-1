#include <ctest.h>
#include <../src/deposit.h>

CTEST(check, test_number_1)
{
    // Given
    const int a = 199;
    const int b = 39999;
    
    // When
    int result = check (a,b);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check, test_number_2)
{
    // Given
    const int a = 9000;
    const int b = 10;
    
    // When
    int result = check (a,b);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check, test_number_3)
{
    // Given
    const int a = 50000;
    const int b = 1;
    
    // When
    int result = check (a,b);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check, test_number_4)
{
    // Given
    const int a = 5000;
    const int b = 365;
    
    // When
    int result = check (a,b);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(proffit, test_number_5)
{
    // Given
    const int a = 200000;
    const int b = 250;
    
    // When
    int result = proffit (a,b);

    // Then
    float expected = 230000;
    ASSERT_EQUAL(expected, result);
}

CTEST(proffit, test_number_6)
{
    // Given
    const int a = 100000;
    const int b = 10;
    
    // When
    int result = proffit (a,b);

    // Then
    float expected = 90000;
    ASSERT_EQUAL(expected, result);
}

CTEST(proffit, test_number_7)
{
    // Given
    const int a = 50000;
    const int b = 120;
    
    // When
    int result = proffit (a,b);

    // Then
    float expected = 51000;
    ASSERT_EQUAL(expected, result);
}

CTEST(proffit, test_number_8)
{
    // Given
    const int a = 368952;
    const int b = 240;
    
    // When
    int result = proffit (a,b);

    // Then
    float expected = 398468.16;
    ASSERT_EQUAL(expected, result);
}
