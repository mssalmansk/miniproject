
#include "unity.h"

/* Modify these two lines according to the project */
#include "bookcricket.h"
#define PROJECT_NAME   "Book_Cricket"

/* Prototypes for all the test functions */
void test_GetPlayerToss(void);
void test_batting(void);



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_GetPlayerToss);
  RUN_TEST(test_batting);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_GetPlayerToss(void) {
  //TEST_ASSERT_EQUAL(, GetPlayerToss(,,));
  //TEST_ASSERT_EQUAL(, GetPlayerToss(,,));
  
}

void test_batting(void) {
  //TEST_ASSERT_EQUAL(,batting(,,));
  //TEST_ASSERT_EQUAL(,batting(,,));
  //TEST_ASSERT_EQUAL(,batting(,,));
}


