void suite_add_test_1(void)
{
    char s1[] = "0";
    char s2[] = "0";
	char* result1 = intal_add(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}

void suite_add_test_2(void)
{
    char s1[] = "9999999";
    char s2[] = "1";
	char* result1 = intal_add(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "10000000"); 
		free(result1);
	}
}

void suite_add_test_3(void)
{
    char s1[] = "1";
    char s2[] = "1999999";
	char* result1 = intal_add(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "2000000"); 
		free(result1);
	}
}

void suite_add_test_4(void)
{
    char s1[] = "1999999";
    char s2[] = "1999999";
	char* result1 = intal_add(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "3999998"); 
		free(result1);
	}
}
