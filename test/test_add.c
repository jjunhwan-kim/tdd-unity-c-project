#include "add.h"
#include "unity.h"

void setUp(void) {
  // 각 테스트 실행 전에 실행됨 (필요 없으면 비워둬도 됨)
}

void tearDown(void) {
  // 각 테스트 실행 후 실행됨 (필요 없으면 비워둬도 됨)
}

void test_addition(void) {
  TEST_ASSERT_EQUAL(5, add(2, 3));
  TEST_ASSERT_EQUAL(0, add(0, 0));
  TEST_ASSERT_EQUAL(-5, add(-2, -3));
}

void test_negative_numbers(void) { TEST_ASSERT_EQUAL(-1, add(-2, 1)); }