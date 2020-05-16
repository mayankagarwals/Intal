void suite_diff_test_1(void)
{
    char s1[] = "0";
    char s2[] = "0";
	char* result1 = intal_diff(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}

void suite_diff_test_2(void)
{
    char s1[] = "30";
    char s2[] = "35";
	char* result1 = intal_diff(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "5"); 
		free(result1);
	}
}

void suite_diff_test_3(void)
{
    char s1[] = "1";
    char s2[] = "1999999";
	char* result1 = intal_diff(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "1999998"); 
		free(result1);
	}
}

void suite_diff_test_4(void)
{
    char s1[] = "1999999";
    char s2[] = "1999999";
	char* result1 = intal_diff(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}
