#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/scaler_analysis/scaler-debug.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/scaler_analysis/scaler-debug.c");

EXTERN_C_LINKAGE void TestSuite_scaler2ddebug_c_f68cfb4f_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_scaler2ddebug_c_f68cfb4f_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_scaler2ddebug_c_f68cfb4f);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_scaler2ddebug_c_f68cfb4f_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_sc_ctx_dump_1);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_sc_ctx_dump_2);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_addr_1);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_addr_2);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_crop_1);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_crop_2);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_1);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_2);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_3);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_4);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_5);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_6);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_7);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_8);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_int_frame_1);
        CPPTEST_TEST(TestSuite_scaler2ddebug_c_f68cfb4f_test_show_int_frame_2);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_scaler2ddebug_c_f68cfb4f_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_scaler2ddebug_c_f68cfb4f_test_sc_ctx_dump_1(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_sc_ctx_dump_2(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_addr_1(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_addr_2(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_crop_1(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_crop_2(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_1(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_2(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_3(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_4(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_5(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_6(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_7(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_8(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_int_frame_1(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_int_frame_2(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_scaler2ddebug_c_f68cfb4f);

void TestSuite_scaler2ddebug_c_f68cfb4f_testSuiteSetUp(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_scaler2ddebug_c_f68cfb4f_testSuiteTearDown(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_scaler2ddebug_c_f68cfb4f_setUp(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_scaler2ddebug_c_f68cfb4f_tearDown(void);
void TestSuite_scaler2ddebug_c_f68cfb4f_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_sc_ctx_dump_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ctx_dump(struct sc_ctx *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_sc_ctx_dump_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        sc_ctx_dump(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ctx_dump_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ctx_dump_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ctx_dump(struct sc_ctx *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_sc_ctx_dump_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        sc_ctx_dump(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ctx_dump_2 */

/* CPPTEST_TEST_CASE_BEGIN test_show_addr_1 */
/* CPPTEST_TEST_CASE_CONTEXT void show_addr(struct sc_addr *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_addr_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (addr) */ 
    struct sc_addr * _addr  = 0 ;
    {
        /* Tested function call */
        show_addr(_addr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_addr * _addr ", ( _addr ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_addr_1 */

/* CPPTEST_TEST_CASE_BEGIN test_show_addr_2 */
/* CPPTEST_TEST_CASE_CONTEXT void show_addr(struct sc_addr *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_addr_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (addr) */ 
    struct sc_addr _addr_0 ;
    struct sc_addr * _addr  = & _addr_0;
    {
        /* Tested function call */
        show_addr(_addr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_addr * _addr ", ( _addr ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_addr_2 */

/* CPPTEST_TEST_CASE_BEGIN test_show_crop_1 */
/* CPPTEST_TEST_CASE_CONTEXT void show_crop(struct v4l2_rect *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_crop_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect * _rect  = 0 ;
    {
        /* Tested function call */
        show_crop(_rect);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_crop_1 */

/* CPPTEST_TEST_CASE_BEGIN test_show_crop_2 */
/* CPPTEST_TEST_CASE_CONTEXT void show_crop(struct v4l2_rect *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_crop_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect _rect_0 ;
    struct v4l2_rect * _rect  = & _rect_0;
    {
        /* Tested function call */
        show_crop(_rect);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_crop_2 */

/* CPPTEST_TEST_CASE_BEGIN test_show_frame_1 */
/* CPPTEST_TEST_CASE_CONTEXT void show_frame(char *, struct sc_frame *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (name) */ 
    char _name_0 [1];
    char * _name  = (char * )cpptestMemset((void*)&_name_0, 0, (1 * sizeof(char)));
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    {
        /* Tested function call */
        show_frame(_name, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _name", ( _name ), sizeof(char));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_frame_1 */

/* CPPTEST_TEST_CASE_BEGIN test_show_frame_2 */
/* CPPTEST_TEST_CASE_CONTEXT void show_frame(char *, struct sc_frame *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (name) */ 
    char _name_0 [16];
    char * _name  = (char * )cpptestMemset((void*)&_name_0, 0, (16 * sizeof(char)));
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    {
        /* Tested function call */
        show_frame(_name, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _name", ( _name ), sizeof(char));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_frame_2 */

/* CPPTEST_TEST_CASE_BEGIN test_show_frame_3 */
/* CPPTEST_TEST_CASE_CONTEXT void show_frame(char *, struct sc_frame *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (name) */ 
    char _name_0 [256];
    char * _name  = (char * )cpptestMemset((void*)&_name_0, 0, (256 * sizeof(char)));
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    {
        /* Tested function call */
        show_frame(_name, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _name", ( _name ), sizeof(char));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_frame_3 */

/* CPPTEST_TEST_CASE_BEGIN test_show_frame_4 */
/* CPPTEST_TEST_CASE_CONTEXT void show_frame(char *, struct sc_frame *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (name) */ 
    char * _name  = 0 ;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    {
        /* Tested function call */
        show_frame(_name, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _name", ( _name ), sizeof(char));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_frame_4 */

/* CPPTEST_TEST_CASE_BEGIN test_show_frame_5 */
/* CPPTEST_TEST_CASE_CONTEXT void show_frame(char *, struct sc_frame *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (name) */ 
    char _name_0 [1];
    char * _name  = (char * )cpptestMemset((void*)&_name_0, 0, (1 * sizeof(char)));
    /* Initializing argument 2 (frame) */ 
    struct sc_frame _frame_1 ;
    struct sc_frame * _frame  = & _frame_1;
    {
        /* Tested function call */
        show_frame(_name, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _name", ( _name ), sizeof(char));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_frame_5 */

/* CPPTEST_TEST_CASE_BEGIN test_show_frame_6 */
/* CPPTEST_TEST_CASE_CONTEXT void show_frame(char *, struct sc_frame *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (name) */ 
    char _name_0 [16];
    char * _name  = (char * )cpptestMemset((void*)&_name_0, 0, (16 * sizeof(char)));
    /* Initializing argument 2 (frame) */ 
    struct sc_frame _frame_1 ;
    struct sc_frame * _frame  = & _frame_1;
    {
        /* Tested function call */
        show_frame(_name, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _name", ( _name ), sizeof(char));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_frame_6 */

/* CPPTEST_TEST_CASE_BEGIN test_show_frame_7 */
/* CPPTEST_TEST_CASE_CONTEXT void show_frame(char *, struct sc_frame *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (name) */ 
    char _name_0 [256];
    char * _name  = (char * )cpptestMemset((void*)&_name_0, 0, (256 * sizeof(char)));
    /* Initializing argument 2 (frame) */ 
    struct sc_frame _frame_1 ;
    struct sc_frame * _frame  = & _frame_1;
    {
        /* Tested function call */
        show_frame(_name, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _name", ( _name ), sizeof(char));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_frame_7 */

/* CPPTEST_TEST_CASE_BEGIN test_show_frame_8 */
/* CPPTEST_TEST_CASE_CONTEXT void show_frame(char *, struct sc_frame *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_frame_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (name) */ 
    char * _name  = 0 ;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame _frame_0 ;
    struct sc_frame * _frame  = & _frame_0;
    {
        /* Tested function call */
        show_frame(_name, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _name", ( _name ), sizeof(char));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_frame_8 */

/* CPPTEST_TEST_CASE_BEGIN test_show_int_frame_1 */
/* CPPTEST_TEST_CASE_CONTEXT void show_int_frame(struct sc_int_frame *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_int_frame_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (i_frame) */ 
    struct sc_int_frame * _i_frame  = 0 ;
    {
        /* Tested function call */
        show_int_frame(_i_frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _i_frame ", ( _i_frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_int_frame_1 */

/* CPPTEST_TEST_CASE_BEGIN test_show_int_frame_2 */
/* CPPTEST_TEST_CASE_CONTEXT void show_int_frame(struct sc_int_frame *) */
void TestSuite_scaler2ddebug_c_f68cfb4f_test_show_int_frame_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (i_frame) */ 
    struct sc_int_frame _i_frame_0 ;
    struct sc_int_frame * _i_frame  = & _i_frame_0;
    {
        /* Tested function call */
        show_int_frame(_i_frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _i_frame ", ( _i_frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_int_frame_2 */
