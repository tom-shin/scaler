#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/scaler_analysis/include/soc/samsung/exynos-itmon.h");
CPPTEST_TEST_SUITE_INCLUDED_TO("/scaler_analysis/scaler-core.c");

EXTERN_C_LINKAGE void TestSuite_exynos2ditmon_h_57246597_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_exynos2ditmon_h_57246597_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_exynos2ditmon_h_57246597);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_exynos2ditmon_h_57246597_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_exynos2ditmon_h_57246597_test_itmon_enable_1);
        CPPTEST_TEST(TestSuite_exynos2ditmon_h_57246597_test_itmon_enable_2);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_exynos2ditmon_h_57246597_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_exynos2ditmon_h_57246597_test_itmon_enable_1(void);
void TestSuite_exynos2ditmon_h_57246597_test_itmon_enable_2(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_exynos2ditmon_h_57246597);

void TestSuite_exynos2ditmon_h_57246597_testSuiteSetUp(void);
void TestSuite_exynos2ditmon_h_57246597_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_exynos2ditmon_h_57246597_testSuiteTearDown(void);
void TestSuite_exynos2ditmon_h_57246597_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_exynos2ditmon_h_57246597_setUp(void);
void TestSuite_exynos2ditmon_h_57246597_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_exynos2ditmon_h_57246597_tearDown(void);
void TestSuite_exynos2ditmon_h_57246597_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_itmon_enable_1 */
/* CPPTEST_TEST_CASE_CONTEXT void itmon_enable(bool) */
void TestSuite_exynos2ditmon_h_57246597_test_itmon_enable_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (enabled) */ 
    bool _enabled  = false;
    {
        /* Tested function call */
        itmon_enable(_enabled);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_itmon_enable_1 */

/* CPPTEST_TEST_CASE_BEGIN test_itmon_enable_2 */
/* CPPTEST_TEST_CASE_CONTEXT void itmon_enable(bool) */
void TestSuite_exynos2ditmon_h_57246597_test_itmon_enable_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (enabled) */ 
    bool _enabled  = true;
    {
        /* Tested function call */
        itmon_enable(_enabled);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_itmon_enable_2 */
