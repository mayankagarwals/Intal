#include <stdio.h>
#include <string.h>
#include "CUnit/Basic.h"
#include "intal.h"
#include <stdlib.h>

#include "Tests/Suite_add.c"
#include "Tests/Suite_Compare.c"
#include "Tests/Suite_diff.c"
#include "Tests/Suite_multiply.c"
#include "Tests/Suite_mod.c"
#include "Tests/Suite_pow.c"
#include "Tests/Suite_gcd.c"
#include "Tests/Suite_fibonacci.c"
#include "Tests/Suite_factorial.c"



int main()
{
   CU_pSuite pSuite = NULL;

   if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();

   /* add a suite to the registry */
   pSuite = CU_add_suite("Suite_add", NULL, NULL);
   if (NULL == pSuite) 
   {
      CU_cleanup_registry();
      return CU_get_error();
   }


   if (NULL == CU_add_test(pSuite, "adding zeros", suite_add_test_1) ||
        NULL == CU_add_test(pSuite, "adding 9999999 to 1", suite_add_test_2) ||
        NULL == CU_add_test(pSuite, "adding 1 to 1999999", suite_add_test_3) ||
        NULL == CU_add_test(pSuite, "adding 1999999 to 1999999", suite_add_test_4)) 
        {
            CU_cleanup_registry();
            return CU_get_error();
        }

    pSuite = CU_add_suite("Suite_Compare", NULL, NULL);
    if(NULL == pSuite)
    {
      CU_cleanup_registry();
      return CU_get_error();
    }

   if (NULL == CU_add_test(pSuite, "comparing zeros", suite_compare_test_1) ||
        NULL == CU_add_test(pSuite, "comparing 9999999 to 1", suite_compare_test_2) ||
        NULL == CU_add_test(pSuite, "comparing 1 to 1999999", suite_compare_test_3) ||
        NULL == CU_add_test(pSuite, "comparing 1999999 to 1999999", suite_compare_test_4)) 
        {
            CU_cleanup_registry();
            return CU_get_error();
        }

    pSuite = CU_add_suite("Suite_diff", NULL, NULL);
    if(NULL == pSuite)
    {
      CU_cleanup_registry();
      return CU_get_error();
    }

   if (NULL == CU_add_test(pSuite, "subtract zeros", suite_diff_test_1) ||
        NULL == CU_add_test(pSuite, "30 - 35", suite_diff_test_2) ||
        NULL == CU_add_test(pSuite, "1 - 1999999", suite_diff_test_3) ||
        NULL == CU_add_test(pSuite, "1999999 - 1999999", suite_diff_test_4)) 
        {
            CU_cleanup_registry();
            return CU_get_error();
        }

    pSuite = CU_add_suite("Suite_multiply", NULL, NULL);
    if(NULL == pSuite)
    {
      CU_cleanup_registry();
      return CU_get_error();
    }

   if (NULL == CU_add_test(pSuite, "0 * 0", suite_multiply_test_1) ||
        NULL == CU_add_test(pSuite, "9999 * 9999", suite_multiply_test_2) ||
        NULL == CU_add_test(pSuite, "9999 * 0", suite_multiply_test_3) ||
        NULL == CU_add_test(pSuite, "0 * 9999", suite_multiply_test_4)) 
        {
            CU_cleanup_registry();
            return CU_get_error();
        }

    pSuite = CU_add_suite("Suite_mod", NULL, NULL);
    if(NULL == pSuite)
    {
      CU_cleanup_registry();
      return CU_get_error();
    }

   if (NULL == CU_add_test(pSuite, "9999 % 1", suite_mod_test_1) ||
        NULL == CU_add_test(pSuite, "32490 % 232", suite_mod_test_2) ||
        NULL == CU_add_test(pSuite, "0 % 8", suite_mod_test_3) ||
        NULL == CU_add_test(pSuite, "7 % 7", suite_mod_test_4)) 
        {
            CU_cleanup_registry();
            return CU_get_error();
        }


    pSuite = CU_add_suite("Suite_pow", NULL, NULL);
    if(NULL == pSuite)
    {
      CU_cleanup_registry();
      return CU_get_error();
    }

   if (NULL == CU_add_test(pSuite, "0 ^ 100", suite_pow_test_1) ||
        NULL == CU_add_test(pSuite, "100 ^ 0", suite_pow_test_2) ||
        NULL == CU_add_test(pSuite, "4 ^ 8", suite_pow_test_3) ||
        NULL == CU_add_test(pSuite, "2342 ^ 2324", suite_pow_test_4)) 
        {
            CU_cleanup_registry();
            return CU_get_error();
        }


    pSuite = CU_add_suite("Suite_gcd", NULL, NULL);
    if(NULL == pSuite)
    {
      CU_cleanup_registry();
      return CU_get_error();
    }

   if (NULL == CU_add_test(pSuite, "0, 0", suite_gcd_test_1) ||
        NULL == CU_add_test(pSuite, "93473894, 9237432947", suite_gcd_test_2) ||
        NULL == CU_add_test(pSuite, "0, 124324987", suite_gcd_test_3) ||
        NULL == CU_add_test(pSuite, "124324987 , 0", suite_gcd_test_4)) 
        {
            CU_cleanup_registry();
            return CU_get_error();
        }

    pSuite = CU_add_suite("Suite_fibonacci", NULL, NULL);
    if(NULL == pSuite)
    {
      CU_cleanup_registry();
      return CU_get_error();
    }

   if (NULL == CU_add_test(pSuite, "fibonacci(0)", suite_fibonacci_test_1) ||
        NULL == CU_add_test(pSuite, "fibonacci(1)", suite_fibonacci_test_2) ||
        NULL == CU_add_test(pSuite, "fibonacci(2)", suite_fibonacci_test_3) ||
        NULL == CU_add_test(pSuite, "fibonacci(1000)", suite_fibonacci_test_4)) 
        {
            CU_cleanup_registry();
            return CU_get_error();
        }

    pSuite = CU_add_suite("Suite_factorial", NULL, NULL);
    if(NULL == pSuite)
    {
      CU_cleanup_registry();
      return CU_get_error();
    }

   if (NULL == CU_add_test(pSuite, "factorial(0)", suite_factorial_test_1) ||
        NULL == CU_add_test(pSuite, "factorial(1)", suite_factorial_test_2) ||
        NULL == CU_add_test(pSuite, "factorial(2)", suite_factorial_test_3) ||
        NULL == CU_add_test(pSuite, "factorial(100)", suite_factorial_test_4)) 
        {
            CU_cleanup_registry();
            return CU_get_error();
        }


   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   CU_cleanup_registry();
   return CU_get_error();

}
