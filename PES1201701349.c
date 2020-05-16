#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int max(int a, int b)    //int suffices as atmost length is 1000
{
    return (a>b)?a:b;
}

static void reverse_string(char* intal)
{
    int n = strlen(intal);
    for(int i = 0; i < n/2; ++i)
    {
        char temp = intal[i];
        intal[i] = intal[n-1-i];
        intal[n-1-i] = temp;
    }
}


static void swap_strings(char** s1, char** s2)
{
    char* temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}


char* intal_add(char* intal1, char* intal2)
{
    //we need copies to work with as the input can be a literal too which
    // is unmodifiable
    char* num1 = (char*)malloc((strlen(intal1) + 1)* sizeof(char));
    char* num2 = (char*)malloc((strlen(intal2) + 1)* sizeof(char));
    strcpy(num1, intal1);
    strcpy(num2, intal2);

    int size1 = strlen(num1);
    int size2 = strlen(num2);

    int max_res_size = max(size1, size2) + 1;   
    //maximum sum of two numbers can atmost be one digit more
    char* res = (char*)malloc((max_res_size + 1)*sizeof(char));
    // +1 for the null character

    reverse_string(num1);
    reverse_string(num2);

    int i = 0, j = 0;

    int carry = 0;
    while(num1[i] && num2[j])
    {
        res[i] = ((num1[i] - '0') + (num2[j] - '0') + carry)%10 + '0';
        carry = ((num1[i] - '0') + (num2[j] - '0') + carry)/10;
        ++i;
        ++j;
    }
    if(num1[i])
    {
        while(num1[i])
        {
            res[i] = ((num1[i] - '0')  + carry)%10 + '0';
            carry = ((num1[i] - '0')  + carry)/10;
            ++i;
        }
        if(carry)
        {
            res[i] = carry + '0';
            ++i;
        }
        res[i] = '\0';
    }
    else if(num2[j])
    {
        while(num2[j])
        {
            res[j] = ((num2[j] - '0')  + carry)%10 + '0';
            carry = ((num2[j] - '0')  + carry)/10 ;
            ++j;
        }
        if(carry)
        {
            res[j] = carry + '0';
            ++j;
        }
        res[j] = '\0';
    }
    else
    {
        if(carry)
        {
            res[i] = carry + '0';
            ++i;
        }
        res[i] = '\0';
    }
    reverse_string(res);
    free(num1);
    free(num2);
    return res;

}



int intal_compare(char* intal1, char* intal2)
{
/*
First, compare the length of both strings. If there is a difference,
return the one which is larger.
If equal, start iterating from most significant digit. If there is a
difference, return the one possessing lower digit
If you have iterated through whole string, return 0 as they have to be 
equal
*/

    int size1 = strlen(intal1);
    int size2 = strlen(intal2);

    if(size1 > size2)
        return 1;
    if(size1 < size2)
        return -1;
    int i = 0;
    while(intal1[i])
    {
        if(intal1[i] > intal2[i])
            return 1;
        if(intal1[i] < intal2[i])
            return -1;
        ++i;
    }
    return 0;

}


char* intal_diff(char* intal1, char* intal2)
{
/*
    The required result is abs(intal1 - intal2). First make sure
     intal1 > intal2 using the previously written intal_compare.
    This is done to avoid negative result. Reverse the strings 
    and start subtracting. Carry forward if difference becomes
    negative. It is vital to remove preceeding zeros at the end.
*/

    //we need copies to work with
    char* num1 = (char*)malloc((strlen(intal1) + 1)* sizeof(char));
    char* num2 = (char*)malloc((strlen(intal2) + 1)* sizeof(char));
    strcpy(num1, intal1);
    strcpy(num2, intal2);


    int comp = intal_compare(num1, num2);
    if(comp == -1)
        swap_strings(&num1, &num2);

    int size1 = strlen(num1);
    int size2 = strlen(num2);

    int max_res_size = max(size1, size2);   
    //maximum difference of two numbers can atmost same as max
    char* res = (char*)malloc((max_res_size + 1)*sizeof(char));
    // +1 for the null character

    reverse_string(num1);
    reverse_string(num2);

    int i = 0;

    int carry = 0;
    while(num2[i])
    {
        int diff = (num1[i] - '0') - (num2[i] - '0') - carry;
        if(diff < 0)
        {
            diff += 10;
            carry = 1;
        }
        else
            carry = 0;

        res[i] = diff + '0';
        ++i;
    } 
    while(num1[i])
    {
        int diff = (num1[i] - '0') - carry;
        if(diff < 0)
        {
            diff += 10;
            carry = 1;
        }
        else
            carry = 0;
        res[i] = diff + '0';
        ++i;
    }

    i -= 1;     //necessary as i will be pointing to null

    while(i > 0 && res[i] == '0')
        --i;
    //removes preceeding zeros. After this i is pointing to 
    //first non zero digit or single 0. 

    res[i+1] = '\0';
    reverse_string(res);
    free(num1);
    free(num2);
    return res;
    
}
