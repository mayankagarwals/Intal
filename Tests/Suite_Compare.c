void suite_compare_test_1(void)
{
    char s1[] = "0";
    char s2[] = "0";
	int result1 = intal_compare(s1, s2);

	CU_ASSERT_EQUAL(result1, 0); 
}

void suite_compare_test_2(void)
{
    char s1[] = "9999999";
    char s2[] = "1";
	int result1 = intal_compare(s1, s2);
    CU_ASSERT_EQUAL(result1, 1); 
}

void suite_compare_test_3(void)
{
    char s1[] = "1";
    char s2[] = "1999999";
	int result1 = intal_compare(s1, s2);
    CU_ASSERT_EQUAL(result1, -1); 
}

void suite_compare_test_4(void)
{
    char s1[] = "1999999";
    char s2[] = "1999999";
	int result1 = intal_compare(s1, s2);
    CU_ASSERT_EQUAL(result1, 0); 
}

