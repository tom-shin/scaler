#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/scaler_analysis/scaler.h");
CPPTEST_TEST_SUITE_INCLUDED_TO("/scaler_analysis/scaler-core.c");

EXTERN_C_LINKAGE void TestSuite_scaler_h_2598ff06_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_scaler_h_2598ff06_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_scaler_h_2598ff06);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_scaler_h_2598ff06_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_scaler_h_2598ff06_test_ctx_get_frame_1);
        CPPTEST_TEST(TestSuite_scaler_h_2598ff06_test_ctx_get_frame_10);
        CPPTEST_TEST(TestSuite_scaler_h_2598ff06_test_ctx_get_frame_2);
        CPPTEST_TEST(TestSuite_scaler_h_2598ff06_test_ctx_get_frame_3);
        CPPTEST_TEST(TestSuite_scaler_h_2598ff06_test_ctx_get_frame_4);
        CPPTEST_TEST(TestSuite_scaler_h_2598ff06_test_ctx_get_frame_5);
        CPPTEST_TEST(TestSuite_scaler_h_2598ff06_test_ctx_get_frame_6);
        CPPTEST_TEST(TestSuite_scaler_h_2598ff06_test_ctx_get_frame_7);
        CPPTEST_TEST(TestSuite_scaler_h_2598ff06_test_ctx_get_frame_8);
        CPPTEST_TEST(TestSuite_scaler_h_2598ff06_test_ctx_get_frame_9);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_scaler_h_2598ff06_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_1(void);
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_10(void);
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_2(void);
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_3(void);
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_4(void);
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_5(void);
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_6(void);
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_7(void);
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_8(void);
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_9(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_scaler_h_2598ff06);

void TestSuite_scaler_h_2598ff06_testSuiteSetUp(void);
void TestSuite_scaler_h_2598ff06_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_scaler_h_2598ff06_testSuiteTearDown(void);
void TestSuite_scaler_h_2598ff06_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_scaler_h_2598ff06_setUp(void);
void TestSuite_scaler_h_2598ff06_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_scaler_h_2598ff06_tearDown(void);
void TestSuite_scaler_h_2598ff06_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_ctx_get_frame_1 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_frame * ctx_get_frame(struct sc_ctx *, enum v4l2_buf_type) */
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    {
        /* Tested function call */
        struct sc_frame * _return  = ctx_get_frame(_ctx, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_ctx_get_frame_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ctx_get_frame_10 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_frame * ctx_get_frame(struct sc_ctx *, enum v4l2_buf_type) */
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_META_OUTPUT;
    {
        /* Tested function call */
        struct sc_frame * _return  = ctx_get_frame(_ctx, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_ctx_get_frame_10 */

/* CPPTEST_TEST_CASE_BEGIN test_ctx_get_frame_2 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_frame * ctx_get_frame(struct sc_ctx *, enum v4l2_buf_type) */
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    {
        /* Tested function call */
        struct sc_frame * _return  = ctx_get_frame(_ctx, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_ctx_get_frame_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ctx_get_frame_3 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_frame * ctx_get_frame(struct sc_ctx *, enum v4l2_buf_type) */
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_OVERLAY;
    {
        /* Tested function call */
        struct sc_frame * _return  = ctx_get_frame(_ctx, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_ctx_get_frame_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ctx_get_frame_4 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_frame * ctx_get_frame(struct sc_ctx *, enum v4l2_buf_type) */
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VBI_CAPTURE;
    {
        /* Tested function call */
        struct sc_frame * _return  = ctx_get_frame(_ctx, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_ctx_get_frame_4 */

/* CPPTEST_TEST_CASE_BEGIN test_ctx_get_frame_5 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_frame * ctx_get_frame(struct sc_ctx *, enum v4l2_buf_type) */
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_SLICED_VBI_CAPTURE;
    {
        /* Tested function call */
        struct sc_frame * _return  = ctx_get_frame(_ctx, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_ctx_get_frame_5 */

/* CPPTEST_TEST_CASE_BEGIN test_ctx_get_frame_6 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_frame * ctx_get_frame(struct sc_ctx *, enum v4l2_buf_type) */
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_SLICED_VBI_OUTPUT;
    {
        /* Tested function call */
        struct sc_frame * _return  = ctx_get_frame(_ctx, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_ctx_get_frame_6 */

/* CPPTEST_TEST_CASE_BEGIN test_ctx_get_frame_7 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_frame * ctx_get_frame(struct sc_ctx *, enum v4l2_buf_type) */
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE;
    {
        /* Tested function call */
        struct sc_frame * _return  = ctx_get_frame(_ctx, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_ctx_get_frame_7 */

/* CPPTEST_TEST_CASE_BEGIN test_ctx_get_frame_8 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_frame * ctx_get_frame(struct sc_ctx *, enum v4l2_buf_type) */
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE;
    {
        /* Tested function call */
        struct sc_frame * _return  = ctx_get_frame(_ctx, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_ctx_get_frame_8 */

/* CPPTEST_TEST_CASE_BEGIN test_ctx_get_frame_9 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_frame * ctx_get_frame(struct sc_ctx *, enum v4l2_buf_type) */
void TestSuite_scaler_h_2598ff06_test_ctx_get_frame_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_SDR_OUTPUT;
    {
        /* Tested function call */
        struct sc_frame * _return  = ctx_get_frame(_ctx, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_ctx_get_frame_9 */
