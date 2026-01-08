#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/scaler_analysis/scaler-ext.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/scaler_analysis/scaler-ext.c");

EXTERN_C_LINKAGE void TestSuite_scaler2dext_c_f07218da_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_scaler2dext_c_f07218da_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_scaler2dext_c_f07218da);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_scaler2dext_c_f07218da_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_create_scaler_ext_device_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_create_scaler_ext_device_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_destroy_scaler_ext_device_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_destroy_scaler_ext_device_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ctx_to_xctx_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ctx_to_xctx_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_job_finished_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_job_finished_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_all_task_buf_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_all_task_buf_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_9);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_1);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_10);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_2);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_3);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_4);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_5);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_6);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_7);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_8);
        CPPTEST_TEST(TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_9);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_scaler2dext_c_f07218da_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_scaler2dext_c_f07218da_test_create_scaler_ext_device_1(void);
void TestSuite_scaler2dext_c_f07218da_test_create_scaler_ext_device_2(void);
void TestSuite_scaler2dext_c_f07218da_test_destroy_scaler_ext_device_1(void);
void TestSuite_scaler2dext_c_f07218da_test_destroy_scaler_ext_device_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ctx_to_xctx_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ctx_to_xctx_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_job_finished_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_job_finished_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_all_task_buf_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_all_task_buf_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_10(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_9(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_4(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_5(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_6(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_7(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_8(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_1(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_2(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_3(void);
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_4(void);
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_1(void);
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_10(void);
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_2(void);
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_3(void);
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_4(void);
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_5(void);
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_6(void);
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_7(void);
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_8(void);
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_9(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_1(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_2(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_3(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_4(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_5(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_6(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_7(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_8(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_1(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_10(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_2(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_3(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_4(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_5(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_6(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_7(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_8(void);
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_9(void);
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_1(void);
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_10(void);
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_2(void);
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_3(void);
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_4(void);
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_5(void);
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_6(void);
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_7(void);
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_8(void);
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_9(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_scaler2dext_c_f07218da);

void TestSuite_scaler2dext_c_f07218da_testSuiteSetUp(void);
void TestSuite_scaler2dext_c_f07218da_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_scaler2dext_c_f07218da_testSuiteTearDown(void);
void TestSuite_scaler2dext_c_f07218da_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_scaler2dext_c_f07218da_setUp(void);
void TestSuite_scaler2dext_c_f07218da_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_scaler2dext_c_f07218da_tearDown(void);
void TestSuite_scaler2dext_c_f07218da_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_create_scaler_ext_device_1 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_ext_dev * create_scaler_ext_device(struct device *) */
void TestSuite_scaler2dext_c_f07218da_test_create_scaler_ext_device_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    {
        /* Tested function call */
        struct sc_ext_dev * _return  = create_scaler_ext_device(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_create_scaler_ext_device_1 */

/* CPPTEST_TEST_CASE_BEGIN test_create_scaler_ext_device_2 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_ext_dev * create_scaler_ext_device(struct device *) */
void TestSuite_scaler2dext_c_f07218da_test_create_scaler_ext_device_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    {
        /* Tested function call */
        struct sc_ext_dev * _return  = create_scaler_ext_device(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_create_scaler_ext_device_2 */

/* CPPTEST_TEST_CASE_BEGIN test_destroy_scaler_ext_device_1 */
/* CPPTEST_TEST_CASE_CONTEXT void destroy_scaler_ext_device(struct sc_ext_dev *) */
void TestSuite_scaler2dext_c_f07218da_test_destroy_scaler_ext_device_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    {
        /* Tested function call */
        destroy_scaler_ext_device(_xdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_destroy_scaler_ext_device_1 */

/* CPPTEST_TEST_CASE_BEGIN test_destroy_scaler_ext_device_2 */
/* CPPTEST_TEST_CASE_CONTEXT void destroy_scaler_ext_device(struct sc_ext_dev *) */
void TestSuite_scaler2dext_c_f07218da_test_destroy_scaler_ext_device_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    {
        /* Tested function call */
        destroy_scaler_ext_device(_xdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_destroy_scaler_ext_device_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ctx_to_xctx_1 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_ext_ctx * sc_ctx_to_xctx(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ctx_to_xctx_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_ctx) */ 
    struct sc_ctx * _sc_ctx  = 0 ;
    {
        /* Tested function call */
        struct sc_ext_ctx * _return  = sc_ctx_to_xctx(_sc_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_ctx * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _sc_ctx ", ( _sc_ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ctx_to_xctx_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ctx_to_xctx_2 */
/* CPPTEST_TEST_CASE_CONTEXT struct sc_ext_ctx * sc_ctx_to_xctx(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ctx_to_xctx_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_ctx) */ 
    struct sc_ctx _sc_ctx_0 ;
    struct sc_ctx * _sc_ctx  = & _sc_ctx_0;
    {
        /* Tested function call */
        struct sc_ext_ctx * _return  = sc_ctx_to_xctx(_sc_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_ctx * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _sc_ctx ", ( _sc_ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ctx_to_xctx_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_access_safe_1 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_buf_access_safe(struct sc_ext_buf *, int, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 2 (width) */ 
    int _width  = 128;
    /* Initializing argument 3 (height) */ 
    int _height  = 128;
    /* Initializing argument 4 (span) */ 
    int _span  = 128;
    /* Initializing argument 5 (plane_idx) */ 
    int _plane_idx  = 128;
    {
        /* Tested function call */
        bool _return  = sc_ext_buf_access_safe(_buf, _width, _height, _span, _plane_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_access_safe_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_access_safe_10 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_buf_access_safe(struct sc_ext_buf *, int, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 2 (width) */ 
    int _width  = 1;
    /* Initializing argument 3 (height) */ 
    int _height  = 0;
    /* Initializing argument 4 (span) */ 
    int _span  = 0;
    /* Initializing argument 5 (plane_idx) */ 
    int _plane_idx  = 1;
    {
        /* Tested function call */
        bool _return  = sc_ext_buf_access_safe(_buf, _width, _height, _span, _plane_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_access_safe_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_access_safe_2 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_buf_access_safe(struct sc_ext_buf *, int, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 2 (width) */ 
    int _width  = 128;
    /* Initializing argument 3 (height) */ 
    int _height  = 128;
    /* Initializing argument 4 (span) */ 
    int _span  = 128;
    /* Initializing argument 5 (plane_idx) */ 
    int _plane_idx  = 128;
    {
        /* Tested function call */
        bool _return  = sc_ext_buf_access_safe(_buf, _width, _height, _span, _plane_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_access_safe_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_access_safe_3 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_buf_access_safe(struct sc_ext_buf *, int, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 2 (width) */ 
    int _width  = cpptestLimitsGetMaxInt();
    /* Initializing argument 3 (height) */ 
    int _height  = 1;
    /* Initializing argument 4 (span) */ 
    int _span  = 128;
    /* Initializing argument 5 (plane_idx) */ 
    int _plane_idx  = 0;
    {
        /* Tested function call */
        bool _return  = sc_ext_buf_access_safe(_buf, _width, _height, _span, _plane_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_access_safe_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_access_safe_4 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_buf_access_safe(struct sc_ext_buf *, int, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 2 (width) */ 
    int _width  = -1;
    /* Initializing argument 3 (height) */ 
    int _height  = -1;
    /* Initializing argument 4 (span) */ 
    int _span  = 0;
    /* Initializing argument 5 (plane_idx) */ 
    int _plane_idx  = 1;
    {
        /* Tested function call */
        bool _return  = sc_ext_buf_access_safe(_buf, _width, _height, _span, _plane_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_access_safe_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_access_safe_5 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_buf_access_safe(struct sc_ext_buf *, int, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 2 (width) */ 
    int _width  = 1;
    /* Initializing argument 3 (height) */ 
    int _height  = 1;
    /* Initializing argument 4 (span) */ 
    int _span  = cpptestLimitsGetMaxInt();
    /* Initializing argument 5 (plane_idx) */ 
    int _plane_idx  = 0;
    {
        /* Tested function call */
        bool _return  = sc_ext_buf_access_safe(_buf, _width, _height, _span, _plane_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_access_safe_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_access_safe_6 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_buf_access_safe(struct sc_ext_buf *, int, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 2 (width) */ 
    int _width  = 0;
    /* Initializing argument 3 (height) */ 
    int _height  = 128;
    /* Initializing argument 4 (span) */ 
    int _span  = -1;
    /* Initializing argument 5 (plane_idx) */ 
    int _plane_idx  = -1;
    {
        /* Tested function call */
        bool _return  = sc_ext_buf_access_safe(_buf, _width, _height, _span, _plane_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_access_safe_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_access_safe_7 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_buf_access_safe(struct sc_ext_buf *, int, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 2 (width) */ 
    int _width  = 0;
    /* Initializing argument 3 (height) */ 
    int _height  = 0;
    /* Initializing argument 4 (span) */ 
    int _span  = -1;
    /* Initializing argument 5 (plane_idx) */ 
    int _plane_idx  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        bool _return  = sc_ext_buf_access_safe(_buf, _width, _height, _span, _plane_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_access_safe_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_access_safe_8 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_buf_access_safe(struct sc_ext_buf *, int, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 2 (width) */ 
    int _width  = cpptestLimitsGetMaxInt();
    /* Initializing argument 3 (height) */ 
    int _height  = cpptestLimitsGetMinInt();
    /* Initializing argument 4 (span) */ 
    int _span  = cpptestLimitsGetMinInt();
    /* Initializing argument 5 (plane_idx) */ 
    int _plane_idx  = -1;
    {
        /* Tested function call */
        bool _return  = sc_ext_buf_access_safe(_buf, _width, _height, _span, _plane_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_access_safe_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_access_safe_9 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_buf_access_safe(struct sc_ext_buf *, int, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_buf_access_safe_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 2 (width) */ 
    int _width  = cpptestLimitsGetMinInt();
    /* Initializing argument 3 (height) */ 
    int _height  = cpptestLimitsGetMaxInt();
    /* Initializing argument 4 (span) */ 
    int _span  = 1;
    /* Initializing argument 5 (plane_idx) */ 
    int _plane_idx  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        bool _return  = sc_ext_buf_access_safe(_buf, _width, _height, _span, _plane_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_access_safe_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_buf_range_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_buf_range(struct sc_ext_dev *, struct sc_ext_buf *, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (width) */ 
    int _width  = 0;
    /* Initializing argument 4 (height) */ 
    int _height  = 0;
    /* Initializing argument 5 (span) */ 
    int _span  = 0;
    {
        /* Tested function call */
        int _return  = sc_ext_check_buf_range(_xdev, _buf, _width, _height, _span);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_buf_range_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_buf_range_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_buf_range(struct sc_ext_dev *, struct sc_ext_buf *, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_1 ;
    struct sc_ext_buf * _buf  = & _buf_1;
    /* Initializing argument 3 (width) */ 
    int _width  = -1;
    /* Initializing argument 4 (height) */ 
    int _height  = -22;
    /* Initializing argument 5 (span) */ 
    int _span  = 0;
    {
        /* Tested function call */
        int _return  = sc_ext_check_buf_range(_xdev, _buf, _width, _height, _span);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_buf_range_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_buf_range_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_buf_range(struct sc_ext_dev *, struct sc_ext_buf *, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (width) */ 
    int _width  = 0;
    /* Initializing argument 4 (height) */ 
    int _height  = 0;
    /* Initializing argument 5 (span) */ 
    int _span  = 0;
    {
        /* Tested function call */
        int _return  = sc_ext_check_buf_range(_xdev, _buf, _width, _height, _span);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_buf_range_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_buf_range_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_buf_range(struct sc_ext_dev *, struct sc_ext_buf *, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (width) */ 
    int _width  = -1;
    /* Initializing argument 4 (height) */ 
    int _height  = 1;
    /* Initializing argument 5 (span) */ 
    int _span  = 0;
    {
        /* Tested function call */
        int _return  = sc_ext_check_buf_range(_xdev, _buf, _width, _height, _span);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_buf_range_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_buf_range_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_buf_range(struct sc_ext_dev *, struct sc_ext_buf *, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (width) */ 
    int _width  = 0;
    /* Initializing argument 4 (height) */ 
    int _height  = -1;
    /* Initializing argument 5 (span) */ 
    int _span  = -22;
    {
        /* Tested function call */
        int _return  = sc_ext_check_buf_range(_xdev, _buf, _width, _height, _span);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_buf_range_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_buf_range_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_buf_range(struct sc_ext_dev *, struct sc_ext_buf *, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (width) */ 
    int _width  = cpptestLimitsGetMaxInt();
    /* Initializing argument 4 (height) */ 
    int _height  = cpptestLimitsGetMaxInt();
    /* Initializing argument 5 (span) */ 
    int _span  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sc_ext_check_buf_range(_xdev, _buf, _width, _height, _span);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_buf_range_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_buf_range_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_buf_range(struct sc_ext_dev *, struct sc_ext_buf *, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (width) */ 
    int _width  = 1;
    /* Initializing argument 4 (height) */ 
    int _height  = 0;
    /* Initializing argument 5 (span) */ 
    int _span  = -1;
    {
        /* Tested function call */
        int _return  = sc_ext_check_buf_range(_xdev, _buf, _width, _height, _span);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_buf_range_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_buf_range_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_buf_range(struct sc_ext_dev *, struct sc_ext_buf *, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (width) */ 
    int _width  = -22;
    /* Initializing argument 4 (height) */ 
    int _height  = 0;
    /* Initializing argument 5 (span) */ 
    int _span  = -1;
    {
        /* Tested function call */
        int _return  = sc_ext_check_buf_range(_xdev, _buf, _width, _height, _span);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_buf_range_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_buf_range_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_buf_range(struct sc_ext_dev *, struct sc_ext_buf *, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (width) */ 
    int _width  = cpptestLimitsGetMinInt();
    /* Initializing argument 4 (height) */ 
    int _height  = cpptestLimitsGetMinInt();
    /* Initializing argument 5 (span) */ 
    int _span  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = sc_ext_check_buf_range(_xdev, _buf, _width, _height, _span);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_buf_range_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_buf_range_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_buf_range(struct sc_ext_dev *, struct sc_ext_buf *, int, int, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_buf_range_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 3 (width) */ 
    int _width  = 0;
    /* Initializing argument 4 (height) */ 
    int _height  = -1;
    /* Initializing argument 5 (span) */ 
    int _span  = 1;
    {
        /* Tested function call */
        int _return  = sc_ext_check_buf_range(_xdev, _buf, _width, _height, _span);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_buf_range_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_sanity_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_sanity(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_check_sanity(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_sanity_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_sanity_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_sanity(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_check_sanity(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_sanity_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_sanity_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_sanity(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_check_sanity(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_sanity_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_sanity_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_sanity(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_check_sanity(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_sanity_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_sanity_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_sanity(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_check_sanity(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_sanity_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_sanity_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_sanity(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_check_sanity(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_sanity_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_sanity_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_sanity(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_check_sanity(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_sanity_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_sanity_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_sanity(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_check_sanity(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_sanity_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_sanity_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_sanity(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_check_sanity(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_sanity_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_sanity_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_sanity(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_sanity_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_check_sanity(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_sanity_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_task_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_task(struct sc_ext_dev *, struct sc_ext_task_data *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_check_task(_xdev, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_task_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_task_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_task(struct sc_ext_dev *, struct sc_ext_task_data *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_check_task(_xdev, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_task_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_task_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_task(struct sc_ext_dev *, struct sc_ext_task_data *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    {
        /* Tested function call */
        int _return  = sc_ext_check_task(_xdev, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_task_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_check_task_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_check_task(struct sc_ext_dev *, struct sc_ext_task_data *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_check_task_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data _data_1 ;
    struct sc_ext_task_data * _data  = & _data_1;
    {
        /* Tested function call */
        int _return  = sc_ext_check_task(_xdev, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_check_task_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_compat_ioctl32_1 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_compat_ioctl32(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 16;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 16;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 16;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 16;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_compat_ioctl32(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_compat_ioctl32_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_compat_ioctl32_10 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_compat_ioctl32(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file _filp_0 ;
    struct file * _filp  = & _filp_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 1;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 0;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_compat_ioctl32(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_compat_ioctl32_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_compat_ioctl32_2 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_compat_ioctl32(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file _filp_0 ;
    struct file * _filp  = & _filp_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 16;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 16;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 16;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 16;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_compat_ioctl32(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_compat_ioctl32_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_compat_ioctl32_3 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_compat_ioctl32(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file _filp_0 ;
    struct file * _filp  = & _filp_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 0;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 1;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1073761537;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 12;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_compat_ioctl32(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_compat_ioctl32_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_compat_ioctl32_4 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_compat_ioctl32(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file _filp_0 ;
    struct file * _filp  = & _filp_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 16;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 0ul;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1073761537;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_compat_ioctl32(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_compat_ioctl32_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_compat_ioctl32_5 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_compat_ioctl32(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 1073761537;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_compat_ioctl32(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_compat_ioctl32_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_compat_ioctl32_6 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_compat_ioctl32(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file _filp_0 ;
    struct file * _filp  = & _filp_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 12;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 1ul;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_compat_ioctl32(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_compat_ioctl32_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_compat_ioctl32_7 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_compat_ioctl32(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 1u;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 12;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 12;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        long _return  = sc_ext_compat_ioctl32(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_compat_ioctl32_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_compat_ioctl32_8 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_compat_ioctl32(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file _filp_0 ;
    struct file * _filp  = & _filp_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 1073761537;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_compat_ioctl32(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_compat_ioctl32_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_compat_ioctl32_9 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_compat_ioctl32(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_compat_ioctl32_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 0u;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 16;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        long _return  = sc_ext_compat_ioctl32(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_compat_ioctl32_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_current_task_finish_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_current_task_finish(struct sc_ext_dev *, bool) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (success) */ 
    bool _success  = false;
    {
        /* Tested function call */
        sc_ext_current_task_finish(_xdev, _success);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_current_task_finish_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_current_task_finish_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_current_task_finish(struct sc_ext_dev *, bool) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (success) */ 
    bool _success  = false;
    {
        /* Tested function call */
        sc_ext_current_task_finish(_xdev, _success);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_current_task_finish_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_current_task_finish_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_current_task_finish(struct sc_ext_dev *, bool) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (success) */ 
    bool _success  = true;
    {
        /* Tested function call */
        sc_ext_current_task_finish(_xdev, _success);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_current_task_finish_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_current_task_finish_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_current_task_finish(struct sc_ext_dev *, bool) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_current_task_finish_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (success) */ 
    bool _success  = true;
    {
        /* Tested function call */
        sc_ext_current_task_finish(_xdev, _success);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_current_task_finish_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_buffer_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_buffer(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    {
        /* Tested function call */
        sc_ext_finish_buffer(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_buffer_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_buffer_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_buffer(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    {
        /* Tested function call */
        sc_ext_finish_buffer(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_buffer_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_buffer_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_buffer(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    {
        /* Tested function call */
        sc_ext_finish_buffer(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_buffer_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_buffer_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_buffer(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_buffer_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    {
        /* Tested function call */
        sc_ext_finish_buffer(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_buffer_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_dmabuf_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    {
        /* Tested function call */
        sc_ext_finish_dmabuf(_xdev, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_dmabuf_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_dmabuf_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    {
        /* Tested function call */
        sc_ext_finish_dmabuf(_xdev, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_dmabuf_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_dmabuf_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    {
        /* Tested function call */
        sc_ext_finish_dmabuf(_xdev, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_dmabuf_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_dmabuf_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_dmabuf_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data _data_1 ;
    struct sc_ext_task_data * _data  = & _data_1;
    {
        /* Tested function call */
        sc_ext_finish_dmabuf(_xdev, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_dmabuf_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_task_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_task(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    {
        /* Tested function call */
        sc_ext_finish_task(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_task_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_task_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_task(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    {
        /* Tested function call */
        sc_ext_finish_task(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_task_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_task_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_task(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    {
        /* Tested function call */
        sc_ext_finish_task(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_task_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_finish_task_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_finish_task(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_finish_task_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    {
        /* Tested function call */
        sc_ext_finish_task(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_finish_task_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_dmabuf_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_get_dmabuf(struct sc_ext_dev *, struct mscl_buffer *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (taskbuf) */ 
    struct mscl_buffer * _taskbuf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 4 (dir) */ 
    int _dir  = 3;
    {
        /* Tested function call */
        int _return  = sc_ext_get_dmabuf(_xdev, _taskbuf, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _taskbuf ", ( _taskbuf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_dmabuf_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_dmabuf_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_get_dmabuf(struct sc_ext_dev *, struct mscl_buffer *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (taskbuf) */ 
    struct mscl_buffer * _taskbuf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 4 (dir) */ 
    int _dir  = 1;
    {
        /* Tested function call */
        int _return  = sc_ext_get_dmabuf(_xdev, _taskbuf, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _taskbuf ", ( _taskbuf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_dmabuf_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_dmabuf_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_get_dmabuf(struct sc_ext_dev *, struct mscl_buffer *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (taskbuf) */ 
    struct mscl_buffer * _taskbuf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 4 (dir) */ 
    int _dir  = 3;
    {
        /* Tested function call */
        int _return  = sc_ext_get_dmabuf(_xdev, _taskbuf, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _taskbuf ", ( _taskbuf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_dmabuf_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_dmabuf_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_get_dmabuf(struct sc_ext_dev *, struct mscl_buffer *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (taskbuf) */ 
    struct mscl_buffer * _taskbuf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 4 (dir) */ 
    int _dir  = 2;
    {
        /* Tested function call */
        int _return  = sc_ext_get_dmabuf(_xdev, _taskbuf, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _taskbuf ", ( _taskbuf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_dmabuf_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_dmabuf_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_get_dmabuf(struct sc_ext_dev *, struct mscl_buffer *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (taskbuf) */ 
    struct mscl_buffer _taskbuf_1 ;
    struct mscl_buffer * _taskbuf  = & _taskbuf_1;
    /* Initializing argument 3 (buf) */ 
    struct sc_ext_buf _buf_2 ;
    struct sc_ext_buf * _buf  = & _buf_2;
    /* Initializing argument 4 (dir) */ 
    int _dir  = 1;
    {
        /* Tested function call */
        int _return  = sc_ext_get_dmabuf(_xdev, _taskbuf, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _taskbuf ", ( _taskbuf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_dmabuf_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_dmabuf_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_get_dmabuf(struct sc_ext_dev *, struct mscl_buffer *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (taskbuf) */ 
    struct mscl_buffer _taskbuf_0 ;
    struct mscl_buffer * _taskbuf  = & _taskbuf_0;
    /* Initializing argument 3 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 4 (dir) */ 
    int _dir  = -22;
    {
        /* Tested function call */
        int _return  = sc_ext_get_dmabuf(_xdev, _taskbuf, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _taskbuf ", ( _taskbuf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_dmabuf_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_dmabuf_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_get_dmabuf(struct sc_ext_dev *, struct mscl_buffer *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (taskbuf) */ 
    struct mscl_buffer * _taskbuf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct sc_ext_buf _buf_1 ;
    struct sc_ext_buf * _buf  = & _buf_1;
    /* Initializing argument 4 (dir) */ 
    int _dir  = 1;
    {
        /* Tested function call */
        int _return  = sc_ext_get_dmabuf(_xdev, _taskbuf, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _taskbuf ", ( _taskbuf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_dmabuf_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_dmabuf_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_get_dmabuf(struct sc_ext_dev *, struct mscl_buffer *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (taskbuf) */ 
    struct mscl_buffer * _taskbuf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 4 (dir) */ 
    int _dir  = -1;
    {
        /* Tested function call */
        int _return  = sc_ext_get_dmabuf(_xdev, _taskbuf, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _taskbuf ", ( _taskbuf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_dmabuf_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_dmabuf_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_get_dmabuf(struct sc_ext_dev *, struct mscl_buffer *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (taskbuf) */ 
    struct mscl_buffer * _taskbuf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 4 (dir) */ 
    int _dir  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sc_ext_get_dmabuf(_xdev, _taskbuf, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _taskbuf ", ( _taskbuf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_dmabuf_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_dmabuf_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_get_dmabuf(struct sc_ext_dev *, struct mscl_buffer *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_dmabuf_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (taskbuf) */ 
    struct mscl_buffer * _taskbuf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 4 (dir) */ 
    int _dir  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = sc_ext_get_dmabuf(_xdev, _taskbuf, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _taskbuf ", ( _taskbuf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_dmabuf_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_1 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_ext_format * sc_ext_get_format(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 3;
    {
        /* Tested function call */
        const struct sc_ext_format * _return  = sc_ext_get_format(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_ext_format * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_2 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_ext_format * sc_ext_get_format(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 2;
    {
        /* Tested function call */
        const struct sc_ext_format * _return  = sc_ext_get_format(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_ext_format * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_3 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_ext_format * sc_ext_get_format(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 16;
    {
        /* Tested function call */
        const struct sc_ext_format * _return  = sc_ext_get_format(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_ext_format * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_4 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_ext_format * sc_ext_get_format(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 10;
    {
        /* Tested function call */
        const struct sc_ext_format * _return  = sc_ext_get_format(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_ext_format * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_5 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_ext_format * sc_ext_get_format(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 1;
    {
        /* Tested function call */
        const struct sc_ext_format * _return  = sc_ext_get_format(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_ext_format * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_6 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_ext_format * sc_ext_get_format(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 0;
    {
        /* Tested function call */
        const struct sc_ext_format * _return  = sc_ext_get_format(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_ext_format * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_7 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_ext_format * sc_ext_get_format(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        const struct sc_ext_format * _return  = sc_ext_get_format(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_ext_format * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_8 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_ext_format * sc_ext_get_format(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 1u;
    {
        /* Tested function call */
        const struct sc_ext_format * _return  = sc_ext_get_format(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_ext_format * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_9 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_ext_format * sc_ext_get_format(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 0u;
    {
        /* Tested function call */
        const struct sc_ext_format * _return  = sc_ext_get_format(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_ext_format * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_name_1 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_ext_get_format_name(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 3;
    {
        /* Tested function call */
        const char * _return  = sc_ext_get_format_name(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_name_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_name_2 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_ext_get_format_name(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 2;
    {
        /* Tested function call */
        const char * _return  = sc_ext_get_format_name(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_name_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_name_3 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_ext_get_format_name(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 16;
    {
        /* Tested function call */
        const char * _return  = sc_ext_get_format_name(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_name_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_name_4 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_ext_get_format_name(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 10;
    {
        /* Tested function call */
        const char * _return  = sc_ext_get_format_name(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_name_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_name_5 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_ext_get_format_name(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 1;
    {
        /* Tested function call */
        const char * _return  = sc_ext_get_format_name(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_name_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_name_6 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_ext_get_format_name(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 0;
    {
        /* Tested function call */
        const char * _return  = sc_ext_get_format_name(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_name_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_name_7 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_ext_get_format_name(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        const char * _return  = sc_ext_get_format_name(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_name_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_name_8 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_ext_get_format_name(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 1u;
    {
        /* Tested function call */
        const char * _return  = sc_ext_get_format_name(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_name_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_get_format_name_9 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_ext_get_format_name(uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_get_format_name_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    uint32_t _fmt  = 0u;
    {
        /* Tested function call */
        const char * _return  = sc_ext_get_format_name(_fmt);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_get_format_name_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_ioctl_1 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_ioctl(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 2;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 2;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 2;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_ioctl(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_ioctl_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_ioctl_10 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_ioctl(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 2;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 128;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -22;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_ioctl(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_ioctl_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_ioctl_2 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_ioctl(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file _filp_0 ;
    struct file * _filp  = & _filp_0;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 2;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 2;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 2;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_ioctl(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_ioctl_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_ioctl_3 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_ioctl(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 2;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 1ul;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -14;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 16;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_ioctl(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_ioctl_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_ioctl_4 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_ioctl(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 2;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 0;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 16;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1074810113;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_ioctl(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_ioctl_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_ioctl_5 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_ioctl(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 2;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 1074810113;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 10;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_ioctl(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_ioctl_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_ioctl_6 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_ioctl(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 2;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 16;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1074810113;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -22;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_ioctl(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_ioctl_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_ioctl_7 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_ioctl(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 2;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 0ul;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -14;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_ioctl(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_ioctl_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_ioctl_8 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_ioctl(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 2;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 10;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        long _return  = sc_ext_ioctl(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_ioctl_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_ioctl_9 */
/* CPPTEST_TEST_CASE_CONTEXT long sc_ext_ioctl(struct file *, unsigned int, unsigned long) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_ioctl_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (filp) */ 
    struct file * _filp  = 0 ;
    /* Initializing argument 2 (cmd) */ 
    unsigned _cmd  = 2;
    /* Initializing argument 3 (arg) */ 
    unsigned long _arg  = 10;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        long _return  = sc_ext_ioctl(_filp, _cmd, _arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("long _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_ioctl_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_job_finished_1 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_job_finished(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_job_finished_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        bool _return  = sc_ext_job_finished(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_job_finished_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_job_finished_2 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_ext_job_finished(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_job_finished_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        bool _return  = sc_ext_job_finished(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_job_finished_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_open_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_open(struct inode *, struct file *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (inode) */ 
    struct inode * _inode  = 0 ;
    /* Initializing argument 2 (filp) */ 
    struct file * _filp  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_open(_inode, _filp);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct inode * _inode ", ( _inode ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_open_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_open_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_open(struct inode *, struct file *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (inode) */ 
    struct inode _inode_0 ;
    struct inode * _inode  = & _inode_0;
    /* Initializing argument 2 (filp) */ 
    struct file * _filp  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_open(_inode, _filp);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct inode * _inode ", ( _inode ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_open_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_open_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_open(struct inode *, struct file *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (inode) */ 
    struct inode * _inode  = 0 ;
    /* Initializing argument 2 (filp) */ 
    struct file _filp_0 ;
    struct file * _filp  = & _filp_0;
    {
        /* Tested function call */
        int _return  = sc_ext_open(_inode, _filp);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct inode * _inode ", ( _inode ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_open_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_open_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_open(struct inode *, struct file *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_open_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (inode) */ 
    struct inode _inode_0 ;
    struct inode * _inode  = & _inode_0;
    /* Initializing argument 2 (filp) */ 
    struct file _filp_1 ;
    struct file * _filp  = & _filp_1;
    {
        /* Tested function call */
        int _return  = sc_ext_open(_inode, _filp);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct inode * _inode ", ( _inode ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_open_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_buffer_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_buffer(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_buffer(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_buffer_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_buffer_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_buffer(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_buffer(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_buffer_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_buffer_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_buffer(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_buffer(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_buffer_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_buffer_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_buffer(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_buffer(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_buffer_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_buffer_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_buffer(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_0 ;
    struct mscl_task * _mscl_task  = & _mscl_task_0;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_buffer(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_buffer_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_buffer_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_buffer(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_1 ;
    struct mscl_task * _mscl_task  = & _mscl_task_1;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_buffer(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_buffer_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_buffer_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_buffer(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_1 ;
    struct mscl_task * _mscl_task  = & _mscl_task_1;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_buffer(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_buffer_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_buffer_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_buffer(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_buffer_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_2 ;
    struct mscl_task * _mscl_task  = & _mscl_task_2;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_buffer(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_buffer_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_dmabuf_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_dmabuf(_xdev, _data, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_dmabuf_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_dmabuf_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_dmabuf(_xdev, _data, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_dmabuf_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_dmabuf_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_dmabuf(_xdev, _data, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_dmabuf_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_dmabuf_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data _data_1 ;
    struct sc_ext_task_data * _data  = & _data_1;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_dmabuf(_xdev, _data, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_dmabuf_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_dmabuf_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_0 ;
    struct mscl_task * _mscl_task  = & _mscl_task_0;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_dmabuf(_xdev, _data, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_dmabuf_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_dmabuf_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_1 ;
    struct mscl_task * _mscl_task  = & _mscl_task_1;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_dmabuf(_xdev, _data, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_dmabuf_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_dmabuf_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_1 ;
    struct mscl_task * _mscl_task  = & _mscl_task_1;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_dmabuf(_xdev, _data, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_dmabuf_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_dmabuf_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_dmabuf(struct sc_ext_dev *, struct sc_ext_task_data *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_dmabuf_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (data) */ 
    struct sc_ext_task_data _data_1 ;
    struct sc_ext_task_data * _data  = & _data_1;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_2 ;
    struct mscl_task * _mscl_task  = & _mscl_task_2;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_dmabuf(_xdev, _data, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_dmabuf_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_format_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_format(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_format(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_format_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_format_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_format(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_format(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_format_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_format_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_format(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_format(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_format_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_format_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_format(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_format_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_format(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_format_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_task_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_task(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_task(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_task_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_task_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_task(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_2 ;
    struct mscl_task * _mscl_task  = & _mscl_task_2;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_task(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_task_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_task_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_task(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_task(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_task_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_task_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_task(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_task(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_task_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_task_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_task(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_task(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_task_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_task_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_task(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -12;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_task(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_task_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_task_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_task(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_task(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_task_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_task_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_task(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_0 ;
    struct mscl_task * _mscl_task  = & _mscl_task_0;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_task(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_task_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_task_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_task(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_1 ;
    struct mscl_task * _mscl_task  = & _mscl_task_1;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -12;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_task(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_task_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_prepare_task_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_prepare_task(struct sc_ext_dev *, struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_prepare_task_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 3 (mscl_task) */ 
    struct mscl_task _mscl_task_1 ;
    struct mscl_task * _mscl_task  = & _mscl_task_1;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_prepare_task(_xdev, _task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_prepare_task_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_process_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_process(struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 2 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_process(_task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_process_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_process_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_process(struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 2 (mscl_task) */ 
    struct mscl_task _mscl_task_1 ;
    struct mscl_task * _mscl_task  = & _mscl_task_1;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_process(_task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_process_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_process_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_process(struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 2 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_process(_task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_process_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_process_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_process(struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 2 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_process(_task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_process_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_process_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_process(struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 2 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_process(_task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_process_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_process_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_process(struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 2 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -22;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_process(_task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_process_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_process_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_process(struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 2 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_process(_task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_process_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_process_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_process(struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 2 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_process(_task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_process_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_process_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_process(struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    /* Initializing argument 2 (mscl_task) */ 
    struct mscl_task * _mscl_task  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -22;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_process(_task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_process_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_process_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_process(struct sc_ext_task *, struct mscl_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_process_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    /* Initializing argument 2 (mscl_task) */ 
    struct mscl_task _mscl_task_0 ;
    struct mscl_task * _mscl_task  = & _mscl_task_0;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_process(_task, _mscl_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _mscl_task ", ( _mscl_task ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_process_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_put_dmabuf_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_put_dmabuf(struct sc_ext_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 0;
    {
        /* Tested function call */
        sc_ext_put_dmabuf(_xdev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_put_dmabuf_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_put_dmabuf_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_put_dmabuf(struct sc_ext_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_1 ;
    struct sc_ext_buf * _buf  = & _buf_1;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 0;
    {
        /* Tested function call */
        sc_ext_put_dmabuf(_xdev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_put_dmabuf_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_put_dmabuf_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_put_dmabuf(struct sc_ext_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 0;
    {
        /* Tested function call */
        sc_ext_put_dmabuf(_xdev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_put_dmabuf_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_put_dmabuf_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_put_dmabuf(struct sc_ext_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_1 ;
    struct sc_ext_buf * _buf  = & _buf_1;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 0;
    {
        /* Tested function call */
        sc_ext_put_dmabuf(_xdev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_put_dmabuf_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_put_dmabuf_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_put_dmabuf(struct sc_ext_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (dir) */ 
    int _dir  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        sc_ext_put_dmabuf(_xdev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_put_dmabuf_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_put_dmabuf_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_put_dmabuf(struct sc_ext_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_1 ;
    struct sc_ext_buf * _buf  = & _buf_1;
    /* Initializing argument 3 (dir) */ 
    int _dir  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        sc_ext_put_dmabuf(_xdev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_put_dmabuf_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_put_dmabuf_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_put_dmabuf(struct sc_ext_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (dir) */ 
    int _dir  = -1;
    {
        /* Tested function call */
        sc_ext_put_dmabuf(_xdev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_put_dmabuf_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_put_dmabuf_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_put_dmabuf(struct sc_ext_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (dir) */ 
    int _dir  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        sc_ext_put_dmabuf(_xdev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_put_dmabuf_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_put_dmabuf_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_put_dmabuf(struct sc_ext_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_1 ;
    struct sc_ext_buf * _buf  = & _buf_1;
    /* Initializing argument 3 (dir) */ 
    int _dir  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        sc_ext_put_dmabuf(_xdev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_put_dmabuf_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_put_dmabuf_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_put_dmabuf(struct sc_ext_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_put_dmabuf_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 1;
    {
        /* Tested function call */
        sc_ext_put_dmabuf(_xdev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_put_dmabuf_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_release_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_release(struct inode *, struct file *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (inode) */ 
    struct inode * _inode  = 0 ;
    /* Initializing argument 2 (filp) */ 
    struct file * _filp  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_release(_inode, _filp);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct inode * _inode ", ( _inode ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_release_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_release_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_release(struct inode *, struct file *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (inode) */ 
    struct inode _inode_0 ;
    struct inode * _inode  = & _inode_0;
    /* Initializing argument 2 (filp) */ 
    struct file * _filp  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ext_release(_inode, _filp);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct inode * _inode ", ( _inode ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_release_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_release_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_release(struct inode *, struct file *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (inode) */ 
    struct inode * _inode  = 0 ;
    /* Initializing argument 2 (filp) */ 
    struct file _filp_0 ;
    struct file * _filp  = & _filp_0;
    {
        /* Tested function call */
        int _return  = sc_ext_release(_inode, _filp);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct inode * _inode ", ( _inode ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_release_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_release_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_release(struct inode *, struct file *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_release_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (inode) */ 
    struct inode _inode_0 ;
    struct inode * _inode  = & _inode_0;
    /* Initializing argument 2 (filp) */ 
    struct file _filp_1 ;
    struct file * _filp  = & _filp_1;
    {
        /* Tested function call */
        int _return  = sc_ext_release(_inode, _filp);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct inode * _inode ", ( _inode ));
        CPPTEST_POST_CONDITION_PTR("struct file * _filp ", ( _filp ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_release_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_run_job_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_run_job(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 9;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 9;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_run_job(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_run_job_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_run_job_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_run_job(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 393217;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_run_job(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_run_job_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_run_job_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_run_job(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 9;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 9;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_run_job(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_run_job_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_run_job_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_run_job(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 48;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 80;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_run_job(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_run_job_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_run_job_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_run_job(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 728;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_run_job(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_run_job_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_run_job_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_run_job(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 68;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 68;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_run_job(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_run_job_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_run_job_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_run_job(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 10;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 60;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_run_job(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_run_job_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_run_job_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_run_job(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 728;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 393217;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_run_job(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_run_job_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_run_job_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_run_job(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 28;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 28;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_run_job(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_run_job_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_run_job_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_run_job(struct sc_ctx *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_run_job_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 80;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_run_job(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_run_job_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_set_buffer_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_set_buffer(struct sc_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_dev) */ 
    struct sc_dev * _sc_dev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 664;
    {
        /* Tested function call */
        sc_ext_set_buffer(_sc_dev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc_dev ", ( _sc_dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_set_buffer_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_set_buffer_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_set_buffer(struct sc_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_dev) */ 
    struct sc_dev * _sc_dev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 1;
    {
        /* Tested function call */
        sc_ext_set_buffer(_sc_dev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc_dev ", ( _sc_dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_set_buffer_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_set_buffer_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_set_buffer(struct sc_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_dev) */ 
    struct sc_dev _sc_dev_0 ;
    struct sc_dev * _sc_dev  = & _sc_dev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 664;
    {
        /* Tested function call */
        sc_ext_set_buffer(_sc_dev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc_dev ", ( _sc_dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_set_buffer_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_set_buffer_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_set_buffer(struct sc_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_dev) */ 
    struct sc_dev * _sc_dev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 660;
    {
        /* Tested function call */
        sc_ext_set_buffer(_sc_dev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc_dev ", ( _sc_dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_set_buffer_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_set_buffer_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_set_buffer(struct sc_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_dev) */ 
    struct sc_dev _sc_dev_0 ;
    struct sc_dev * _sc_dev  = & _sc_dev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_1 ;
    struct sc_ext_buf * _buf  = & _buf_1;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 56;
    {
        /* Tested function call */
        sc_ext_set_buffer(_sc_dev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc_dev ", ( _sc_dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_set_buffer_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_set_buffer_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_set_buffer(struct sc_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_dev) */ 
    struct sc_dev * _sc_dev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 24;
    {
        /* Tested function call */
        sc_ext_set_buffer(_sc_dev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc_dev ", ( _sc_dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_set_buffer_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_set_buffer_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_set_buffer(struct sc_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_dev) */ 
    struct sc_dev _sc_dev_0 ;
    struct sc_dev * _sc_dev  = & _sc_dev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 20;
    {
        /* Tested function call */
        sc_ext_set_buffer(_sc_dev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc_dev ", ( _sc_dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_set_buffer_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_set_buffer_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_set_buffer(struct sc_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_dev) */ 
    struct sc_dev * _sc_dev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 3 (dir) */ 
    int _dir  = 0;
    {
        /* Tested function call */
        sc_ext_set_buffer(_sc_dev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc_dev ", ( _sc_dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_set_buffer_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_set_buffer_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_set_buffer(struct sc_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_dev) */ 
    struct sc_dev _sc_dev_0 ;
    struct sc_dev * _sc_dev  = & _sc_dev_0;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf _buf_1 ;
    struct sc_ext_buf * _buf  = & _buf_1;
    /* Initializing argument 3 (dir) */ 
    int _dir  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        sc_ext_set_buffer(_sc_dev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc_dev ", ( _sc_dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_set_buffer_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_set_buffer_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_set_buffer(struct sc_dev *, struct sc_ext_buf *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_set_buffer_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_dev) */ 
    struct sc_dev * _sc_dev  = 0 ;
    /* Initializing argument 2 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 3 (dir) */ 
    int _dir  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        sc_ext_set_buffer(_sc_dev, _buf, _dir);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc_dev ", ( _sc_dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_set_buffer_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_all_task_buf_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_all_task_buf(struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_all_task_buf_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    {
        /* Tested function call */
        sc_ext_show_all_task_buf(_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_all_task_buf_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_all_task_buf_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_all_task_buf(struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_all_task_buf_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    {
        /* Tested function call */
        sc_ext_show_all_task_buf(_task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_all_task_buf_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_mscl_task_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (total) */ 
    int _total  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        sc_ext_show_mscl_task(_task, _total);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_mscl_task_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_mscl_task_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (total) */ 
    int _total  = -1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        sc_ext_show_mscl_task(_task, _total);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_mscl_task_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_mscl_task_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task _task_0 ;
    struct mscl_task * _task  = & _task_0;
    /* Initializing argument 2 (total) */ 
    int _total  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        sc_ext_show_mscl_task(_task, _total);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_mscl_task_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_mscl_task_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (total) */ 
    int _total  = 1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        sc_ext_show_mscl_task(_task, _total);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_mscl_task_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_mscl_task_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (total) */ 
    int _total  = -1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        sc_ext_show_mscl_task(_task, _total);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_mscl_task_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_mscl_task_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (total) */ 
    int _total  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        sc_ext_show_mscl_task(_task, _total);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_mscl_task_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_mscl_task_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (total) */ 
    int _total  = 1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        sc_ext_show_mscl_task(_task, _total);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_mscl_task_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_mscl_task_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (total) */ 
    int _total  = -1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        sc_ext_show_mscl_task(_task, _total);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_mscl_task_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_mscl_task_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (total) */ 
    int _total  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        sc_ext_show_mscl_task(_task, _total);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_mscl_task_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_mscl_task_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_mscl_task_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (total) */ 
    int _total  = 1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        sc_ext_show_mscl_task(_task, _total);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_mscl_task_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_buf_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_buf(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = 1;
    {
        /* Tested function call */
        sc_ext_show_task_buf(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_buf_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_buf_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_buf(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 2 (index) */ 
    int _index  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        sc_ext_show_task_buf(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_buf_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_buf_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_buf(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 2 (index) */ 
    int _index  = 1;
    {
        /* Tested function call */
        sc_ext_show_task_buf(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_buf_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_buf_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_buf(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = 0;
    {
        /* Tested function call */
        sc_ext_show_task_buf(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_buf_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_buf_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_buf(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 2 (index) */ 
    int _index  = 0;
    {
        /* Tested function call */
        sc_ext_show_task_buf(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_buf_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_buf_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_buf(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        sc_ext_show_task_buf(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_buf_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_buf_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_buf(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 2 (index) */ 
    int _index  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        sc_ext_show_task_buf(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_buf_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_buf_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_buf(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = -1;
    {
        /* Tested function call */
        sc_ext_show_task_buf(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_buf_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_buf_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_buf(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        sc_ext_show_task_buf(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_buf_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_buf_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_buf(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_buf_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 2 (index) */ 
    int _index  = -1;
    {
        /* Tested function call */
        sc_ext_show_task_buf(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_buf_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_data_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_data(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = 1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        sc_ext_show_task_data(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_data_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_data_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_data(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        sc_ext_show_task_data(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_data_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_data_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_data(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 2 (index) */ 
    int _index  = 1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        sc_ext_show_task_data(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_data_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_data_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_data(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data _data_1 ;
    struct sc_ext_task_data * _data  = & _data_1;
    /* Initializing argument 2 (index) */ 
    int _index  = -1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        sc_ext_show_task_data(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_data_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_data_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_data(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = cpptestLimitsGetMaxInt();
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        sc_ext_show_task_data(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_data_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_data_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_data(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 2 (index) */ 
    int _index  = 1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        sc_ext_show_task_data(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_data_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_data_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_data(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        sc_ext_show_task_data(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_data_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_data_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_data(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 2 (index) */ 
    int _index  = cpptestLimitsGetMinInt();
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        sc_ext_show_task_data(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_data_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_data_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_data(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data * _data  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = -1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        sc_ext_show_task_data(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_data_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_data_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_data(struct sc_ext_task_data *, int) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_data_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (data) */ 
    struct sc_ext_task_data _data_0 ;
    struct sc_ext_task_data * _data  = & _data_0;
    /* Initializing argument 2 (index) */ 
    int _index  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        sc_ext_show_task_data(_data, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task_data * _data ", ( _data ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_data_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_dma_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_dma(struct sc_ext_buf *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 2 (str) */ 
    char _str_0 [1];
    char * _str  = (char * )cpptestMemset((void*)&_str_0, 0, (1 * sizeof(char)));
    {
        /* Tested function call */
        sc_ext_show_task_dma(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_dma_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_dma_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_dma(struct sc_ext_buf *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 2 (str) */ 
    char _str_1 [1];
    char * _str  = (char * )cpptestMemset((void*)&_str_1, 0, (1 * sizeof(char)));
    {
        /* Tested function call */
        sc_ext_show_task_dma(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_dma_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_dma_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_dma(struct sc_ext_buf *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 2 (str) */ 
    char _str_0 [16];
    char * _str  = (char * )cpptestMemset((void*)&_str_0, 0, (16 * sizeof(char)));
    {
        /* Tested function call */
        sc_ext_show_task_dma(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_dma_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_dma_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_dma(struct sc_ext_buf *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 2 (str) */ 
    char _str_1 [16];
    char * _str  = (char * )cpptestMemset((void*)&_str_1, 0, (16 * sizeof(char)));
    {
        /* Tested function call */
        sc_ext_show_task_dma(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_dma_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_dma_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_dma(struct sc_ext_buf *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 2 (str) */ 
    char _str_0 [256];
    char * _str  = (char * )cpptestMemset((void*)&_str_0, 0, (256 * sizeof(char)));
    {
        /* Tested function call */
        sc_ext_show_task_dma(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_dma_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_dma_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_dma(struct sc_ext_buf *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 2 (str) */ 
    char _str_1 [256];
    char * _str  = (char * )cpptestMemset((void*)&_str_1, 0, (256 * sizeof(char)));
    {
        /* Tested function call */
        sc_ext_show_task_dma(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_dma_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_dma_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_dma(struct sc_ext_buf *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf * _buf  = 0 ;
    /* Initializing argument 2 (str) */ 
    char * _str  = 0 ;
    {
        /* Tested function call */
        sc_ext_show_task_dma(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_dma_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_show_task_dma_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_show_task_dma(struct sc_ext_buf *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_show_task_dma_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct sc_ext_buf _buf_0 ;
    struct sc_ext_buf * _buf  = & _buf_0;
    /* Initializing argument 2 (str) */ 
    char * _str  = 0 ;
    {
        /* Tested function call */
        sc_ext_show_task_dma(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_buf * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_show_task_dma_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_try_task_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_try_task(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    {
        /* Tested function call */
        sc_ext_try_task(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_try_task_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_try_task_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_try_task(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task * _task  = 0 ;
    {
        /* Tested function call */
        sc_ext_try_task(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_try_task_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_try_task_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_try_task(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev * _xdev  = 0 ;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_0 ;
    struct sc_ext_task * _task  = & _task_0;
    {
        /* Tested function call */
        sc_ext_try_task(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_try_task_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_try_task_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_ext_try_task(struct sc_ext_dev *, struct sc_ext_task *) */
void TestSuite_scaler2dext_c_f07218da_test_sc_ext_try_task_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (xdev) */ 
    struct sc_ext_dev _xdev_0 ;
    struct sc_ext_dev * _xdev  = & _xdev_0;
    /* Initializing argument 2 (task) */ 
    struct sc_ext_task _task_1 ;
    struct sc_ext_task * _task  = & _task_1;
    {
        /* Tested function call */
        sc_ext_try_task(_xdev, _task);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_dev * _xdev ", ( _xdev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ext_task * _task ", ( _task ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_try_task_4 */

/* CPPTEST_TEST_CASE_BEGIN test_show_cmd_line_1 */
/* CPPTEST_TEST_CASE_CONTEXT void show_cmd_line(int, uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (index) */ 
    int _index  = 88;
    /* Initializing argument 2 (value) */ 
    uint32_t _value  = 88;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 88;
    }
    {
        /* Tested function call */
        show_cmd_line(_index, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_cmd_line_1 */

/* CPPTEST_TEST_CASE_BEGIN test_show_cmd_line_10 */
/* CPPTEST_TEST_CASE_CONTEXT void show_cmd_line(int, uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (index) */ 
    int _index  = 8;
    /* Initializing argument 2 (value) */ 
    uint32_t _value  = 40;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        show_cmd_line(_index, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_cmd_line_10 */

/* CPPTEST_TEST_CASE_BEGIN test_show_cmd_line_2 */
/* CPPTEST_TEST_CASE_CONTEXT void show_cmd_line(int, uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (index) */ 
    int _index  = 84;
    /* Initializing argument 2 (value) */ 
    uint32_t _value  = 88;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 88;
    }
    {
        /* Tested function call */
        show_cmd_line(_index, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_cmd_line_2 */

/* CPPTEST_TEST_CASE_BEGIN test_show_cmd_line_3 */
/* CPPTEST_TEST_CASE_CONTEXT void show_cmd_line(int, uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (index) */ 
    int _index  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (value) */ 
    uint32_t _value  = 60;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 8;
    }
    {
        /* Tested function call */
        show_cmd_line(_index, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_cmd_line_3 */

/* CPPTEST_TEST_CASE_BEGIN test_show_cmd_line_4 */
/* CPPTEST_TEST_CASE_CONTEXT void show_cmd_line(int, uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (index) */ 
    int _index  = 1;
    /* Initializing argument 2 (value) */ 
    uint32_t _value  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 724;
    }
    {
        /* Tested function call */
        show_cmd_line(_index, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_cmd_line_4 */

/* CPPTEST_TEST_CASE_BEGIN test_show_cmd_line_5 */
/* CPPTEST_TEST_CASE_CONTEXT void show_cmd_line(int, uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (index) */ 
    int _index  = 3;
    /* Initializing argument 2 (value) */ 
    uint32_t _value  = 68;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 65535;
    }
    {
        /* Tested function call */
        show_cmd_line(_index, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_cmd_line_5 */

/* CPPTEST_TEST_CASE_BEGIN test_show_cmd_line_6 */
/* CPPTEST_TEST_CASE_CONTEXT void show_cmd_line(int, uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (index) */ 
    int _index  = 40;
    /* Initializing argument 2 (value) */ 
    uint32_t _value  = 2;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 6;
    }
    {
        /* Tested function call */
        show_cmd_line(_index, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_cmd_line_6 */

/* CPPTEST_TEST_CASE_BEGIN test_show_cmd_line_7 */
/* CPPTEST_TEST_CASE_CONTEXT void show_cmd_line(int, uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (index) */ 
    int _index  = 60;
    /* Initializing argument 2 (value) */ 
    uint32_t _value  = 724;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 4;
    }
    {
        /* Tested function call */
        show_cmd_line(_index, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_cmd_line_7 */

/* CPPTEST_TEST_CASE_BEGIN test_show_cmd_line_8 */
/* CPPTEST_TEST_CASE_CONTEXT void show_cmd_line(int, uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (index) */ 
    int _index  = 68;
    /* Initializing argument 2 (value) */ 
    uint32_t _value  = 32;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 3;
    }
    {
        /* Tested function call */
        show_cmd_line(_index, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_cmd_line_8 */

/* CPPTEST_TEST_CASE_BEGIN test_show_cmd_line_9 */
/* CPPTEST_TEST_CASE_CONTEXT void show_cmd_line(int, uint32_t) */
void TestSuite_scaler2dext_c_f07218da_test_show_cmd_line_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (index) */ 
    int _index  = 724;
    /* Initializing argument 2 (value) */ 
    uint32_t _value  = 8;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        show_cmd_line(_index, _value);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_cmd_line_9 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_buf_1 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_buf(struct mscl_buffer *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct mscl_buffer * _buf  = 0 ;
    /* Initializing argument 2 (str) */ 
    char _str_0 [1];
    char * _str  = (char * )cpptestMemset((void*)&_str_0, 0, (1 * sizeof(char)));
    {
        /* Tested function call */
        show_mscl_buf(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_buf_1 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_buf_2 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_buf(struct mscl_buffer *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct mscl_buffer _buf_0 ;
    struct mscl_buffer * _buf  = & _buf_0;
    /* Initializing argument 2 (str) */ 
    char _str_1 [1];
    char * _str  = (char * )cpptestMemset((void*)&_str_1, 0, (1 * sizeof(char)));
    {
        /* Tested function call */
        show_mscl_buf(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_buf_2 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_buf_3 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_buf(struct mscl_buffer *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct mscl_buffer * _buf  = 0 ;
    /* Initializing argument 2 (str) */ 
    char _str_0 [16];
    char * _str  = (char * )cpptestMemset((void*)&_str_0, 0, (16 * sizeof(char)));
    {
        /* Tested function call */
        show_mscl_buf(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_buf_3 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_buf_4 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_buf(struct mscl_buffer *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct mscl_buffer _buf_0 ;
    struct mscl_buffer * _buf  = & _buf_0;
    /* Initializing argument 2 (str) */ 
    char _str_1 [16];
    char * _str  = (char * )cpptestMemset((void*)&_str_1, 0, (16 * sizeof(char)));
    {
        /* Tested function call */
        show_mscl_buf(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_buf_4 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_buf_5 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_buf(struct mscl_buffer *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct mscl_buffer * _buf  = 0 ;
    /* Initializing argument 2 (str) */ 
    char _str_0 [256];
    char * _str  = (char * )cpptestMemset((void*)&_str_0, 0, (256 * sizeof(char)));
    {
        /* Tested function call */
        show_mscl_buf(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_buf_5 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_buf_6 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_buf(struct mscl_buffer *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct mscl_buffer _buf_0 ;
    struct mscl_buffer * _buf  = & _buf_0;
    /* Initializing argument 2 (str) */ 
    char _str_1 [256];
    char * _str  = (char * )cpptestMemset((void*)&_str_1, 0, (256 * sizeof(char)));
    {
        /* Tested function call */
        show_mscl_buf(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_buf_6 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_buf_7 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_buf(struct mscl_buffer *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct mscl_buffer * _buf  = 0 ;
    /* Initializing argument 2 (str) */ 
    char * _str  = 0 ;
    {
        /* Tested function call */
        show_mscl_buf(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_buf_7 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_buf_8 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_buf(struct mscl_buffer *, char *) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_buf_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    struct mscl_buffer _buf_0 ;
    struct mscl_buffer * _buf  = & _buf_0;
    /* Initializing argument 2 (str) */ 
    char * _str  = 0 ;
    {
        /* Tested function call */
        show_mscl_buf(_buf, _str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_buf_8 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_task_1 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = 1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        show_mscl_task(_task, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_task_1 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_task_10 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        show_mscl_task(_task, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_task_10 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_task_2 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task _task_0 ;
    struct mscl_task * _task  = & _task_0;
    /* Initializing argument 2 (index) */ 
    int _index  = 1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        show_mscl_task(_task, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_task_2 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_task_3 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task _task_1 ;
    struct mscl_task * _task  = & _task_1;
    /* Initializing argument 2 (index) */ 
    int _index  = -1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        show_mscl_task(_task, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_task_3 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_task_4 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = cpptestLimitsGetMaxInt();
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        show_mscl_task(_task, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_task_4 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_task_5 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task _task_0 ;
    struct mscl_task * _task  = & _task_0;
    /* Initializing argument 2 (index) */ 
    int _index  = 1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        show_mscl_task(_task, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_task_5 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_task_6 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        show_mscl_task(_task, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_task_6 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_task_7 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task _task_0 ;
    struct mscl_task * _task  = & _task_0;
    /* Initializing argument 2 (index) */ 
    int _index  = cpptestLimitsGetMinInt();
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        show_mscl_task(_task, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_task_7 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_task_8 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task * _task  = 0 ;
    /* Initializing argument 2 (index) */ 
    int _index  = -1;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        show_mscl_task(_task, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_task_8 */

/* CPPTEST_TEST_CASE_BEGIN test_show_mscl_task_9 */
/* CPPTEST_TEST_CASE_CONTEXT void show_mscl_task(struct mscl_task *, int) */
void TestSuite_scaler2dext_c_f07218da_test_show_mscl_task_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (task) */ 
    struct mscl_task _task_0 ;
    struct mscl_task * _task  = & _task_0;
    /* Initializing argument 2 (index) */ 
    int _index  = 0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        show_mscl_task(_task, _index);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct mscl_task * _task ", ( _task ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_mscl_task_9 */

/* CPPTEST_TEST_CASE_BEGIN test_show_task_cmd_1 */
/* CPPTEST_TEST_CASE_CONTEXT void show_task_cmd(uint32_t *) */
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cmd) */ 
    uint32_t * _cmd  = 0 ;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 16;
    }
    {
        /* Tested function call */
        show_task_cmd(_cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("uint32_t * _cmd ", ( _cmd ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_task_cmd_1 */

/* CPPTEST_TEST_CASE_BEGIN test_show_task_cmd_10 */
/* CPPTEST_TEST_CASE_CONTEXT void show_task_cmd(uint32_t *) */
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cmd) */ 
    uint32_t _cmd_0  = 16;
    uint32_t * _cmd  = & _cmd_0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        show_task_cmd(_cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("uint32_t * _cmd ", ( _cmd ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_task_cmd_10 */

/* CPPTEST_TEST_CASE_BEGIN test_show_task_cmd_2 */
/* CPPTEST_TEST_CASE_CONTEXT void show_task_cmd(uint32_t *) */
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cmd) */ 
    uint32_t _cmd_0  = 16;
    uint32_t * _cmd  = & _cmd_0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 16;
    }
    {
        /* Tested function call */
        show_task_cmd(_cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("uint32_t * _cmd ", ( _cmd ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_task_cmd_2 */

/* CPPTEST_TEST_CASE_BEGIN test_show_task_cmd_3 */
/* CPPTEST_TEST_CASE_CONTEXT void show_task_cmd(uint32_t *) */
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cmd) */ 
    uint32_t _cmd_0  = 0u;
    uint32_t * _cmd  = & _cmd_0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 16;
    }
    {
        /* Tested function call */
        show_task_cmd(_cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("uint32_t * _cmd ", ( _cmd ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_task_cmd_3 */

/* CPPTEST_TEST_CASE_BEGIN test_show_task_cmd_4 */
/* CPPTEST_TEST_CASE_CONTEXT void show_task_cmd(uint32_t *) */
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cmd) */ 
    uint32_t _cmd_0  = cpptestLimitsGetMaxUnsignedInt();
    uint32_t * _cmd  = & _cmd_0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 0;
    }
    {
        /* Tested function call */
        show_task_cmd(_cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("uint32_t * _cmd ", ( _cmd ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_task_cmd_4 */

/* CPPTEST_TEST_CASE_BEGIN test_show_task_cmd_5 */
/* CPPTEST_TEST_CASE_CONTEXT void show_task_cmd(uint32_t *) */
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cmd) */ 
    uint32_t _cmd_0  = 16;
    uint32_t * _cmd  = & _cmd_0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        show_task_cmd(_cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("uint32_t * _cmd ", ( _cmd ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_task_cmd_5 */

/* CPPTEST_TEST_CASE_BEGIN test_show_task_cmd_6 */
/* CPPTEST_TEST_CASE_CONTEXT void show_task_cmd(uint32_t *) */
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cmd) */ 
    uint32_t _cmd_0  = 0u;
    uint32_t * _cmd  = & _cmd_0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        show_task_cmd(_cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("uint32_t * _cmd ", ( _cmd ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_task_cmd_6 */

/* CPPTEST_TEST_CASE_BEGIN test_show_task_cmd_7 */
/* CPPTEST_TEST_CASE_CONTEXT void show_task_cmd(uint32_t *) */
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cmd) */ 
    uint32_t _cmd_0  = 1u;
    uint32_t * _cmd  = & _cmd_0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = -1;
    }
    {
        /* Tested function call */
        show_task_cmd(_cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("uint32_t * _cmd ", ( _cmd ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_task_cmd_7 */

/* CPPTEST_TEST_CASE_BEGIN test_show_task_cmd_8 */
/* CPPTEST_TEST_CASE_CONTEXT void show_task_cmd(uint32_t *) */
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cmd) */ 
    uint32_t _cmd_0  = cpptestLimitsGetMaxUnsignedInt();
    uint32_t * _cmd  = & _cmd_0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        show_task_cmd(_cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("uint32_t * _cmd ", ( _cmd ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_task_cmd_8 */

/* CPPTEST_TEST_CASE_BEGIN test_show_task_cmd_9 */
/* CPPTEST_TEST_CASE_CONTEXT void show_task_cmd(uint32_t *) */
void TestSuite_scaler2dext_c_f07218da_test_show_task_cmd_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cmd) */ 
    uint32_t _cmd_0  = 0;
    uint32_t * _cmd  = & _cmd_0;
    /* Initializing global variable cmd_str */ 
    {
         cmd_str[0]  = 0 ;
    }
    /* Initializing global variable sc_ext_cmd_offset */ 
    {
         sc_ext_cmd_offset[0]  = 1;
    }
    {
        /* Tested function call */
        show_task_cmd(_cmd);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("uint32_t * _cmd ", ( _cmd ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * cmd_str[0]", ( cmd_str[0] ), sizeof(char));
        CPPTEST_POST_CONDITION_INTEGER("int sc_ext_cmd_offset[0]", ( sc_ext_cmd_offset[0] ));
    }
}
/* CPPTEST_TEST_CASE_END test_show_task_cmd_9 */
