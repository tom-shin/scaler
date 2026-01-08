#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/scaler_analysis/include/media/v4l2-dev.h");
CPPTEST_TEST_SUITE_INCLUDED_TO("/scaler_analysis/scaler-core.c");

EXTERN_C_LINKAGE void TestSuite_v4l22ddev_h_bb2f9f8_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_v4l22ddev_h_bb2f9f8_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_v4l22ddev_h_bb2f9f8);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_v4l22ddev_h_bb2f9f8_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_1);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_10);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_2);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_3);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_4);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_5);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_6);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_7);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_8);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_9);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_device_node_name_1);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_device_node_name_2);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_drvdata_1);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_drvdata_2);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_get_drvdata_1);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_get_drvdata_2);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_is_registered_1);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_is_registered_2);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_1);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_10);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_2);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_3);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_4);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_5);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_6);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_7);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_8);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_9);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_1);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_10);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_2);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_3);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_4);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_5);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_6);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_7);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_8);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_9);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_set_drvdata_1);
        CPPTEST_TEST(TestSuite_v4l22ddev_h_bb2f9f8_test_video_set_drvdata_2);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_v4l22ddev_h_bb2f9f8_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_1(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_10(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_2(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_3(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_4(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_5(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_6(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_7(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_8(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_9(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_device_node_name_1(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_device_node_name_2(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_drvdata_1(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_drvdata_2(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_get_drvdata_1(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_get_drvdata_2(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_is_registered_1(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_is_registered_2(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_1(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_10(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_2(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_3(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_4(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_5(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_6(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_7(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_8(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_9(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_1(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_10(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_2(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_3(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_4(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_5(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_6(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_7(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_8(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_9(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_set_drvdata_1(void);
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_set_drvdata_2(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_v4l22ddev_h_bb2f9f8);

void TestSuite_v4l22ddev_h_bb2f9f8_testSuiteSetUp(void);
void TestSuite_v4l22ddev_h_bb2f9f8_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_v4l22ddev_h_bb2f9f8_testSuiteTearDown(void);
void TestSuite_v4l22ddev_h_bb2f9f8_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_v4l22ddev_h_bb2f9f8_setUp(void);
void TestSuite_v4l22ddev_h_bb2f9f8_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_v4l22ddev_h_bb2f9f8_tearDown(void);
void TestSuite_v4l22ddev_h_bb2f9f8_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_v4l2_disable_ioctl_1 */
/* CPPTEST_TEST_CASE_CONTEXT void v4l2_disable_ioctl(struct video_device *, unsigned int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 255;
    {
        /* Tested function call */
        v4l2_disable_ioctl(_vdev, _cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_v4l2_disable_ioctl_1 */

/* CPPTEST_TEST_CASE_BEGIN test_v4l2_disable_ioctl_10 */
/* CPPTEST_TEST_CASE_CONTEXT void v4l2_disable_ioctl(struct video_device *, unsigned int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 0u;
    {
        /* Tested function call */
        v4l2_disable_ioctl(_vdev, _cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_v4l2_disable_ioctl_10 */

/* CPPTEST_TEST_CASE_BEGIN test_v4l2_disable_ioctl_2 */
/* CPPTEST_TEST_CASE_CONTEXT void v4l2_disable_ioctl(struct video_device *, unsigned int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 255;
    {
        /* Tested function call */
        v4l2_disable_ioctl(_vdev, _cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_v4l2_disable_ioctl_2 */

/* CPPTEST_TEST_CASE_BEGIN test_v4l2_disable_ioctl_3 */
/* CPPTEST_TEST_CASE_CONTEXT void v4l2_disable_ioctl(struct video_device *, unsigned int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 192;
    {
        /* Tested function call */
        v4l2_disable_ioctl(_vdev, _cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_v4l2_disable_ioctl_3 */

/* CPPTEST_TEST_CASE_BEGIN test_v4l2_disable_ioctl_4 */
/* CPPTEST_TEST_CASE_CONTEXT void v4l2_disable_ioctl(struct video_device *, unsigned int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 192;
    {
        /* Tested function call */
        v4l2_disable_ioctl(_vdev, _cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_v4l2_disable_ioctl_4 */

/* CPPTEST_TEST_CASE_BEGIN test_v4l2_disable_ioctl_5 */
/* CPPTEST_TEST_CASE_CONTEXT void v4l2_disable_ioctl(struct video_device *, unsigned int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 0;
    {
        /* Tested function call */
        v4l2_disable_ioctl(_vdev, _cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_v4l2_disable_ioctl_5 */

/* CPPTEST_TEST_CASE_BEGIN test_v4l2_disable_ioctl_6 */
/* CPPTEST_TEST_CASE_CONTEXT void v4l2_disable_ioctl(struct video_device *, unsigned int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 0;
    {
        /* Tested function call */
        v4l2_disable_ioctl(_vdev, _cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_v4l2_disable_ioctl_6 */

/* CPPTEST_TEST_CASE_BEGIN test_v4l2_disable_ioctl_7 */
/* CPPTEST_TEST_CASE_CONTEXT void v4l2_disable_ioctl(struct video_device *, unsigned int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        v4l2_disable_ioctl(_vdev, _cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_v4l2_disable_ioctl_7 */

/* CPPTEST_TEST_CASE_BEGIN test_v4l2_disable_ioctl_8 */
/* CPPTEST_TEST_CASE_CONTEXT void v4l2_disable_ioctl(struct video_device *, unsigned int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        v4l2_disable_ioctl(_vdev, _cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_v4l2_disable_ioctl_8 */

/* CPPTEST_TEST_CASE_BEGIN test_v4l2_disable_ioctl_9 */
/* CPPTEST_TEST_CASE_CONTEXT void v4l2_disable_ioctl(struct video_device *, unsigned int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_v4l2_disable_ioctl_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 1u;
    {
        /* Tested function call */
        v4l2_disable_ioctl(_vdev, _cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_v4l2_disable_ioctl_9 */

/* CPPTEST_TEST_CASE_BEGIN test_video_device_node_name_1 */
/* CPPTEST_TEST_CASE_CONTEXT const char * video_device_node_name(struct video_device *) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_device_node_name_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    {
        /* Tested function call */
        const char * _return  = video_device_node_name(_vdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_device_node_name_1 */

/* CPPTEST_TEST_CASE_BEGIN test_video_device_node_name_2 */
/* CPPTEST_TEST_CASE_CONTEXT const char * video_device_node_name(struct video_device *) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_device_node_name_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    {
        /* Tested function call */
        const char * _return  = video_device_node_name(_vdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_device_node_name_2 */

/* CPPTEST_TEST_CASE_BEGIN test_video_drvdata_1 */
/* CPPTEST_TEST_CASE_CONTEXT void * video_drvdata(struct file *) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_drvdata_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    {
        /* Tested function call */
        void * _return  = video_drvdata(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_drvdata_1 */

/* CPPTEST_TEST_CASE_BEGIN test_video_drvdata_2 */
/* CPPTEST_TEST_CASE_CONTEXT void * video_drvdata(struct file *) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_drvdata_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    {
        /* Tested function call */
        void * _return  = video_drvdata(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_drvdata_2 */

/* CPPTEST_TEST_CASE_BEGIN test_video_get_drvdata_1 */
/* CPPTEST_TEST_CASE_CONTEXT void * video_get_drvdata(struct video_device *) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_get_drvdata_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    {
        /* Tested function call */
        void * _return  = video_get_drvdata(_vdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_get_drvdata_1 */

/* CPPTEST_TEST_CASE_BEGIN test_video_get_drvdata_2 */
/* CPPTEST_TEST_CASE_CONTEXT void * video_get_drvdata(struct video_device *) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_get_drvdata_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    {
        /* Tested function call */
        void * _return  = video_get_drvdata(_vdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_get_drvdata_2 */

/* CPPTEST_TEST_CASE_BEGIN test_video_is_registered_1 */
/* CPPTEST_TEST_CASE_CONTEXT int video_is_registered(struct video_device *) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_is_registered_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    {
        /* Tested function call */
        int _return  = video_is_registered(_vdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_is_registered_1 */

/* CPPTEST_TEST_CASE_BEGIN test_video_is_registered_2 */
/* CPPTEST_TEST_CASE_CONTEXT int video_is_registered(struct video_device *) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_is_registered_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    {
        /* Tested function call */
        int _return  = video_is_registered(_vdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_is_registered_2 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_1 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_GRABBER;
    /* Initializing argument 3 (nr) */ 
    int _nr  = 1;
    {
        /* Tested function call */
        int _return  = video_register_device(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_1 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_10 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_RADIO;
    /* Initializing argument 3 (nr) */ 
    int _nr  = 0;
    {
        /* Tested function call */
        int _return  = video_register_device(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_10 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_2 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_GRABBER;
    /* Initializing argument 3 (nr) */ 
    int _nr  = 1;
    {
        /* Tested function call */
        int _return  = video_register_device(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_2 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_3 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_TOUCH;
    /* Initializing argument 3 (nr) */ 
    int _nr  = 1;
    {
        /* Tested function call */
        int _return  = video_register_device(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_3 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_4 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_RADIO;
    /* Initializing argument 3 (nr) */ 
    int _nr  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = video_register_device(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_4 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_5 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_GRABBER;
    /* Initializing argument 3 (nr) */ 
    int _nr  = -1;
    {
        /* Tested function call */
        int _return  = video_register_device(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_5 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_6 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_SDR;
    /* Initializing argument 3 (nr) */ 
    int _nr  = -1;
    {
        /* Tested function call */
        int _return  = video_register_device(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_6 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_7 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_RADIO;
    /* Initializing argument 3 (nr) */ 
    int _nr  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = video_register_device(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_7 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_8 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_MAX;
    /* Initializing argument 3 (nr) */ 
    int _nr  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = video_register_device(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_8 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_9 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_SDR;
    /* Initializing argument 3 (nr) */ 
    int _nr  = 1;
    {
        /* Tested function call */
        int _return  = video_register_device(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_9 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_no_warn_1 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device_no_warn(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_GRABBER;
    /* Initializing argument 3 (nr) */ 
    int _nr  = 0;
    {
        /* Tested function call */
        int _return  = video_register_device_no_warn(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_no_warn_1 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_no_warn_10 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device_no_warn(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_RADIO;
    /* Initializing argument 3 (nr) */ 
    int _nr  = 0;
    {
        /* Tested function call */
        int _return  = video_register_device_no_warn(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_no_warn_10 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_no_warn_2 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device_no_warn(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_GRABBER;
    /* Initializing argument 3 (nr) */ 
    int _nr  = 0;
    {
        /* Tested function call */
        int _return  = video_register_device_no_warn(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_no_warn_2 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_no_warn_3 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device_no_warn(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_TOUCH;
    /* Initializing argument 3 (nr) */ 
    int _nr  = 0;
    {
        /* Tested function call */
        int _return  = video_register_device_no_warn(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_no_warn_3 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_no_warn_4 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device_no_warn(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_RADIO;
    /* Initializing argument 3 (nr) */ 
    int _nr  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = video_register_device_no_warn(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_no_warn_4 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_no_warn_5 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device_no_warn(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_GRABBER;
    /* Initializing argument 3 (nr) */ 
    int _nr  = -1;
    {
        /* Tested function call */
        int _return  = video_register_device_no_warn(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_no_warn_5 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_no_warn_6 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device_no_warn(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_SDR;
    /* Initializing argument 3 (nr) */ 
    int _nr  = -1;
    {
        /* Tested function call */
        int _return  = video_register_device_no_warn(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_no_warn_6 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_no_warn_7 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device_no_warn(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_RADIO;
    /* Initializing argument 3 (nr) */ 
    int _nr  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = video_register_device_no_warn(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_no_warn_7 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_no_warn_8 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device_no_warn(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_MAX;
    /* Initializing argument 3 (nr) */ 
    int _nr  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = video_register_device_no_warn(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_no_warn_8 */

/* CPPTEST_TEST_CASE_BEGIN test_video_register_device_no_warn_9 */
/* CPPTEST_TEST_CASE_CONTEXT int video_register_device_no_warn(struct video_device *, enum vfl_devnode_type, int) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_register_device_no_warn_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (type) */ 
    enum vfl_devnode_type _type  = VFL_TYPE_SDR;
    /* Initializing argument 3 (nr) */ 
    int _nr  = 1;
    {
        /* Tested function call */
        int _return  = video_register_device_no_warn(_vdev, _type, _nr);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_register_device_no_warn_9 */

/* CPPTEST_TEST_CASE_BEGIN test_video_set_drvdata_1 */
/* CPPTEST_TEST_CASE_CONTEXT void video_set_drvdata(struct video_device *, void *) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_set_drvdata_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device * _vdev  = 0 ;
    /* Initializing argument 2 (data) */ 
    void * _data  = 0 ;
    {
        /* Tested function call */
        video_set_drvdata(_vdev, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
        CPPTEST_POST_CONDITION_PTR("void * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_set_drvdata_1 */

/* CPPTEST_TEST_CASE_BEGIN test_video_set_drvdata_2 */
/* CPPTEST_TEST_CASE_CONTEXT void video_set_drvdata(struct video_device *, void *) */
void TestSuite_v4l22ddev_h_bb2f9f8_test_video_set_drvdata_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vdev) */ 
    struct video_device _vdev_0 ;
    struct video_device * _vdev  = & _vdev_0;
    /* Initializing argument 2 (data) */ 
    void * _data  = 0 ;
    {
        /* Tested function call */
        video_set_drvdata(_vdev, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct video_device * _vdev ", ( _vdev ));
        CPPTEST_POST_CONDITION_PTR("void * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_video_set_drvdata_2 */
