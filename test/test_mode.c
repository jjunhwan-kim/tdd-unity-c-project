#include "mock_mode_validator.h"
#include "mode.h"
#include "unity.h"

void setUp(void) {}

void tearDown(void) {}

void test_IsModeValid_ShouldReturn0_WhenModeIsNotSupported(void) {
  // IsModeNotSupported가 1을 반환하도록 설정
  IsModeNotSupported_ExpectAndReturn(5, 1);

  // IsModeValid(5)를 호출하면 0을 반환해야 함
  TEST_ASSERT_EQUAL_UINT8(0, IsModeValid(5));
}

void test_IsModeValid_ShouldReturn1_WhenModeIsSupported(void) {
  // IsModeNotSupported가 0을 반환하도록 설정
  IsModeNotSupported_ExpectAndReturn(10, 0);

  // IsModeValid(10)를 호출하면 1을 반환해야 함
  TEST_ASSERT_EQUAL_UINT8(1, IsModeValid(10));
}

void test_SetMode_ShouldSetMode(void) {
  // setMode(3)를 호출하면 mode가 3이 되어야 함
  setMode(3);

  TEST_ASSERT_EQUAL_UINT8(3, getMode());
}

void test_IsModeClear_ShouldReturn1_WhenModeIs0(void) {
  // IsModeClear(0)를 호출하면 1을 반환해야 함
  TEST_ASSERT_EQUAL_UINT8(1, IsModeClear(0));
}

void test_IsModeClear_ShouldReturn0_WhenModeIsNot0(void) {
  // IsModeClear(1)를 호출하면 0을 반환해야 함
  TEST_ASSERT_EQUAL_UINT8(0, IsModeClear(1));
}