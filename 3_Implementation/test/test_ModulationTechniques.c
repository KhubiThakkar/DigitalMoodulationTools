#include "dhyey.h"
#include "unity.h"
#include "unity_internals.h"

char* inputValue1 ="11011110";
char* inputValue2 ="10010011";
char* inputValue3 ="10011";
char* inputValue4 ="10010";
char* inputValue5 ="0011";
char *binaryinput="10000001";

void test_NRZI(void){
  char* outputValue;
  outputValue = (char*)malloc(8*sizeof(char));
  TEST_ASSERT_EQUAL_STRING("01101011",nrziModulation(inputValue1,outputValue));
  TEST_ASSERT_EQUAL_STRING("00011101",nrziModulation(inputValue2,outputValue));
  free(outputValue);
}
void test_NRZL(void){
  TEST_ASSERT_EQUAL_STRING("11011110",nrzlModulation(inputValue1));
  TEST_ASSERT_EQUAL_STRING("10010011",nrzlModulation(inputValue2));
}
// void test_RZ(void){
//   TEST_ASSERT_EQUAL_STRING("11011110",rzModulation(inputValue1));
  // TEST_ASSERT_EQUAL_STRING("10010011",rzModulation(inputValue2));
//}
void test_manchester(void){
  TEST_ASSERT_EQUAL_STRING("0101100101010110",manchesterMod(inputValue1));
  TEST_ASSERT_EQUAL_STRING("0110100110100101",manchesterMod(inputValue2));
}
void test_differential(void){
  TEST_ASSERT_EQUAL_STRING("1001011001100101",differentialMod(inputValue1));
  TEST_ASSERT_EQUAL_STRING("1010100101011001",differentialMod(inputValue2));
}
void test_zeropadding(void){
  char* outputValue;
  outputValue = (char*)malloc(8*sizeof(char));
  TEST_ASSERT_EQUAL_STRING("00010011",zeroPadding(inputValue3,outputValue));
  TEST_ASSERT_EQUAL_STRING("00010010",zeroPadding(inputValue4,outputValue));
  TEST_ASSERT_EQUAL_STRING("00000011",zeroPadding(inputValue5,outputValue));
  free(outputValue);
}
void test_SineHighAmp (void){
    double ys [100] = {0};
    double xs [100] = {0};
    int position_indicator = 1;
    TEST_ASSERT_EQUAL(101,SineHighAmp(ys,xs,position_indicator));
}
void test_SineLowAmp (void){
    double ys [100] = {0};
    double xs [100] = {0};
    int position_indicator = 1;
    TEST_ASSERT_EQUAL(101,SineLowAmp(ys,xs,position_indicator));
}
void test_SineHighFreq (void){
    double ys [100] = {0};
    double xs [100] = {0};
    int position_indicator = 1;
    TEST_ASSERT_EQUAL(101,SineHighFreq(ys,xs,position_indicator));
}
void test_SineLowFreq (void){
    double ys [100] = {0};
    double xs [100] = {0};
    int position_indicator = 1;
    TEST_ASSERT_EQUAL(101,SineLowFreq(ys,xs,position_indicator));
}
void test_SinePositive (void){
    double ys [100] = {0};
    double xs [100] = {0};
    int position_indicator = 1;
    TEST_ASSERT_EQUAL(101,SinePositive(ys,xs,position_indicator));
}
void test_SineNegative (void){
    double ys [100] = {0};
    double xs [100] = {0};
    int position_indicator = 1;
    TEST_ASSERT_EQUAL(101,SineNegative(ys,xs,position_indicator));
}
void test_Buffer (void){
    TEST_ASSERT_EQUAL(10000001,buffer(binaryinput,0));
}


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
  RUN_TEST(test_NRZI);
  RUN_TEST(test_NRZL);
  //RUN_TEST(test_RZ);
  RUN_TEST(test_zeropadding);
  RUN_TEST(test_SineHighAmp);
  RUN_TEST(test_SineLowAmp);
  RUN_TEST(test_SineHighFreq);
  RUN_TEST(test_SineLowFreq);
  RUN_TEST(test_SinePositive);
  RUN_TEST(test_SineNegative);
  RUN_TEST(test_Buffer);
  RUN_TEST(test_manchester);
  RUN_TEST(test_differential);

  


  /* Close the Unity Test Framework */
    return UNITY_END();
}
