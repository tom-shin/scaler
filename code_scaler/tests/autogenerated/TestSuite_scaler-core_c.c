#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/scaler_analysis/scaler-core.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/scaler_analysis/scaler-core.c");

EXTERN_C_LINKAGE void TestSuite_scaler2dcore_c_8ed4121_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_scaler2dcore_c_8ed4121_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_scaler2dcore_c_8ed4121);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_scaler2dcore_c_8ed4121_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___exittest_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___exittest_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___exittest_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___exittest_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___inittest_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___inittest_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___inittest_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___inittest_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___sc_qbuf_work_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___sc_qbuf_work_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_allocate_intermediate_frame_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_allocate_intermediate_frame_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_destroy_intermediate_frame_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_destroy_intermediate_frame_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_free_intermediate_frame_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_free_intermediate_frame_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_initialize_initermediate_frame_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_initialize_initermediate_frame_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_queue_init_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_queue_init_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_queue_init_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_queue_init_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_ctrls_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_add_ctrls_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_clear_votf_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_clear_votf_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_get_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_get_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_power_disable_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_power_disable_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_put_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_put_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_compare_qos_table_entries_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ctx_stop_req_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ctx_stop_req_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_enable_signaling_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_enable_signaling_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_get_driver_name_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_get_driver_name_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_timeout_handler_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_timeout_handler_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mscl_votf_of_dt_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mscl_votf_of_dt_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_from_dt_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_from_dt_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_sink_votf_of_dt_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_sink_votf_of_dt_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_votf_of_dt_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_get_votf_of_dt_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_iommu_unmap_wrapper_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_job_abort_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_open_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_open_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_populate_dt_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_populate_dt_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_power_clk_enable_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_power_clk_enable_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_put_device_wrapper_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_release_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_release_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_release_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_release_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_release_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_release_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_release_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_release_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_release_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_release_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_devfreq_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_devfreq_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_out_fence_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_out_fence_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_resume_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_resume_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_suspend_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_suspend_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_csc_coef_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_csc_coef_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_shutdown_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_shutdown_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_suspend_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_suspend_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_sysmmu_fault_handler_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_sysmmu_fault_handler_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_timeout_qos_work_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_timeout_qos_work_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_unregister_m2m_device_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_unregister_m2m_device_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_cleanup_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_cleanup_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_finish_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_finish_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_init_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_init_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_prepare_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_prepare_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_queue_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_queue_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_lock_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_lock_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_9);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_stop_streaming_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_stop_streaming_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_unlock_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_unlock_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_1);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_10);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_2);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_3);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_4);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_5);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_6);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_7);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_8);
        CPPTEST_TEST(TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_9);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_scaler2dcore_c_8ed4121_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test___exittest_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test___exittest_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test___exittest_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test___exittest_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test___inittest_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test___inittest_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test___inittest_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test___inittest_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test___sc_qbuf_work_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test___sc_qbuf_work_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_allocate_intermediate_frame_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_allocate_intermediate_frame_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_destroy_intermediate_frame_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_destroy_intermediate_frame_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_free_intermediate_frame_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_free_intermediate_frame_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_initialize_initermediate_frame_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_initialize_initermediate_frame_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_queue_init_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_queue_init_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_queue_init_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_queue_init_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_ctrls_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_ctrls_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clear_votf_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clear_votf_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_get_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_get_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_power_disable_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_power_disable_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_put_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_put_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_compare_qos_table_entries_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ctx_stop_req_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ctx_stop_req_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_enable_signaling_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_enable_signaling_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_get_driver_name_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_get_driver_name_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_timeout_handler_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_timeout_handler_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mscl_votf_of_dt_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mscl_votf_of_dt_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_from_dt_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_from_dt_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_sink_votf_of_dt_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_sink_votf_of_dt_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_votf_of_dt_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_votf_of_dt_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_iommu_unmap_wrapper_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_job_abort_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_open_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_open_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_populate_dt_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_populate_dt_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_power_clk_enable_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_power_clk_enable_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_put_device_wrapper_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_devfreq_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_devfreq_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_out_fence_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_out_fence_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_resume_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_resume_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_suspend_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_suspend_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_csc_coef_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_csc_coef_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_shutdown_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_shutdown_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_suspend_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_suspend_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_sysmmu_fault_handler_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_sysmmu_fault_handler_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_timeout_qos_work_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_timeout_qos_work_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_unregister_m2m_device_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_unregister_m2m_device_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_cleanup_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_cleanup_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_finish_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_finish_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_init_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_init_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_prepare_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_prepare_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_queue_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_queue_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_lock_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_lock_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_9(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_stop_streaming_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_stop_streaming_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_unlock_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_unlock_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_1(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_10(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_2(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_3(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_4(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_5(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_6(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_7(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_8(void);
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_9(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_scaler2dcore_c_8ed4121);

void TestSuite_scaler2dcore_c_8ed4121_testSuiteSetUp(void);
void TestSuite_scaler2dcore_c_8ed4121_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_scaler2dcore_c_8ed4121_testSuiteTearDown(void);
void TestSuite_scaler2dcore_c_8ed4121_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_scaler2dcore_c_8ed4121_setUp(void);
void TestSuite_scaler2dcore_c_8ed4121_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_scaler2dcore_c_8ed4121_tearDown(void);
void TestSuite_scaler2dcore_c_8ed4121_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test___check_measure_hw_latency_1 */
/* CPPTEST_TEST_CASE_CONTEXT int * __check_measure_hw_latency(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int * _return  = __check_measure_hw_latency();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("int * _return", ( _return ), sizeof(int));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_measure_hw_latency_1 */

/* CPPTEST_TEST_CASE_BEGIN test___check_measure_hw_latency_2 */
/* CPPTEST_TEST_CASE_CONTEXT int * __check_measure_hw_latency(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        int * _return  = __check_measure_hw_latency();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("int * _return", ( _return ), sizeof(int));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_measure_hw_latency_2 */

/* CPPTEST_TEST_CASE_BEGIN test___check_measure_hw_latency_3 */
/* CPPTEST_TEST_CASE_CONTEXT int * __check_measure_hw_latency(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int * _return  = __check_measure_hw_latency();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("int * _return", ( _return ), sizeof(int));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_measure_hw_latency_3 */

/* CPPTEST_TEST_CASE_BEGIN test___check_measure_hw_latency_4 */
/* CPPTEST_TEST_CASE_CONTEXT int * __check_measure_hw_latency(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int * _return  = __check_measure_hw_latency();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("int * _return", ( _return ), sizeof(int));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_measure_hw_latency_4 */

/* CPPTEST_TEST_CASE_BEGIN test___check_measure_hw_latency_5 */
/* CPPTEST_TEST_CASE_CONTEXT int * __check_measure_hw_latency(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_measure_hw_latency_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        int * _return  = __check_measure_hw_latency();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("int * _return", ( _return ), sizeof(int));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_measure_hw_latency_5 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_log_level_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_log_level(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_log_level();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_log_level_1 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_log_level_2 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_log_level(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_log_level();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_log_level_2 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_log_level_3 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_log_level(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_log_level();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_log_level_3 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_log_level_4 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_log_level(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_log_level();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_log_level_4 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_log_level_5 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_log_level(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_log_level_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_log_level();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_log_level_5 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_set_blur_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_set_blur(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_set_blur */ 
    {
         sc_set_blur  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_set_blur();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_set_blur", ( sc_set_blur ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_set_blur_1 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_set_blur_2 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_set_blur(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_set_blur */ 
    {
         sc_set_blur  = -1;
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_set_blur();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_set_blur", ( sc_set_blur ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_set_blur_2 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_set_blur_3 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_set_blur(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_set_blur */ 
    {
         sc_set_blur  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_set_blur();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_set_blur", ( sc_set_blur ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_set_blur_3 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_set_blur_4 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_set_blur(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_set_blur */ 
    {
         sc_set_blur  = 1;
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_set_blur();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_set_blur", ( sc_set_blur ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_set_blur_4 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_set_blur_5 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_set_blur(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_set_blur_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_set_blur */ 
    {
         sc_set_blur  = 0;
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_set_blur();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_set_blur", ( sc_set_blur ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_set_blur_5 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_show_stat_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_show_stat(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_show_stat();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_show_stat_1 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_show_stat_2 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_show_stat(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_show_stat();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_show_stat_2 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_show_stat_3 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_show_stat(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_show_stat();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_show_stat_3 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_show_stat_4 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_show_stat(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_show_stat();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_show_stat_4 */

/* CPPTEST_TEST_CASE_BEGIN test___check_sc_show_stat_5 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int * __check_sc_show_stat(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___check_sc_show_stat_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    {
        /* Tested function call */
        unsigned * _return  = __check_sc_show_stat();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _return", ( _return ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
    }
}
/* CPPTEST_TEST_CASE_END test___check_sc_show_stat_5 */

/* CPPTEST_TEST_CASE_BEGIN test___exittest_1 */
/* CPPTEST_TEST_CASE_CONTEXT exitcall_t __exittest(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___exittest_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = false;
         sc_driver.driver_managed_dma  = false;
    }
    {
        /* Tested function call */
        exitcall_t _return  = __exittest();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("exitcall_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test___exittest_1 */

/* CPPTEST_TEST_CASE_BEGIN test___exittest_2 */
/* CPPTEST_TEST_CASE_CONTEXT exitcall_t __exittest(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___exittest_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = true;
         sc_driver.driver_managed_dma  = false;
    }
    {
        /* Tested function call */
        exitcall_t _return  = __exittest();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("exitcall_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test___exittest_2 */

/* CPPTEST_TEST_CASE_BEGIN test___exittest_3 */
/* CPPTEST_TEST_CASE_CONTEXT exitcall_t __exittest(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___exittest_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = false;
         sc_driver.driver_managed_dma  = true;
    }
    {
        /* Tested function call */
        exitcall_t _return  = __exittest();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("exitcall_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test___exittest_3 */

/* CPPTEST_TEST_CASE_BEGIN test___exittest_4 */
/* CPPTEST_TEST_CASE_CONTEXT exitcall_t __exittest(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___exittest_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = true;
         sc_driver.driver_managed_dma  = true;
    }
    {
        /* Tested function call */
        exitcall_t _return  = __exittest();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("exitcall_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test___exittest_4 */

/* CPPTEST_TEST_CASE_BEGIN test___inittest_1 */
/* CPPTEST_TEST_CASE_CONTEXT initcall_t __inittest(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___inittest_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = false;
         sc_driver.driver_managed_dma  = false;
    }
    {
        /* Tested function call */
        initcall_t _return  = __inittest();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("initcall_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test___inittest_1 */

/* CPPTEST_TEST_CASE_BEGIN test___inittest_2 */
/* CPPTEST_TEST_CASE_CONTEXT initcall_t __inittest(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___inittest_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = true;
         sc_driver.driver_managed_dma  = false;
    }
    {
        /* Tested function call */
        initcall_t _return  = __inittest();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("initcall_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test___inittest_2 */

/* CPPTEST_TEST_CASE_BEGIN test___inittest_3 */
/* CPPTEST_TEST_CASE_CONTEXT initcall_t __inittest(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___inittest_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = false;
         sc_driver.driver_managed_dma  = true;
    }
    {
        /* Tested function call */
        initcall_t _return  = __inittest();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("initcall_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test___inittest_3 */

/* CPPTEST_TEST_CASE_BEGIN test___inittest_4 */
/* CPPTEST_TEST_CASE_CONTEXT initcall_t __inittest(void) */
void TestSuite_scaler2dcore_c_8ed4121_test___inittest_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = true;
         sc_driver.driver_managed_dma  = true;
    }
    {
        /* Tested function call */
        initcall_t _return  = __inittest();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("initcall_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test___inittest_4 */

/* CPPTEST_TEST_CASE_BEGIN test___sc_qbuf_work_1 */
/* CPPTEST_TEST_CASE_CONTEXT void __sc_qbuf_work(struct work_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test___sc_qbuf_work_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (work) */ 
    struct work_struct * _work  = 0 ;
    {
        /* Tested function call */
        __sc_qbuf_work(_work);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct work_struct * _work ", ( _work ));
    }
}
/* CPPTEST_TEST_CASE_END test___sc_qbuf_work_1 */

/* CPPTEST_TEST_CASE_BEGIN test___sc_qbuf_work_2 */
/* CPPTEST_TEST_CASE_CONTEXT void __sc_qbuf_work(struct work_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test___sc_qbuf_work_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (work) */ 
    struct work_struct _work_0 ;
    struct work_struct * _work  = & _work_0;
    {
        /* Tested function call */
        __sc_qbuf_work(_work);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct work_struct * _work ", ( _work ));
    }
}
/* CPPTEST_TEST_CASE_END test___sc_qbuf_work_2 */

/* CPPTEST_TEST_CASE_BEGIN test___sc_vb2_buf_queue_1 */
/* CPPTEST_TEST_CASE_CONTEXT void __sc_vb2_buf_queue(struct v4l2_m2m_ctx *, struct vb2_v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (m2m_ctx) */ 
    struct v4l2_m2m_ctx * _m2m_ctx  = 0 ;
    /* Initializing argument 2 (v4l2_buf) */ 
    struct vb2_v4l2_buffer * _v4l2_buf  = 0 ;
    {
        /* Tested function call */
        __sc_vb2_buf_queue(_m2m_ctx, _v4l2_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct v4l2_m2m_ctx * _m2m_ctx ", ( _m2m_ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _v4l2_buf ", ( _v4l2_buf ));
    }
}
/* CPPTEST_TEST_CASE_END test___sc_vb2_buf_queue_1 */

/* CPPTEST_TEST_CASE_BEGIN test___sc_vb2_buf_queue_2 */
/* CPPTEST_TEST_CASE_CONTEXT void __sc_vb2_buf_queue(struct v4l2_m2m_ctx *, struct vb2_v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (m2m_ctx) */ 
    struct v4l2_m2m_ctx _m2m_ctx_0 ;
    struct v4l2_m2m_ctx * _m2m_ctx  = & _m2m_ctx_0;
    /* Initializing argument 2 (v4l2_buf) */ 
    struct vb2_v4l2_buffer * _v4l2_buf  = 0 ;
    {
        /* Tested function call */
        __sc_vb2_buf_queue(_m2m_ctx, _v4l2_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct v4l2_m2m_ctx * _m2m_ctx ", ( _m2m_ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _v4l2_buf ", ( _v4l2_buf ));
    }
}
/* CPPTEST_TEST_CASE_END test___sc_vb2_buf_queue_2 */

/* CPPTEST_TEST_CASE_BEGIN test___sc_vb2_buf_queue_3 */
/* CPPTEST_TEST_CASE_CONTEXT void __sc_vb2_buf_queue(struct v4l2_m2m_ctx *, struct vb2_v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (m2m_ctx) */ 
    struct v4l2_m2m_ctx * _m2m_ctx  = 0 ;
    /* Initializing argument 2 (v4l2_buf) */ 
    struct vb2_v4l2_buffer _v4l2_buf_0 ;
    struct vb2_v4l2_buffer * _v4l2_buf  = & _v4l2_buf_0;
    {
        /* Tested function call */
        __sc_vb2_buf_queue(_m2m_ctx, _v4l2_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct v4l2_m2m_ctx * _m2m_ctx ", ( _m2m_ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _v4l2_buf ", ( _v4l2_buf ));
    }
}
/* CPPTEST_TEST_CASE_END test___sc_vb2_buf_queue_3 */

/* CPPTEST_TEST_CASE_BEGIN test___sc_vb2_buf_queue_4 */
/* CPPTEST_TEST_CASE_CONTEXT void __sc_vb2_buf_queue(struct v4l2_m2m_ctx *, struct vb2_v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test___sc_vb2_buf_queue_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (m2m_ctx) */ 
    struct v4l2_m2m_ctx _m2m_ctx_0 ;
    struct v4l2_m2m_ctx * _m2m_ctx  = & _m2m_ctx_0;
    /* Initializing argument 2 (v4l2_buf) */ 
    struct vb2_v4l2_buffer _v4l2_buf_1 ;
    struct vb2_v4l2_buffer * _v4l2_buf  = & _v4l2_buf_1;
    {
        /* Tested function call */
        __sc_vb2_buf_queue(_m2m_ctx, _v4l2_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct v4l2_m2m_ctx * _m2m_ctx ", ( _m2m_ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _v4l2_buf ", ( _v4l2_buf ));
    }
}
/* CPPTEST_TEST_CASE_END test___sc_vb2_buf_queue_4 */

/* CPPTEST_TEST_CASE_BEGIN test_alloc_intermediate_buffer_1 */
/* CPPTEST_TEST_CASE_CONTEXT bool alloc_intermediate_buffer(struct device *, struct sc_int_frame *, int, size_t, unsigned int, unsigned long) */
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing argument 2 (iframe) */ 
    struct sc_int_frame * _iframe  = 0 ;
    /* Initializing argument 3 (i) */ 
    int _i  = 0;
    /* Initializing argument 4 (size) */ 
    size_t _size  = 18446744073709547521;
    /* Initializing argument 5 (heapmask) */ 
    unsigned _heapmask  = 0;
    /* Initializing argument 6 (flags) */ 
    unsigned long _flags  = 18446744073709547521;
    {
        /* Tested function call */
        bool _return  = alloc_intermediate_buffer(_dev, _iframe, _i, _size, _heapmask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _iframe ", ( _iframe ));
    }
}
/* CPPTEST_TEST_CASE_END test_alloc_intermediate_buffer_1 */

/* CPPTEST_TEST_CASE_BEGIN test_alloc_intermediate_buffer_10 */
/* CPPTEST_TEST_CASE_CONTEXT bool alloc_intermediate_buffer(struct device *, struct sc_int_frame *, int, size_t, unsigned int, unsigned long) */
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing argument 2 (iframe) */ 
    struct sc_int_frame * _iframe  = 0 ;
    /* Initializing argument 3 (i) */ 
    int _i  = 0;
    /* Initializing argument 4 (size) */ 
    size_t _size  = 1ul;
    /* Initializing argument 5 (heapmask) */ 
    unsigned _heapmask  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 6 (flags) */ 
    unsigned long _flags  = 0ul;
    {
        /* Tested function call */
        bool _return  = alloc_intermediate_buffer(_dev, _iframe, _i, _size, _heapmask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _iframe ", ( _iframe ));
    }
}
/* CPPTEST_TEST_CASE_END test_alloc_intermediate_buffer_10 */

/* CPPTEST_TEST_CASE_BEGIN test_alloc_intermediate_buffer_2 */
/* CPPTEST_TEST_CASE_CONTEXT bool alloc_intermediate_buffer(struct device *, struct sc_int_frame *, int, size_t, unsigned int, unsigned long) */
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing argument 2 (iframe) */ 
    struct sc_int_frame * _iframe  = 0 ;
    /* Initializing argument 3 (i) */ 
    int _i  = 0;
    /* Initializing argument 4 (size) */ 
    size_t _size  = 18446744073709547521;
    /* Initializing argument 5 (heapmask) */ 
    unsigned _heapmask  = 0;
    /* Initializing argument 6 (flags) */ 
    unsigned long _flags  = 18446744073709547521;
    {
        /* Tested function call */
        bool _return  = alloc_intermediate_buffer(_dev, _iframe, _i, _size, _heapmask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _iframe ", ( _iframe ));
    }
}
/* CPPTEST_TEST_CASE_END test_alloc_intermediate_buffer_2 */

/* CPPTEST_TEST_CASE_BEGIN test_alloc_intermediate_buffer_3 */
/* CPPTEST_TEST_CASE_CONTEXT bool alloc_intermediate_buffer(struct device *, struct sc_int_frame *, int, size_t, unsigned int, unsigned long) */
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing argument 2 (iframe) */ 
    struct sc_int_frame _iframe_1 ;
    struct sc_int_frame * _iframe  = & _iframe_1;
    /* Initializing argument 3 (i) */ 
    int _i  = 0;
    /* Initializing argument 4 (size) */ 
    size_t _size  = 0;
    /* Initializing argument 5 (heapmask) */ 
    unsigned _heapmask  = 1u;
    /* Initializing argument 6 (flags) */ 
    unsigned long _flags  = 18446744073709547521;
    {
        /* Tested function call */
        bool _return  = alloc_intermediate_buffer(_dev, _iframe, _i, _size, _heapmask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _iframe ", ( _iframe ));
    }
}
/* CPPTEST_TEST_CASE_END test_alloc_intermediate_buffer_3 */

/* CPPTEST_TEST_CASE_BEGIN test_alloc_intermediate_buffer_4 */
/* CPPTEST_TEST_CASE_CONTEXT bool alloc_intermediate_buffer(struct device *, struct sc_int_frame *, int, size_t, unsigned int, unsigned long) */
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing argument 2 (iframe) */ 
    struct sc_int_frame * _iframe  = 0 ;
    /* Initializing argument 3 (i) */ 
    int _i  = cpptestLimitsGetMaxInt();
    /* Initializing argument 4 (size) */ 
    size_t _size  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 5 (heapmask) */ 
    unsigned _heapmask  = 0;
    /* Initializing argument 6 (flags) */ 
    unsigned long _flags  = 0;
    {
        /* Tested function call */
        bool _return  = alloc_intermediate_buffer(_dev, _iframe, _i, _size, _heapmask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _iframe ", ( _iframe ));
    }
}
/* CPPTEST_TEST_CASE_END test_alloc_intermediate_buffer_4 */

/* CPPTEST_TEST_CASE_BEGIN test_alloc_intermediate_buffer_5 */
/* CPPTEST_TEST_CASE_CONTEXT bool alloc_intermediate_buffer(struct device *, struct sc_int_frame *, int, size_t, unsigned int, unsigned long) */
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing argument 2 (iframe) */ 
    struct sc_int_frame _iframe_1 ;
    struct sc_int_frame * _iframe  = & _iframe_1;
    /* Initializing argument 3 (i) */ 
    int _i  = cpptestLimitsGetMaxInt();
    /* Initializing argument 4 (size) */ 
    size_t _size  = 1ul;
    /* Initializing argument 5 (heapmask) */ 
    unsigned _heapmask  = 1u;
    /* Initializing argument 6 (flags) */ 
    unsigned long _flags  = 0;
    {
        /* Tested function call */
        bool _return  = alloc_intermediate_buffer(_dev, _iframe, _i, _size, _heapmask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _iframe ", ( _iframe ));
    }
}
/* CPPTEST_TEST_CASE_END test_alloc_intermediate_buffer_5 */

/* CPPTEST_TEST_CASE_BEGIN test_alloc_intermediate_buffer_6 */
/* CPPTEST_TEST_CASE_CONTEXT bool alloc_intermediate_buffer(struct device *, struct sc_int_frame *, int, size_t, unsigned int, unsigned long) */
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing argument 2 (iframe) */ 
    struct sc_int_frame * _iframe  = 0 ;
    /* Initializing argument 3 (i) */ 
    int _i  = -1;
    /* Initializing argument 4 (size) */ 
    size_t _size  = 0ul;
    /* Initializing argument 5 (heapmask) */ 
    unsigned _heapmask  = 0;
    /* Initializing argument 6 (flags) */ 
    unsigned long _flags  = cpptestLimitsGetMaxUnsignedLong();
    {
        /* Tested function call */
        bool _return  = alloc_intermediate_buffer(_dev, _iframe, _i, _size, _heapmask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _iframe ", ( _iframe ));
    }
}
/* CPPTEST_TEST_CASE_END test_alloc_intermediate_buffer_6 */

/* CPPTEST_TEST_CASE_BEGIN test_alloc_intermediate_buffer_7 */
/* CPPTEST_TEST_CASE_CONTEXT bool alloc_intermediate_buffer(struct device *, struct sc_int_frame *, int, size_t, unsigned int, unsigned long) */
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing argument 2 (iframe) */ 
    struct sc_int_frame * _iframe  = 0 ;
    /* Initializing argument 3 (i) */ 
    int _i  = cpptestLimitsGetMinInt();
    /* Initializing argument 4 (size) */ 
    size_t _size  = 18446744073709547521;
    /* Initializing argument 5 (heapmask) */ 
    unsigned _heapmask  = 0u;
    /* Initializing argument 6 (flags) */ 
    unsigned long _flags  = cpptestLimitsGetMaxUnsignedLong();
    {
        /* Tested function call */
        bool _return  = alloc_intermediate_buffer(_dev, _iframe, _i, _size, _heapmask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _iframe ", ( _iframe ));
    }
}
/* CPPTEST_TEST_CASE_END test_alloc_intermediate_buffer_7 */

/* CPPTEST_TEST_CASE_BEGIN test_alloc_intermediate_buffer_8 */
/* CPPTEST_TEST_CASE_CONTEXT bool alloc_intermediate_buffer(struct device *, struct sc_int_frame *, int, size_t, unsigned int, unsigned long) */
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing argument 2 (iframe) */ 
    struct sc_int_frame _iframe_1 ;
    struct sc_int_frame * _iframe  = & _iframe_1;
    /* Initializing argument 3 (i) */ 
    int _i  = cpptestLimitsGetMinInt();
    /* Initializing argument 4 (size) */ 
    size_t _size  = 0;
    /* Initializing argument 5 (heapmask) */ 
    unsigned _heapmask  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 6 (flags) */ 
    unsigned long _flags  = 1ul;
    {
        /* Tested function call */
        bool _return  = alloc_intermediate_buffer(_dev, _iframe, _i, _size, _heapmask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _iframe ", ( _iframe ));
    }
}
/* CPPTEST_TEST_CASE_END test_alloc_intermediate_buffer_8 */

/* CPPTEST_TEST_CASE_BEGIN test_alloc_intermediate_buffer_9 */
/* CPPTEST_TEST_CASE_CONTEXT bool alloc_intermediate_buffer(struct device *, struct sc_int_frame *, int, size_t, unsigned int, unsigned long) */
void TestSuite_scaler2dcore_c_8ed4121_test_alloc_intermediate_buffer_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing argument 2 (iframe) */ 
    struct sc_int_frame _iframe_0 ;
    struct sc_int_frame * _iframe  = & _iframe_0;
    /* Initializing argument 3 (i) */ 
    int _i  = 1;
    /* Initializing argument 4 (size) */ 
    size_t _size  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 5 (heapmask) */ 
    unsigned _heapmask  = 0u;
    /* Initializing argument 6 (flags) */ 
    unsigned long _flags  = 1ul;
    {
        /* Tested function call */
        bool _return  = alloc_intermediate_buffer(_dev, _iframe, _i, _size, _heapmask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _iframe ", ( _iframe ));
    }
}
/* CPPTEST_TEST_CASE_END test_alloc_intermediate_buffer_9 */

/* CPPTEST_TEST_CASE_BEGIN test_allocate_intermediate_frame_1 */
/* CPPTEST_TEST_CASE_CONTEXT bool allocate_intermediate_frame(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_allocate_intermediate_frame_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        bool _return  = allocate_intermediate_frame(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_allocate_intermediate_frame_1 */

/* CPPTEST_TEST_CASE_BEGIN test_allocate_intermediate_frame_2 */
/* CPPTEST_TEST_CASE_CONTEXT bool allocate_intermediate_frame(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_allocate_intermediate_frame_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        bool _return  = allocate_intermediate_frame(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_allocate_intermediate_frame_2 */

/* CPPTEST_TEST_CASE_BEGIN test_destroy_intermediate_frame_1 */
/* CPPTEST_TEST_CASE_CONTEXT void destroy_intermediate_frame(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_destroy_intermediate_frame_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        destroy_intermediate_frame(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_destroy_intermediate_frame_1 */

/* CPPTEST_TEST_CASE_BEGIN test_destroy_intermediate_frame_2 */
/* CPPTEST_TEST_CASE_CONTEXT void destroy_intermediate_frame(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_destroy_intermediate_frame_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        destroy_intermediate_frame(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_destroy_intermediate_frame_2 */

/* CPPTEST_TEST_CASE_BEGIN test_free_intermediate_frame_1 */
/* CPPTEST_TEST_CASE_CONTEXT void free_intermediate_frame(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_free_intermediate_frame_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        free_intermediate_frame(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_free_intermediate_frame_1 */

/* CPPTEST_TEST_CASE_BEGIN test_free_intermediate_frame_2 */
/* CPPTEST_TEST_CASE_CONTEXT void free_intermediate_frame(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_free_intermediate_frame_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        free_intermediate_frame(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_free_intermediate_frame_2 */

/* CPPTEST_TEST_CASE_BEGIN test_get_lossy_byte32num_1 */
/* CPPTEST_TEST_CASE_CONTEXT int get_lossy_byte32num(const struct sc_fmt *, __u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    const struct sc_fmt * _sc_fmt  = 0 ;
    /* Initializing argument 2 (blocksize) */ 
    __u8 _blocksize  = cpptestLimitsGetMaxUnsignedChar();
    {
        /* Tested function call */
        int _return  = get_lossy_byte32num(_sc_fmt, _blocksize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_get_lossy_byte32num_1 */

/* CPPTEST_TEST_CASE_BEGIN test_get_lossy_byte32num_2 */
/* CPPTEST_TEST_CASE_CONTEXT int get_lossy_byte32num(const struct sc_fmt *, __u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    struct sc_fmt _sc_fmt_0 ;
    const struct sc_fmt * _sc_fmt  = & _sc_fmt_0;
    /* Initializing argument 2 (blocksize) */ 
    __u8 _blocksize  = cpptestLimitsGetMaxUnsignedChar();
    {
        /* Tested function call */
        int _return  = get_lossy_byte32num(_sc_fmt, _blocksize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_get_lossy_byte32num_2 */

/* CPPTEST_TEST_CASE_BEGIN test_get_lossy_byte32num_3 */
/* CPPTEST_TEST_CASE_CONTEXT int get_lossy_byte32num(const struct sc_fmt *, __u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    const struct sc_fmt * _sc_fmt  = 0 ;
    /* Initializing argument 2 (blocksize) */ 
    __u8 _blocksize  = 1;
    {
        /* Tested function call */
        int _return  = get_lossy_byte32num(_sc_fmt, _blocksize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_get_lossy_byte32num_3 */

/* CPPTEST_TEST_CASE_BEGIN test_get_lossy_byte32num_4 */
/* CPPTEST_TEST_CASE_CONTEXT int get_lossy_byte32num(const struct sc_fmt *, __u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    struct sc_fmt _sc_fmt_0 ;
    const struct sc_fmt * _sc_fmt  = & _sc_fmt_0;
    /* Initializing argument 2 (blocksize) */ 
    __u8 _blocksize  = 1;
    {
        /* Tested function call */
        int _return  = get_lossy_byte32num(_sc_fmt, _blocksize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_get_lossy_byte32num_4 */

/* CPPTEST_TEST_CASE_BEGIN test_get_lossy_byte32num_5 */
/* CPPTEST_TEST_CASE_CONTEXT int get_lossy_byte32num(const struct sc_fmt *, __u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    const struct sc_fmt * _sc_fmt  = 0 ;
    /* Initializing argument 2 (blocksize) */ 
    __u8 _blocksize  = 0;
    {
        /* Tested function call */
        int _return  = get_lossy_byte32num(_sc_fmt, _blocksize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_get_lossy_byte32num_5 */

/* CPPTEST_TEST_CASE_BEGIN test_get_lossy_byte32num_6 */
/* CPPTEST_TEST_CASE_CONTEXT int get_lossy_byte32num(const struct sc_fmt *, __u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_get_lossy_byte32num_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    struct sc_fmt _sc_fmt_0 ;
    const struct sc_fmt * _sc_fmt  = & _sc_fmt_0;
    /* Initializing argument 2 (blocksize) */ 
    __u8 _blocksize  = 0;
    {
        /* Tested function call */
        int _return  = get_lossy_byte32num(_sc_fmt, _blocksize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_get_lossy_byte32num_6 */

/* CPPTEST_TEST_CASE_BEGIN test_initialize_initermediate_frame_1 */
/* CPPTEST_TEST_CASE_CONTEXT bool initialize_initermediate_frame(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_initialize_initermediate_frame_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        bool _return  = initialize_initermediate_frame(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_initialize_initermediate_frame_1 */

/* CPPTEST_TEST_CASE_BEGIN test_initialize_initermediate_frame_2 */
/* CPPTEST_TEST_CASE_CONTEXT bool initialize_initermediate_frame(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_initialize_initermediate_frame_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        bool _return  = initialize_initermediate_frame(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_initialize_initermediate_frame_2 */

/* CPPTEST_TEST_CASE_BEGIN test_queue_init_1 */
/* CPPTEST_TEST_CASE_CONTEXT int queue_init(void *, struct vb2_queue *, struct vb2_queue *) */
void TestSuite_scaler2dcore_c_8ed4121_test_queue_init_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing argument 2 (src_vq) */ 
    struct vb2_queue * _src_vq  = 0 ;
    /* Initializing argument 3 (dst_vq) */ 
    struct vb2_queue * _dst_vq  = 0 ;
    /* Initializing global variable sc_vb2_ops */ 
    {
         sc_vb2_ops.queue_setup  = 0 ;
         sc_vb2_ops.wait_prepare  = 0 ;
         sc_vb2_ops.wait_finish  = 0 ;
         sc_vb2_ops.buf_out_validate  = 0 ;
         sc_vb2_ops.buf_init  = 0 ;
         sc_vb2_ops.buf_prepare  = 0 ;
         sc_vb2_ops.buf_finish  = 0 ;
         sc_vb2_ops.buf_cleanup  = 0 ;
         sc_vb2_ops.prepare_streaming  = 0 ;
         sc_vb2_ops.start_streaming  = 0 ;
         sc_vb2_ops.stop_streaming  = 0 ;
         sc_vb2_ops.unprepare_streaming  = 0 ;
         sc_vb2_ops.buf_queue  = 0 ;
         sc_vb2_ops.buf_request_complete  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = queue_init(_priv, _src_vq, _dst_vq);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _src_vq ", ( _src_vq ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _dst_vq ", ( _dst_vq ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.queue_setup )(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int [], struct device *[])", ( sc_vb2_ops.queue_setup ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_prepare )(struct vb2_queue *)", ( sc_vb2_ops.wait_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_finish )(struct vb2_queue *)", ( sc_vb2_ops.wait_finish ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_out_validate )(struct vb2_buffer *)", ( sc_vb2_ops.buf_out_validate ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_init )(struct vb2_buffer *)", ( sc_vb2_ops.buf_init ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_prepare )(struct vb2_buffer *)", ( sc_vb2_ops.buf_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_finish )(struct vb2_buffer *)", ( sc_vb2_ops.buf_finish ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_cleanup )(struct vb2_buffer *)", ( sc_vb2_ops.buf_cleanup ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.prepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.prepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.start_streaming )(struct vb2_queue *, unsigned int)", ( sc_vb2_ops.start_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.stop_streaming )(struct vb2_queue *)", ( sc_vb2_ops.stop_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.unprepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.unprepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_queue )(struct vb2_buffer *)", ( sc_vb2_ops.buf_queue ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_request_complete )(struct vb2_buffer *)", ( sc_vb2_ops.buf_request_complete ));
    }
}
/* CPPTEST_TEST_CASE_END test_queue_init_1 */

/* CPPTEST_TEST_CASE_BEGIN test_queue_init_2 */
/* CPPTEST_TEST_CASE_CONTEXT int queue_init(void *, struct vb2_queue *, struct vb2_queue *) */
void TestSuite_scaler2dcore_c_8ed4121_test_queue_init_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing argument 2 (src_vq) */ 
    struct vb2_queue _src_vq_0 ;
    struct vb2_queue * _src_vq  = & _src_vq_0;
    /* Initializing argument 3 (dst_vq) */ 
    struct vb2_queue * _dst_vq  = 0 ;
    /* Initializing global variable sc_vb2_ops */ 
    {
         sc_vb2_ops.queue_setup  = 0 ;
         sc_vb2_ops.wait_prepare  = 0 ;
         sc_vb2_ops.wait_finish  = 0 ;
         sc_vb2_ops.buf_out_validate  = 0 ;
         sc_vb2_ops.buf_init  = 0 ;
         sc_vb2_ops.buf_prepare  = 0 ;
         sc_vb2_ops.buf_finish  = 0 ;
         sc_vb2_ops.buf_cleanup  = 0 ;
         sc_vb2_ops.prepare_streaming  = 0 ;
         sc_vb2_ops.start_streaming  = 0 ;
         sc_vb2_ops.stop_streaming  = 0 ;
         sc_vb2_ops.unprepare_streaming  = 0 ;
         sc_vb2_ops.buf_queue  = 0 ;
         sc_vb2_ops.buf_request_complete  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = queue_init(_priv, _src_vq, _dst_vq);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _src_vq ", ( _src_vq ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _dst_vq ", ( _dst_vq ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.queue_setup )(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int [], struct device *[])", ( sc_vb2_ops.queue_setup ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_prepare )(struct vb2_queue *)", ( sc_vb2_ops.wait_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_finish )(struct vb2_queue *)", ( sc_vb2_ops.wait_finish ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_out_validate )(struct vb2_buffer *)", ( sc_vb2_ops.buf_out_validate ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_init )(struct vb2_buffer *)", ( sc_vb2_ops.buf_init ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_prepare )(struct vb2_buffer *)", ( sc_vb2_ops.buf_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_finish )(struct vb2_buffer *)", ( sc_vb2_ops.buf_finish ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_cleanup )(struct vb2_buffer *)", ( sc_vb2_ops.buf_cleanup ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.prepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.prepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.start_streaming )(struct vb2_queue *, unsigned int)", ( sc_vb2_ops.start_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.stop_streaming )(struct vb2_queue *)", ( sc_vb2_ops.stop_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.unprepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.unprepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_queue )(struct vb2_buffer *)", ( sc_vb2_ops.buf_queue ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_request_complete )(struct vb2_buffer *)", ( sc_vb2_ops.buf_request_complete ));
    }
}
/* CPPTEST_TEST_CASE_END test_queue_init_2 */

/* CPPTEST_TEST_CASE_BEGIN test_queue_init_3 */
/* CPPTEST_TEST_CASE_CONTEXT int queue_init(void *, struct vb2_queue *, struct vb2_queue *) */
void TestSuite_scaler2dcore_c_8ed4121_test_queue_init_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing argument 2 (src_vq) */ 
    struct vb2_queue * _src_vq  = 0 ;
    /* Initializing argument 3 (dst_vq) */ 
    struct vb2_queue _dst_vq_0 ;
    struct vb2_queue * _dst_vq  = & _dst_vq_0;
    /* Initializing global variable sc_vb2_ops */ 
    {
         sc_vb2_ops.queue_setup  = 0 ;
         sc_vb2_ops.wait_prepare  = 0 ;
         sc_vb2_ops.wait_finish  = 0 ;
         sc_vb2_ops.buf_out_validate  = 0 ;
         sc_vb2_ops.buf_init  = 0 ;
         sc_vb2_ops.buf_prepare  = 0 ;
         sc_vb2_ops.buf_finish  = 0 ;
         sc_vb2_ops.buf_cleanup  = 0 ;
         sc_vb2_ops.prepare_streaming  = 0 ;
         sc_vb2_ops.start_streaming  = 0 ;
         sc_vb2_ops.stop_streaming  = 0 ;
         sc_vb2_ops.unprepare_streaming  = 0 ;
         sc_vb2_ops.buf_queue  = 0 ;
         sc_vb2_ops.buf_request_complete  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = queue_init(_priv, _src_vq, _dst_vq);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _src_vq ", ( _src_vq ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _dst_vq ", ( _dst_vq ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.queue_setup )(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int [], struct device *[])", ( sc_vb2_ops.queue_setup ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_prepare )(struct vb2_queue *)", ( sc_vb2_ops.wait_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_finish )(struct vb2_queue *)", ( sc_vb2_ops.wait_finish ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_out_validate )(struct vb2_buffer *)", ( sc_vb2_ops.buf_out_validate ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_init )(struct vb2_buffer *)", ( sc_vb2_ops.buf_init ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_prepare )(struct vb2_buffer *)", ( sc_vb2_ops.buf_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_finish )(struct vb2_buffer *)", ( sc_vb2_ops.buf_finish ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_cleanup )(struct vb2_buffer *)", ( sc_vb2_ops.buf_cleanup ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.prepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.prepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.start_streaming )(struct vb2_queue *, unsigned int)", ( sc_vb2_ops.start_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.stop_streaming )(struct vb2_queue *)", ( sc_vb2_ops.stop_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.unprepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.unprepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_queue )(struct vb2_buffer *)", ( sc_vb2_ops.buf_queue ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_request_complete )(struct vb2_buffer *)", ( sc_vb2_ops.buf_request_complete ));
    }
}
/* CPPTEST_TEST_CASE_END test_queue_init_3 */

/* CPPTEST_TEST_CASE_BEGIN test_queue_init_4 */
/* CPPTEST_TEST_CASE_CONTEXT int queue_init(void *, struct vb2_queue *, struct vb2_queue *) */
void TestSuite_scaler2dcore_c_8ed4121_test_queue_init_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing argument 2 (src_vq) */ 
    struct vb2_queue _src_vq_0 ;
    struct vb2_queue * _src_vq  = & _src_vq_0;
    /* Initializing argument 3 (dst_vq) */ 
    struct vb2_queue _dst_vq_1 ;
    struct vb2_queue * _dst_vq  = & _dst_vq_1;
    /* Initializing global variable sc_vb2_ops */ 
    {
         sc_vb2_ops.queue_setup  = 0 ;
         sc_vb2_ops.wait_prepare  = 0 ;
         sc_vb2_ops.wait_finish  = 0 ;
         sc_vb2_ops.buf_out_validate  = 0 ;
         sc_vb2_ops.buf_init  = 0 ;
         sc_vb2_ops.buf_prepare  = 0 ;
         sc_vb2_ops.buf_finish  = 0 ;
         sc_vb2_ops.buf_cleanup  = 0 ;
         sc_vb2_ops.prepare_streaming  = 0 ;
         sc_vb2_ops.start_streaming  = 0 ;
         sc_vb2_ops.stop_streaming  = 0 ;
         sc_vb2_ops.unprepare_streaming  = 0 ;
         sc_vb2_ops.buf_queue  = 0 ;
         sc_vb2_ops.buf_request_complete  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = queue_init(_priv, _src_vq, _dst_vq);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _src_vq ", ( _src_vq ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _dst_vq ", ( _dst_vq ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.queue_setup )(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int [], struct device *[])", ( sc_vb2_ops.queue_setup ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_prepare )(struct vb2_queue *)", ( sc_vb2_ops.wait_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_finish )(struct vb2_queue *)", ( sc_vb2_ops.wait_finish ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_out_validate )(struct vb2_buffer *)", ( sc_vb2_ops.buf_out_validate ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_init )(struct vb2_buffer *)", ( sc_vb2_ops.buf_init ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_prepare )(struct vb2_buffer *)", ( sc_vb2_ops.buf_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_finish )(struct vb2_buffer *)", ( sc_vb2_ops.buf_finish ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_cleanup )(struct vb2_buffer *)", ( sc_vb2_ops.buf_cleanup ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.prepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.prepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.start_streaming )(struct vb2_queue *, unsigned int)", ( sc_vb2_ops.start_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.stop_streaming )(struct vb2_queue *)", ( sc_vb2_ops.stop_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.unprepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.unprepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_queue )(struct vb2_buffer *)", ( sc_vb2_ops.buf_queue ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_request_complete )(struct vb2_buffer *)", ( sc_vb2_ops.buf_request_complete ));
    }
}
/* CPPTEST_TEST_CASE_END test_queue_init_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_context_and_run_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_context_and_run(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_add_context_and_run(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_context_and_run_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_context_and_run_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_context_and_run(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_1 ;
    struct sc_ctx * _ctx  = & _ctx_1;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_add_context_and_run(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_context_and_run_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_context_and_run_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_context_and_run(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_add_context_and_run(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_context_and_run_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_context_and_run_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_context_and_run(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_add_context_and_run(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_context_and_run_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_context_and_run_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_context_and_run(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_add_context_and_run(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_context_and_run_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_context_and_run_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_context_and_run(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_add_context_and_run(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_context_and_run_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_context_and_run_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_context_and_run(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_add_context_and_run(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_context_and_run_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_context_and_run_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_context_and_run(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_add_context_and_run(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_context_and_run_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_context_and_run_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_context_and_run(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_add_context_and_run(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_context_and_run_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_context_and_run_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_context_and_run(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_context_and_run_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_add_context_and_run(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_context_and_run_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_ctrls_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_ctrls(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_ctrls_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_add_ctrls(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_ctrls_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_add_ctrls_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_add_ctrls(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_add_ctrls_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        int _return  = sc_add_ctrls(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_add_ctrls_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_buffer_done_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_buffer_done(struct vb2_v4l2_buffer *, enum vb2_buffer_state) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_v4l2_buffer * _vb  = 0 ;
    /* Initializing argument 2 (state) */ 
    enum vb2_buffer_state _state  = VB2_BUF_STATE_DEQUEUED;
    {
        /* Tested function call */
        sc_buffer_done(_vb, _state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_buffer_done_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_buffer_done_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_buffer_done(struct vb2_v4l2_buffer *, enum vb2_buffer_state) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_v4l2_buffer * _vb  = 0 ;
    /* Initializing argument 2 (state) */ 
    enum vb2_buffer_state _state  = VB2_BUF_STATE_ERROR;
    {
        /* Tested function call */
        sc_buffer_done(_vb, _state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_buffer_done_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_buffer_done_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_buffer_done(struct vb2_v4l2_buffer *, enum vb2_buffer_state) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_v4l2_buffer _vb_0 ;
    struct vb2_v4l2_buffer * _vb  = & _vb_0;
    /* Initializing argument 2 (state) */ 
    enum vb2_buffer_state _state  = VB2_BUF_STATE_DEQUEUED;
    {
        /* Tested function call */
        sc_buffer_done(_vb, _state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_buffer_done_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_buffer_done_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_buffer_done(struct vb2_v4l2_buffer *, enum vb2_buffer_state) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_v4l2_buffer * _vb  = 0 ;
    /* Initializing argument 2 (state) */ 
    enum vb2_buffer_state _state  = VB2_BUF_STATE_IN_REQUEST;
    {
        /* Tested function call */
        sc_buffer_done(_vb, _state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_buffer_done_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_buffer_done_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_buffer_done(struct vb2_v4l2_buffer *, enum vb2_buffer_state) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_v4l2_buffer _vb_0 ;
    struct vb2_v4l2_buffer * _vb  = & _vb_0;
    /* Initializing argument 2 (state) */ 
    enum vb2_buffer_state _state  = VB2_BUF_STATE_IN_REQUEST;
    {
        /* Tested function call */
        sc_buffer_done(_vb, _state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_buffer_done_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_buffer_done_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_buffer_done(struct vb2_v4l2_buffer *, enum vb2_buffer_state) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_v4l2_buffer * _vb  = 0 ;
    /* Initializing argument 2 (state) */ 
    enum vb2_buffer_state _state  = VB2_BUF_STATE_PREPARING;
    {
        /* Tested function call */
        sc_buffer_done(_vb, _state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_buffer_done_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_buffer_done_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_buffer_done(struct vb2_v4l2_buffer *, enum vb2_buffer_state) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_v4l2_buffer _vb_0 ;
    struct vb2_v4l2_buffer * _vb  = & _vb_0;
    /* Initializing argument 2 (state) */ 
    enum vb2_buffer_state _state  = VB2_BUF_STATE_PREPARING;
    {
        /* Tested function call */
        sc_buffer_done(_vb, _state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_buffer_done_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_buffer_done_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_buffer_done(struct vb2_v4l2_buffer *, enum vb2_buffer_state) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_v4l2_buffer * _vb  = 0 ;
    /* Initializing argument 2 (state) */ 
    enum vb2_buffer_state _state  = VB2_BUF_STATE_QUEUED;
    {
        /* Tested function call */
        sc_buffer_done(_vb, _state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_buffer_done_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_buffer_done_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_buffer_done(struct vb2_v4l2_buffer *, enum vb2_buffer_state) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_v4l2_buffer * _vb  = 0 ;
    /* Initializing argument 2 (state) */ 
    enum vb2_buffer_state _state  = VB2_BUF_STATE_ACTIVE;
    {
        /* Tested function call */
        sc_buffer_done(_vb, _state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_buffer_done_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_buffer_done_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_buffer_done(struct vb2_v4l2_buffer *, enum vb2_buffer_state) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_buffer_done_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_v4l2_buffer * _vb  = 0 ;
    /* Initializing argument 2 (state) */ 
    enum vb2_buffer_state _state  = VB2_BUF_STATE_DONE;
    {
        /* Tested function call */
        sc_buffer_done(_vb, _state);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_v4l2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_buffer_done_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_ayv12_planesize_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_ayv12_planesize(const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    __u32 _width  = 4294967280;
    /* Initializing argument 2 (height) */ 
    __u32 _height  = 4294967280;
    /* Initializing argument 3 (y_plane) */ 
    u32 * _y_plane  = 0 ;
    /* Initializing argument 4 (cb_plane) */ 
    u32 * _cb_plane  = 0 ;
    /* Initializing argument 5 (cr_plane) */ 
    u32 * _cr_plane  = 0 ;
    {
        /* Tested function call */
        sc_calc_ayv12_planesize(_width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_ayv12_planesize_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_ayv12_planesize_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_ayv12_planesize(const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    __u32 _width  = 1u;
    /* Initializing argument 2 (height) */ 
    __u32 _height  = 4294967280;
    /* Initializing argument 3 (y_plane) */ 
    u32 _y_plane_0  = 0u;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 4 (cb_plane) */ 
    u32 * _cb_plane  = 0 ;
    /* Initializing argument 5 (cr_plane) */ 
    u32 _cr_plane_1  = 0u;
    u32 * _cr_plane  = & _cr_plane_1;
    {
        /* Tested function call */
        sc_calc_ayv12_planesize(_width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_ayv12_planesize_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_ayv12_planesize_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_ayv12_planesize(const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    __u32 _width  = 2;
    /* Initializing argument 2 (height) */ 
    __u32 _height  = 4294967280;
    /* Initializing argument 3 (y_plane) */ 
    u32 * _y_plane  = 0 ;
    /* Initializing argument 4 (cb_plane) */ 
    u32 * _cb_plane  = 0 ;
    /* Initializing argument 5 (cr_plane) */ 
    u32 * _cr_plane  = 0 ;
    {
        /* Tested function call */
        sc_calc_ayv12_planesize(_width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_ayv12_planesize_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_ayv12_planesize_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_ayv12_planesize(const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    __u32 _width  = 15;
    /* Initializing argument 2 (height) */ 
    __u32 _height  = 0u;
    /* Initializing argument 3 (y_plane) */ 
    u32 * _y_plane  = 0 ;
    /* Initializing argument 4 (cb_plane) */ 
    u32 _cb_plane_0  = 0u;
    u32 * _cb_plane  = & _cb_plane_0;
    /* Initializing argument 5 (cr_plane) */ 
    u32 * _cr_plane  = 0 ;
    {
        /* Tested function call */
        sc_calc_ayv12_planesize(_width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_ayv12_planesize_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_ayv12_planesize_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_ayv12_planesize(const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    __u32 _width  = 1;
    /* Initializing argument 2 (height) */ 
    __u32 _height  = 1u;
    /* Initializing argument 3 (y_plane) */ 
    u32 _y_plane_0  = 4294967280;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 4 (cb_plane) */ 
    u32 _cb_plane_1  = 1u;
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 5 (cr_plane) */ 
    u32 _cr_plane_2  = 4294967280;
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        sc_calc_ayv12_planesize(_width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_ayv12_planesize_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_ayv12_planesize_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_ayv12_planesize(const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    __u32 _width  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 2 (height) */ 
    __u32 _height  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (y_plane) */ 
    u32 _y_plane_0  = 2;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 4 (cb_plane) */ 
    u32 _cb_plane_1  = cpptestLimitsGetMaxUnsignedInt();
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 5 (cr_plane) */ 
    u32 _cr_plane_2  = 2;
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        sc_calc_ayv12_planesize(_width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_ayv12_planesize_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_ayv12_planesize_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_ayv12_planesize(const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    __u32 _width  = 1u;
    /* Initializing argument 2 (height) */ 
    __u32 _height  = 1;
    /* Initializing argument 3 (y_plane) */ 
    u32 _y_plane_0  = 15;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 4 (cb_plane) */ 
    u32 _cb_plane_1  = 1;
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 5 (cr_plane) */ 
    u32 _cr_plane_2  = 15;
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        sc_calc_ayv12_planesize(_width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_ayv12_planesize_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_ayv12_planesize_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_ayv12_planesize(const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    __u32 _width  = 0u;
    /* Initializing argument 2 (height) */ 
    __u32 _height  = 15;
    /* Initializing argument 3 (y_plane) */ 
    u32 _y_plane_0  = 1;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 4 (cb_plane) */ 
    u32 _cb_plane_1  = 15;
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 5 (cr_plane) */ 
    u32 _cr_plane_2  = 1;
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        sc_calc_ayv12_planesize(_width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_ayv12_planesize_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_ayv12_planesize_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_ayv12_planesize(const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    __u32 _width  = 2;
    /* Initializing argument 2 (height) */ 
    __u32 _height  = 15;
    /* Initializing argument 3 (y_plane) */ 
    u32 _y_plane_0  = cpptestLimitsGetMaxUnsignedInt();
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 4 (cb_plane) */ 
    u32 _cb_plane_1  = 2;
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 5 (cr_plane) */ 
    u32 _cr_plane_2  = cpptestLimitsGetMaxUnsignedInt();
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        sc_calc_ayv12_planesize(_width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_ayv12_planesize_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_ayv12_planesize_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_ayv12_planesize(const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_ayv12_planesize_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    __u32 _width  = 1;
    /* Initializing argument 2 (height) */ 
    __u32 _height  = 2;
    /* Initializing argument 3 (y_plane) */ 
    u32 _y_plane_0  = 1u;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 4 (cb_plane) */ 
    u32 _cb_plane_1  = 4294967280;
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 5 (cr_plane) */ 
    u32 _cr_plane_2  = 1u;
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        sc_calc_ayv12_planesize(_width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_ayv12_planesize_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_bandwidth_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_bandwidth(struct sc_ctx *, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (is_read) */ 
    bool _is_read  = false;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_bandwidth(_ctx, _is_read);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_bandwidth_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_bandwidth_2 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_bandwidth(struct sc_ctx *, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (is_read) */ 
    bool _is_read  = false;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_bandwidth(_ctx, _is_read);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_bandwidth_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_bandwidth_3 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_bandwidth(struct sc_ctx *, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (is_read) */ 
    bool _is_read  = true;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_bandwidth(_ctx, _is_read);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_bandwidth_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_bandwidth_4 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_bandwidth(struct sc_ctx *, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_bandwidth_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (is_read) */ 
    bool _is_read  = true;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_bandwidth(_ctx, _is_read);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_bandwidth_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_ayv12_planesize_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_ayv12_planesize(const u32, const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    u32 _fmt  = 0;
    /* Initializing argument 2 (width) */ 
    __u32 _width  = 0;
    /* Initializing argument 3 (height) */ 
    __u32 _height  = 0;
    /* Initializing argument 4 (y_plane) */ 
    u32 * _y_plane  = 0 ;
    /* Initializing argument 5 (cb_plane) */ 
    u32 * _cb_plane  = 0 ;
    /* Initializing argument 6 (cr_plane) */ 
    u32 * _cr_plane  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_ayv12_planesize(_fmt, _width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_ayv12_planesize_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_ayv12_planesize_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_ayv12_planesize(const u32, const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    u32 _fmt  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 2 (width) */ 
    __u32 _width  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (height) */ 
    __u32 _height  = 0;
    /* Initializing argument 4 (y_plane) */ 
    u32 _y_plane_0  = 0;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 5 (cb_plane) */ 
    u32 _cb_plane_1  = cpptestLimitsGetMaxUnsignedInt();
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 6 (cr_plane) */ 
    u32 _cr_plane_2  = 0u;
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_ayv12_planesize(_fmt, _width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_ayv12_planesize_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_ayv12_planesize_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_ayv12_planesize(const u32, const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    u32 _fmt  = 842094170;
    /* Initializing argument 2 (width) */ 
    __u32 _width  = 0;
    /* Initializing argument 3 (height) */ 
    __u32 _height  = 0;
    /* Initializing argument 4 (y_plane) */ 
    u32 * _y_plane  = 0 ;
    /* Initializing argument 5 (cb_plane) */ 
    u32 * _cb_plane  = 0 ;
    /* Initializing argument 6 (cr_plane) */ 
    u32 * _cr_plane  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_ayv12_planesize(_fmt, _width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_ayv12_planesize_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_ayv12_planesize_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_ayv12_planesize(const u32, const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    u32 _fmt  = 842094168;
    /* Initializing argument 2 (width) */ 
    __u32 _width  = 1u;
    /* Initializing argument 3 (height) */ 
    __u32 _height  = 0u;
    /* Initializing argument 4 (y_plane) */ 
    u32 _y_plane_0  = 1u;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 5 (cb_plane) */ 
    u32 _cb_plane_1  = cpptestLimitsGetMaxUnsignedInt();
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 6 (cr_plane) */ 
    u32 * _cr_plane  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_ayv12_planesize(_fmt, _width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_ayv12_planesize_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_ayv12_planesize_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_ayv12_planesize(const u32, const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    u32 _fmt  = 825380185;
    /* Initializing argument 2 (width) */ 
    __u32 _width  = 0;
    /* Initializing argument 3 (height) */ 
    __u32 _height  = 0u;
    /* Initializing argument 4 (y_plane) */ 
    u32 _y_plane_0  = cpptestLimitsGetMaxUnsignedInt();
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 5 (cb_plane) */ 
    u32 * _cb_plane  = 0 ;
    /* Initializing argument 6 (cr_plane) */ 
    u32 _cr_plane_1  = 0;
    u32 * _cr_plane  = & _cr_plane_1;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_ayv12_planesize(_fmt, _width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_ayv12_planesize_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_ayv12_planesize_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_ayv12_planesize(const u32, const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    u32 _fmt  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 2 (width) */ 
    __u32 _width  = 1u;
    /* Initializing argument 3 (height) */ 
    __u32 _height  = 1u;
    /* Initializing argument 4 (y_plane) */ 
    u32 _y_plane_0  = 0;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 5 (cb_plane) */ 
    u32 _cb_plane_1  = 1u;
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 6 (cr_plane) */ 
    u32 _cr_plane_2  = 0;
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_ayv12_planesize(_fmt, _width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_ayv12_planesize_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_ayv12_planesize_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_ayv12_planesize(const u32, const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    u32 _fmt  = 0u;
    /* Initializing argument 2 (width) */ 
    __u32 _width  = 0;
    /* Initializing argument 3 (height) */ 
    __u32 _height  = 1u;
    /* Initializing argument 4 (y_plane) */ 
    u32 * _y_plane  = 0 ;
    /* Initializing argument 5 (cb_plane) */ 
    u32 _cb_plane_0  = 0;
    u32 * _cb_plane  = & _cb_plane_0;
    /* Initializing argument 6 (cr_plane) */ 
    u32 _cr_plane_1  = cpptestLimitsGetMaxUnsignedInt();
    u32 * _cr_plane  = & _cr_plane_1;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_ayv12_planesize(_fmt, _width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_ayv12_planesize_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_ayv12_planesize_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_ayv12_planesize(const u32, const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    u32 _fmt  = 842094170;
    /* Initializing argument 2 (width) */ 
    __u32 _width  = 0u;
    /* Initializing argument 3 (height) */ 
    __u32 _height  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 4 (y_plane) */ 
    u32 _y_plane_0  = 0u;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 5 (cb_plane) */ 
    u32 _cb_plane_1  = 1u;
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 6 (cr_plane) */ 
    u32 _cr_plane_2  = cpptestLimitsGetMaxUnsignedInt();
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_ayv12_planesize(_fmt, _width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_ayv12_planesize_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_ayv12_planesize_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_ayv12_planesize(const u32, const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    u32 _fmt  = 842094168;
    /* Initializing argument 2 (width) */ 
    __u32 _width  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (height) */ 
    __u32 _height  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 4 (y_plane) */ 
    u32 _y_plane_0  = 1u;
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 5 (cb_plane) */ 
    u32 _cb_plane_1  = 0;
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 6 (cr_plane) */ 
    u32 _cr_plane_2  = 1u;
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_ayv12_planesize(_fmt, _width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_ayv12_planesize_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_ayv12_planesize_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_ayv12_planesize(const u32, const __u32, const __u32, u32 *, u32 *, u32 *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_ayv12_planesize_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fmt) */ 
    u32 _fmt  = 825380185;
    /* Initializing argument 2 (width) */ 
    __u32 _width  = 0u;
    /* Initializing argument 3 (height) */ 
    __u32 _height  = 0;
    /* Initializing argument 4 (y_plane) */ 
    u32 _y_plane_0  = cpptestLimitsGetMaxUnsignedInt();
    u32 * _y_plane  = & _y_plane_0;
    /* Initializing argument 5 (cb_plane) */ 
    u32 _cb_plane_1  = 0u;
    u32 * _cb_plane  = & _cb_plane_1;
    /* Initializing argument 6 (cr_plane) */ 
    u32 _cr_plane_2  = 1u;
    u32 * _cr_plane  = & _cr_plane_2;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_ayv12_planesize(_fmt, _width, _height, _y_plane, _cb_plane, _cr_plane);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _y_plane ", ( _y_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cb_plane ", ( _cb_plane ));
        CPPTEST_POST_CONDITION_PTR("u32 * _cr_plane ", ( _cr_plane ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_ayv12_planesize_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_s10b_size_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_s10b_size(const struct sc_fmt *, struct v4l2_pix_format_mplane *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    const struct sc_fmt * _sc_fmt  = 0 ;
    /* Initializing argument 2 (pixm) */ 
    struct v4l2_pix_format_mplane * _pixm  = 0 ;
    /* Initializing argument 3 (ext_size) */ 
    unsigned _ext_size  = 944517453;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_s10b_size(_sc_fmt, _pixm, _ext_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_pix_format_mplane * _pixm ", ( _pixm ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_s10b_size_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_s10b_size_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_s10b_size(const struct sc_fmt *, struct v4l2_pix_format_mplane *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    const struct sc_fmt * _sc_fmt  = 0 ;
    /* Initializing argument 2 (pixm) */ 
    struct v4l2_pix_format_mplane _pixm_0 ;
    struct v4l2_pix_format_mplane * _pixm  = & _pixm_0;
    /* Initializing argument 3 (ext_size) */ 
    unsigned _ext_size  = 944517453;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_s10b_size(_sc_fmt, _pixm, _ext_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_pix_format_mplane * _pixm ", ( _pixm ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_s10b_size_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_s10b_size_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_s10b_size(const struct sc_fmt *, struct v4l2_pix_format_mplane *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    struct sc_fmt _sc_fmt_0 ;
    const struct sc_fmt * _sc_fmt  = & _sc_fmt_0;
    /* Initializing argument 2 (pixm) */ 
    struct v4l2_pix_format_mplane * _pixm  = 0 ;
    /* Initializing argument 3 (ext_size) */ 
    unsigned _ext_size  = 944517453;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_s10b_size(_sc_fmt, _pixm, _ext_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_pix_format_mplane * _pixm ", ( _pixm ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_s10b_size_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_s10b_size_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_s10b_size(const struct sc_fmt *, struct v4l2_pix_format_mplane *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    struct sc_fmt _sc_fmt_0 ;
    const struct sc_fmt * _sc_fmt  = & _sc_fmt_0;
    /* Initializing argument 2 (pixm) */ 
    struct v4l2_pix_format_mplane * _pixm  = 0 ;
    /* Initializing argument 3 (ext_size) */ 
    unsigned _ext_size  = 827076941;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_s10b_size(_sc_fmt, _pixm, _ext_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_pix_format_mplane * _pixm ", ( _pixm ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_s10b_size_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_s10b_size_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_s10b_size(const struct sc_fmt *, struct v4l2_pix_format_mplane *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    struct sc_fmt _sc_fmt_0 ;
    const struct sc_fmt * _sc_fmt  = & _sc_fmt_0;
    /* Initializing argument 2 (pixm) */ 
    struct v4l2_pix_format_mplane * _pixm  = 0 ;
    /* Initializing argument 3 (ext_size) */ 
    unsigned _ext_size  = 3;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_s10b_size(_sc_fmt, _pixm, _ext_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_pix_format_mplane * _pixm ", ( _pixm ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_s10b_size_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_s10b_size_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_s10b_size(const struct sc_fmt *, struct v4l2_pix_format_mplane *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    struct sc_fmt _sc_fmt_0 ;
    const struct sc_fmt * _sc_fmt  = & _sc_fmt_0;
    /* Initializing argument 2 (pixm) */ 
    struct v4l2_pix_format_mplane * _pixm  = 0 ;
    /* Initializing argument 3 (ext_size) */ 
    unsigned _ext_size  = 2;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_s10b_size(_sc_fmt, _pixm, _ext_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_pix_format_mplane * _pixm ", ( _pixm ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_s10b_size_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_s10b_size_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_s10b_size(const struct sc_fmt *, struct v4l2_pix_format_mplane *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    struct sc_fmt _sc_fmt_0 ;
    const struct sc_fmt * _sc_fmt  = & _sc_fmt_0;
    /* Initializing argument 2 (pixm) */ 
    struct v4l2_pix_format_mplane * _pixm  = 0 ;
    /* Initializing argument 3 (ext_size) */ 
    unsigned _ext_size  = 1;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_s10b_size(_sc_fmt, _pixm, _ext_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_pix_format_mplane * _pixm ", ( _pixm ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_s10b_size_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_s10b_size_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_s10b_size(const struct sc_fmt *, struct v4l2_pix_format_mplane *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    struct sc_fmt _sc_fmt_0 ;
    const struct sc_fmt * _sc_fmt  = & _sc_fmt_0;
    /* Initializing argument 2 (pixm) */ 
    struct v4l2_pix_format_mplane * _pixm  = 0 ;
    /* Initializing argument 3 (ext_size) */ 
    unsigned _ext_size  = 0;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_s10b_size(_sc_fmt, _pixm, _ext_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_pix_format_mplane * _pixm ", ( _pixm ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_s10b_size_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_s10b_size_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_s10b_size(const struct sc_fmt *, struct v4l2_pix_format_mplane *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    const struct sc_fmt * _sc_fmt  = 0 ;
    /* Initializing argument 2 (pixm) */ 
    struct v4l2_pix_format_mplane _pixm_1 ;
    struct v4l2_pix_format_mplane * _pixm  = & _pixm_1;
    /* Initializing argument 3 (ext_size) */ 
    unsigned _ext_size  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_s10b_size(_sc_fmt, _pixm, _ext_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_pix_format_mplane * _pixm ", ( _pixm ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_s10b_size_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_fmt_s10b_size_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_fmt_s10b_size(const struct sc_fmt *, struct v4l2_pix_format_mplane *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_fmt_s10b_size_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_fmt) */ 
    struct sc_fmt _sc_fmt_0 ;
    const struct sc_fmt * _sc_fmt  = & _sc_fmt_0;
    /* Initializing argument 2 (pixm) */ 
    struct v4l2_pix_format_mplane _pixm_1 ;
    struct v4l2_pix_format_mplane * _pixm  = & _pixm_1;
    /* Initializing argument 3 (ext_size) */ 
    unsigned _ext_size  = 1u;
    {
        /* Tested function call */
        int _return  = sc_calc_fmt_s10b_size(_sc_fmt, _pixm, _ext_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_pix_format_mplane * _pixm ", ( _pixm ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_fmt_s10b_size_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_intbufsize_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_intbufsize(struct sc_dev *, struct sc_int_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (int_frame) */ 
    struct sc_int_frame * _int_frame  = 0 ;
    {
        /* Tested function call */
        sc_calc_intbufsize(_sc, _int_frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _int_frame ", ( _int_frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_intbufsize_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_intbufsize_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_intbufsize(struct sc_dev *, struct sc_int_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (int_frame) */ 
    struct sc_int_frame * _int_frame  = 0 ;
    {
        /* Tested function call */
        sc_calc_intbufsize(_sc, _int_frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _int_frame ", ( _int_frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_intbufsize_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_intbufsize_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_intbufsize(struct sc_dev *, struct sc_int_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (int_frame) */ 
    struct sc_int_frame _int_frame_0 ;
    struct sc_int_frame * _int_frame  = & _int_frame_0;
    {
        /* Tested function call */
        sc_calc_intbufsize(_sc, _int_frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _int_frame ", ( _int_frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_intbufsize_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_intbufsize_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_intbufsize(struct sc_dev *, struct sc_int_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_intbufsize_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (int_frame) */ 
    struct sc_int_frame _int_frame_1 ;
    struct sc_int_frame * _int_frame  = & _int_frame_1;
    {
        /* Tested function call */
        sc_calc_intbufsize(_sc, _int_frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_int_frame * _int_frame ", ( _int_frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_intbufsize_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_planesize_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_planesize(struct sc_frame *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (pixsize) */ 
    unsigned _pixsize  = 8;
    {
        /* Tested function call */
        sc_calc_planesize(_frame, _pixsize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_planesize_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_planesize_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_planesize(struct sc_frame *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame _frame_0 ;
    struct sc_frame * _frame  = & _frame_0;
    /* Initializing argument 2 (pixsize) */ 
    unsigned _pixsize  = 0u;
    {
        /* Tested function call */
        sc_calc_planesize(_frame, _pixsize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_planesize_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_planesize_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_planesize(struct sc_frame *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame _frame_0 ;
    struct sc_frame * _frame  = & _frame_0;
    /* Initializing argument 2 (pixsize) */ 
    unsigned _pixsize  = 8;
    {
        /* Tested function call */
        sc_calc_planesize(_frame, _pixsize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_planesize_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_planesize_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_planesize(struct sc_frame *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (pixsize) */ 
    unsigned _pixsize  = 0;
    {
        /* Tested function call */
        sc_calc_planesize(_frame, _pixsize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_planesize_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_planesize_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_planesize(struct sc_frame *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame _frame_0 ;
    struct sc_frame * _frame  = & _frame_0;
    /* Initializing argument 2 (pixsize) */ 
    unsigned _pixsize  = 0;
    {
        /* Tested function call */
        sc_calc_planesize(_frame, _pixsize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_planesize_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_planesize_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_planesize(struct sc_frame *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (pixsize) */ 
    unsigned _pixsize  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        sc_calc_planesize(_frame, _pixsize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_planesize_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_planesize_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_planesize(struct sc_frame *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame _frame_0 ;
    struct sc_frame * _frame  = & _frame_0;
    /* Initializing argument 2 (pixsize) */ 
    unsigned _pixsize  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        sc_calc_planesize(_frame, _pixsize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_planesize_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_planesize_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_planesize(struct sc_frame *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (pixsize) */ 
    unsigned _pixsize  = 1u;
    {
        /* Tested function call */
        sc_calc_planesize(_frame, _pixsize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_planesize_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_planesize_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_planesize(struct sc_frame *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame _frame_0 ;
    struct sc_frame * _frame  = & _frame_0;
    /* Initializing argument 2 (pixsize) */ 
    unsigned _pixsize  = 1u;
    {
        /* Tested function call */
        sc_calc_planesize(_frame, _pixsize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_planesize_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_planesize_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_calc_planesize(struct sc_frame *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_planesize_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (pixsize) */ 
    unsigned _pixsize  = 0u;
    {
        /* Tested function call */
        sc_calc_planesize(_frame, _pixsize);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_planesize_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_s10b_planesize_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_s10b_planesize(u32, u32, u32, u32 *, u32 *, bool, u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pixelformat) */ 
    u32 _pixelformat  = 64;
    /* Initializing argument 2 (width) */ 
    u32 _width  = 64;
    /* Initializing argument 3 (height) */ 
    u32 _height  = 64;
    /* Initializing argument 4 (ysize) */ 
    u32 * _ysize  = 0 ;
    /* Initializing argument 5 (csize) */ 
    u32 * _csize  = 0 ;
    /* Initializing argument 6 (only_8bit) */ 
    bool _only_8bit  = false;
    /* Initializing argument 7 (byte32num) */ 
    u8 _byte32num  = cpptestLimitsGetMaxUnsignedChar();
    {
        /* Tested function call */
        int _return  = sc_calc_s10b_planesize(_pixelformat, _width, _height, _ysize, _csize, _only_8bit, _byte32num);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _ysize ", ( _ysize ));
        CPPTEST_POST_CONDITION_PTR("u32 * _csize ", ( _csize ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_s10b_planesize_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_s10b_planesize_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_s10b_planesize(u32, u32, u32, u32 *, u32 *, bool, u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pixelformat) */ 
    u32 _pixelformat  = 64;
    /* Initializing argument 2 (width) */ 
    u32 _width  = 64;
    /* Initializing argument 3 (height) */ 
    u32 _height  = 64;
    /* Initializing argument 4 (ysize) */ 
    u32 * _ysize  = 0 ;
    /* Initializing argument 5 (csize) */ 
    u32 _csize_0  = 4;
    u32 * _csize  = & _csize_0;
    /* Initializing argument 6 (only_8bit) */ 
    bool _only_8bit  = true;
    /* Initializing argument 7 (byte32num) */ 
    u8 _byte32num  = 0;
    {
        /* Tested function call */
        int _return  = sc_calc_s10b_planesize(_pixelformat, _width, _height, _ysize, _csize, _only_8bit, _byte32num);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _ysize ", ( _ysize ));
        CPPTEST_POST_CONDITION_PTR("u32 * _csize ", ( _csize ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_s10b_planesize_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_s10b_planesize_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_s10b_planesize(u32, u32, u32, u32 *, u32 *, bool, u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pixelformat) */ 
    u32 _pixelformat  = 63;
    /* Initializing argument 2 (width) */ 
    u32 _width  = 64;
    /* Initializing argument 3 (height) */ 
    u32 _height  = 64;
    /* Initializing argument 4 (ysize) */ 
    u32 * _ysize  = 0 ;
    /* Initializing argument 5 (csize) */ 
    u32 * _csize  = 0 ;
    /* Initializing argument 6 (only_8bit) */ 
    bool _only_8bit  = false;
    /* Initializing argument 7 (byte32num) */ 
    u8 _byte32num  = cpptestLimitsGetMaxUnsignedChar();
    {
        /* Tested function call */
        int _return  = sc_calc_s10b_planesize(_pixelformat, _width, _height, _ysize, _csize, _only_8bit, _byte32num);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _ysize ", ( _ysize ));
        CPPTEST_POST_CONDITION_PTR("u32 * _csize ", ( _csize ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_s10b_planesize_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_s10b_planesize_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_s10b_planesize(u32, u32, u32, u32 *, u32 *, bool, u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pixelformat) */ 
    u32 _pixelformat  = 64;
    /* Initializing argument 2 (width) */ 
    u32 _width  = 64;
    /* Initializing argument 3 (height) */ 
    u32 _height  = 64;
    /* Initializing argument 4 (ysize) */ 
    u32 * _ysize  = 0 ;
    /* Initializing argument 5 (csize) */ 
    u32 _csize_0  = 16;
    u32 * _csize  = & _csize_0;
    /* Initializing argument 6 (only_8bit) */ 
    bool _only_8bit  = false;
    /* Initializing argument 7 (byte32num) */ 
    u8 _byte32num  = cpptestLimitsGetMaxUnsignedChar();
    {
        /* Tested function call */
        int _return  = sc_calc_s10b_planesize(_pixelformat, _width, _height, _ysize, _csize, _only_8bit, _byte32num);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _ysize ", ( _ysize ));
        CPPTEST_POST_CONDITION_PTR("u32 * _csize ", ( _csize ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_s10b_planesize_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_s10b_planesize_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_s10b_planesize(u32, u32, u32, u32 *, u32 *, bool, u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pixelformat) */ 
    u32 _pixelformat  = 64;
    /* Initializing argument 2 (width) */ 
    u32 _width  = 64;
    /* Initializing argument 3 (height) */ 
    u32 _height  = 64;
    /* Initializing argument 4 (ysize) */ 
    u32 * _ysize  = 0 ;
    /* Initializing argument 5 (csize) */ 
    u32 _csize_0  = 4;
    u32 * _csize  = & _csize_0;
    /* Initializing argument 6 (only_8bit) */ 
    bool _only_8bit  = true;
    /* Initializing argument 7 (byte32num) */ 
    u8 _byte32num  = cpptestLimitsGetMaxUnsignedChar();
    {
        /* Tested function call */
        int _return  = sc_calc_s10b_planesize(_pixelformat, _width, _height, _ysize, _csize, _only_8bit, _byte32num);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _ysize ", ( _ysize ));
        CPPTEST_POST_CONDITION_PTR("u32 * _csize ", ( _csize ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_s10b_planesize_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_s10b_planesize_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_s10b_planesize(u32, u32, u32, u32 *, u32 *, bool, u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pixelformat) */ 
    u32 _pixelformat  = 64;
    /* Initializing argument 2 (width) */ 
    u32 _width  = 64;
    /* Initializing argument 3 (height) */ 
    u32 _height  = 64;
    /* Initializing argument 4 (ysize) */ 
    u32 * _ysize  = 0 ;
    /* Initializing argument 5 (csize) */ 
    u32 * _csize  = 0 ;
    /* Initializing argument 6 (only_8bit) */ 
    bool _only_8bit  = false;
    /* Initializing argument 7 (byte32num) */ 
    u8 _byte32num  = 1;
    {
        /* Tested function call */
        int _return  = sc_calc_s10b_planesize(_pixelformat, _width, _height, _ysize, _csize, _only_8bit, _byte32num);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _ysize ", ( _ysize ));
        CPPTEST_POST_CONDITION_PTR("u32 * _csize ", ( _csize ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_s10b_planesize_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_s10b_planesize_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_s10b_planesize(u32, u32, u32, u32 *, u32 *, bool, u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pixelformat) */ 
    u32 _pixelformat  = 64;
    /* Initializing argument 2 (width) */ 
    u32 _width  = 64;
    /* Initializing argument 3 (height) */ 
    u32 _height  = 64;
    /* Initializing argument 4 (ysize) */ 
    u32 * _ysize  = 0 ;
    /* Initializing argument 5 (csize) */ 
    u32 _csize_0  = 16;
    u32 * _csize  = & _csize_0;
    /* Initializing argument 6 (only_8bit) */ 
    bool _only_8bit  = false;
    /* Initializing argument 7 (byte32num) */ 
    u8 _byte32num  = 1;
    {
        /* Tested function call */
        int _return  = sc_calc_s10b_planesize(_pixelformat, _width, _height, _ysize, _csize, _only_8bit, _byte32num);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _ysize ", ( _ysize ));
        CPPTEST_POST_CONDITION_PTR("u32 * _csize ", ( _csize ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_s10b_planesize_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_s10b_planesize_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_s10b_planesize(u32, u32, u32, u32 *, u32 *, bool, u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pixelformat) */ 
    u32 _pixelformat  = 64;
    /* Initializing argument 2 (width) */ 
    u32 _width  = 64;
    /* Initializing argument 3 (height) */ 
    u32 _height  = 64;
    /* Initializing argument 4 (ysize) */ 
    u32 * _ysize  = 0 ;
    /* Initializing argument 5 (csize) */ 
    u32 _csize_0  = 4;
    u32 * _csize  = & _csize_0;
    /* Initializing argument 6 (only_8bit) */ 
    bool _only_8bit  = true;
    /* Initializing argument 7 (byte32num) */ 
    u8 _byte32num  = 1;
    {
        /* Tested function call */
        int _return  = sc_calc_s10b_planesize(_pixelformat, _width, _height, _ysize, _csize, _only_8bit, _byte32num);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _ysize ", ( _ysize ));
        CPPTEST_POST_CONDITION_PTR("u32 * _csize ", ( _csize ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_s10b_planesize_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_s10b_planesize_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_s10b_planesize(u32, u32, u32, u32 *, u32 *, bool, u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pixelformat) */ 
    u32 _pixelformat  = 64;
    /* Initializing argument 2 (width) */ 
    u32 _width  = 64;
    /* Initializing argument 3 (height) */ 
    u32 _height  = 64;
    /* Initializing argument 4 (ysize) */ 
    u32 * _ysize  = 0 ;
    /* Initializing argument 5 (csize) */ 
    u32 * _csize  = 0 ;
    /* Initializing argument 6 (only_8bit) */ 
    bool _only_8bit  = false;
    /* Initializing argument 7 (byte32num) */ 
    u8 _byte32num  = 0;
    {
        /* Tested function call */
        int _return  = sc_calc_s10b_planesize(_pixelformat, _width, _height, _ysize, _csize, _only_8bit, _byte32num);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _ysize ", ( _ysize ));
        CPPTEST_POST_CONDITION_PTR("u32 * _csize ", ( _csize ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_s10b_planesize_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_s10b_planesize_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_calc_s10b_planesize(u32, u32, u32, u32 *, u32 *, bool, u8) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_s10b_planesize_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pixelformat) */ 
    u32 _pixelformat  = 64;
    /* Initializing argument 2 (width) */ 
    u32 _width  = 64;
    /* Initializing argument 3 (height) */ 
    u32 _height  = 64;
    /* Initializing argument 4 (ysize) */ 
    u32 * _ysize  = 0 ;
    /* Initializing argument 5 (csize) */ 
    u32 _csize_0  = 16;
    u32 * _csize  = & _csize_0;
    /* Initializing argument 6 (only_8bit) */ 
    bool _only_8bit  = false;
    /* Initializing argument 7 (byte32num) */ 
    u8 _byte32num  = 0;
    {
        /* Tested function call */
        int _return  = sc_calc_s10b_planesize(_pixelformat, _width, _height, _ysize, _csize, _only_8bit, _byte32num);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("u32 * _ysize ", ( _ysize ));
        CPPTEST_POST_CONDITION_PTR("u32 * _csize ", ( _csize ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_s10b_planesize_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_sbwc_bandwidth_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_sbwc_bandwidth(struct sc_frame *, int, bool, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 8192;
    /* Initializing argument 3 (is_read) */ 
    bool _is_read  = false;
    /* Initializing argument 4 (is_rotation) */ 
    bool _is_rotation  = false;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_sbwc_bandwidth(_frame, _framerate, _is_read, _is_rotation);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_sbwc_bandwidth_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_sbwc_bandwidth_10 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_sbwc_bandwidth(struct sc_frame *, int, bool, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 12;
    /* Initializing argument 3 (is_read) */ 
    bool _is_read  = true;
    /* Initializing argument 4 (is_rotation) */ 
    bool _is_rotation  = true;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_sbwc_bandwidth(_frame, _framerate, _is_read, _is_rotation);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_sbwc_bandwidth_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_sbwc_bandwidth_2 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_sbwc_bandwidth(struct sc_frame *, int, bool, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame _frame_0 ;
    struct sc_frame * _frame  = & _frame_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 8192;
    /* Initializing argument 3 (is_read) */ 
    bool _is_read  = false;
    /* Initializing argument 4 (is_rotation) */ 
    bool _is_rotation  = false;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_sbwc_bandwidth(_frame, _framerate, _is_read, _is_rotation);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_sbwc_bandwidth_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_sbwc_bandwidth_3 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_sbwc_bandwidth(struct sc_frame *, int, bool, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 15;
    /* Initializing argument 3 (is_read) */ 
    bool _is_read  = false;
    /* Initializing argument 4 (is_rotation) */ 
    bool _is_rotation  = false;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_sbwc_bandwidth(_frame, _framerate, _is_read, _is_rotation);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_sbwc_bandwidth_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_sbwc_bandwidth_4 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_sbwc_bandwidth(struct sc_frame *, int, bool, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 1;
    /* Initializing argument 3 (is_read) */ 
    bool _is_read  = false;
    /* Initializing argument 4 (is_rotation) */ 
    bool _is_rotation  = false;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_sbwc_bandwidth(_frame, _framerate, _is_read, _is_rotation);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_sbwc_bandwidth_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_sbwc_bandwidth_5 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_sbwc_bandwidth(struct sc_frame *, int, bool, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 31;
    /* Initializing argument 3 (is_read) */ 
    bool _is_read  = true;
    /* Initializing argument 4 (is_rotation) */ 
    bool _is_rotation  = false;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_sbwc_bandwidth(_frame, _framerate, _is_read, _is_rotation);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_sbwc_bandwidth_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_sbwc_bandwidth_6 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_sbwc_bandwidth(struct sc_frame *, int, bool, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = -1;
    /* Initializing argument 3 (is_read) */ 
    bool _is_read  = true;
    /* Initializing argument 4 (is_rotation) */ 
    bool _is_rotation  = false;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_sbwc_bandwidth(_frame, _framerate, _is_read, _is_rotation);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_sbwc_bandwidth_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_sbwc_bandwidth_7 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_sbwc_bandwidth(struct sc_frame *, int, bool, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 5;
    /* Initializing argument 3 (is_read) */ 
    bool _is_read  = false;
    /* Initializing argument 4 (is_rotation) */ 
    bool _is_rotation  = true;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_sbwc_bandwidth(_frame, _framerate, _is_read, _is_rotation);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_sbwc_bandwidth_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_sbwc_bandwidth_8 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_sbwc_bandwidth(struct sc_frame *, int, bool, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 0;
    /* Initializing argument 3 (is_read) */ 
    bool _is_read  = false;
    /* Initializing argument 4 (is_rotation) */ 
    bool _is_rotation  = true;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_sbwc_bandwidth(_frame, _framerate, _is_read, _is_rotation);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_sbwc_bandwidth_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_calc_sbwc_bandwidth_9 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_calc_sbwc_bandwidth(struct sc_frame *, int, bool, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_calc_sbwc_bandwidth_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 7;
    /* Initializing argument 3 (is_read) */ 
    bool _is_read  = true;
    /* Initializing argument 4 (is_rotation) */ 
    bool _is_rotation  = true;
    {
        /* Tested function call */
        unsigned _return  = sc_calc_sbwc_bandwidth(_frame, _framerate, _is_read, _is_rotation);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_calc_sbwc_bandwidth_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_src_plane_size_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_check_src_plane_size(struct sc_ctx *, struct vb2_buffer *, struct sc_frame *, u32) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 4 (min_size) */ 
    u32 _min_size  = 8;
    {
        /* Tested function call */
        int _return  = sc_check_src_plane_size(_ctx, _vb, _frame, _min_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_src_plane_size_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_src_plane_size_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_check_src_plane_size(struct sc_ctx *, struct vb2_buffer *, struct sc_frame *, u32) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame _frame_1 ;
    struct sc_frame * _frame  = & _frame_1;
    /* Initializing argument 4 (min_size) */ 
    u32 _min_size  = 1u;
    {
        /* Tested function call */
        int _return  = sc_check_src_plane_size(_ctx, _vb, _frame, _min_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_src_plane_size_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_src_plane_size_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_check_src_plane_size(struct sc_ctx *, struct vb2_buffer *, struct sc_frame *, u32) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 4 (min_size) */ 
    u32 _min_size  = 8;
    {
        /* Tested function call */
        int _return  = sc_check_src_plane_size(_ctx, _vb, _frame, _min_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_src_plane_size_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_src_plane_size_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_check_src_plane_size(struct sc_ctx *, struct vb2_buffer *, struct sc_frame *, u32) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (vb) */ 
    struct vb2_buffer _vb_1 ;
    struct vb2_buffer * _vb  = & _vb_1;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 4 (min_size) */ 
    u32 _min_size  = 7;
    {
        /* Tested function call */
        int _return  = sc_check_src_plane_size(_ctx, _vb, _frame, _min_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_src_plane_size_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_src_plane_size_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_check_src_plane_size(struct sc_ctx *, struct vb2_buffer *, struct sc_frame *, u32) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame _frame_1 ;
    struct sc_frame * _frame  = & _frame_1;
    /* Initializing argument 4 (min_size) */ 
    u32 _min_size  = 5;
    {
        /* Tested function call */
        int _return  = sc_check_src_plane_size(_ctx, _vb, _frame, _min_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_src_plane_size_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_src_plane_size_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_check_src_plane_size(struct sc_ctx *, struct vb2_buffer *, struct sc_frame *, u32) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (vb) */ 
    struct vb2_buffer _vb_1 ;
    struct vb2_buffer * _vb  = & _vb_1;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame _frame_2 ;
    struct sc_frame * _frame  = & _frame_2;
    /* Initializing argument 4 (min_size) */ 
    u32 _min_size  = 3;
    {
        /* Tested function call */
        int _return  = sc_check_src_plane_size(_ctx, _vb, _frame, _min_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_src_plane_size_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_src_plane_size_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_check_src_plane_size(struct sc_ctx *, struct vb2_buffer *, struct sc_frame *, u32) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 4 (min_size) */ 
    u32 _min_size  = 14;
    {
        /* Tested function call */
        int _return  = sc_check_src_plane_size(_ctx, _vb, _frame, _min_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_src_plane_size_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_src_plane_size_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_check_src_plane_size(struct sc_ctx *, struct vb2_buffer *, struct sc_frame *, u32) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame _frame_0 ;
    struct sc_frame * _frame  = & _frame_0;
    /* Initializing argument 4 (min_size) */ 
    u32 _min_size  = 12;
    {
        /* Tested function call */
        int _return  = sc_check_src_plane_size(_ctx, _vb, _frame, _min_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_src_plane_size_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_src_plane_size_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_check_src_plane_size(struct sc_ctx *, struct vb2_buffer *, struct sc_frame *, u32) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (vb) */ 
    struct vb2_buffer _vb_1 ;
    struct vb2_buffer * _vb  = & _vb_1;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame _frame_2 ;
    struct sc_frame * _frame  = & _frame_2;
    /* Initializing argument 4 (min_size) */ 
    u32 _min_size  = 10;
    {
        /* Tested function call */
        int _return  = sc_check_src_plane_size(_ctx, _vb, _frame, _min_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_src_plane_size_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_src_plane_size_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_check_src_plane_size(struct sc_ctx *, struct vb2_buffer *, struct sc_frame *, u32) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_src_plane_size_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (vb) */ 
    struct vb2_buffer _vb_0 ;
    struct vb2_buffer * _vb  = & _vb_0;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 4 (min_size) */ 
    u32 _min_size  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        int _return  = sc_check_src_plane_size(_ctx, _vb, _frame, _min_size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_src_plane_size_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_votf_data_1 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_check_votf_data(struct sc_dev *, unsigned int, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dpu_dma_idx) */ 
    unsigned _dpu_dma_idx  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (trs_idx) */ 
    unsigned _trs_idx  = 17;
    /* Initializing argument 4 (buf_idx) */ 
    unsigned _buf_idx  = 17;
    {
        /* Tested function call */
        bool _return  = sc_check_votf_data(_sc, _dpu_dma_idx, _trs_idx, _buf_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_votf_data_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_votf_data_10 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_check_votf_data(struct sc_dev *, unsigned int, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dpu_dma_idx) */ 
    unsigned _dpu_dma_idx  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (trs_idx) */ 
    unsigned _trs_idx  = 15;
    /* Initializing argument 4 (buf_idx) */ 
    unsigned _buf_idx  = 0u;
    {
        /* Tested function call */
        bool _return  = sc_check_votf_data(_sc, _dpu_dma_idx, _trs_idx, _buf_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_votf_data_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_votf_data_2 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_check_votf_data(struct sc_dev *, unsigned int, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (dpu_dma_idx) */ 
    unsigned _dpu_dma_idx  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (trs_idx) */ 
    unsigned _trs_idx  = 17;
    /* Initializing argument 4 (buf_idx) */ 
    unsigned _buf_idx  = 17;
    {
        /* Tested function call */
        bool _return  = sc_check_votf_data(_sc, _dpu_dma_idx, _trs_idx, _buf_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_votf_data_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_votf_data_3 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_check_votf_data(struct sc_dev *, unsigned int, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dpu_dma_idx) */ 
    unsigned _dpu_dma_idx  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (trs_idx) */ 
    unsigned _trs_idx  = 1u;
    /* Initializing argument 4 (buf_idx) */ 
    unsigned _buf_idx  = 17;
    {
        /* Tested function call */
        bool _return  = sc_check_votf_data(_sc, _dpu_dma_idx, _trs_idx, _buf_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_votf_data_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_votf_data_4 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_check_votf_data(struct sc_dev *, unsigned int, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dpu_dma_idx) */ 
    unsigned _dpu_dma_idx  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (trs_idx) */ 
    unsigned _trs_idx  = 15;
    /* Initializing argument 4 (buf_idx) */ 
    unsigned _buf_idx  = 16;
    {
        /* Tested function call */
        bool _return  = sc_check_votf_data(_sc, _dpu_dma_idx, _trs_idx, _buf_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_votf_data_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_votf_data_5 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_check_votf_data(struct sc_dev *, unsigned int, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dpu_dma_idx) */ 
    unsigned _dpu_dma_idx  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (trs_idx) */ 
    unsigned _trs_idx  = 17;
    /* Initializing argument 4 (buf_idx) */ 
    unsigned _buf_idx  = 15;
    {
        /* Tested function call */
        bool _return  = sc_check_votf_data(_sc, _dpu_dma_idx, _trs_idx, _buf_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_votf_data_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_votf_data_6 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_check_votf_data(struct sc_dev *, unsigned int, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dpu_dma_idx) */ 
    unsigned _dpu_dma_idx  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (trs_idx) */ 
    unsigned _trs_idx  = 1u;
    /* Initializing argument 4 (buf_idx) */ 
    unsigned _buf_idx  = 15;
    {
        /* Tested function call */
        bool _return  = sc_check_votf_data(_sc, _dpu_dma_idx, _trs_idx, _buf_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_votf_data_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_votf_data_7 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_check_votf_data(struct sc_dev *, unsigned int, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dpu_dma_idx) */ 
    unsigned _dpu_dma_idx  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (trs_idx) */ 
    unsigned _trs_idx  = 15;
    /* Initializing argument 4 (buf_idx) */ 
    unsigned _buf_idx  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        bool _return  = sc_check_votf_data(_sc, _dpu_dma_idx, _trs_idx, _buf_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_votf_data_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_votf_data_8 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_check_votf_data(struct sc_dev *, unsigned int, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dpu_dma_idx) */ 
    unsigned _dpu_dma_idx  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (trs_idx) */ 
    unsigned _trs_idx  = 17;
    /* Initializing argument 4 (buf_idx) */ 
    unsigned _buf_idx  = 1u;
    {
        /* Tested function call */
        bool _return  = sc_check_votf_data(_sc, _dpu_dma_idx, _trs_idx, _buf_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_votf_data_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_check_votf_data_9 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_check_votf_data(struct sc_dev *, unsigned int, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_check_votf_data_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dpu_dma_idx) */ 
    unsigned _dpu_dma_idx  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (trs_idx) */ 
    unsigned _trs_idx  = 1u;
    /* Initializing argument 4 (buf_idx) */ 
    unsigned _buf_idx  = 1u;
    {
        /* Tested function call */
        bool _return  = sc_check_votf_data(_sc, _dpu_dma_idx, _trs_idx, _buf_idx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_check_votf_data_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_clear_votf_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_clear_votf(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clear_votf_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        sc_clear_votf(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_clear_votf_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_clear_votf_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_clear_votf(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clear_votf_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        sc_clear_votf(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_clear_votf_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_clk_get_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_clk_get(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_get_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_clk_get(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_clk_get_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_clk_get_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_clk_get(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_get_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    {
        /* Tested function call */
        int _return  = sc_clk_get(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_clk_get_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_clk_power_disable_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_clk_power_disable(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_power_disable_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    {
        /* Tested function call */
        sc_clk_power_disable(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_clk_power_disable_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_clk_power_disable_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_clk_power_disable(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_power_disable_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    {
        /* Tested function call */
        sc_clk_power_disable(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_clk_power_disable_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_clk_put_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_clk_put(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_put_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    {
        /* Tested function call */
        sc_clk_put(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_clk_put_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_clk_put_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_clk_put(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_clk_put_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    {
        /* Tested function call */
        sc_clk_put(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_clk_put_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_compare_qos_table_entries_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_compare_qos_table_entries(const void *, const void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_compare_qos_table_entries_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (p1) */ 
    const void * _p1  = 0 ;
    /* Initializing argument 2 (p2) */ 
    const void * _p2  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_compare_qos_table_entries(_p1, _p2);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_compare_qos_table_entries_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_configure_rotation_degree_1 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_configure_rotation_degree(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (degree) */ 
    int _degree  = 3;
    {
        /* Tested function call */
        bool _return  = sc_configure_rotation_degree(_ctx, _degree);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_configure_rotation_degree_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_configure_rotation_degree_10 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_configure_rotation_degree(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (degree) */ 
    int _degree  = 2;
    {
        /* Tested function call */
        bool _return  = sc_configure_rotation_degree(_ctx, _degree);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_configure_rotation_degree_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_configure_rotation_degree_2 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_configure_rotation_degree(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (degree) */ 
    int _degree  = 3;
    {
        /* Tested function call */
        bool _return  = sc_configure_rotation_degree(_ctx, _degree);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_configure_rotation_degree_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_configure_rotation_degree_3 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_configure_rotation_degree(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (degree) */ 
    int _degree  = 1;
    {
        /* Tested function call */
        bool _return  = sc_configure_rotation_degree(_ctx, _degree);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_configure_rotation_degree_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_configure_rotation_degree_4 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_configure_rotation_degree(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (degree) */ 
    int _degree  = 91;
    {
        /* Tested function call */
        bool _return  = sc_configure_rotation_degree(_ctx, _degree);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_configure_rotation_degree_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_configure_rotation_degree_5 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_configure_rotation_degree(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (degree) */ 
    int _degree  = 89;
    {
        /* Tested function call */
        bool _return  = sc_configure_rotation_degree(_ctx, _degree);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_configure_rotation_degree_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_configure_rotation_degree_6 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_configure_rotation_degree(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (degree) */ 
    int _degree  = 270;
    {
        /* Tested function call */
        bool _return  = sc_configure_rotation_degree(_ctx, _degree);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_configure_rotation_degree_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_configure_rotation_degree_7 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_configure_rotation_degree(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (degree) */ 
    int _degree  = 180;
    {
        /* Tested function call */
        bool _return  = sc_configure_rotation_degree(_ctx, _degree);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_configure_rotation_degree_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_configure_rotation_degree_8 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_configure_rotation_degree(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (degree) */ 
    int _degree  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        bool _return  = sc_configure_rotation_degree(_ctx, _degree);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_configure_rotation_degree_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_configure_rotation_degree_9 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_configure_rotation_degree(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_configure_rotation_degree_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (degree) */ 
    int _degree  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        bool _return  = sc_configure_rotation_degree(_ctx, _degree);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_configure_rotation_degree_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ctx_stop_req_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ctx_stop_req(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ctx_stop_req_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_ctx_stop_req(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ctx_stop_req_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ctx_stop_req_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ctx_stop_req(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ctx_stop_req_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        int _return  = sc_ctx_stop_req(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ctx_stop_req_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_devm_iommu_direct_map_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_devm_iommu_direct_map(struct device *, u32, size_t) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing argument 2 (pa) */ 
    u32 _pa  = 0;
    /* Initializing argument 3 (size) */ 
    size_t _size  = 0;
    {
        /* Tested function call */
        int _return  = sc_devm_iommu_direct_map(_dev, _pa, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_devm_iommu_direct_map_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_devm_iommu_direct_map_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_devm_iommu_direct_map(struct device *, u32, size_t) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing argument 2 (pa) */ 
    u32 _pa  = 1u;
    /* Initializing argument 3 (size) */ 
    size_t _size  = 0ul;
    {
        /* Tested function call */
        int _return  = sc_devm_iommu_direct_map(_dev, _pa, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_devm_iommu_direct_map_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_devm_iommu_direct_map_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_devm_iommu_direct_map(struct device *, u32, size_t) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing argument 2 (pa) */ 
    u32 _pa  = 0;
    /* Initializing argument 3 (size) */ 
    size_t _size  = 0;
    {
        /* Tested function call */
        int _return  = sc_devm_iommu_direct_map(_dev, _pa, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_devm_iommu_direct_map_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_devm_iommu_direct_map_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_devm_iommu_direct_map(struct device *, u32, size_t) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing argument 2 (pa) */ 
    u32 _pa  = 1u;
    /* Initializing argument 3 (size) */ 
    size_t _size  = 0;
    {
        /* Tested function call */
        int _return  = sc_devm_iommu_direct_map(_dev, _pa, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_devm_iommu_direct_map_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_devm_iommu_direct_map_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_devm_iommu_direct_map(struct device *, u32, size_t) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing argument 2 (pa) */ 
    u32 _pa  = 0u;
    /* Initializing argument 3 (size) */ 
    size_t _size  = 0;
    {
        /* Tested function call */
        int _return  = sc_devm_iommu_direct_map(_dev, _pa, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_devm_iommu_direct_map_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_devm_iommu_direct_map_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_devm_iommu_direct_map(struct device *, u32, size_t) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing argument 2 (pa) */ 
    u32 _pa  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (size) */ 
    size_t _size  = cpptestLimitsGetMaxUnsignedLong();
    {
        /* Tested function call */
        int _return  = sc_devm_iommu_direct_map(_dev, _pa, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_devm_iommu_direct_map_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_devm_iommu_direct_map_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_devm_iommu_direct_map(struct device *, u32, size_t) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing argument 2 (pa) */ 
    u32 _pa  = 1u;
    /* Initializing argument 3 (size) */ 
    size_t _size  = cpptestLimitsGetMaxUnsignedLong();
    {
        /* Tested function call */
        int _return  = sc_devm_iommu_direct_map(_dev, _pa, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_devm_iommu_direct_map_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_devm_iommu_direct_map_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_devm_iommu_direct_map(struct device *, u32, size_t) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing argument 2 (pa) */ 
    u32 _pa  = 0;
    /* Initializing argument 3 (size) */ 
    size_t _size  = 1ul;
    {
        /* Tested function call */
        int _return  = sc_devm_iommu_direct_map(_dev, _pa, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_devm_iommu_direct_map_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_devm_iommu_direct_map_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_devm_iommu_direct_map(struct device *, u32, size_t) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing argument 2 (pa) */ 
    u32 _pa  = 1u;
    /* Initializing argument 3 (size) */ 
    size_t _size  = 1ul;
    {
        /* Tested function call */
        int _return  = sc_devm_iommu_direct_map(_dev, _pa, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_devm_iommu_direct_map_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_devm_iommu_direct_map_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_devm_iommu_direct_map(struct device *, u32, size_t) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_devm_iommu_direct_map_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing argument 2 (pa) */ 
    u32 _pa  = 0;
    /* Initializing argument 3 (size) */ 
    size_t _size  = 0ul;
    {
        /* Tested function call */
        int _return  = sc_devm_iommu_direct_map(_dev, _pa, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_devm_iommu_direct_map_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_driver_exit_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_driver_exit(void) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = false;
         sc_driver.driver_managed_dma  = false;
    }
    {
        /* Tested function call */
        sc_driver_exit();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_driver_exit_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_driver_exit_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_driver_exit(void) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = true;
         sc_driver.driver_managed_dma  = false;
    }
    {
        /* Tested function call */
        sc_driver_exit();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_driver_exit_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_driver_exit_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_driver_exit(void) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = false;
         sc_driver.driver_managed_dma  = true;
    }
    {
        /* Tested function call */
        sc_driver_exit();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_driver_exit_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_driver_exit_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_driver_exit(void) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_exit_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = true;
         sc_driver.driver_managed_dma  = true;
    }
    {
        /* Tested function call */
        sc_driver_exit();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_driver_exit_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_driver_init_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_driver_init(void) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = false;
         sc_driver.driver_managed_dma  = false;
    }
    {
        /* Tested function call */
        int _return  = sc_driver_init();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_driver_init_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_driver_init_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_driver_init(void) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = true;
         sc_driver.driver_managed_dma  = false;
    }
    {
        /* Tested function call */
        int _return  = sc_driver_init();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_driver_init_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_driver_init_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_driver_init(void) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = false;
         sc_driver.driver_managed_dma  = true;
    }
    {
        /* Tested function call */
        int _return  = sc_driver_init();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_driver_init_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_driver_init_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_driver_init(void) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_driver_init_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable sc_driver */ 
    {
         sc_driver.probe  = 0 ;
         sc_driver.remove  = 0 ;
         sc_driver.remove_new  = 0 ;
         sc_driver.shutdown  = 0 ;
         sc_driver.suspend  = 0 ;
         sc_driver.resume  = 0 ;
         sc_driver.id_table  = 0 ;
         sc_driver.prevent_deferred_probe  = true;
         sc_driver.driver_managed_dma  = true;
    }
    {
        /* Tested function call */
        int _return  = sc_driver_init();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.probe )(struct platform_device *)", ( sc_driver.probe ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.remove )(struct platform_device *)", ( sc_driver.remove ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.remove_new )(struct platform_device *)", ( sc_driver.remove_new ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_driver.shutdown )(struct platform_device *)", ( sc_driver.shutdown ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.suspend )(struct platform_device *, pm_message_t)", ( sc_driver.suspend ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_driver.resume )(struct platform_device *)", ( sc_driver.resume ));
        CPPTEST_POST_CONDITION_PTR("const struct platform_device_id * sc_driver.id_table ", ( sc_driver.id_table ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.prevent_deferred_probe", ( sc_driver.prevent_deferred_probe ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_driver.driver_managed_dma", ( sc_driver.driver_managed_dma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_driver_init_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_size_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ext_buf_size(int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    int _width  = 512;
    {
        /* Tested function call */
        unsigned _return  = sc_ext_buf_size(_width);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_size_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_size_2 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ext_buf_size(int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    int _width  = 127;
    {
        /* Tested function call */
        unsigned _return  = sc_ext_buf_size(_width);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_size_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_size_3 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ext_buf_size(int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    int _width  = 0;
    {
        /* Tested function call */
        unsigned _return  = sc_ext_buf_size(_width);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_size_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_size_4 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ext_buf_size(int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    int _width  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        unsigned _return  = sc_ext_buf_size(_width);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_size_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_size_5 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ext_buf_size(int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    int _width  = -1;
    {
        /* Tested function call */
        unsigned _return  = sc_ext_buf_size(_width);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_size_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_size_6 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ext_buf_size(int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    int _width  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        unsigned _return  = sc_ext_buf_size(_width);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_size_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_buf_size_7 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ext_buf_size(int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_buf_size_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (width) */ 
    int _width  = 1;
    {
        /* Tested function call */
        unsigned _return  = sc_ext_buf_size(_width);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_buf_size_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_device_run_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_device_run(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_device_run(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_device_run_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_device_run_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_device_run(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_device_run(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_device_run_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_device_run_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_device_run(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_device_run(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_device_run_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_device_run_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_device_run(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_device_run(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_device_run_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_device_run_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_device_run(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_device_run(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_device_run_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_device_run_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_device_run(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_device_run(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_device_run_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_device_run_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_device_run(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_device_run(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_device_run_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_device_run_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_device_run(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_ext_device_run(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_device_run_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_device_run_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_device_run(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_device_run(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_device_run_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ext_device_run_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_ext_device_run(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ext_device_run_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_ext_device_run(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ext_device_run_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_fence_cb_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_fence_cb(struct dma_fence *, struct dma_fence_cb *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (f) */ 
    struct dma_fence * _f  = 0 ;
    /* Initializing argument 2 (cb) */ 
    struct dma_fence_cb * _cb  = 0 ;
    {
        /* Tested function call */
        sc_fence_cb(_f, _cb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_fence * _f ", ( _f ));
        CPPTEST_POST_CONDITION_PTR("struct dma_fence_cb * _cb ", ( _cb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_fence_cb_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_fence_cb_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_fence_cb(struct dma_fence *, struct dma_fence_cb *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (f) */ 
    struct dma_fence _f_0 ;
    struct dma_fence * _f  = & _f_0;
    /* Initializing argument 2 (cb) */ 
    struct dma_fence_cb * _cb  = 0 ;
    {
        /* Tested function call */
        sc_fence_cb(_f, _cb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_fence * _f ", ( _f ));
        CPPTEST_POST_CONDITION_PTR("struct dma_fence_cb * _cb ", ( _cb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_fence_cb_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_fence_cb_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_fence_cb(struct dma_fence *, struct dma_fence_cb *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (f) */ 
    struct dma_fence * _f  = 0 ;
    /* Initializing argument 2 (cb) */ 
    struct dma_fence_cb _cb_0 ;
    struct dma_fence_cb * _cb  = & _cb_0;
    {
        /* Tested function call */
        sc_fence_cb(_f, _cb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_fence * _f ", ( _f ));
        CPPTEST_POST_CONDITION_PTR("struct dma_fence_cb * _cb ", ( _cb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_fence_cb_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_fence_cb_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_fence_cb(struct dma_fence *, struct dma_fence_cb *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_cb_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (f) */ 
    struct dma_fence _f_0 ;
    struct dma_fence * _f  = & _f_0;
    /* Initializing argument 2 (cb) */ 
    struct dma_fence_cb _cb_1 ;
    struct dma_fence_cb * _cb  = & _cb_1;
    {
        /* Tested function call */
        sc_fence_cb(_f, _cb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_fence * _f ", ( _f ));
        CPPTEST_POST_CONDITION_PTR("struct dma_fence_cb * _cb ", ( _cb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_fence_cb_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_fence_enable_signaling_1 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_fence_enable_signaling(struct dma_fence *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_enable_signaling_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fence) */ 
    struct dma_fence * _fence  = 0 ;
    {
        /* Tested function call */
        bool _return  = sc_fence_enable_signaling(_fence);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct dma_fence * _fence ", ( _fence ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_fence_enable_signaling_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_fence_enable_signaling_2 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_fence_enable_signaling(struct dma_fence *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_enable_signaling_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fence) */ 
    struct dma_fence _fence_0 ;
    struct dma_fence * _fence  = & _fence_0;
    {
        /* Tested function call */
        bool _return  = sc_fence_enable_signaling(_fence);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct dma_fence * _fence ", ( _fence ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_fence_enable_signaling_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_fence_get_driver_name_1 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_fence_get_driver_name(struct dma_fence *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_get_driver_name_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fence) */ 
    struct dma_fence * _fence  = 0 ;
    {
        /* Tested function call */
        const char * _return  = sc_fence_get_driver_name(_fence);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
        CPPTEST_POST_CONDITION_PTR("struct dma_fence * _fence ", ( _fence ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_fence_get_driver_name_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_fence_get_driver_name_2 */
/* CPPTEST_TEST_CASE_CONTEXT const char * sc_fence_get_driver_name(struct dma_fence *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_get_driver_name_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fence) */ 
    struct dma_fence _fence_0 ;
    struct dma_fence * _fence  = & _fence_0;
    {
        /* Tested function call */
        const char * _return  = sc_fence_get_driver_name(_fence);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_CSTR_N("const char * _return", ( _return ), 256);
        CPPTEST_POST_CONDITION_PTR("struct dma_fence * _fence ", ( _fence ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_fence_get_driver_name_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_fence_timeout_handler_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_fence_timeout_handler(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_timeout_handler_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list * _t  = 0 ;
    {
        /* Tested function call */
        sc_fence_timeout_handler(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_fence_timeout_handler_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_fence_timeout_handler_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_fence_timeout_handler(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_fence_timeout_handler_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list _t_0 ;
    struct timer_list * _t  = & _t_0;
    {
        /* Tested function call */
        sc_fence_timeout_handler(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_fence_timeout_handler_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_filter_size_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_filter_size(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 4;
         sc_filter_tab[0].w  = 4;
         sc_filter_tab[0].h  = 4;
    }
    {
        /* Tested function call */
        int _return  = sc_find_filter_size(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_filter_size_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_filter_size_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_filter_size(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 0;
         sc_filter_tab[0].w  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].h  = 0u;
    }
    {
        /* Tested function call */
        int _return  = sc_find_filter_size(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_filter_size_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_filter_size_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_filter_size(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 4;
         sc_filter_tab[0].w  = 4;
         sc_filter_tab[0].h  = 4;
    }
    {
        /* Tested function call */
        int _return  = sc_find_filter_size(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_filter_size_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_filter_size_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_filter_size(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 0u;
         sc_filter_tab[0].w  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].h  = 4;
    }
    {
        /* Tested function call */
        int _return  = sc_find_filter_size(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_filter_size_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_filter_size_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_filter_size(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].w  = 4;
         sc_filter_tab[0].h  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_find_filter_size(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_filter_size_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_filter_size_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_filter_size(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 0;
         sc_filter_tab[0].w  = 1u;
         sc_filter_tab[0].h  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_find_filter_size(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_filter_size_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_filter_size_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_filter_size(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 4;
         sc_filter_tab[0].w  = 0;
         sc_filter_tab[0].h  = cpptestLimitsGetMaxUnsignedInt();
    }
    {
        /* Tested function call */
        int _return  = sc_find_filter_size(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_filter_size_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_filter_size_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_filter_size(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 0u;
         sc_filter_tab[0].w  = 1u;
         sc_filter_tab[0].h  = cpptestLimitsGetMaxUnsignedInt();
    }
    {
        /* Tested function call */
        int _return  = sc_find_filter_size(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_filter_size_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_filter_size_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_filter_size(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 1u;
         sc_filter_tab[0].w  = 0;
         sc_filter_tab[0].h  = 1u;
    }
    {
        /* Tested function call */
        int _return  = sc_find_filter_size(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_filter_size_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_filter_size_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_filter_size(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_filter_size_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].w  = 0u;
         sc_filter_tab[0].h  = 1u;
    }
    {
        /* Tested function call */
        int _return  = sc_find_filter_size(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_filter_size_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_format_1 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_fmt * sc_find_format(struct sc_dev *, u32, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (pixfmt) */ 
    u32 _pixfmt  = 96;
    /* Initializing argument 3 (output_buf) */ 
    bool _output_buf  = false;
    {
        /* Tested function call */
        const struct sc_fmt * _return  = sc_find_format(_sc, _pixfmt, _output_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_fmt * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_format_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_format_10 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_fmt * sc_find_format(struct sc_dev *, u32, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (pixfmt) */ 
    u32 _pixfmt  = 1u;
    /* Initializing argument 3 (output_buf) */ 
    bool _output_buf  = true;
    {
        /* Tested function call */
        const struct sc_fmt * _return  = sc_find_format(_sc, _pixfmt, _output_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_fmt * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_format_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_format_2 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_fmt * sc_find_format(struct sc_dev *, u32, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (pixfmt) */ 
    u32 _pixfmt  = 96;
    /* Initializing argument 3 (output_buf) */ 
    bool _output_buf  = false;
    {
        /* Tested function call */
        const struct sc_fmt * _return  = sc_find_format(_sc, _pixfmt, _output_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_fmt * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_format_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_format_3 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_fmt * sc_find_format(struct sc_dev *, u32, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (pixfmt) */ 
    u32 _pixfmt  = 131328;
    /* Initializing argument 3 (output_buf) */ 
    bool _output_buf  = false;
    {
        /* Tested function call */
        const struct sc_fmt * _return  = sc_find_format(_sc, _pixfmt, _output_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_fmt * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_format_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_format_4 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_fmt * sc_find_format(struct sc_dev *, u32, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (pixfmt) */ 
    u32 _pixfmt  = 0;
    /* Initializing argument 3 (output_buf) */ 
    bool _output_buf  = false;
    {
        /* Tested function call */
        const struct sc_fmt * _return  = sc_find_format(_sc, _pixfmt, _output_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_fmt * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_format_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_format_5 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_fmt * sc_find_format(struct sc_dev *, u32, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (pixfmt) */ 
    u32 _pixfmt  = 1u;
    /* Initializing argument 3 (output_buf) */ 
    bool _output_buf  = false;
    {
        /* Tested function call */
        const struct sc_fmt * _return  = sc_find_format(_sc, _pixfmt, _output_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_fmt * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_format_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_format_6 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_fmt * sc_find_format(struct sc_dev *, u32, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (pixfmt) */ 
    u32 _pixfmt  = 0u;
    /* Initializing argument 3 (output_buf) */ 
    bool _output_buf  = false;
    {
        /* Tested function call */
        const struct sc_fmt * _return  = sc_find_format(_sc, _pixfmt, _output_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_fmt * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_format_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_format_7 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_fmt * sc_find_format(struct sc_dev *, u32, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (pixfmt) */ 
    u32 _pixfmt  = 39;
    /* Initializing argument 3 (output_buf) */ 
    bool _output_buf  = true;
    {
        /* Tested function call */
        const struct sc_fmt * _return  = sc_find_format(_sc, _pixfmt, _output_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_fmt * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_format_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_format_8 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_fmt * sc_find_format(struct sc_dev *, u32, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (pixfmt) */ 
    u32 _pixfmt  = 131328;
    /* Initializing argument 3 (output_buf) */ 
    bool _output_buf  = true;
    {
        /* Tested function call */
        const struct sc_fmt * _return  = sc_find_format(_sc, _pixfmt, _output_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_fmt * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_format_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_format_9 */
/* CPPTEST_TEST_CASE_CONTEXT const struct sc_fmt * sc_find_format(struct sc_dev *, u32, bool) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_format_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (pixfmt) */ 
    u32 _pixfmt  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (output_buf) */ 
    bool _output_buf  = true;
    {
        /* Tested function call */
        const struct sc_fmt * _return  = sc_find_format(_sc, _pixfmt, _output_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("const struct sc_fmt * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_format_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_scaling_ratio_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_scaling_ratio(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 8388608;
    }
    {
        /* Tested function call */
        int _return  = sc_find_scaling_ratio(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_scaling_ratio_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_scaling_ratio_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_scaling_ratio(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 4194304;
    }
    {
        /* Tested function call */
        int _return  = sc_find_scaling_ratio(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_scaling_ratio_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_scaling_ratio_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_scaling_ratio(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 8388608;
    }
    {
        /* Tested function call */
        int _return  = sc_find_scaling_ratio(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_scaling_ratio_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_scaling_ratio_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_scaling_ratio(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 4;
    }
    {
        /* Tested function call */
        int _return  = sc_find_scaling_ratio(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_scaling_ratio_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_scaling_ratio_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_scaling_ratio(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 2565;
    }
    {
        /* Tested function call */
        int _return  = sc_find_scaling_ratio(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_scaling_ratio_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_scaling_ratio_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_scaling_ratio(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 20;
    }
    {
        /* Tested function call */
        int _return  = sc_find_scaling_ratio(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_scaling_ratio_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_scaling_ratio_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_scaling_ratio(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 16777216;
    }
    {
        /* Tested function call */
        int _return  = sc_find_scaling_ratio(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_scaling_ratio_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_scaling_ratio_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_scaling_ratio(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_find_scaling_ratio(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_scaling_ratio_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_scaling_ratio_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_scaling_ratio(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -22;
    }
    {
        /* Tested function call */
        int _return  = sc_find_scaling_ratio(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_scaling_ratio_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_find_scaling_ratio_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_find_scaling_ratio(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_find_scaling_ratio_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_find_scaling_ratio(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_find_scaling_ratio_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bandwidth_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_get_bandwidth(struct sc_ctx *, struct bts_bw *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw) */ 
    struct bts_bw * _bw  = 0 ;
    {
        /* Tested function call */
        sc_get_bandwidth(_ctx, _bw);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct bts_bw * _bw ", ( _bw ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bandwidth_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bandwidth_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_get_bandwidth(struct sc_ctx *, struct bts_bw *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (bw) */ 
    struct bts_bw * _bw  = 0 ;
    {
        /* Tested function call */
        sc_get_bandwidth(_ctx, _bw);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct bts_bw * _bw ", ( _bw ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bandwidth_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bandwidth_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_get_bandwidth(struct sc_ctx *, struct bts_bw *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw) */ 
    struct bts_bw _bw_0 ;
    struct bts_bw * _bw  = & _bw_0;
    {
        /* Tested function call */
        sc_get_bandwidth(_ctx, _bw);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct bts_bw * _bw ", ( _bw ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bandwidth_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bandwidth_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_get_bandwidth(struct sc_ctx *, struct bts_bw *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bandwidth_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (bw) */ 
    struct bts_bw _bw_1 ;
    struct bts_bw * _bw  = & _bw_1;
    {
        /* Tested function call */
        sc_get_bandwidth(_ctx, _bw);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct bts_bw * _bw ", ( _bw ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bandwidth_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bufaddr_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_bufaddr(struct sc_dev *, struct vb2_buffer *, struct sc_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 944976461;
    }
    {
        /* Tested function call */
        int _return  = sc_get_bufaddr(_sc, _vb2buf, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bufaddr_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bufaddr_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_bufaddr(struct sc_dev *, struct vb2_buffer *, struct sc_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_get_bufaddr(_sc, _vb2buf, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bufaddr_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bufaddr_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_bufaddr(struct sc_dev *, struct vb2_buffer *, struct sc_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 944976461;
    }
    {
        /* Tested function call */
        int _return  = sc_get_bufaddr(_sc, _vb2buf, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bufaddr_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bufaddr_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_bufaddr(struct sc_dev *, struct vb2_buffer *, struct sc_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (vb2buf) */ 
    struct vb2_buffer _vb2buf_1 ;
    struct vb2_buffer * _vb2buf  = & _vb2buf_1;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame _frame_2 ;
    struct sc_frame * _frame  = & _frame_2;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 944517453;
    }
    {
        /* Tested function call */
        int _return  = sc_get_bufaddr(_sc, _vb2buf, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bufaddr_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bufaddr_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_bufaddr(struct sc_dev *, struct vb2_buffer *, struct sc_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame _frame_1 ;
    struct sc_frame * _frame  = & _frame_1;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 842092112;
    }
    {
        /* Tested function call */
        int _return  = sc_get_bufaddr(_sc, _vb2buf, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bufaddr_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bufaddr_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_bufaddr(struct sc_dev *, struct vb2_buffer *, struct sc_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (vb2buf) */ 
    struct vb2_buffer _vb2buf_1 ;
    struct vb2_buffer * _vb2buf  = & _vb2buf_1;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 827535949;
    }
    {
        /* Tested function call */
        int _return  = sc_get_bufaddr(_sc, _vb2buf, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bufaddr_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bufaddr_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_bufaddr(struct sc_dev *, struct vb2_buffer *, struct sc_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 825642306;
    }
    {
        /* Tested function call */
        int _return  = sc_get_bufaddr(_sc, _vb2buf, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bufaddr_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bufaddr_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_bufaddr(struct sc_dev *, struct vb2_buffer *, struct sc_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (vb2buf) */ 
    struct vb2_buffer _vb2buf_1 ;
    struct vb2_buffer * _vb2buf  = & _vb2buf_1;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame _frame_2 ;
    struct sc_frame * _frame  = & _frame_2;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 63;
    }
    {
        /* Tested function call */
        int _return  = sc_get_bufaddr(_sc, _vb2buf, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bufaddr_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bufaddr_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_bufaddr(struct sc_dev *, struct vb2_buffer *, struct sc_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame _frame_1 ;
    struct sc_frame * _frame  = & _frame_1;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 4;
    }
    {
        /* Tested function call */
        int _return  = sc_get_bufaddr(_sc, _vb2buf, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bufaddr_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_bufaddr_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_bufaddr(struct sc_dev *, struct vb2_buffer *, struct sc_frame *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_bufaddr_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (vb2buf) */ 
    struct vb2_buffer _vb2buf_1 ;
    struct vb2_buffer * _vb2buf  = & _vb2buf_1;
    /* Initializing argument 3 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 15;
    }
    {
        /* Tested function call */
        int _return  = sc_get_bufaddr(_sc, _vb2buf, _frame);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_bufaddr_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_clock_khz_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_clock_khz(struct sc_ctx *, struct sc_frame *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 3 (process_time) */ 
    int _process_time  = 944976461;
    {
        /* Tested function call */
        int _return  = sc_get_clock_khz(_ctx, _frame, _process_time);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_clock_khz_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_clock_khz_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_clock_khz(struct sc_ctx *, struct sc_frame *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 3 (process_time) */ 
    int _process_time  = 1;
    {
        /* Tested function call */
        int _return  = sc_get_clock_khz(_ctx, _frame, _process_time);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_clock_khz_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_clock_khz_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_clock_khz(struct sc_ctx *, struct sc_frame *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 3 (process_time) */ 
    int _process_time  = 944976461;
    {
        /* Tested function call */
        int _return  = sc_get_clock_khz(_ctx, _frame, _process_time);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_clock_khz_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_clock_khz_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_clock_khz(struct sc_ctx *, struct sc_frame *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 3 (process_time) */ 
    int _process_time  = 944976205;
    {
        /* Tested function call */
        int _return  = sc_get_clock_khz(_ctx, _frame, _process_time);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_clock_khz_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_clock_khz_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_clock_khz(struct sc_ctx *, struct sc_frame *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame _frame_1 ;
    struct sc_frame * _frame  = & _frame_1;
    /* Initializing argument 3 (process_time) */ 
    int _process_time  = 944517453;
    {
        /* Tested function call */
        int _return  = sc_get_clock_khz(_ctx, _frame, _process_time);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_clock_khz_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_clock_khz_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_clock_khz(struct sc_ctx *, struct sc_frame *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame _frame_0 ;
    struct sc_frame * _frame  = & _frame_0;
    /* Initializing argument 3 (process_time) */ 
    int _process_time  = 827535694;
    {
        /* Tested function call */
        int _return  = sc_get_clock_khz(_ctx, _frame, _process_time);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_clock_khz_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_clock_khz_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_clock_khz(struct sc_ctx *, struct sc_frame *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 3 (process_time) */ 
    int _process_time  = 827076941;
    {
        /* Tested function call */
        int _return  = sc_get_clock_khz(_ctx, _frame, _process_time);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_clock_khz_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_clock_khz_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_clock_khz(struct sc_ctx *, struct sc_frame *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 3 (process_time) */ 
    int _process_time  = 100;
    {
        /* Tested function call */
        int _return  = sc_get_clock_khz(_ctx, _frame, _process_time);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_clock_khz_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_clock_khz_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_clock_khz(struct sc_ctx *, struct sc_frame *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 3 (process_time) */ 
    int _process_time  = 0;
    {
        /* Tested function call */
        int _return  = sc_get_clock_khz(_ctx, _frame, _process_time);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_clock_khz_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_clock_khz_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_clock_khz(struct sc_ctx *, struct sc_frame *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_clock_khz_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (frame) */ 
    struct sc_frame * _frame  = 0 ;
    /* Initializing argument 3 (process_time) */ 
    int _process_time  = -1;
    {
        /* Tested function call */
        int _return  = sc_get_clock_khz(_ctx, _frame, _process_time);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct sc_frame * _frame ", ( _frame ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_clock_khz_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_fract_val_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_fract_val(struct v4l2_rect *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect * _rect  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 877807426;
    }
    {
        /* Tested function call */
        int _return  = sc_get_fract_val(_rect, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_fract_val_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_fract_val_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_fract_val(struct v4l2_rect *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect _rect_0 ;
    struct v4l2_rect * _rect  = & _rect_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_get_fract_val(_rect, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_fract_val_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_fract_val_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_fract_val(struct v4l2_rect *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect _rect_0 ;
    struct v4l2_rect * _rect  = & _rect_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 877807426;
    }
    {
        /* Tested function call */
        int _return  = sc_get_fract_val(_rect, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_fract_val_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_fract_val_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_fract_val(struct v4l2_rect *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect * _rect  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 842094158;
    }
    {
        /* Tested function call */
        int _return  = sc_get_fract_val(_rect, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_fract_val_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_fract_val_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_fract_val(struct v4l2_rect *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect _rect_0 ;
    struct v4l2_rect * _rect  = & _rect_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_1 ;
    struct sc_ctx * _ctx  = & _ctx_1;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 842091865;
    }
    {
        /* Tested function call */
        int _return  = sc_get_fract_val(_rect, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_fract_val_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_fract_val_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_fract_val(struct v4l2_rect *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect * _rect  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 825380185;
    }
    {
        /* Tested function call */
        int _return  = sc_get_fract_val(_rect, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_fract_val_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_fract_val_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_fract_val(struct v4l2_rect *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect _rect_0 ;
    struct v4l2_rect * _rect  = & _rect_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 32767;
    }
    {
        /* Tested function call */
        int _return  = sc_get_fract_val(_rect, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_fract_val_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_fract_val_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_fract_val(struct v4l2_rect *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect * _rect  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_get_fract_val(_rect, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_fract_val_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_fract_val_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_fract_val(struct v4l2_rect *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect _rect_0 ;
    struct v4l2_rect * _rect  = & _rect_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_1 ;
    struct sc_ctx * _ctx  = & _ctx_1;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -22;
    }
    {
        /* Tested function call */
        int _return  = sc_get_fract_val(_rect, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_fract_val_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_fract_val_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_fract_val(struct v4l2_rect *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_fract_val_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (rect) */ 
    struct v4l2_rect * _rect  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_get_fract_val(_rect, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_rect * _rect ", ( _rect ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_fract_val_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mif_freq_by_bw_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_get_mif_freq_by_bw(struct sc_ctx *, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw_read) */ 
    unsigned _bw_read  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (bw_write) */ 
    unsigned _bw_write  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        unsigned _return  = sc_get_mif_freq_by_bw(_ctx, _bw_read, _bw_write);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mif_freq_by_bw_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mif_freq_by_bw_10 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_get_mif_freq_by_bw(struct sc_ctx *, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw_read) */ 
    unsigned _bw_read  = 0u;
    /* Initializing argument 3 (bw_write) */ 
    unsigned _bw_write  = 0u;
    {
        /* Tested function call */
        unsigned _return  = sc_get_mif_freq_by_bw(_ctx, _bw_read, _bw_write);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mif_freq_by_bw_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mif_freq_by_bw_2 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_get_mif_freq_by_bw(struct sc_ctx *, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (bw_read) */ 
    unsigned _bw_read  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (bw_write) */ 
    unsigned _bw_write  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        unsigned _return  = sc_get_mif_freq_by_bw(_ctx, _bw_read, _bw_write);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mif_freq_by_bw_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mif_freq_by_bw_3 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_get_mif_freq_by_bw(struct sc_ctx *, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw_read) */ 
    unsigned _bw_read  = 1u;
    /* Initializing argument 3 (bw_write) */ 
    unsigned _bw_write  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        unsigned _return  = sc_get_mif_freq_by_bw(_ctx, _bw_read, _bw_write);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mif_freq_by_bw_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mif_freq_by_bw_4 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_get_mif_freq_by_bw(struct sc_ctx *, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw_read) */ 
    unsigned _bw_read  = 0u;
    /* Initializing argument 3 (bw_write) */ 
    unsigned _bw_write  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        unsigned _return  = sc_get_mif_freq_by_bw(_ctx, _bw_read, _bw_write);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mif_freq_by_bw_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mif_freq_by_bw_5 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_get_mif_freq_by_bw(struct sc_ctx *, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw_read) */ 
    unsigned _bw_read  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (bw_write) */ 
    unsigned _bw_write  = 1u;
    {
        /* Tested function call */
        unsigned _return  = sc_get_mif_freq_by_bw(_ctx, _bw_read, _bw_write);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mif_freq_by_bw_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mif_freq_by_bw_6 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_get_mif_freq_by_bw(struct sc_ctx *, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw_read) */ 
    unsigned _bw_read  = 1u;
    /* Initializing argument 3 (bw_write) */ 
    unsigned _bw_write  = 1u;
    {
        /* Tested function call */
        unsigned _return  = sc_get_mif_freq_by_bw(_ctx, _bw_read, _bw_write);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mif_freq_by_bw_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mif_freq_by_bw_7 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_get_mif_freq_by_bw(struct sc_ctx *, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw_read) */ 
    unsigned _bw_read  = 0u;
    /* Initializing argument 3 (bw_write) */ 
    unsigned _bw_write  = 1u;
    {
        /* Tested function call */
        unsigned _return  = sc_get_mif_freq_by_bw(_ctx, _bw_read, _bw_write);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mif_freq_by_bw_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mif_freq_by_bw_8 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_get_mif_freq_by_bw(struct sc_ctx *, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw_read) */ 
    unsigned _bw_read  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (bw_write) */ 
    unsigned _bw_write  = 0u;
    {
        /* Tested function call */
        unsigned _return  = sc_get_mif_freq_by_bw(_ctx, _bw_read, _bw_write);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mif_freq_by_bw_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mif_freq_by_bw_9 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_get_mif_freq_by_bw(struct sc_ctx *, unsigned int, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mif_freq_by_bw_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (bw_read) */ 
    unsigned _bw_read  = 1u;
    /* Initializing argument 3 (bw_write) */ 
    unsigned _bw_write  = 0u;
    {
        /* Tested function call */
        unsigned _return  = sc_get_mif_freq_by_bw(_ctx, _bw_read, _bw_write);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mif_freq_by_bw_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mscl_votf_of_dt_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_mscl_votf_of_dt(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mscl_votf_of_dt_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_get_mscl_votf_of_dt(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mscl_votf_of_dt_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_mscl_votf_of_dt_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_mscl_votf_of_dt(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_mscl_votf_of_dt_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    {
        /* Tested function call */
        int _return  = sc_get_mscl_votf_of_dt(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_mscl_votf_of_dt_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_from_dt_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_from_dt(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_from_dt_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_from_dt(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_from_dt_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_from_dt_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_from_dt(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_from_dt_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_from_dt(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_from_dt_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = -1;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 0;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = -1;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 1;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 0;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 1;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_by_ppc_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level_by_ppc(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 1;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level_by_ppc(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_by_ppc_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_by_ppc_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level_by_ppc(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level_by_ppc(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_by_ppc_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_by_ppc_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level_by_ppc(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 1;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level_by_ppc(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_by_ppc_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_by_ppc_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level_by_ppc(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 0;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level_by_ppc(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_by_ppc_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_by_ppc_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level_by_ppc(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 0;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level_by_ppc(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_by_ppc_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_by_ppc_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level_by_ppc(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 1000000;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level_by_ppc(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_by_ppc_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_by_ppc_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level_by_ppc(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level_by_ppc(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_by_ppc_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_by_ppc_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level_by_ppc(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = -1;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level_by_ppc(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_by_ppc_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_by_ppc_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level_by_ppc(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level_by_ppc(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_by_ppc_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_pm_qos_level_by_ppc_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_pm_qos_level_by_ppc(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_pm_qos_level_by_ppc_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 1000000;
    {
        /* Tested function call */
        int _return  = sc_get_pm_qos_level_by_ppc(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_pm_qos_level_by_ppc_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_sink_votf_of_dt_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_sink_votf_of_dt(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_sink_votf_of_dt_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_get_sink_votf_of_dt(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_sink_votf_of_dt_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_sink_votf_of_dt_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_sink_votf_of_dt(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_sink_votf_of_dt_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    {
        /* Tested function call */
        int _return  = sc_get_sink_votf_of_dt(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_sink_votf_of_dt_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_vb2_dma_addr_1 */
/* CPPTEST_TEST_CASE_CONTEXT dma_addr_t sc_get_vb2_dma_addr(struct vb2_buffer *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 2 (plane_no) */ 
    int _plane_no  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        dma_addr_t _return  = sc_get_vb2_dma_addr(_vb2buf, _plane_no);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("dma_addr_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_vb2_dma_addr_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_vb2_dma_addr_10 */
/* CPPTEST_TEST_CASE_CONTEXT dma_addr_t sc_get_vb2_dma_addr(struct vb2_buffer *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb2buf) */ 
    struct vb2_buffer _vb2buf_0 ;
    struct vb2_buffer * _vb2buf  = & _vb2buf_0;
    /* Initializing argument 2 (plane_no) */ 
    int _plane_no  = 0;
    {
        /* Tested function call */
        dma_addr_t _return  = sc_get_vb2_dma_addr(_vb2buf, _plane_no);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("dma_addr_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_vb2_dma_addr_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_vb2_dma_addr_2 */
/* CPPTEST_TEST_CASE_CONTEXT dma_addr_t sc_get_vb2_dma_addr(struct vb2_buffer *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb2buf) */ 
    struct vb2_buffer _vb2buf_0 ;
    struct vb2_buffer * _vb2buf  = & _vb2buf_0;
    /* Initializing argument 2 (plane_no) */ 
    int _plane_no  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        dma_addr_t _return  = sc_get_vb2_dma_addr(_vb2buf, _plane_no);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("dma_addr_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_vb2_dma_addr_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_vb2_dma_addr_3 */
/* CPPTEST_TEST_CASE_CONTEXT dma_addr_t sc_get_vb2_dma_addr(struct vb2_buffer *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 2 (plane_no) */ 
    int _plane_no  = -1;
    {
        /* Tested function call */
        dma_addr_t _return  = sc_get_vb2_dma_addr(_vb2buf, _plane_no);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("dma_addr_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_vb2_dma_addr_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_vb2_dma_addr_4 */
/* CPPTEST_TEST_CASE_CONTEXT dma_addr_t sc_get_vb2_dma_addr(struct vb2_buffer *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb2buf) */ 
    struct vb2_buffer _vb2buf_0 ;
    struct vb2_buffer * _vb2buf  = & _vb2buf_0;
    /* Initializing argument 2 (plane_no) */ 
    int _plane_no  = -1;
    {
        /* Tested function call */
        dma_addr_t _return  = sc_get_vb2_dma_addr(_vb2buf, _plane_no);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("dma_addr_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_vb2_dma_addr_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_vb2_dma_addr_5 */
/* CPPTEST_TEST_CASE_CONTEXT dma_addr_t sc_get_vb2_dma_addr(struct vb2_buffer *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 2 (plane_no) */ 
    int _plane_no  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        dma_addr_t _return  = sc_get_vb2_dma_addr(_vb2buf, _plane_no);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("dma_addr_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_vb2_dma_addr_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_vb2_dma_addr_6 */
/* CPPTEST_TEST_CASE_CONTEXT dma_addr_t sc_get_vb2_dma_addr(struct vb2_buffer *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb2buf) */ 
    struct vb2_buffer _vb2buf_0 ;
    struct vb2_buffer * _vb2buf  = & _vb2buf_0;
    /* Initializing argument 2 (plane_no) */ 
    int _plane_no  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        dma_addr_t _return  = sc_get_vb2_dma_addr(_vb2buf, _plane_no);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("dma_addr_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_vb2_dma_addr_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_vb2_dma_addr_7 */
/* CPPTEST_TEST_CASE_CONTEXT dma_addr_t sc_get_vb2_dma_addr(struct vb2_buffer *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 2 (plane_no) */ 
    int _plane_no  = 1;
    {
        /* Tested function call */
        dma_addr_t _return  = sc_get_vb2_dma_addr(_vb2buf, _plane_no);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("dma_addr_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_vb2_dma_addr_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_vb2_dma_addr_8 */
/* CPPTEST_TEST_CASE_CONTEXT dma_addr_t sc_get_vb2_dma_addr(struct vb2_buffer *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb2buf) */ 
    struct vb2_buffer _vb2buf_0 ;
    struct vb2_buffer * _vb2buf  = & _vb2buf_0;
    /* Initializing argument 2 (plane_no) */ 
    int _plane_no  = 1;
    {
        /* Tested function call */
        dma_addr_t _return  = sc_get_vb2_dma_addr(_vb2buf, _plane_no);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("dma_addr_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_vb2_dma_addr_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_vb2_dma_addr_9 */
/* CPPTEST_TEST_CASE_CONTEXT dma_addr_t sc_get_vb2_dma_addr(struct vb2_buffer *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_vb2_dma_addr_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb2buf) */ 
    struct vb2_buffer * _vb2buf  = 0 ;
    /* Initializing argument 2 (plane_no) */ 
    int _plane_no  = 0;
    {
        /* Tested function call */
        dma_addr_t _return  = sc_get_vb2_dma_addr(_vb2buf, _plane_no);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("dma_addr_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb2buf ", ( _vb2buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_vb2_dma_addr_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_votf_of_dt_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_votf_of_dt(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_votf_of_dt_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_get_votf_of_dt(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_votf_of_dt_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_get_votf_of_dt_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_get_votf_of_dt(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_get_votf_of_dt_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    {
        /* Tested function call */
        int _return  = sc_get_votf_of_dt(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_get_votf_of_dt_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_iommu_unmap_wrapper_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_iommu_unmap_wrapper(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_iommu_unmap_wrapper_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (arg) */ 
    void * _arg  = 0 ;
    {
        /* Tested function call */
        sc_iommu_unmap_wrapper(_arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _arg ", ( _arg ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_iommu_unmap_wrapper_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ion_get_heapmask_by_name_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ion_get_heapmask_by_name(const char *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap_name) */ 
    const char * _heap_name  = "Hello world";
    {
        /* Tested function call */
        unsigned _return  = sc_ion_get_heapmask_by_name(_heap_name);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ion_get_heapmask_by_name_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ion_get_heapmask_by_name_2 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ion_get_heapmask_by_name(const char *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap_name) */ 
    const char * _heap_name  = "";
    {
        /* Tested function call */
        unsigned _return  = sc_ion_get_heapmask_by_name(_heap_name);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ion_get_heapmask_by_name_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ion_get_heapmask_by_name_3 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ion_get_heapmask_by_name(const char *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap_name) */ 
    const char * _heap_name  = "A very long string that is supposed to contain more than 256 characters in length..................................................................................................................................................................................";
    {
        /* Tested function call */
        unsigned _return  = sc_ion_get_heapmask_by_name(_heap_name);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ion_get_heapmask_by_name_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_ion_get_heapmask_by_name_4 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_ion_get_heapmask_by_name(const char *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_ion_get_heapmask_by_name_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap_name) */ 
    const char * _heap_name  = 0 ;
    {
        /* Tested function call */
        unsigned _return  = sc_ion_get_heapmask_by_name(_heap_name);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_ion_get_heapmask_by_name_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_irq_handler_1 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 6;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 6;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 6;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_irq_handler_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_irq_handler_10 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 6;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_irq_handler_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_irq_handler_2 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 5;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 6;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 6;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_irq_handler_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_irq_handler_3 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 6;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 5;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_irq_handler_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_irq_handler_4 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 6;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 4;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_irq_handler_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_irq_handler_5 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 6;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 6;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 2;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_irq_handler_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_irq_handler_6 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 6;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_irq_handler_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_irq_handler_7 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 6;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_irq_handler_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_irq_handler_8 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 6;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 6;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_irq_handler_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_irq_handler_9 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_irq_handler_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 6;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_irq_handler_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_job_finish_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_job_finish(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        sc_job_finish(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_job_finish_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_job_finish_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_job_finish(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        sc_job_finish(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_job_finish_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_job_finish_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_job_finish(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        sc_job_finish(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_job_finish_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_job_finish_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_job_finish(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_job_finish_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_1 ;
    struct sc_ctx * _ctx  = & _ctx_1;
    {
        /* Tested function call */
        sc_job_finish(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_job_finish_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_device_run_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_device_run(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 6;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 6;
    }
    {
        /* Tested function call */
        sc_m2m_device_run(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_device_run_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_device_run_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_device_run(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        sc_m2m_device_run(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_device_run_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_device_run_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_device_run(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 6;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 6;
    }
    {
        /* Tested function call */
        sc_m2m_device_run(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_device_run_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_device_run_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_device_run(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 6;
    }
    {
        /* Tested function call */
        sc_m2m_device_run(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_device_run_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_device_run_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_device_run(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 6;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        sc_m2m_device_run(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_device_run_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_device_run_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_device_run(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        sc_m2m_device_run(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_device_run_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_device_run_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_device_run(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 6;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        sc_m2m_device_run(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_device_run_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_device_run_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_device_run(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        sc_m2m_device_run(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_device_run_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_device_run_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_device_run(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        sc_m2m_device_run(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_device_run_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_device_run_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_device_run(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_device_run_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        sc_m2m_device_run(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_device_run_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_m2m_job_abort_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_m2m_job_abort(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_m2m_job_abort_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (priv) */ 
    void * _priv  = 0 ;
    {
        /* Tested function call */
        sc_m2m_job_abort(_priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_m2m_job_abort_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_mmap_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_mmap(struct file *, struct vm_area_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (vma) */ 
    struct vm_area_struct * _vma  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_mmap(_file, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_mmap_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_mmap_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_mmap(struct file *, struct vm_area_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (vma) */ 
    struct vm_area_struct * _vma  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_mmap(_file, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_mmap_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_mmap_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_mmap(struct file *, struct vm_area_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (vma) */ 
    struct vm_area_struct _vma_0 ;
    struct vm_area_struct * _vma  = & _vma_0;
    {
        /* Tested function call */
        int _return  = sc_mmap(_file, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_mmap_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_mmap_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_mmap(struct file *, struct vm_area_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_mmap_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (vma) */ 
    struct vm_area_struct _vma_1 ;
    struct vm_area_struct * _vma  = & _vma_1;
    {
        /* Tested function call */
        int _return  = sc_mmap(_file, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_mmap_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_open_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_open(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_open_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing global variable sc_vb2_ops */ 
    {
         sc_vb2_ops.queue_setup  = 0 ;
         sc_vb2_ops.wait_prepare  = 0 ;
         sc_vb2_ops.wait_finish  = 0 ;
         sc_vb2_ops.buf_out_validate  = 0 ;
         sc_vb2_ops.buf_init  = 0 ;
         sc_vb2_ops.buf_prepare  = 0 ;
         sc_vb2_ops.buf_finish  = 0 ;
         sc_vb2_ops.buf_cleanup  = 0 ;
         sc_vb2_ops.prepare_streaming  = 0 ;
         sc_vb2_ops.start_streaming  = 0 ;
         sc_vb2_ops.stop_streaming  = 0 ;
         sc_vb2_ops.unprepare_streaming  = 0 ;
         sc_vb2_ops.buf_queue  = 0 ;
         sc_vb2_ops.buf_request_complete  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_open(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.queue_setup )(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int [], struct device *[])", ( sc_vb2_ops.queue_setup ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_prepare )(struct vb2_queue *)", ( sc_vb2_ops.wait_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_finish )(struct vb2_queue *)", ( sc_vb2_ops.wait_finish ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_out_validate )(struct vb2_buffer *)", ( sc_vb2_ops.buf_out_validate ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_init )(struct vb2_buffer *)", ( sc_vb2_ops.buf_init ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_prepare )(struct vb2_buffer *)", ( sc_vb2_ops.buf_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_finish )(struct vb2_buffer *)", ( sc_vb2_ops.buf_finish ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_cleanup )(struct vb2_buffer *)", ( sc_vb2_ops.buf_cleanup ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.prepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.prepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.start_streaming )(struct vb2_queue *, unsigned int)", ( sc_vb2_ops.start_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.stop_streaming )(struct vb2_queue *)", ( sc_vb2_ops.stop_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.unprepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.unprepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_queue )(struct vb2_buffer *)", ( sc_vb2_ops.buf_queue ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_request_complete )(struct vb2_buffer *)", ( sc_vb2_ops.buf_request_complete ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_open_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_open_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_open(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_open_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing global variable sc_vb2_ops */ 
    {
         sc_vb2_ops.queue_setup  = 0 ;
         sc_vb2_ops.wait_prepare  = 0 ;
         sc_vb2_ops.wait_finish  = 0 ;
         sc_vb2_ops.buf_out_validate  = 0 ;
         sc_vb2_ops.buf_init  = 0 ;
         sc_vb2_ops.buf_prepare  = 0 ;
         sc_vb2_ops.buf_finish  = 0 ;
         sc_vb2_ops.buf_cleanup  = 0 ;
         sc_vb2_ops.prepare_streaming  = 0 ;
         sc_vb2_ops.start_streaming  = 0 ;
         sc_vb2_ops.stop_streaming  = 0 ;
         sc_vb2_ops.unprepare_streaming  = 0 ;
         sc_vb2_ops.buf_queue  = 0 ;
         sc_vb2_ops.buf_request_complete  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_open(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.queue_setup )(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int [], struct device *[])", ( sc_vb2_ops.queue_setup ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_prepare )(struct vb2_queue *)", ( sc_vb2_ops.wait_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.wait_finish )(struct vb2_queue *)", ( sc_vb2_ops.wait_finish ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_out_validate )(struct vb2_buffer *)", ( sc_vb2_ops.buf_out_validate ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_init )(struct vb2_buffer *)", ( sc_vb2_ops.buf_init ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.buf_prepare )(struct vb2_buffer *)", ( sc_vb2_ops.buf_prepare ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_finish )(struct vb2_buffer *)", ( sc_vb2_ops.buf_finish ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_cleanup )(struct vb2_buffer *)", ( sc_vb2_ops.buf_cleanup ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.prepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.prepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_vb2_ops.start_streaming )(struct vb2_queue *, unsigned int)", ( sc_vb2_ops.start_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.stop_streaming )(struct vb2_queue *)", ( sc_vb2_ops.stop_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.unprepare_streaming )(struct vb2_queue *)", ( sc_vb2_ops.unprepare_streaming ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_queue )(struct vb2_buffer *)", ( sc_vb2_ops.buf_queue ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_vb2_ops.buf_request_complete )(struct vb2_buffer *)", ( sc_vb2_ops.buf_request_complete ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_open_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_poll_1 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_poll(struct file *, struct poll_table_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (wait) */ 
    struct poll_table_struct * _wait  = 0 ;
    {
        /* Tested function call */
        unsigned _return  = sc_poll(_file, _wait);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("struct poll_table_struct * _wait ", ( _wait ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_poll_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_poll_2 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_poll(struct file *, struct poll_table_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (wait) */ 
    struct poll_table_struct * _wait  = 0 ;
    {
        /* Tested function call */
        unsigned _return  = sc_poll(_file, _wait);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("struct poll_table_struct * _wait ", ( _wait ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_poll_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_poll_3 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_poll(struct file *, struct poll_table_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (wait) */ 
    struct poll_table_struct _wait_0 ;
    struct poll_table_struct * _wait  = & _wait_0;
    {
        /* Tested function call */
        unsigned _return  = sc_poll(_file, _wait);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("struct poll_table_struct * _wait ", ( _wait ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_poll_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_poll_4 */
/* CPPTEST_TEST_CASE_CONTEXT unsigned int sc_poll(struct file *, struct poll_table_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_poll_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (wait) */ 
    struct poll_table_struct _wait_1 ;
    struct poll_table_struct * _wait  = & _wait_1;
    {
        /* Tested function call */
        unsigned _return  = sc_poll(_file, _wait);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("unsigned int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("struct poll_table_struct * _wait ", ( _wait ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_poll_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_populate_dt_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_populate_dt(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_populate_dt_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_populate_dt(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_populate_dt_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_populate_dt_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_populate_dt(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_populate_dt_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    {
        /* Tested function call */
        int _return  = sc_populate_dt(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_populate_dt_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_power_clk_enable_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_power_clk_enable(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_power_clk_enable_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_power_clk_enable(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_power_clk_enable_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_power_clk_enable_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_power_clk_enable(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_power_clk_enable_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    {
        /* Tested function call */
        int _return  = sc_power_clk_enable(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_power_clk_enable_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_2nd_scaling_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_2nd_scaling(struct sc_ctx *, __s32, __s32, unsigned int *, unsigned int *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (src_width) */ 
    __s32 _src_width  = 944976461;
    /* Initializing argument 3 (src_height) */ 
    __s32 _src_height  = 944976461;
    /* Initializing argument 4 (h_ratio) */ 
    unsigned _h_ratio_0 [1];
    unsigned * _h_ratio  = (unsigned * )cpptestMemset((void*)&_h_ratio_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (v_ratio) */ 
    unsigned _v_ratio_1 [1];
    unsigned * _v_ratio  = (unsigned * )cpptestMemset((void*)&_v_ratio_1, 0, (1 * sizeof(unsigned)));
    {
        /* Tested function call */
        int _return  = sc_prepare_2nd_scaling(_ctx, _src_width, _src_height, _h_ratio, _v_ratio);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _h_ratio", ( _h_ratio ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _v_ratio", ( _v_ratio ), sizeof(unsigned));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_2nd_scaling_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_2nd_scaling_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_2nd_scaling(struct sc_ctx *, __s32, __s32, unsigned int *, unsigned int *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (src_width) */ 
    __s32 _src_width  = 0;
    /* Initializing argument 3 (src_height) */ 
    __s32 _src_height  = 842091842;
    /* Initializing argument 4 (h_ratio) */ 
    unsigned _h_ratio_0 [256];
    unsigned * _h_ratio  = (unsigned * )cpptestMemset((void*)&_h_ratio_0, 0, (256 * sizeof(unsigned)));
    /* Initializing argument 5 (v_ratio) */ 
    unsigned * _v_ratio  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_prepare_2nd_scaling(_ctx, _src_width, _src_height, _h_ratio, _v_ratio);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _h_ratio", ( _h_ratio ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _v_ratio", ( _v_ratio ), sizeof(unsigned));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_2nd_scaling_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_2nd_scaling_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_2nd_scaling(struct sc_ctx *, __s32, __s32, unsigned int *, unsigned int *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (src_width) */ 
    __s32 _src_width  = 944976461;
    /* Initializing argument 3 (src_height) */ 
    __s32 _src_height  = 944976461;
    /* Initializing argument 4 (h_ratio) */ 
    unsigned _h_ratio_1 [1];
    unsigned * _h_ratio  = (unsigned * )cpptestMemset((void*)&_h_ratio_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (v_ratio) */ 
    unsigned _v_ratio_2 [1];
    unsigned * _v_ratio  = (unsigned * )cpptestMemset((void*)&_v_ratio_2, 0, (1 * sizeof(unsigned)));
    {
        /* Tested function call */
        int _return  = sc_prepare_2nd_scaling(_ctx, _src_width, _src_height, _h_ratio, _v_ratio);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _h_ratio", ( _h_ratio ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _v_ratio", ( _v_ratio ), sizeof(unsigned));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_2nd_scaling_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_2nd_scaling_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_2nd_scaling(struct sc_ctx *, __s32, __s32, unsigned int *, unsigned int *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (src_width) */ 
    __s32 _src_width  = 827076941;
    /* Initializing argument 3 (src_height) */ 
    __s32 _src_height  = 8;
    /* Initializing argument 4 (h_ratio) */ 
    unsigned _h_ratio_0 [16];
    unsigned * _h_ratio  = (unsigned * )cpptestMemset((void*)&_h_ratio_0, 0, (16 * sizeof(unsigned)));
    /* Initializing argument 5 (v_ratio) */ 
    unsigned _v_ratio_1 [1];
    unsigned * _v_ratio  = (unsigned * )cpptestMemset((void*)&_v_ratio_1, 0, (1 * sizeof(unsigned)));
    {
        /* Tested function call */
        int _return  = sc_prepare_2nd_scaling(_ctx, _src_width, _src_height, _h_ratio, _v_ratio);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _h_ratio", ( _h_ratio ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _v_ratio", ( _v_ratio ), sizeof(unsigned));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_2nd_scaling_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_2nd_scaling_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_2nd_scaling(struct sc_ctx *, __s32, __s32, unsigned int *, unsigned int *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (src_width) */ 
    __s32 _src_width  = 0;
    /* Initializing argument 3 (src_height) */ 
    __s32 _src_height  = 2048;
    /* Initializing argument 4 (h_ratio) */ 
    unsigned * _h_ratio  = 0 ;
    /* Initializing argument 5 (v_ratio) */ 
    unsigned _v_ratio_0 [1];
    unsigned * _v_ratio  = (unsigned * )cpptestMemset((void*)&_v_ratio_0, 0, (1 * sizeof(unsigned)));
    {
        /* Tested function call */
        int _return  = sc_prepare_2nd_scaling(_ctx, _src_width, _src_height, _h_ratio, _v_ratio);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _h_ratio", ( _h_ratio ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _v_ratio", ( _v_ratio ), sizeof(unsigned));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_2nd_scaling_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_2nd_scaling_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_2nd_scaling(struct sc_ctx *, __s32, __s32, unsigned int *, unsigned int *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (src_width) */ 
    __s32 _src_width  = 944976461;
    /* Initializing argument 3 (src_height) */ 
    __s32 _src_height  = 827076941;
    /* Initializing argument 4 (h_ratio) */ 
    unsigned _h_ratio_0 [16];
    unsigned * _h_ratio  = (unsigned * )cpptestMemset((void*)&_h_ratio_0, 0, (16 * sizeof(unsigned)));
    /* Initializing argument 5 (v_ratio) */ 
    unsigned _v_ratio_1 [16];
    unsigned * _v_ratio  = (unsigned * )cpptestMemset((void*)&_v_ratio_1, 0, (16 * sizeof(unsigned)));
    {
        /* Tested function call */
        int _return  = sc_prepare_2nd_scaling(_ctx, _src_width, _src_height, _h_ratio, _v_ratio);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _h_ratio", ( _h_ratio ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _v_ratio", ( _v_ratio ), sizeof(unsigned));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_2nd_scaling_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_2nd_scaling_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_2nd_scaling(struct sc_ctx *, __s32, __s32, unsigned int *, unsigned int *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (src_width) */ 
    __s32 _src_width  = 827076941;
    /* Initializing argument 3 (src_height) */ 
    __s32 _src_height  = 944517453;
    /* Initializing argument 4 (h_ratio) */ 
    unsigned * _h_ratio  = 0 ;
    /* Initializing argument 5 (v_ratio) */ 
    unsigned _v_ratio_0 [16];
    unsigned * _v_ratio  = (unsigned * )cpptestMemset((void*)&_v_ratio_0, 0, (16 * sizeof(unsigned)));
    {
        /* Tested function call */
        int _return  = sc_prepare_2nd_scaling(_ctx, _src_width, _src_height, _h_ratio, _v_ratio);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _h_ratio", ( _h_ratio ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _v_ratio", ( _v_ratio ), sizeof(unsigned));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_2nd_scaling_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_2nd_scaling_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_2nd_scaling(struct sc_ctx *, __s32, __s32, unsigned int *, unsigned int *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (src_width) */ 
    __s32 _src_width  = 0;
    /* Initializing argument 3 (src_height) */ 
    __s32 _src_height  = -1;
    /* Initializing argument 4 (h_ratio) */ 
    unsigned _h_ratio_0 [1];
    unsigned * _h_ratio  = (unsigned * )cpptestMemset((void*)&_h_ratio_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (v_ratio) */ 
    unsigned _v_ratio_1 [256];
    unsigned * _v_ratio  = (unsigned * )cpptestMemset((void*)&_v_ratio_1, 0, (256 * sizeof(unsigned)));
    {
        /* Tested function call */
        int _return  = sc_prepare_2nd_scaling(_ctx, _src_width, _src_height, _h_ratio, _v_ratio);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _h_ratio", ( _h_ratio ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _v_ratio", ( _v_ratio ), sizeof(unsigned));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_2nd_scaling_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_2nd_scaling_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_2nd_scaling(struct sc_ctx *, __s32, __s32, unsigned int *, unsigned int *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (src_width) */ 
    __s32 _src_width  = 944976461;
    /* Initializing argument 3 (src_height) */ 
    __s32 _src_height  = 0;
    /* Initializing argument 4 (h_ratio) */ 
    unsigned _h_ratio_0 [256];
    unsigned * _h_ratio  = (unsigned * )cpptestMemset((void*)&_h_ratio_0, 0, (256 * sizeof(unsigned)));
    /* Initializing argument 5 (v_ratio) */ 
    unsigned _v_ratio_1 [256];
    unsigned * _v_ratio  = (unsigned * )cpptestMemset((void*)&_v_ratio_1, 0, (256 * sizeof(unsigned)));
    {
        /* Tested function call */
        int _return  = sc_prepare_2nd_scaling(_ctx, _src_width, _src_height, _h_ratio, _v_ratio);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _h_ratio", ( _h_ratio ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _v_ratio", ( _v_ratio ), sizeof(unsigned));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_2nd_scaling_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_2nd_scaling_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_2nd_scaling(struct sc_ctx *, __s32, __s32, unsigned int *, unsigned int *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_2nd_scaling_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (src_width) */ 
    __s32 _src_width  = 827076941;
    /* Initializing argument 3 (src_height) */ 
    __s32 _src_height  = 4194304;
    /* Initializing argument 4 (h_ratio) */ 
    unsigned _h_ratio_0 [1];
    unsigned * _h_ratio  = (unsigned * )cpptestMemset((void*)&_h_ratio_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (v_ratio) */ 
    unsigned * _v_ratio  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_prepare_2nd_scaling(_ctx, _src_width, _src_height, _h_ratio, _v_ratio);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _h_ratio", ( _h_ratio ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _v_ratio", ( _v_ratio ), sizeof(unsigned));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_2nd_scaling_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_denoise_filter_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_denoise_filter(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 8388608;
         sc_filter_tab[0].w  = 8388608;
         sc_filter_tab[0].h  = 8388608;
    }
    {
        /* Tested function call */
        int _return  = sc_prepare_denoise_filter(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_denoise_filter_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_denoise_filter_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_denoise_filter(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 1;
         sc_filter_tab[0].w  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].h  = 1u;
    }
    {
        /* Tested function call */
        int _return  = sc_prepare_denoise_filter(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_denoise_filter_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_denoise_filter_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_denoise_filter(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 8388608;
         sc_filter_tab[0].w  = 8388608;
         sc_filter_tab[0].h  = 8388608;
    }
    {
        /* Tested function call */
        int _return  = sc_prepare_denoise_filter(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_denoise_filter_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_denoise_filter_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_denoise_filter(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 1048576;
         sc_filter_tab[0].w  = 2048;
         sc_filter_tab[0].h  = 4194304;
    }
    {
        /* Tested function call */
        int _return  = sc_prepare_denoise_filter(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_denoise_filter_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_denoise_filter_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_denoise_filter(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 1u;
         sc_filter_tab[0].w  = 16777216;
         sc_filter_tab[0].h  = 2048;
    }
    {
        /* Tested function call */
        int _return  = sc_prepare_denoise_filter(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_denoise_filter_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_denoise_filter_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_denoise_filter(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 2;
         sc_filter_tab[0].w  = 0;
         sc_filter_tab[0].h  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_prepare_denoise_filter(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_denoise_filter_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_denoise_filter_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_denoise_filter(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].w  = 1u;
         sc_filter_tab[0].h  = 16777216;
    }
    {
        /* Tested function call */
        int _return  = sc_prepare_denoise_filter(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_denoise_filter_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_denoise_filter_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_denoise_filter(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 2048;
         sc_filter_tab[0].w  = 4194304;
         sc_filter_tab[0].h  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_prepare_denoise_filter(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_denoise_filter_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_denoise_filter_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_denoise_filter(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 0;
         sc_filter_tab[0].w  = 2;
         sc_filter_tab[0].h  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_prepare_denoise_filter(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_denoise_filter_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_prepare_denoise_filter_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_prepare_denoise_filter(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_prepare_denoise_filter_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 4194304;
         sc_filter_tab[0].w  = 1;
         sc_filter_tab[0].h  = cpptestLimitsGetMaxUnsignedInt();
    }
    {
        /* Tested function call */
        int _return  = sc_prepare_denoise_filter(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_prepare_denoise_filter_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_probe_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_probe(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 608;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 608;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 608;
    }
    {
        /* Tested function call */
        int _return  = sc_probe(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_probe_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_probe_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_probe(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 608;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_probe(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_probe_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_probe_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_probe(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device _pdev_0 ;
    struct platform_device * _pdev  = & _pdev_0;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 608;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 608;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 608;
    }
    {
        /* Tested function call */
        int _return  = sc_probe(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_probe_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_probe_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_probe(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 608;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 512;
    }
    {
        /* Tested function call */
        int _return  = sc_probe(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_probe_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_probe_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_probe(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 608;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 12;
    }
    {
        /* Tested function call */
        int _return  = sc_probe(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_probe_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_probe_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_probe(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 608;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 608;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_probe(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_probe_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_probe_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_probe(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 608;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_probe(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_probe_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_probe_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_probe(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 608;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -12;
    }
    {
        /* Tested function call */
        int _return  = sc_probe(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_probe_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_probe_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_probe(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 608;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 608;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_probe(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_probe_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_probe_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_probe(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_probe_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 608;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_probe(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_probe_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_process_2nd_stage_1 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_process_2nd_stage(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    {
        /* Tested function call */
        bool _return  = sc_process_2nd_stage(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_process_2nd_stage_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_process_2nd_stage_10 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_process_2nd_stage(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        bool _return  = sc_process_2nd_stage(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_process_2nd_stage_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_process_2nd_stage_2 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_process_2nd_stage(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    {
        /* Tested function call */
        bool _return  = sc_process_2nd_stage(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_process_2nd_stage_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_process_2nd_stage_3 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_process_2nd_stage(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 4;
    }
    {
        /* Tested function call */
        bool _return  = sc_process_2nd_stage(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_process_2nd_stage_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_process_2nd_stage_4 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_process_2nd_stage(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_1 ;
    struct sc_ctx * _ctx  = & _ctx_1;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3;
    }
    {
        /* Tested function call */
        bool _return  = sc_process_2nd_stage(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_process_2nd_stage_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_process_2nd_stage_5 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_process_2nd_stage(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 2;
    }
    {
        /* Tested function call */
        bool _return  = sc_process_2nd_stage(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_process_2nd_stage_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_process_2nd_stage_6 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_process_2nd_stage(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1048576;
    }
    {
        /* Tested function call */
        bool _return  = sc_process_2nd_stage(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_process_2nd_stage_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_process_2nd_stage_7 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_process_2nd_stage(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        bool _return  = sc_process_2nd_stage(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_process_2nd_stage_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_process_2nd_stage_8 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_process_2nd_stage(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        bool _return  = sc_process_2nd_stage(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_process_2nd_stage_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_process_2nd_stage_9 */
/* CPPTEST_TEST_CASE_CONTEXT bool sc_process_2nd_stage(struct sc_dev *, struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_process_2nd_stage_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        bool _return  = sc_process_2nd_stage(_sc, _ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_BOOL("bool _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_process_2nd_stage_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_put_device_wrapper_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_put_device_wrapper(void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_put_device_wrapper_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (arg) */ 
    void * _arg  = 0 ;
    {
        /* Tested function call */
        sc_put_device_wrapper(_arg);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _arg ", ( _arg ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_put_device_wrapper_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_register_m2m_device_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_register_m2m_device(struct sc_dev *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dev_id) */ 
    int _dev_id  = 2;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_register_m2m_device(_sc, _dev_id);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_register_m2m_device_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_register_m2m_device_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_register_m2m_device(struct sc_dev *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (dev_id) */ 
    int _dev_id  = 1073741824;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_register_m2m_device(_sc, _dev_id);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_register_m2m_device_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_register_m2m_device_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_register_m2m_device(struct sc_dev *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing argument 2 (dev_id) */ 
    int _dev_id  = 2;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_register_m2m_device(_sc, _dev_id);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_register_m2m_device_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_register_m2m_device_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_register_m2m_device(struct sc_dev *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dev_id) */ 
    int _dev_id  = 1073741824;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_register_m2m_device(_sc, _dev_id);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_register_m2m_device_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_register_m2m_device_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_register_m2m_device(struct sc_dev *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dev_id) */ 
    int _dev_id  = 0;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_register_m2m_device(_sc, _dev_id);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_register_m2m_device_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_register_m2m_device_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_register_m2m_device(struct sc_dev *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dev_id) */ 
    int _dev_id  = 50;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_register_m2m_device(_sc, _dev_id);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_register_m2m_device_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_register_m2m_device_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_register_m2m_device(struct sc_dev *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dev_id) */ 
    int _dev_id  = cpptestLimitsGetMaxInt();
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_register_m2m_device(_sc, _dev_id);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_register_m2m_device_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_register_m2m_device_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_register_m2m_device(struct sc_dev *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dev_id) */ 
    int _dev_id  = -1;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_register_m2m_device(_sc, _dev_id);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_register_m2m_device_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_register_m2m_device_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_register_m2m_device(struct sc_dev *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dev_id) */ 
    int _dev_id  = cpptestLimitsGetMinInt();
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_register_m2m_device(_sc, _dev_id);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_register_m2m_device_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_register_m2m_device_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_register_m2m_device(struct sc_dev *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_register_m2m_device_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing argument 2 (dev_id) */ 
    int _dev_id  = 1;
    /* Initializing global variable sc_m2m_ops */ 
    {
         sc_m2m_ops.device_run  = 0 ;
         sc_m2m_ops.job_ready  = 0 ;
         sc_m2m_ops.job_abort  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_register_m2m_device(_sc, _dev_id);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.device_run )(void *)", ( sc_m2m_ops.device_run ));
        CPPTEST_POST_CONDITION_PTR("int (* sc_m2m_ops.job_ready )(void *)", ( sc_m2m_ops.job_ready ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_m2m_ops.job_abort )(void *)", ( sc_m2m_ops.job_abort ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_register_m2m_device_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_release_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_release(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 424;
    }
    {
        /* Tested function call */
        int _return  = sc_release(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_release_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_release_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_release(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_release(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_release_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_release_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_release(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 424;
    }
    {
        /* Tested function call */
        int _return  = sc_release(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_release_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_release_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_release(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3323;
    }
    {
        /* Tested function call */
        int _return  = sc_release(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_release_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_release_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_release(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_release(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_release_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_release_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_release(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_release(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_release_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_release_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_release(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_release(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_release_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_release_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_release(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_release(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_release_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_release_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_release(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_release(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_release_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_release_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_release(struct file *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_release_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3323;
    }
    {
        /* Tested function call */
        int _return  = sc_release(_file);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_release_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_remove_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_remove(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_remove(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_remove_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_remove_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_remove(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device _pdev_0 ;
    struct platform_device * _pdev  = & _pdev_0;
    {
        /* Tested function call */
        int _return  = sc_remove(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_remove_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_remove_devfreq_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_remove_devfreq(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_devfreq_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        sc_remove_devfreq(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_remove_devfreq_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_remove_devfreq_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_remove_devfreq(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_devfreq_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        sc_remove_devfreq(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_remove_devfreq_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_remove_out_fence_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_remove_out_fence(struct vb2_sc_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_out_fence_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_buf) */ 
    struct vb2_sc_buffer * _sc_buf  = 0 ;
    {
        /* Tested function call */
        sc_remove_out_fence(_sc_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_remove_out_fence_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_remove_out_fence_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_remove_out_fence(struct vb2_sc_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_remove_out_fence_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc_buf) */ 
    struct vb2_sc_buffer _sc_buf_0 ;
    struct vb2_sc_buffer * _sc_buf  = & _sc_buf_0;
    {
        /* Tested function call */
        sc_remove_out_fence(_sc_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_remove_out_fence_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_request_devfreq_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_request_devfreq(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (lv) */ 
    int _lv  = 1;
    {
        /* Tested function call */
        sc_request_devfreq(_ctx, _lv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_request_devfreq_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_request_devfreq_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_request_devfreq(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (lv) */ 
    int _lv  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        sc_request_devfreq(_ctx, _lv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_request_devfreq_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_request_devfreq_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_request_devfreq(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (lv) */ 
    int _lv  = 1;
    {
        /* Tested function call */
        sc_request_devfreq(_ctx, _lv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_request_devfreq_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_request_devfreq_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_request_devfreq(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (lv) */ 
    int _lv  = 0;
    {
        /* Tested function call */
        sc_request_devfreq(_ctx, _lv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_request_devfreq_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_request_devfreq_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_request_devfreq(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_1 ;
    struct sc_ctx * _ctx  = & _ctx_1;
    /* Initializing argument 2 (lv) */ 
    int _lv  = 0;
    {
        /* Tested function call */
        sc_request_devfreq(_ctx, _lv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_request_devfreq_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_request_devfreq_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_request_devfreq(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (lv) */ 
    int _lv  = -1;
    {
        /* Tested function call */
        sc_request_devfreq(_ctx, _lv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_request_devfreq_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_request_devfreq_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_request_devfreq(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (lv) */ 
    int _lv  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        sc_request_devfreq(_ctx, _lv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_request_devfreq_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_request_devfreq_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_request_devfreq(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_1 ;
    struct sc_ctx * _ctx  = & _ctx_1;
    /* Initializing argument 2 (lv) */ 
    int _lv  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        sc_request_devfreq(_ctx, _lv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_request_devfreq_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_request_devfreq_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_request_devfreq(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (lv) */ 
    int _lv  = 0;
    {
        /* Tested function call */
        sc_request_devfreq(_ctx, _lv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_request_devfreq_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_request_devfreq_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_request_devfreq(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_request_devfreq_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (lv) */ 
    int _lv  = -1;
    {
        /* Tested function call */
        sc_request_devfreq(_ctx, _lv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_request_devfreq_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_resume_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 2;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_resume_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_resume_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_resume_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_resume_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 2;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_resume_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_resume_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_resume_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_resume_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_resume_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_resume_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_resume_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_resume_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 2;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_resume_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_resume_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_resume_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_resume_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_resume_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_resume_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_resume_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 2;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_resume_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_run_next_job_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_run_next_job(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 7;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 7;
    }
    {
        /* Tested function call */
        int _return  = sc_run_next_job(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_run_next_job_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_run_next_job_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_run_next_job(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_run_next_job(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_run_next_job_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_run_next_job_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_run_next_job(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 7;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 7;
    }
    {
        /* Tested function call */
        int _return  = sc_run_next_job(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_run_next_job_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_run_next_job_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_run_next_job(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1048576;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 4;
    }
    {
        /* Tested function call */
        int _return  = sc_run_next_job(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_run_next_job_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_run_next_job_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_run_next_job(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 3;
    }
    {
        /* Tested function call */
        int _return  = sc_run_next_job(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_run_next_job_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_run_next_job_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_run_next_job(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 7;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1048576;
    }
    {
        /* Tested function call */
        int _return  = sc_run_next_job(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_run_next_job_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_run_next_job_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_run_next_job(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1048576;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_run_next_job(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_run_next_job_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_run_next_job_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_run_next_job(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_run_next_job(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_run_next_job_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_run_next_job_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_run_next_job(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 7;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_run_next_job(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_run_next_job_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_run_next_job_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_run_next_job(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_run_next_job_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1048576;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_run_next_job(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_run_next_job_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_runtime_resume_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_runtime_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_resume_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_runtime_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_runtime_resume_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_runtime_resume_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_runtime_resume(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_resume_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    {
        /* Tested function call */
        int _return  = sc_runtime_resume(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_runtime_resume_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_runtime_suspend_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_runtime_suspend(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_suspend_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_runtime_suspend(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_runtime_suspend_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_runtime_suspend_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_runtime_suspend(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_runtime_suspend_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    {
        /* Tested function call */
        int _return  = sc_runtime_suspend(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_runtime_suspend_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_s_ctrl_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_s_ctrl(struct v4l2_ctrl *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctrl) */ 
    struct v4l2_ctrl * _ctrl  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 8;
    }
    {
        /* Tested function call */
        int _return  = sc_s_ctrl(_ctrl);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_ctrl * _ctrl ", ( _ctrl ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_s_ctrl_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_s_ctrl_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_s_ctrl(struct v4l2_ctrl *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctrl) */ 
    struct v4l2_ctrl * _ctrl  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 4;
    }
    {
        /* Tested function call */
        int _return  = sc_s_ctrl(_ctrl);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_ctrl * _ctrl ", ( _ctrl ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_s_ctrl_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_s_ctrl_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_s_ctrl(struct v4l2_ctrl *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctrl) */ 
    struct v4l2_ctrl _ctrl_0 ;
    struct v4l2_ctrl * _ctrl  = & _ctrl_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 8;
    }
    {
        /* Tested function call */
        int _return  = sc_s_ctrl(_ctrl);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_ctrl * _ctrl ", ( _ctrl ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_s_ctrl_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_s_ctrl_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_s_ctrl(struct v4l2_ctrl *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctrl) */ 
    struct v4l2_ctrl _ctrl_0 ;
    struct v4l2_ctrl * _ctrl  = & _ctrl_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 4;
    }
    {
        /* Tested function call */
        int _return  = sc_s_ctrl(_ctrl);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_ctrl * _ctrl ", ( _ctrl ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_s_ctrl_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_s_ctrl_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_s_ctrl(struct v4l2_ctrl *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctrl) */ 
    struct v4l2_ctrl _ctrl_0 ;
    struct v4l2_ctrl * _ctrl  = & _ctrl_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 2970;
    }
    {
        /* Tested function call */
        int _return  = sc_s_ctrl(_ctrl);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_ctrl * _ctrl ", ( _ctrl ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_s_ctrl_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_s_ctrl_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_s_ctrl(struct v4l2_ctrl *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctrl) */ 
    struct v4l2_ctrl _ctrl_0 ;
    struct v4l2_ctrl * _ctrl  = & _ctrl_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 224;
    }
    {
        /* Tested function call */
        int _return  = sc_s_ctrl(_ctrl);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_ctrl * _ctrl ", ( _ctrl ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_s_ctrl_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_s_ctrl_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_s_ctrl(struct v4l2_ctrl *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctrl) */ 
    struct v4l2_ctrl _ctrl_0 ;
    struct v4l2_ctrl * _ctrl  = & _ctrl_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_s_ctrl(_ctrl);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_ctrl * _ctrl ", ( _ctrl ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_s_ctrl_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_s_ctrl_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_s_ctrl(struct v4l2_ctrl *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctrl) */ 
    struct v4l2_ctrl * _ctrl  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -22;
    }
    {
        /* Tested function call */
        int _return  = sc_s_ctrl(_ctrl);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_ctrl * _ctrl ", ( _ctrl ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_s_ctrl_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_s_ctrl_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_s_ctrl(struct v4l2_ctrl *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctrl) */ 
    struct v4l2_ctrl _ctrl_0 ;
    struct v4l2_ctrl * _ctrl  = & _ctrl_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_s_ctrl(_ctrl);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_ctrl * _ctrl ", ( _ctrl ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_s_ctrl_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_s_ctrl_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_s_ctrl(struct v4l2_ctrl *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_s_ctrl_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctrl) */ 
    struct v4l2_ctrl * _ctrl  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_s_ctrl(_ctrl);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_ctrl * _ctrl ", ( _ctrl ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_s_ctrl_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_csc_coef_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_csc_coef(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_csc_coef_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    {
        /* Tested function call */
        sc_set_csc_coef(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_csc_coef_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_csc_coef_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_csc_coef(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_csc_coef_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    {
        /* Tested function call */
        sc_set_csc_coef(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_csc_coef_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_dithering_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_dithering(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 909200706;
    }
    {
        /* Tested function call */
        sc_set_dithering(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_dithering_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_dithering_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_dithering(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        sc_set_dithering(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_dithering_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_dithering_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_dithering(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 909200706;
    }
    {
        /* Tested function call */
        sc_set_dithering(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_dithering_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_dithering_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_dithering(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 842091842;
    }
    {
        /* Tested function call */
        sc_set_dithering(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_dithering_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_dithering_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_dithering(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 73;
    }
    {
        /* Tested function call */
        sc_set_dithering(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_dithering_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_dithering_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_dithering(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3620;
    }
    {
        /* Tested function call */
        sc_set_dithering(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_dithering_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_dithering_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_dithering(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 27;
    }
    {
        /* Tested function call */
        sc_set_dithering(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_dithering_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_dithering_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_dithering(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 24;
    }
    {
        /* Tested function call */
        sc_set_dithering(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_dithering_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_dithering_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_dithering(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1048576;
    }
    {
        /* Tested function call */
        sc_set_dithering(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_dithering_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_dithering_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_dithering(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_dithering_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        sc_set_dithering(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_dithering_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_framerate_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_framerate(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 50;
    {
        /* Tested function call */
        sc_set_framerate(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_framerate_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_framerate_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_framerate(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = -1;
    {
        /* Tested function call */
        sc_set_framerate(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_framerate_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_framerate_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_framerate(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 50;
    {
        /* Tested function call */
        sc_set_framerate(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_framerate_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_framerate_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_framerate(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 0;
    {
        /* Tested function call */
        sc_set_framerate(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_framerate_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_framerate_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_framerate(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = -1;
    {
        /* Tested function call */
        sc_set_framerate(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_framerate_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_framerate_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_framerate(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 1;
    {
        /* Tested function call */
        sc_set_framerate(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_framerate_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_framerate_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_framerate(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_1 ;
    struct sc_ctx * _ctx  = & _ctx_1;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = -1;
    {
        /* Tested function call */
        sc_set_framerate(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_framerate_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_framerate_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_framerate(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        sc_set_framerate(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_framerate_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_framerate_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_framerate(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        sc_set_framerate(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_framerate_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_framerate_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_framerate(struct sc_ctx *, int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_framerate_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (framerate) */ 
    int _framerate  = 0;
    {
        /* Tested function call */
        sc_set_framerate(_ctx, _framerate);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_framerate_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_initial_phase_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_initial_phase(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        sc_set_initial_phase(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_initial_phase_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_initial_phase_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_initial_phase(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        sc_set_initial_phase(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_initial_phase_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_initial_phase_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_initial_phase(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        sc_set_initial_phase(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_initial_phase_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_initial_phase_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_initial_phase(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    {
        /* Tested function call */
        sc_set_initial_phase(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_initial_phase_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_initial_phase_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_initial_phase(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    {
        /* Tested function call */
        sc_set_initial_phase(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_initial_phase_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_initial_phase_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_initial_phase(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        sc_set_initial_phase(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_initial_phase_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_initial_phase_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_initial_phase(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        sc_set_initial_phase(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_initial_phase_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_initial_phase_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_initial_phase(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        sc_set_initial_phase(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_initial_phase_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_initial_phase_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_initial_phase(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        sc_set_initial_phase(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_initial_phase_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_initial_phase_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_set_initial_phase(struct sc_ctx *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_initial_phase_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        sc_set_initial_phase(_ctx);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_initial_phase_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_votf_data_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_set_votf_data(struct sc_ctx *, struct vb2_sc_buffer *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer * _sc_buf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer * _buf  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_set_votf_data(_ctx, _sc_buf, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_votf_data_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_votf_data_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_set_votf_data(struct sc_ctx *, struct vb2_sc_buffer *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer * _sc_buf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer * _buf  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_set_votf_data(_ctx, _sc_buf, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_votf_data_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_votf_data_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_set_votf_data(struct sc_ctx *, struct vb2_sc_buffer *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer _sc_buf_0 ;
    struct vb2_sc_buffer * _sc_buf  = & _sc_buf_0;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer * _buf  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_set_votf_data(_ctx, _sc_buf, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_votf_data_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_votf_data_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_set_votf_data(struct sc_ctx *, struct vb2_sc_buffer *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer _sc_buf_1 ;
    struct vb2_sc_buffer * _sc_buf  = & _sc_buf_1;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer * _buf  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_set_votf_data(_ctx, _sc_buf, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_votf_data_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_votf_data_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_set_votf_data(struct sc_ctx *, struct vb2_sc_buffer *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer * _sc_buf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer _buf_0 ;
    struct v4l2_buffer * _buf  = & _buf_0;
    {
        /* Tested function call */
        int _return  = sc_set_votf_data(_ctx, _sc_buf, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_votf_data_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_votf_data_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_set_votf_data(struct sc_ctx *, struct vb2_sc_buffer *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer * _sc_buf  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer _buf_1 ;
    struct v4l2_buffer * _buf  = & _buf_1;
    {
        /* Tested function call */
        int _return  = sc_set_votf_data(_ctx, _sc_buf, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_votf_data_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_votf_data_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_set_votf_data(struct sc_ctx *, struct vb2_sc_buffer *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer _sc_buf_0 ;
    struct vb2_sc_buffer * _sc_buf  = & _sc_buf_0;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer _buf_1 ;
    struct v4l2_buffer * _buf  = & _buf_1;
    {
        /* Tested function call */
        int _return  = sc_set_votf_data(_ctx, _sc_buf, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_votf_data_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_set_votf_data_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_set_votf_data(struct sc_ctx *, struct vb2_sc_buffer *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_set_votf_data_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer _sc_buf_1 ;
    struct vb2_sc_buffer * _sc_buf  = & _sc_buf_1;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer _buf_2 ;
    struct v4l2_buffer * _buf  = & _buf_2;
    {
        /* Tested function call */
        int _return  = sc_set_votf_data(_ctx, _sc_buf, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_set_votf_data_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_setup_out_fence_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_setup_out_fence(struct sc_ctx *, struct vb2_sc_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer * _sc_buf  = 0 ;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = false;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_setup_out_fence(_ctx, _sc_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_setup_out_fence_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_setup_out_fence_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_setup_out_fence(struct sc_ctx *, struct vb2_sc_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer * _sc_buf  = 0 ;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = false;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_setup_out_fence(_ctx, _sc_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_setup_out_fence_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_setup_out_fence_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_setup_out_fence(struct sc_ctx *, struct vb2_sc_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer _sc_buf_0 ;
    struct vb2_sc_buffer * _sc_buf  = & _sc_buf_0;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = false;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_setup_out_fence(_ctx, _sc_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_setup_out_fence_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_setup_out_fence_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_setup_out_fence(struct sc_ctx *, struct vb2_sc_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer _sc_buf_1 ;
    struct vb2_sc_buffer * _sc_buf  = & _sc_buf_1;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = false;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_setup_out_fence(_ctx, _sc_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_setup_out_fence_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_setup_out_fence_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_setup_out_fence(struct sc_ctx *, struct vb2_sc_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer * _sc_buf  = 0 ;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = true;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_setup_out_fence(_ctx, _sc_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_setup_out_fence_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_setup_out_fence_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_setup_out_fence(struct sc_ctx *, struct vb2_sc_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer * _sc_buf  = 0 ;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = true;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_setup_out_fence(_ctx, _sc_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_setup_out_fence_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_setup_out_fence_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_setup_out_fence(struct sc_ctx *, struct vb2_sc_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx * _ctx  = 0 ;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer _sc_buf_0 ;
    struct vb2_sc_buffer * _sc_buf  = & _sc_buf_0;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = true;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_setup_out_fence(_ctx, _sc_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_setup_out_fence_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_setup_out_fence_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_setup_out_fence(struct sc_ctx *, struct vb2_sc_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_setup_out_fence_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ctx) */ 
    struct sc_ctx _ctx_0 ;
    struct sc_ctx * _ctx  = & _ctx_0;
    /* Initializing argument 2 (sc_buf) */ 
    struct vb2_sc_buffer _sc_buf_1 ;
    struct vb2_sc_buffer * _sc_buf  = & _sc_buf_1;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = true;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_setup_out_fence(_ctx, _sc_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct sc_ctx * _ctx ", ( _ctx ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_sc_buffer * _sc_buf ", ( _sc_buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_setup_out_fence_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_shutdown_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_shutdown(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_shutdown_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device * _pdev  = 0 ;
    {
        /* Tested function call */
        sc_shutdown(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_shutdown_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_shutdown_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_shutdown(struct platform_device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_shutdown_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pdev) */ 
    struct platform_device _pdev_0 ;
    struct platform_device * _pdev  = & _pdev_0;
    {
        /* Tested function call */
        sc_shutdown(_pdev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct platform_device * _pdev ", ( _pdev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_shutdown_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_suspend_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_suspend(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_suspend_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device * _dev  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_suspend(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_suspend_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_suspend_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_suspend(struct device *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_suspend_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dev) */ 
    struct device _dev_0 ;
    struct device * _dev  = & _dev_0;
    {
        /* Tested function call */
        int _return  = sc_suspend(_dev);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct device * _dev ", ( _dev ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_suspend_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_sysmmu_fault_handler_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_sysmmu_fault_handler(struct iommu_fault *, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_sysmmu_fault_handler_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fault) */ 
    struct iommu_fault * _fault  = 0 ;
    /* Initializing argument 2 (data) */ 
    void * _data  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_sysmmu_fault_handler(_fault, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct iommu_fault * _fault ", ( _fault ));
        CPPTEST_POST_CONDITION_PTR("void * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_sysmmu_fault_handler_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_sysmmu_fault_handler_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_sysmmu_fault_handler(struct iommu_fault *, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_sysmmu_fault_handler_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (fault) */ 
    struct iommu_fault _fault_0 ;
    struct iommu_fault * _fault  = & _fault_0;
    /* Initializing argument 2 (data) */ 
    void * _data  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_sysmmu_fault_handler(_fault, _data);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct iommu_fault * _fault ", ( _fault ));
        CPPTEST_POST_CONDITION_PTR("void * _data ", ( _data ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_sysmmu_fault_handler_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_threaded_irq_handler_1 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_threaded_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 3;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 3;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 3;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_threaded_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_threaded_irq_handler_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_threaded_irq_handler_10 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_threaded_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 0;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 3;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 3;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_threaded_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_threaded_irq_handler_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_threaded_irq_handler_2 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_threaded_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 1;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 3;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 3;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_threaded_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_threaded_irq_handler_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_threaded_irq_handler_3 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_threaded_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 3;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 3;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_threaded_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_threaded_irq_handler_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_threaded_irq_handler_4 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_threaded_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 0;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 1;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_threaded_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_threaded_irq_handler_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_threaded_irq_handler_5 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_threaded_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 1;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_threaded_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_threaded_irq_handler_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_threaded_irq_handler_6 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_threaded_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = -1;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_threaded_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_threaded_irq_handler_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_threaded_irq_handler_7 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_threaded_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = -1;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = cpptestLimitsGetMaxInt();
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = -1;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_threaded_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_threaded_irq_handler_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_threaded_irq_handler_8 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_threaded_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 0;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_threaded_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_threaded_irq_handler_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_threaded_irq_handler_9 */
/* CPPTEST_TEST_CASE_CONTEXT irqreturn_t sc_threaded_irq_handler(int, void *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_threaded_irq_handler_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (irq) */ 
    int _irq  = 1;
    /* Initializing argument 2 (priv) */ 
    void * _priv  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    /* Initializing global variable sc_show_stat */ 
    {
         sc_show_stat  = 3;
    }
    /* Initializing global variable __measure_hw_latency */ 
    {
         __measure_hw_latency  = 0;
    }
    {
        /* Tested function call */
        irqreturn_t _return  = sc_threaded_irq_handler(_irq, _priv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_ENUM(irqreturn_t, "irqreturn_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("void * _priv ", ( _priv ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_show_stat", ( sc_show_stat ));
        CPPTEST_POST_CONDITION_INTEGER("int __measure_hw_latency", ( __measure_hw_latency ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_threaded_irq_handler_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_timeout_qos_work_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_timeout_qos_work(struct work_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_timeout_qos_work_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (work) */ 
    struct work_struct * _work  = 0 ;
    {
        /* Tested function call */
        sc_timeout_qos_work(_work);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct work_struct * _work ", ( _work ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_timeout_qos_work_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_timeout_qos_work_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_timeout_qos_work(struct work_struct *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_timeout_qos_work_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (work) */ 
    struct work_struct _work_0 ;
    struct work_struct * _work  = & _work_0;
    {
        /* Tested function call */
        sc_timeout_qos_work(_work);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct work_struct * _work ", ( _work ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_timeout_qos_work_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_unregister_m2m_device_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_unregister_m2m_device(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_unregister_m2m_device_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev * _sc  = 0 ;
    {
        /* Tested function call */
        sc_unregister_m2m_device(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_unregister_m2m_device_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_unregister_m2m_device_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_unregister_m2m_device(struct sc_dev *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_unregister_m2m_device_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sc) */ 
    struct sc_dev _sc_0 ;
    struct sc_dev * _sc  = & _sc_0;
    {
        /* Tested function call */
        sc_unregister_m2m_device(_sc);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct sc_dev * _sc ", ( _sc ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_unregister_m2m_device_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_dqbuf_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_dqbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer * _buf  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_v4l2_dqbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_dqbuf_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_dqbuf_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_dqbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer * _buf  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_v4l2_dqbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_dqbuf_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_dqbuf_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_dqbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer _buf_0 ;
    struct v4l2_buffer * _buf  = & _buf_0;
    {
        /* Tested function call */
        int _return  = sc_v4l2_dqbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_dqbuf_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_dqbuf_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_dqbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_dqbuf_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer _buf_1 ;
    struct v4l2_buffer * _buf  = & _buf_1;
    {
        /* Tested function call */
        int _return  = sc_v4l2_dqbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_dqbuf_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_fmt_mplane_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 842094169;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_fmt_mplane_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_fmt_mplane_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_fmt_mplane_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_fmt_mplane_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 842094169;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_fmt_mplane_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_fmt_mplane_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 424;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_fmt_mplane_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_fmt_mplane_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format _f_1 ;
    struct v4l2_format * _f  = & _f_1;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_fmt_mplane_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_fmt_mplane_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format _f_0 ;
    struct v4l2_format * _f  = & _f_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 15;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_fmt_mplane_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_fmt_mplane_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_fmt_mplane_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_fmt_mplane_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_fmt_mplane_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_fmt_mplane_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format _f_1 ;
    struct v4l2_format * _f  = & _f_1;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_fmt_mplane_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_fmt_mplane_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_fmt_mplane_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format _f_0 ;
    struct v4l2_format * _f  = & _f_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_fmt_mplane_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_selection_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection * _s  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_selection_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_selection_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection * _s  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_selection_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_selection_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection _s_0 ;
    struct v4l2_selection * _s  = & _s_0;
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_selection_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_g_selection_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_g_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_g_selection_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection _s_1 ;
    struct v4l2_selection * _s  = & _s_1;
    {
        /* Tested function call */
        int _return  = sc_v4l2_g_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_g_selection_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_qbuf_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_qbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer * _buf  = 0 ;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = false;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_qbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_qbuf_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_qbuf_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_qbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer * _buf  = 0 ;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = false;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_qbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_qbuf_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_qbuf_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_qbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer _buf_0 ;
    struct v4l2_buffer * _buf  = & _buf_0;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = false;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_qbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_qbuf_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_qbuf_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_qbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer _buf_1 ;
    struct v4l2_buffer * _buf  = & _buf_1;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = false;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_qbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_qbuf_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_qbuf_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_qbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer * _buf  = 0 ;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = true;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_qbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_qbuf_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_qbuf_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_qbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer * _buf  = 0 ;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = true;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_qbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_qbuf_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_qbuf_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_qbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer _buf_0 ;
    struct v4l2_buffer * _buf  = & _buf_0;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = true;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_qbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_qbuf_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_qbuf_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_qbuf(struct file *, void *, struct v4l2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_qbuf_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (buf) */ 
    struct v4l2_buffer _buf_1 ;
    struct v4l2_buffer * _buf  = & _buf_1;
    /* Initializing global variable sc_fence_ops */ 
    {
         sc_fence_ops.use_64bit_seqno  = true;
         sc_fence_ops.get_driver_name  = 0 ;
         sc_fence_ops.get_timeline_name  = 0 ;
         sc_fence_ops.enable_signaling  = 0 ;
         sc_fence_ops.signaled  = 0 ;
         sc_fence_ops.wait  = 0 ;
         sc_fence_ops.release  = 0 ;
         sc_fence_ops.fence_value_str  = 0 ;
         sc_fence_ops.timeline_value_str  = 0 ;
         sc_fence_ops.set_deadline  = 0 ;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_qbuf(_file, _fh, _buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_buffer * _buf ", ( _buf ));
        CPPTEST_POST_CONDITION_BOOL("bool sc_fence_ops.use_64bit_seqno", ( sc_fence_ops.use_64bit_seqno ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_driver_name )(struct dma_fence *)", ( sc_fence_ops.get_driver_name ));
        CPPTEST_POST_CONDITION_PTR("const char *(* sc_fence_ops.get_timeline_name )(struct dma_fence *)", ( sc_fence_ops.get_timeline_name ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.enable_signaling )(struct dma_fence *)", ( sc_fence_ops.enable_signaling ));
        CPPTEST_POST_CONDITION_PTR("bool (* sc_fence_ops.signaled )(struct dma_fence *)", ( sc_fence_ops.signaled ));
        CPPTEST_POST_CONDITION_PTR("signed long (* sc_fence_ops.wait )(struct dma_fence *, bool, signed long)", ( sc_fence_ops.wait ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.release )(struct dma_fence *)", ( sc_fence_ops.release ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.fence_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.fence_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.timeline_value_str )(struct dma_fence *, char *, int)", ( sc_fence_ops.timeline_value_str ));
        CPPTEST_POST_CONDITION_PTR("void (* sc_fence_ops.set_deadline )(struct dma_fence *, ktime_t)", ( sc_fence_ops.set_deadline ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_qbuf_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_querycap_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_querycap(struct file *, void *, struct v4l2_capability *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (cap) */ 
    struct v4l2_capability * _cap  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_v4l2_querycap(_file, _fh, _cap);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_capability * _cap ", ( _cap ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_querycap_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_querycap_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_querycap(struct file *, void *, struct v4l2_capability *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (cap) */ 
    struct v4l2_capability * _cap  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_v4l2_querycap(_file, _fh, _cap);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_capability * _cap ", ( _cap ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_querycap_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_querycap_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_querycap(struct file *, void *, struct v4l2_capability *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (cap) */ 
    struct v4l2_capability _cap_0 ;
    struct v4l2_capability * _cap  = & _cap_0;
    {
        /* Tested function call */
        int _return  = sc_v4l2_querycap(_file, _fh, _cap);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_capability * _cap ", ( _cap ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_querycap_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_querycap_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_querycap(struct file *, void *, struct v4l2_capability *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_querycap_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (cap) */ 
    struct v4l2_capability _cap_1 ;
    struct v4l2_capability * _cap  = & _cap_1;
    {
        /* Tested function call */
        int _return  = sc_v4l2_querycap(_file, _fh, _cap);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_capability * _cap ", ( _cap ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_querycap_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_reqbufs_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_reqbufs(struct file *, void *, struct v4l2_requestbuffers *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (reqbufs) */ 
    struct v4l2_requestbuffers * _reqbufs  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_v4l2_reqbufs(_file, _fh, _reqbufs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_requestbuffers * _reqbufs ", ( _reqbufs ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_reqbufs_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_reqbufs_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_reqbufs(struct file *, void *, struct v4l2_requestbuffers *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (reqbufs) */ 
    struct v4l2_requestbuffers * _reqbufs  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_v4l2_reqbufs(_file, _fh, _reqbufs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_requestbuffers * _reqbufs ", ( _reqbufs ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_reqbufs_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_reqbufs_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_reqbufs(struct file *, void *, struct v4l2_requestbuffers *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (reqbufs) */ 
    struct v4l2_requestbuffers _reqbufs_0 ;
    struct v4l2_requestbuffers * _reqbufs  = & _reqbufs_0;
    {
        /* Tested function call */
        int _return  = sc_v4l2_reqbufs(_file, _fh, _reqbufs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_requestbuffers * _reqbufs ", ( _reqbufs ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_reqbufs_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_reqbufs_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_reqbufs(struct file *, void *, struct v4l2_requestbuffers *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_reqbufs_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (reqbufs) */ 
    struct v4l2_requestbuffers _reqbufs_1 ;
    struct v4l2_requestbuffers * _reqbufs  = & _reqbufs_1;
    {
        /* Tested function call */
        int _return  = sc_v4l2_reqbufs(_file, _fh, _reqbufs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_requestbuffers * _reqbufs ", ( _reqbufs ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_reqbufs_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_fmt_mplane_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 944976461;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_fmt_mplane_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_fmt_mplane_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_fmt_mplane_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_fmt_mplane_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 944976461;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_fmt_mplane_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_fmt_mplane_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 944517453;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_fmt_mplane_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_fmt_mplane_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 827535693;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_fmt_mplane_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_fmt_mplane_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 7;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_fmt_mplane_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_fmt_mplane_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_fmt_mplane_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_fmt_mplane_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 14;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_fmt_mplane_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_fmt_mplane_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_fmt_mplane_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_fmt_mplane_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_fmt_mplane_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -16;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_fmt_mplane_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_selection_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection * _s  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 909200706;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_selection_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_selection_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection _s_0 ;
    struct v4l2_selection * _s  = & _s_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_selection_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_selection_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection * _s  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 909200706;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_selection_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_selection_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection _s_0 ;
    struct v4l2_selection * _s  = & _s_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 842091842;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_selection_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_selection_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection _s_1 ;
    struct v4l2_selection * _s  = & _s_1;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 8;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_selection_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_selection_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection * _s  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 5;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_selection_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_selection_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection _s_0 ;
    struct v4l2_selection * _s  = & _s_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_selection_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_selection_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection * _s  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 12;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_selection_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_selection_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection _s_0 ;
    struct v4l2_selection * _s  = & _s_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_selection_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_s_selection_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_s_selection(struct file *, void *, struct v4l2_selection *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_s_selection_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (s) */ 
    struct v4l2_selection * _s  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_s_selection(_file, _fh, _s);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_selection * _s ", ( _s ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_s_selection_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamoff_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamoff(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamoff(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamoff_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamoff_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamoff(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_META_OUTPUT;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamoff(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamoff_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamoff_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamoff(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamoff(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamoff_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamoff_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamoff(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_OVERLAY;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamoff(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamoff_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamoff_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamoff(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VBI_CAPTURE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamoff(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamoff_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamoff_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamoff(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_SLICED_VBI_CAPTURE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamoff(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamoff_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamoff_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamoff(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_SLICED_VBI_OUTPUT;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamoff(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamoff_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamoff_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamoff(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamoff(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamoff_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamoff_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamoff(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamoff(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamoff_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamoff_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamoff(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamoff_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_SDR_OUTPUT;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamoff(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamoff_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamon_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamon(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamon(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamon_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamon_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamon(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_META_OUTPUT;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamon(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamon_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamon_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamon(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamon(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamon_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamon_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamon(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_OVERLAY;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamon(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamon_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamon_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamon(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VBI_CAPTURE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamon(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamon_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamon_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamon(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_SLICED_VBI_CAPTURE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamon(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamon_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamon_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamon(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_SLICED_VBI_OUTPUT;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamon(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamon_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamon_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamon(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamon(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamon_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamon_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamon(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamon(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamon_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_streamon_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_streamon(struct file *, void *, enum v4l2_buf_type) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_streamon_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (type) */ 
    enum v4l2_buf_type _type  = V4L2_BUF_TYPE_SDR_OUTPUT;
    {
        /* Tested function call */
        int _return  = sc_v4l2_streamon(_file, _fh, _type);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_streamon_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_try_fmt_mplane_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_try_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 944976461;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_try_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_try_fmt_mplane_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_try_fmt_mplane_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_try_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_try_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_try_fmt_mplane_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_try_fmt_mplane_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_try_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 944976461;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_try_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_try_fmt_mplane_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_try_fmt_mplane_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_try_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 909200706;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_try_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_try_fmt_mplane_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_try_fmt_mplane_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_try_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format _f_1 ;
    struct v4l2_format * _f  = & _f_1;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 842092098;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_try_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_try_fmt_mplane_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_try_fmt_mplane_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_try_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format _f_0 ;
    struct v4l2_format * _f  = & _f_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 827535693;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_try_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_try_fmt_mplane_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_try_fmt_mplane_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_try_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file _file_0 ;
    struct file * _file  = & _file_0;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 8;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_try_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_try_fmt_mplane_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_try_fmt_mplane_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_try_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_try_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_try_fmt_mplane_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_try_fmt_mplane_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_try_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 10;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_try_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_try_fmt_mplane_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_v4l2_try_fmt_mplane_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_v4l2_try_fmt_mplane(struct file *, void *, struct v4l2_format *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_v4l2_try_fmt_mplane_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (file) */ 
    struct file * _file  = 0 ;
    /* Initializing argument 2 (fh) */ 
    void * _fh  = 0 ;
    /* Initializing argument 3 (f) */ 
    struct v4l2_format * _f  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 2;
    }
    {
        /* Tested function call */
        int _return  = sc_v4l2_try_fmt_mplane(_file, _fh, _f);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct file * _file ", ( _file ));
        CPPTEST_POST_CONDITION_PTR("void * _fh ", ( _fh ));
        CPPTEST_POST_CONDITION_PTR("struct v4l2_format * _f ", ( _f ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_v4l2_try_fmt_mplane_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_buf_cleanup_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_buf_cleanup(struct vb2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_cleanup_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    {
        /* Tested function call */
        sc_vb2_buf_cleanup(_vb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_buf_cleanup_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_buf_cleanup_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_buf_cleanup(struct vb2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_cleanup_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_buffer _vb_0 ;
    struct vb2_buffer * _vb  = & _vb_0;
    {
        /* Tested function call */
        sc_vb2_buf_cleanup(_vb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_buf_cleanup_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_buf_finish_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_buf_finish(struct vb2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_finish_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    {
        /* Tested function call */
        sc_vb2_buf_finish(_vb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_buf_finish_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_buf_finish_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_buf_finish(struct vb2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_finish_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_buffer _vb_0 ;
    struct vb2_buffer * _vb  = & _vb_0;
    {
        /* Tested function call */
        sc_vb2_buf_finish(_vb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_buf_finish_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_buf_init_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_buf_init(struct vb2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_init_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_vb2_buf_init(_vb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_buf_init_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_buf_init_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_buf_init(struct vb2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_init_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_buffer _vb_0 ;
    struct vb2_buffer * _vb  = & _vb_0;
    {
        /* Tested function call */
        int _return  = sc_vb2_buf_init(_vb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_buf_init_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_buf_prepare_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_buf_prepare(struct vb2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_prepare_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    {
        /* Tested function call */
        int _return  = sc_vb2_buf_prepare(_vb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_buf_prepare_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_buf_prepare_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_buf_prepare(struct vb2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_prepare_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_buffer _vb_0 ;
    struct vb2_buffer * _vb  = & _vb_0;
    {
        /* Tested function call */
        int _return  = sc_vb2_buf_prepare(_vb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_buf_prepare_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_buf_queue_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_buf_queue(struct vb2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_queue_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_buffer * _vb  = 0 ;
    {
        /* Tested function call */
        sc_vb2_buf_queue(_vb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_buf_queue_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_buf_queue_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_buf_queue(struct vb2_buffer *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_buf_queue_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vb) */ 
    struct vb2_buffer _vb_0 ;
    struct vb2_buffer * _vb  = & _vb_0;
    {
        /* Tested function call */
        sc_vb2_buf_queue(_vb);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_buffer * _vb ", ( _vb ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_buf_queue_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_lock_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_lock(struct vb2_queue *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_lock_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    {
        /* Tested function call */
        sc_vb2_lock(_vq);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_lock_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_lock_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_lock(struct vb2_queue *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_lock_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue _vq_0 ;
    struct vb2_queue * _vq  = & _vq_0;
    {
        /* Tested function call */
        sc_vb2_lock(_vq);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_lock_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_queue_setup_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_queue_setup(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int *, struct device **) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (num_buffers) */ 
    unsigned _num_buffers_0 [1];
    unsigned * _num_buffers  = (unsigned * )cpptestMemset((void*)&_num_buffers_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 3 (num_planes) */ 
    unsigned _num_planes_1 [1];
    unsigned * _num_planes  = (unsigned * )cpptestMemset((void*)&_num_planes_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 4 (sizes) */ 
    unsigned _sizes_2 [1];
    unsigned * _sizes  = (unsigned * )cpptestMemset((void*)&_sizes_2, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (alloc_devs) */ 
    struct device ** _alloc_devs  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 0;
         sc_filter_tab[0].w  = 0;
         sc_filter_tab[0].h  = 0;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_vb2_queue_setup(_vq, _num_buffers, _num_planes, _sizes, _alloc_devs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_buffers", ( _num_buffers ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_planes", ( _num_planes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _sizes", ( _sizes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_PTR("struct device ** _alloc_devs ", ( _alloc_devs ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_queue_setup_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_queue_setup_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_queue_setup(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int *, struct device **) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (num_buffers) */ 
    unsigned _num_buffers_0 [1];
    unsigned * _num_buffers  = (unsigned * )cpptestMemset((void*)&_num_buffers_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 3 (num_planes) */ 
    unsigned _num_planes_1 [1];
    unsigned * _num_planes  = (unsigned * )cpptestMemset((void*)&_num_planes_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 4 (sizes) */ 
    unsigned _sizes_2 [1];
    unsigned * _sizes  = (unsigned * )cpptestMemset((void*)&_sizes_2, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (alloc_devs) */ 
    struct device * _alloc_devs_3  = 0 ;
    struct device ** _alloc_devs  = & _alloc_devs_3;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].w  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].h  = cpptestLimitsGetMaxUnsignedInt();
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_vb2_queue_setup(_vq, _num_buffers, _num_planes, _sizes, _alloc_devs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_buffers", ( _num_buffers ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_planes", ( _num_planes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _sizes", ( _sizes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_PTR("struct device ** _alloc_devs ", ( _alloc_devs ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_queue_setup_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_queue_setup_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_queue_setup(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int *, struct device **) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue _vq_0 ;
    struct vb2_queue * _vq  = & _vq_0;
    /* Initializing argument 2 (num_buffers) */ 
    unsigned _num_buffers_1 [1];
    unsigned * _num_buffers  = (unsigned * )cpptestMemset((void*)&_num_buffers_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 3 (num_planes) */ 
    unsigned _num_planes_2 [1];
    unsigned * _num_planes  = (unsigned * )cpptestMemset((void*)&_num_planes_2, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 4 (sizes) */ 
    unsigned _sizes_3 [1];
    unsigned * _sizes  = (unsigned * )cpptestMemset((void*)&_sizes_3, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (alloc_devs) */ 
    struct device ** _alloc_devs  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 0;
         sc_filter_tab[0].w  = 0;
         sc_filter_tab[0].h  = 0;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_vb2_queue_setup(_vq, _num_buffers, _num_planes, _sizes, _alloc_devs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_buffers", ( _num_buffers ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_planes", ( _num_planes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _sizes", ( _sizes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_PTR("struct device ** _alloc_devs ", ( _alloc_devs ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_queue_setup_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_queue_setup_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_queue_setup(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int *, struct device **) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (num_buffers) */ 
    unsigned _num_buffers_0 [1];
    unsigned * _num_buffers  = (unsigned * )cpptestMemset((void*)&_num_buffers_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 3 (num_planes) */ 
    unsigned _num_planes_1 [1];
    unsigned * _num_planes  = (unsigned * )cpptestMemset((void*)&_num_planes_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 4 (sizes) */ 
    unsigned _sizes_2 [1];
    unsigned * _sizes  = (unsigned * )cpptestMemset((void*)&_sizes_2, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (alloc_devs) */ 
    struct device _alloc_devs_3_4 ;
    struct device * _alloc_devs_3  = & _alloc_devs_3_4;
    struct device ** _alloc_devs  = & _alloc_devs_3;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 1u;
         sc_filter_tab[0].w  = 1u;
         sc_filter_tab[0].h  = 1u;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        int _return  = sc_vb2_queue_setup(_vq, _num_buffers, _num_planes, _sizes, _alloc_devs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_buffers", ( _num_buffers ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_planes", ( _num_planes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _sizes", ( _sizes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_PTR("struct device ** _alloc_devs ", ( _alloc_devs ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_queue_setup_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_queue_setup_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_queue_setup(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int *, struct device **) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (num_buffers) */ 
    unsigned _num_buffers_0 [1];
    unsigned * _num_buffers  = (unsigned * )cpptestMemset((void*)&_num_buffers_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 3 (num_planes) */ 
    unsigned _num_planes_1 [1];
    unsigned * _num_planes  = (unsigned * )cpptestMemset((void*)&_num_planes_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 4 (sizes) */ 
    unsigned _sizes_2 [1];
    unsigned * _sizes  = (unsigned * )cpptestMemset((void*)&_sizes_2, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (alloc_devs) */ 
    struct device * _alloc_devs_3  = 0 ;
    struct device ** _alloc_devs  = & _alloc_devs_3;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].w  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].h  = cpptestLimitsGetMaxUnsignedInt();
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        int _return  = sc_vb2_queue_setup(_vq, _num_buffers, _num_planes, _sizes, _alloc_devs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_buffers", ( _num_buffers ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_planes", ( _num_planes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _sizes", ( _sizes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_PTR("struct device ** _alloc_devs ", ( _alloc_devs ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_queue_setup_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_queue_setup_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_queue_setup(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int *, struct device **) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (num_buffers) */ 
    unsigned _num_buffers_0 [1];
    unsigned * _num_buffers  = (unsigned * )cpptestMemset((void*)&_num_buffers_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 3 (num_planes) */ 
    unsigned _num_planes_1 [1];
    unsigned * _num_planes  = (unsigned * )cpptestMemset((void*)&_num_planes_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 4 (sizes) */ 
    unsigned _sizes_2 [1];
    unsigned * _sizes  = (unsigned * )cpptestMemset((void*)&_sizes_2, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (alloc_devs) */ 
    struct device ** _alloc_devs  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 0;
         sc_filter_tab[0].w  = 0;
         sc_filter_tab[0].h  = 0;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_vb2_queue_setup(_vq, _num_buffers, _num_planes, _sizes, _alloc_devs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_buffers", ( _num_buffers ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_planes", ( _num_planes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _sizes", ( _sizes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_PTR("struct device ** _alloc_devs ", ( _alloc_devs ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_queue_setup_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_queue_setup_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_queue_setup(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int *, struct device **) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (num_buffers) */ 
    unsigned _num_buffers_0 [1];
    unsigned * _num_buffers  = (unsigned * )cpptestMemset((void*)&_num_buffers_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 3 (num_planes) */ 
    unsigned _num_planes_1 [1];
    unsigned * _num_planes  = (unsigned * )cpptestMemset((void*)&_num_planes_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 4 (sizes) */ 
    unsigned _sizes_2 [1];
    unsigned * _sizes  = (unsigned * )cpptestMemset((void*)&_sizes_2, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (alloc_devs) */ 
    struct device _alloc_devs_3_4 ;
    struct device * _alloc_devs_3  = & _alloc_devs_3_4;
    struct device ** _alloc_devs  = & _alloc_devs_3;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 1u;
         sc_filter_tab[0].w  = 1u;
         sc_filter_tab[0].h  = 1u;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = -1;
    }
    {
        /* Tested function call */
        int _return  = sc_vb2_queue_setup(_vq, _num_buffers, _num_planes, _sizes, _alloc_devs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_buffers", ( _num_buffers ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_planes", ( _num_planes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _sizes", ( _sizes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_PTR("struct device ** _alloc_devs ", ( _alloc_devs ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_queue_setup_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_queue_setup_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_queue_setup(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int *, struct device **) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (num_buffers) */ 
    unsigned _num_buffers_0 [1];
    unsigned * _num_buffers  = (unsigned * )cpptestMemset((void*)&_num_buffers_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 3 (num_planes) */ 
    unsigned _num_planes_1 [1];
    unsigned * _num_planes  = (unsigned * )cpptestMemset((void*)&_num_planes_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 4 (sizes) */ 
    unsigned _sizes_2 [1];
    unsigned * _sizes  = (unsigned * )cpptestMemset((void*)&_sizes_2, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (alloc_devs) */ 
    struct device * _alloc_devs_3  = 0 ;
    struct device ** _alloc_devs  = & _alloc_devs_3;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].w  = cpptestLimitsGetMaxUnsignedInt();
         sc_filter_tab[0].h  = cpptestLimitsGetMaxUnsignedInt();
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = sc_vb2_queue_setup(_vq, _num_buffers, _num_planes, _sizes, _alloc_devs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_buffers", ( _num_buffers ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_planes", ( _num_planes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _sizes", ( _sizes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_PTR("struct device ** _alloc_devs ", ( _alloc_devs ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_queue_setup_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_queue_setup_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_queue_setup(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int *, struct device **) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (num_buffers) */ 
    unsigned _num_buffers_0 [1];
    unsigned * _num_buffers  = (unsigned * )cpptestMemset((void*)&_num_buffers_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 3 (num_planes) */ 
    unsigned _num_planes_1 [1];
    unsigned * _num_planes  = (unsigned * )cpptestMemset((void*)&_num_planes_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 4 (sizes) */ 
    unsigned _sizes_2 [1];
    unsigned * _sizes  = (unsigned * )cpptestMemset((void*)&_sizes_2, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (alloc_devs) */ 
    struct device ** _alloc_devs  = 0 ;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 0;
         sc_filter_tab[0].w  = 0;
         sc_filter_tab[0].h  = 0;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_vb2_queue_setup(_vq, _num_buffers, _num_planes, _sizes, _alloc_devs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_buffers", ( _num_buffers ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_planes", ( _num_planes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _sizes", ( _sizes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_PTR("struct device ** _alloc_devs ", ( _alloc_devs ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_queue_setup_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_queue_setup_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_queue_setup(struct vb2_queue *, unsigned int *, unsigned int *, unsigned int *, struct device **) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_queue_setup_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (num_buffers) */ 
    unsigned _num_buffers_0 [1];
    unsigned * _num_buffers  = (unsigned * )cpptestMemset((void*)&_num_buffers_0, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 3 (num_planes) */ 
    unsigned _num_planes_1 [1];
    unsigned * _num_planes  = (unsigned * )cpptestMemset((void*)&_num_planes_1, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 4 (sizes) */ 
    unsigned _sizes_2 [1];
    unsigned * _sizes  = (unsigned * )cpptestMemset((void*)&_sizes_2, 0, (1 * sizeof(unsigned)));
    /* Initializing argument 5 (alloc_devs) */ 
    struct device _alloc_devs_3_4 ;
    struct device * _alloc_devs_3  = & _alloc_devs_3_4;
    struct device ** _alloc_devs  = & _alloc_devs_3;
    /* Initializing global variable sc_filter_tab */ 
    {
         sc_filter_tab[0].strength  = 1u;
         sc_filter_tab[0].w  = 1u;
         sc_filter_tab[0].h  = 1u;
    }
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        int _return  = sc_vb2_queue_setup(_vq, _num_buffers, _num_planes, _sizes, _alloc_devs);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_buffers", ( _num_buffers ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _num_planes", ( _num_planes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_MEM_BUFFER("unsigned * _sizes", ( _sizes ), sizeof(unsigned));
        CPPTEST_POST_CONDITION_PTR("struct device ** _alloc_devs ", ( _alloc_devs ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].strength", ( sc_filter_tab[0].strength ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].w", ( sc_filter_tab[0].w ));
        CPPTEST_POST_CONDITION_UINTEGER("u32 sc_filter_tab[0].h", ( sc_filter_tab[0].h ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_queue_setup_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_start_streaming_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_start_streaming(struct vb2_queue *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (count) */ 
    unsigned _count  = 2;
    {
        /* Tested function call */
        int _return  = sc_vb2_start_streaming(_vq, _count);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_start_streaming_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_start_streaming_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_start_streaming(struct vb2_queue *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue _vq_0 ;
    struct vb2_queue * _vq  = & _vq_0;
    /* Initializing argument 2 (count) */ 
    unsigned _count  = 0u;
    {
        /* Tested function call */
        int _return  = sc_vb2_start_streaming(_vq, _count);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_start_streaming_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_start_streaming_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_start_streaming(struct vb2_queue *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue _vq_0 ;
    struct vb2_queue * _vq  = & _vq_0;
    /* Initializing argument 2 (count) */ 
    unsigned _count  = 2;
    {
        /* Tested function call */
        int _return  = sc_vb2_start_streaming(_vq, _count);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_start_streaming_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_start_streaming_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_start_streaming(struct vb2_queue *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (count) */ 
    unsigned _count  = 0;
    {
        /* Tested function call */
        int _return  = sc_vb2_start_streaming(_vq, _count);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_start_streaming_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_start_streaming_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_start_streaming(struct vb2_queue *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue _vq_0 ;
    struct vb2_queue * _vq  = & _vq_0;
    /* Initializing argument 2 (count) */ 
    unsigned _count  = 0;
    {
        /* Tested function call */
        int _return  = sc_vb2_start_streaming(_vq, _count);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_start_streaming_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_start_streaming_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_start_streaming(struct vb2_queue *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (count) */ 
    unsigned _count  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        int _return  = sc_vb2_start_streaming(_vq, _count);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_start_streaming_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_start_streaming_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_start_streaming(struct vb2_queue *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue _vq_0 ;
    struct vb2_queue * _vq  = & _vq_0;
    /* Initializing argument 2 (count) */ 
    unsigned _count  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        int _return  = sc_vb2_start_streaming(_vq, _count);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_start_streaming_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_start_streaming_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_start_streaming(struct vb2_queue *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (count) */ 
    unsigned _count  = 1u;
    {
        /* Tested function call */
        int _return  = sc_vb2_start_streaming(_vq, _count);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_start_streaming_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_start_streaming_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_start_streaming(struct vb2_queue *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue _vq_0 ;
    struct vb2_queue * _vq  = & _vq_0;
    /* Initializing argument 2 (count) */ 
    unsigned _count  = 1u;
    {
        /* Tested function call */
        int _return  = sc_vb2_start_streaming(_vq, _count);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_start_streaming_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_start_streaming_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sc_vb2_start_streaming(struct vb2_queue *, unsigned int) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_start_streaming_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    /* Initializing argument 2 (count) */ 
    unsigned _count  = 0u;
    {
        /* Tested function call */
        int _return  = sc_vb2_start_streaming(_vq, _count);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_start_streaming_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_stop_streaming_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_stop_streaming(struct vb2_queue *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_stop_streaming_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    {
        /* Tested function call */
        sc_vb2_stop_streaming(_vq);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_stop_streaming_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_stop_streaming_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_stop_streaming(struct vb2_queue *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_stop_streaming_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue _vq_0 ;
    struct vb2_queue * _vq  = & _vq_0;
    {
        /* Tested function call */
        sc_vb2_stop_streaming(_vq);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_stop_streaming_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_unlock_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_unlock(struct vb2_queue *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_unlock_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue * _vq  = 0 ;
    {
        /* Tested function call */
        sc_vb2_unlock(_vq);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_unlock_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_vb2_unlock_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_vb2_unlock(struct vb2_queue *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_vb2_unlock_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (vq) */ 
    struct vb2_queue _vq_0 ;
    struct vb2_queue * _vq  = & _vq_0;
    {
        /* Tested function call */
        sc_vb2_unlock(_vq);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct vb2_queue * _vq ", ( _vq ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_vb2_unlock_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_watchdog_1 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_watchdog(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list * _t  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3473;
    }
    {
        /* Tested function call */
        sc_watchdog(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_watchdog_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_watchdog_10 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_watchdog(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list * _t  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3447;
    }
    {
        /* Tested function call */
        sc_watchdog(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_watchdog_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_watchdog_2 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_watchdog(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list _t_0 ;
    struct timer_list * _t  = & _t_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3473;
    }
    {
        /* Tested function call */
        sc_watchdog(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_watchdog_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_watchdog_3 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_watchdog(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list _t_0 ;
    struct timer_list * _t  = & _t_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3447;
    }
    {
        /* Tested function call */
        sc_watchdog(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_watchdog_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_watchdog_4 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_watchdog(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list _t_0 ;
    struct timer_list * _t  = & _t_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 304;
    }
    {
        /* Tested function call */
        sc_watchdog(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_watchdog_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_watchdog_5 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_watchdog(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list _t_0 ;
    struct timer_list * _t  = & _t_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 3;
    }
    {
        /* Tested function call */
        sc_watchdog(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_watchdog_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_watchdog_6 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_watchdog(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list _t_0 ;
    struct timer_list * _t  = & _t_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 1;
    }
    {
        /* Tested function call */
        sc_watchdog(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_watchdog_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_watchdog_7 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_watchdog(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list _t_0 ;
    struct timer_list * _t  = & _t_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = 0;
    }
    {
        /* Tested function call */
        sc_watchdog(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_watchdog_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_watchdog_8 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_watchdog(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list _t_0 ;
    struct timer_list * _t  = & _t_0;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMaxInt();
    }
    {
        /* Tested function call */
        sc_watchdog(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_watchdog_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sc_watchdog_9 */
/* CPPTEST_TEST_CASE_CONTEXT void sc_watchdog(struct timer_list *) */
void TestSuite_scaler2dcore_c_8ed4121_test_sc_watchdog_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    struct timer_list * _t  = 0 ;
    /* Initializing global variable sc_log_level */ 
    {
         sc_log_level  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        sc_watchdog(_t);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct timer_list * _t ", ( _t ));
        CPPTEST_POST_CONDITION_INTEGER("int sc_log_level", ( sc_log_level ));
    }
}
/* CPPTEST_TEST_CASE_END test_sc_watchdog_9 */
