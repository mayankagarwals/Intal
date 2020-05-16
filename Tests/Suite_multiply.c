void suite_multiply_test_1(void)
{
    char s1[] = "0";
    char s2[] = "0";
	char* result1 = intal_multiply(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}

void suite_multiply_test_2(void)
{
    char s1[] = "9999";
    char s2[] = "9999";
	char* result1 = intal_multiply(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "99980001"); 
		free(result1);
	}
}

void suite_multiply_test_3(void)
{
    char s1[] = "9999";
    char s2[] = "0";
	char* result1 = intal_multiply(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}

void suite_multiply_test_4(void)
{
    char s1[] = "0";
    char s2[] = "9999";
	char* result1 = intal_multiply(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}
