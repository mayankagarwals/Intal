void suite_mod_test_1(void)
{
    char s1[] = "9999";
    char s2[] = "1";
	char* result1 = intal_mod(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}

void suite_mod_test_2(void)
{
    char s1[] = "32490";
    char s2[] = "232";
	char* result1 = intal_mod(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "10"); 
		free(result1);
	}
}

void suite_mod_test_3(void)
{
    char s1[] = "0";
    char s2[] = "8";
	char* result1 = intal_mod(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}

void suite_mod_test_4(void)
{
    char s1[] = "7";
    char s2[] = "7";
	char* result1 = intal_mod(s1, s2);
	if(!result1) {
		CU_FAIL("Failed to return an intal")
	} else {
		CU_ASSERT_STRING_EQUAL(result1, "0"); 
		free(result1);
	}
}
