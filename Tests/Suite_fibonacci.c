void suite_fibonacci_test_1(void)
{
	char* result1 = intal_fibonacci(0);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}

void suite_fibonacci_test_2(void)
{
	char* result1 = intal_fibonacci(1);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "1"); 
		free(result1);
	}
}

void suite_fibonacci_test_3(void)
{
	char* result1 = intal_fibonacci(2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "1"); 
		free(result1);
	}
}

void suite_fibonacci_test_4(void)
{
	char* result1 = intal_fibonacci(1000);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "43466557686937456435688527675040625802564660517371780402481729089536555\
41794905189040387984007925516929592259308032263477520968962323987332247\
1161642996440906533187938298969649928516003704476137795166849228875"); 
		free(result1);
	}
}
