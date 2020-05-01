/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>

#include "Practice.h"

class PracticeTest : public ::testing::Test {
   protected:
    PracticeTest() {}           //constructor runs before each test
    virtual ~PracticeTest() {}  //destructor cleans up after tests
    virtual void SetUp() {}     //sets up before each test (after constructor)
    virtual void TearDown() {}  //clean up after each test, (before destructor)
};

TEST(PracticeTest, single_char_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("Ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_long_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("This is not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, almost_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("red rum, sirx, is murder");
    ASSERT_FALSE(actual); 
}

TEST(PracticeTest, true_almost_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("red rum, sir, is murder");
    ASSERT_TRUE(actual); 
}
TEST(PracticeTest, ignore_capital_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("AabaA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_long_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("LONGPALINDROMEFORTESTTSETROFEMORDNILAPGNOL");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, num_in_string_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("is3si");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_special_char_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("aäa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, ignore_spaces_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("Never odd or Even");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, ignore_punctuation_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("Doc, Note: I Dissent. A Fast Never Prevents A Fatness. I Diet On Cod.");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, ascending_to_desc) {
    Practice obj;
    int val1 = 1;
    int val2 = 2;
    int val3 = 3;
    obj.sortDescending(val1, val2, val3);
    ASSERT_GT(val1, val2);
    ASSERT_GT(val2, val3);
}

TEST(PracticeTest, lowhighmid_to_desc) {
    Practice obj;
    int val1 = 2;
    int val2 = 5;
    int val3 = 3;
    obj.sortDescending(val1, val2, val3);
    ASSERT_GT(val1, val2);
    ASSERT_GT(val2, val3);
}

TEST(PracticeTest, midlowhigh_to_desc) {
    Practice obj;
    int val1 = 3;
    int val2 = 1;
    int val3 = 5;
    obj.sortDescending(val1, val2, val3);
    ASSERT_GT(val1, val2);
    ASSERT_GT(val2, val3);
}

TEST(PracticeTest, same_value_to_desc) {
    Practice obj;
    int val1 = 1;
    int val2 = 1;
    int val3 = 2;
    obj.sortDescending(val1, val2, val3);
    ASSERT_EQ(val2, val3);
}

TEST(PracticeTest, in_order_sort) {
    Practice obj;
    int val1 = 3;
    int val2 = 2;
    int val3 = 1;
    obj.sortDescending(val1, val2, val3);
    ASSERT_GT(val1, val2);
    ASSERT_GT(val2, val3);
}
