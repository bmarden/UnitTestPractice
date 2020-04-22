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

TEST(PracticeTest, is_long_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("LONGPALINDROMEFORTESTTSETROFEMORDNILAPGNOL");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_special_char_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("aäa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, simple_sort) {
    Practice obj;
    int val1 = 1;
    int val2 = 2;
    int val3 = 3;
    obj.sortDescending(val1, val2, val3);
    ASSERT_GT(val1, val2);
    ASSERT_GT(val2, val3);
}

TEST(PracticeTest, out_of_order_sort) {
    Practice obj;
    int val1 = 2;
    int val2 = 5;
    int val3 = 3;
    obj.sortDescending(val1, val2, val3);
    ASSERT_GT(val1, val2);
    ASSERT_GT(val2, val3);
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