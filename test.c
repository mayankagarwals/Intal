#include <stdio.h>
#include <string.h>
#include "CUnit/Basic.h"
#include "intal.h"
#include <stdlib.h>

#include "Tests/Suite_add.c"

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


   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   CU_cleanup_registry();
   return CU_get_error();

}
