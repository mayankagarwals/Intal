#include <stdio.h>
#include <string.h>
#include "CUnit/Basic.h"
#include "intal.h"
#include <stdlib.h>

#include "Tests/Suite_add.c"
#include "Tests/Suite_Compare.c"
#include "Tests/Suite_diff.c"
#include "Tests/Suite_multiply.c"

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


   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   CU_cleanup_registry();
   return CU_get_error();

}
