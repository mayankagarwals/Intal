void suite_gcd_test_1(void)
{
    char s1[] = "0";
    char s2[] = "0";
	char* result1 = intal_gcd(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}

void suite_gcd_test_2(void)
{
    char s1[] = "93473894";
    char s2[] = "9237432947";
	char* result1 = intal_gcd(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "1"); 
		free(result1);
	}
}

void suite_gcd_test_3(void)
{
    char s1[] = "0";
    char s2[] = "124324987";
	char* result1 = intal_gcd(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "124324987"); 
		free(result1);
	}
}

void suite_gcd_test_4(void)
{
    char s1[] = "124324987";
    char s2[] = "0";
	char* result1 = intal_gcd(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "124324987"); 
		free(result1);
	}
}
