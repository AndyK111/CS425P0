#include <stdlib.h>
#include <stdio.h>
#include "harness/unity.h"
#include "../src/lab.h"


void setUp(void) {
  printf("Setting up tests...\n");
}

void tearDown(void) {
  printf("Tearing down tests...\n");
}

void test_get_greeting(void) {
  char *greeting = get_greeting("Alice");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, Alice!", greeting);
  free(greeting); // Free the allocated memory for the greeting

  greeting = get_greeting(NULL);
  TEST_ASSERT_NULL(greeting);

  greeting = get_greeting("");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, !", greeting);
  free(greeting);
}

void test_product_of_two_integers(void) {
  TEST_ASSERT_EQUAL_INT(6, product_of_two_integers(2, 3));
  TEST_ASSERT_EQUAL_INT(-15, product_of_two_integers(-5, 3));
  TEST_ASSERT_EQUAL_INT(0, product_of_two_integers(0, 10));
  TEST_ASSERT_EQUAL_INT(100, product_of_two_integers(10, 10));
}

void test_incorrect_sum_of_two_integers(void) {
  int a = 5;
  int b = 10;
  int result = incorrect_sum_of_two_integers(a, b);
  TEST_ASSERT_TRUE(result > (a + b)); // The result should be greater than the correct sum
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_get_greeting);
  RUN_TEST(test_product_of_two_integers);
  RUN_TEST(test_incorrect_sum_of_two_integers);
  return UNITY_END();
}
