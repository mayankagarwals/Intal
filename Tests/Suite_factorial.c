void suite_factorial_test_1(void)
{
	char* result1 = intal_factorial(0);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "1"); 
		free(result1);
	}
}

void suite_factorial_test_2(void)
{
	char* result1 = intal_factorial(1);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "1"); 
		free(result1);
	}
}

void suite_factorial_test_3(void)
{
	char* result1 = intal_factorial(2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "2"); 
		free(result1);
	}
}

void suite_factorial_test_4(void)
{
	char* result1 = intal_factorial(100);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000"); 
		free(result1);
	}
}
