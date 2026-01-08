#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/scaler_analysis/include/linux/ion.h");
CPPTEST_TEST_SUITE_INCLUDED_TO("/scaler_analysis/scaler-core.c");

EXTERN_C_LINKAGE void TestSuite_ion_h_82a8b206_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_ion_h_82a8b206_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_ion_h_82a8b206);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_ion_h_82a8b206_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test___ion_device_add_heap_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test___ion_device_add_heap_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test___ion_device_add_heap_3);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test___ion_device_add_heap_4);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_alloc_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_alloc_10);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_alloc_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_alloc_3);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_alloc_4);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_alloc_5);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_alloc_6);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_alloc_7);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_alloc_8);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_alloc_9);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_buffer_prep_noncached_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_buffer_prep_noncached_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_buffer_zero_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_buffer_zero_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_free_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_free_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_3);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_4);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_3);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_4);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_5);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_6);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_3);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_4);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_5);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_6);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_size_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_freelist_size_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_init_deferred_free_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_init_deferred_free_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_init_shrinker_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_init_shrinker_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_3);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_4);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_user_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_user_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_user_3);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_user_4);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_user_5);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_user_6);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_user_7);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_map_user_8);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_3);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_4);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_1);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_2);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_3);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_4);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_5);
        CPPTEST_TEST(TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_6);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_ion_h_82a8b206_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_ion_h_82a8b206_test___ion_device_add_heap_1(void);
void TestSuite_ion_h_82a8b206_test___ion_device_add_heap_2(void);
void TestSuite_ion_h_82a8b206_test___ion_device_add_heap_3(void);
void TestSuite_ion_h_82a8b206_test___ion_device_add_heap_4(void);
void TestSuite_ion_h_82a8b206_test_ion_alloc_1(void);
void TestSuite_ion_h_82a8b206_test_ion_alloc_10(void);
void TestSuite_ion_h_82a8b206_test_ion_alloc_2(void);
void TestSuite_ion_h_82a8b206_test_ion_alloc_3(void);
void TestSuite_ion_h_82a8b206_test_ion_alloc_4(void);
void TestSuite_ion_h_82a8b206_test_ion_alloc_5(void);
void TestSuite_ion_h_82a8b206_test_ion_alloc_6(void);
void TestSuite_ion_h_82a8b206_test_ion_alloc_7(void);
void TestSuite_ion_h_82a8b206_test_ion_alloc_8(void);
void TestSuite_ion_h_82a8b206_test_ion_alloc_9(void);
void TestSuite_ion_h_82a8b206_test_ion_buffer_prep_noncached_1(void);
void TestSuite_ion_h_82a8b206_test_ion_buffer_prep_noncached_2(void);
void TestSuite_ion_h_82a8b206_test_ion_buffer_zero_1(void);
void TestSuite_ion_h_82a8b206_test_ion_buffer_zero_2(void);
void TestSuite_ion_h_82a8b206_test_ion_free_1(void);
void TestSuite_ion_h_82a8b206_test_ion_free_2(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_1(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_2(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_3(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_4(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_1(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_2(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_3(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_4(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_5(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_6(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_1(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_2(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_3(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_4(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_5(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_6(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_size_1(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_size_2(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_init_deferred_free_1(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_init_deferred_free_2(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_init_shrinker_1(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_init_shrinker_2(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_1(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_2(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_3(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_4(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_1(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_2(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_3(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_4(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_5(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_6(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_7(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_8(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_1(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_2(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_3(void);
void TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_4(void);
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_1(void);
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_2(void);
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_3(void);
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_4(void);
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_5(void);
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_6(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_ion_h_82a8b206);

void TestSuite_ion_h_82a8b206_testSuiteSetUp(void);
void TestSuite_ion_h_82a8b206_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_ion_h_82a8b206_testSuiteTearDown(void);
void TestSuite_ion_h_82a8b206_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_ion_h_82a8b206_setUp(void);
void TestSuite_ion_h_82a8b206_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_ion_h_82a8b206_tearDown(void);
void TestSuite_ion_h_82a8b206_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test___ion_device_add_heap_1 */
/* CPPTEST_TEST_CASE_CONTEXT int __ion_device_add_heap(struct ion_heap *, struct module *) */
void TestSuite_ion_h_82a8b206_test___ion_device_add_heap_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (owner) */ 
    struct module * _owner  = 0 ;
    {
        /* Tested function call */
        int _return  = __ion_device_add_heap(_heap, _owner);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct module * _owner ", ( _owner ));
    }
}
/* CPPTEST_TEST_CASE_END test___ion_device_add_heap_1 */

/* CPPTEST_TEST_CASE_BEGIN test___ion_device_add_heap_2 */
/* CPPTEST_TEST_CASE_CONTEXT int __ion_device_add_heap(struct ion_heap *, struct module *) */
void TestSuite_ion_h_82a8b206_test___ion_device_add_heap_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (owner) */ 
    struct module * _owner  = 0 ;
    {
        /* Tested function call */
        int _return  = __ion_device_add_heap(_heap, _owner);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct module * _owner ", ( _owner ));
    }
}
/* CPPTEST_TEST_CASE_END test___ion_device_add_heap_2 */

/* CPPTEST_TEST_CASE_BEGIN test___ion_device_add_heap_3 */
/* CPPTEST_TEST_CASE_CONTEXT int __ion_device_add_heap(struct ion_heap *, struct module *) */
void TestSuite_ion_h_82a8b206_test___ion_device_add_heap_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (owner) */ 
    struct module _owner_0 ;
    struct module * _owner  = & _owner_0;
    {
        /* Tested function call */
        int _return  = __ion_device_add_heap(_heap, _owner);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct module * _owner ", ( _owner ));
    }
}
/* CPPTEST_TEST_CASE_END test___ion_device_add_heap_3 */

/* CPPTEST_TEST_CASE_BEGIN test___ion_device_add_heap_4 */
/* CPPTEST_TEST_CASE_CONTEXT int __ion_device_add_heap(struct ion_heap *, struct module *) */
void TestSuite_ion_h_82a8b206_test___ion_device_add_heap_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (owner) */ 
    struct module _owner_1 ;
    struct module * _owner  = & _owner_1;
    {
        /* Tested function call */
        int _return  = __ion_device_add_heap(_heap, _owner);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct module * _owner ", ( _owner ));
    }
}
/* CPPTEST_TEST_CASE_END test___ion_device_add_heap_4 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_alloc_1 */
/* CPPTEST_TEST_CASE_CONTEXT struct dma_buf * ion_alloc(size_t, unsigned int, unsigned int) */
void TestSuite_ion_h_82a8b206_test_ion_alloc_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (len) */ 
    size_t _len  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 2 (heap_id_mask) */ 
    unsigned _heap_id_mask  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (flags) */ 
    unsigned _flags  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        struct dma_buf * _return  = ion_alloc(_len, _heap_id_mask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_buf * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_alloc_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_alloc_10 */
/* CPPTEST_TEST_CASE_CONTEXT struct dma_buf * ion_alloc(size_t, unsigned int, unsigned int) */
void TestSuite_ion_h_82a8b206_test_ion_alloc_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (len) */ 
    size_t _len  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 2 (heap_id_mask) */ 
    unsigned _heap_id_mask  = 0u;
    /* Initializing argument 3 (flags) */ 
    unsigned _flags  = 0u;
    {
        /* Tested function call */
        struct dma_buf * _return  = ion_alloc(_len, _heap_id_mask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_buf * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_alloc_10 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_alloc_2 */
/* CPPTEST_TEST_CASE_CONTEXT struct dma_buf * ion_alloc(size_t, unsigned int, unsigned int) */
void TestSuite_ion_h_82a8b206_test_ion_alloc_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (len) */ 
    size_t _len  = 1ul;
    /* Initializing argument 2 (heap_id_mask) */ 
    unsigned _heap_id_mask  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (flags) */ 
    unsigned _flags  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        struct dma_buf * _return  = ion_alloc(_len, _heap_id_mask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_buf * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_alloc_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_alloc_3 */
/* CPPTEST_TEST_CASE_CONTEXT struct dma_buf * ion_alloc(size_t, unsigned int, unsigned int) */
void TestSuite_ion_h_82a8b206_test_ion_alloc_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (len) */ 
    size_t _len  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 2 (heap_id_mask) */ 
    unsigned _heap_id_mask  = 1u;
    /* Initializing argument 3 (flags) */ 
    unsigned _flags  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        struct dma_buf * _return  = ion_alloc(_len, _heap_id_mask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_buf * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_alloc_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_alloc_4 */
/* CPPTEST_TEST_CASE_CONTEXT struct dma_buf * ion_alloc(size_t, unsigned int, unsigned int) */
void TestSuite_ion_h_82a8b206_test_ion_alloc_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (len) */ 
    size_t _len  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 2 (heap_id_mask) */ 
    unsigned _heap_id_mask  = 0u;
    /* Initializing argument 3 (flags) */ 
    unsigned _flags  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        struct dma_buf * _return  = ion_alloc(_len, _heap_id_mask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_buf * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_alloc_4 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_alloc_5 */
/* CPPTEST_TEST_CASE_CONTEXT struct dma_buf * ion_alloc(size_t, unsigned int, unsigned int) */
void TestSuite_ion_h_82a8b206_test_ion_alloc_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (len) */ 
    size_t _len  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 2 (heap_id_mask) */ 
    unsigned _heap_id_mask  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (flags) */ 
    unsigned _flags  = 1u;
    {
        /* Tested function call */
        struct dma_buf * _return  = ion_alloc(_len, _heap_id_mask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_buf * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_alloc_5 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_alloc_6 */
/* CPPTEST_TEST_CASE_CONTEXT struct dma_buf * ion_alloc(size_t, unsigned int, unsigned int) */
void TestSuite_ion_h_82a8b206_test_ion_alloc_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (len) */ 
    size_t _len  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 2 (heap_id_mask) */ 
    unsigned _heap_id_mask  = 1u;
    /* Initializing argument 3 (flags) */ 
    unsigned _flags  = 1u;
    {
        /* Tested function call */
        struct dma_buf * _return  = ion_alloc(_len, _heap_id_mask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_buf * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_alloc_6 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_alloc_7 */
/* CPPTEST_TEST_CASE_CONTEXT struct dma_buf * ion_alloc(size_t, unsigned int, unsigned int) */
void TestSuite_ion_h_82a8b206_test_ion_alloc_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (len) */ 
    size_t _len  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 2 (heap_id_mask) */ 
    unsigned _heap_id_mask  = 0u;
    /* Initializing argument 3 (flags) */ 
    unsigned _flags  = 1u;
    {
        /* Tested function call */
        struct dma_buf * _return  = ion_alloc(_len, _heap_id_mask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_buf * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_alloc_7 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_alloc_8 */
/* CPPTEST_TEST_CASE_CONTEXT struct dma_buf * ion_alloc(size_t, unsigned int, unsigned int) */
void TestSuite_ion_h_82a8b206_test_ion_alloc_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (len) */ 
    size_t _len  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 2 (heap_id_mask) */ 
    unsigned _heap_id_mask  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (flags) */ 
    unsigned _flags  = 0u;
    {
        /* Tested function call */
        struct dma_buf * _return  = ion_alloc(_len, _heap_id_mask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_buf * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_alloc_8 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_alloc_9 */
/* CPPTEST_TEST_CASE_CONTEXT struct dma_buf * ion_alloc(size_t, unsigned int, unsigned int) */
void TestSuite_ion_h_82a8b206_test_ion_alloc_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (len) */ 
    size_t _len  = cpptestLimitsGetMaxUnsignedLong();
    /* Initializing argument 2 (heap_id_mask) */ 
    unsigned _heap_id_mask  = 1u;
    /* Initializing argument 3 (flags) */ 
    unsigned _flags  = 0u;
    {
        /* Tested function call */
        struct dma_buf * _return  = ion_alloc(_len, _heap_id_mask, _flags);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct dma_buf * _return ", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_alloc_9 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_buffer_prep_noncached_1 */
/* CPPTEST_TEST_CASE_CONTEXT void ion_buffer_prep_noncached(struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_buffer_prep_noncached_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    {
        /* Tested function call */
        ion_buffer_prep_noncached(_buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_buffer_prep_noncached_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_buffer_prep_noncached_2 */
/* CPPTEST_TEST_CASE_CONTEXT void ion_buffer_prep_noncached(struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_buffer_prep_noncached_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buffer) */ 
    struct ion_buffer _buffer_0 ;
    struct ion_buffer * _buffer  = & _buffer_0;
    {
        /* Tested function call */
        ion_buffer_prep_noncached(_buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_buffer_prep_noncached_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_buffer_zero_1 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_buffer_zero(struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_buffer_zero_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    {
        /* Tested function call */
        int _return  = ion_buffer_zero(_buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_buffer_zero_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_buffer_zero_2 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_buffer_zero(struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_buffer_zero_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buffer) */ 
    struct ion_buffer _buffer_0 ;
    struct ion_buffer * _buffer  = & _buffer_0;
    {
        /* Tested function call */
        int _return  = ion_buffer_zero(_buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_buffer_zero_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_free_1 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_free(struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_free_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    {
        /* Tested function call */
        int _return  = ion_free(_buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_free_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_free_2 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_free(struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_free_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buffer) */ 
    struct ion_buffer _buffer_0 ;
    struct ion_buffer * _buffer  = & _buffer_0;
    {
        /* Tested function call */
        int _return  = ion_free(_buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_free_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_add_1 */
/* CPPTEST_TEST_CASE_CONTEXT void ion_heap_freelist_add(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    {
        /* Tested function call */
        ion_heap_freelist_add(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_add_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_add_2 */
/* CPPTEST_TEST_CASE_CONTEXT void ion_heap_freelist_add(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    {
        /* Tested function call */
        ion_heap_freelist_add(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_add_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_add_3 */
/* CPPTEST_TEST_CASE_CONTEXT void ion_heap_freelist_add(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer _buffer_0 ;
    struct ion_buffer * _buffer  = & _buffer_0;
    {
        /* Tested function call */
        ion_heap_freelist_add(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_add_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_add_4 */
/* CPPTEST_TEST_CASE_CONTEXT void ion_heap_freelist_add(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_add_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer _buffer_1 ;
    struct ion_buffer * _buffer  = & _buffer_1;
    {
        /* Tested function call */
        ion_heap_freelist_add(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_add_4 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_drain_1 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_drain(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (size) */ 
    size_t _size  = cpptestLimitsGetMaxUnsignedLong();
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_drain(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_drain_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_drain_2 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_drain(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (size) */ 
    size_t _size  = cpptestLimitsGetMaxUnsignedLong();
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_drain(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_drain_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_drain_3 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_drain(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 1ul;
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_drain(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_drain_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_drain_4 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_drain(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 1ul;
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_drain(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_drain_4 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_drain_5 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_drain(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 0ul;
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_drain(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_drain_5 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_drain_6 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_drain(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_drain_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 0ul;
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_drain(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_drain_6 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_shrink_1 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_shrink(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (size) */ 
    size_t _size  = cpptestLimitsGetMaxUnsignedLong();
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_shrink(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_shrink_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_shrink_2 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_shrink(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (size) */ 
    size_t _size  = cpptestLimitsGetMaxUnsignedLong();
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_shrink(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_shrink_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_shrink_3 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_shrink(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 1ul;
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_shrink(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_shrink_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_shrink_4 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_shrink(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 1ul;
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_shrink(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_shrink_4 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_shrink_5 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_shrink(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 0ul;
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_shrink(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_shrink_5 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_shrink_6 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_shrink(struct ion_heap *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_shrink_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 0ul;
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_shrink(_heap, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_shrink_6 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_size_1 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_size(struct ion_heap *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_size_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_size(_heap);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_size_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_freelist_size_2 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_heap_freelist_size(struct ion_heap *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_freelist_size_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    {
        /* Tested function call */
        size_t _return  = ion_heap_freelist_size(_heap);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_freelist_size_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_init_deferred_free_1 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_init_deferred_free(struct ion_heap *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_init_deferred_free_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    {
        /* Tested function call */
        int _return  = ion_heap_init_deferred_free(_heap);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_init_deferred_free_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_init_deferred_free_2 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_init_deferred_free(struct ion_heap *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_init_deferred_free_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    {
        /* Tested function call */
        int _return  = ion_heap_init_deferred_free(_heap);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_init_deferred_free_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_init_shrinker_1 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_init_shrinker(struct ion_heap *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_init_shrinker_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    {
        /* Tested function call */
        int _return  = ion_heap_init_shrinker(_heap);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_init_shrinker_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_init_shrinker_2 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_init_shrinker(struct ion_heap *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_init_shrinker_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    {
        /* Tested function call */
        int _return  = ion_heap_init_shrinker(_heap);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_init_shrinker_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_kernel_1 */
/* CPPTEST_TEST_CASE_CONTEXT void * ion_heap_map_kernel(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    {
        /* Tested function call */
        void * _return  = ion_heap_map_kernel(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_kernel_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_kernel_2 */
/* CPPTEST_TEST_CASE_CONTEXT void * ion_heap_map_kernel(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    {
        /* Tested function call */
        void * _return  = ion_heap_map_kernel(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_kernel_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_kernel_3 */
/* CPPTEST_TEST_CASE_CONTEXT void * ion_heap_map_kernel(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer _buffer_0 ;
    struct ion_buffer * _buffer  = & _buffer_0;
    {
        /* Tested function call */
        void * _return  = ion_heap_map_kernel(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_kernel_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_kernel_4 */
/* CPPTEST_TEST_CASE_CONTEXT void * ion_heap_map_kernel(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_kernel_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer _buffer_1 ;
    struct ion_buffer * _buffer  = & _buffer_1;
    {
        /* Tested function call */
        void * _return  = ion_heap_map_kernel(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _return ", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_kernel_4 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_user_1 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_map_user(struct ion_heap *, struct ion_buffer *, struct vm_area_struct *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    /* Initializing argument 3 (vma) */ 
    struct vm_area_struct * _vma  = 0 ;
    {
        /* Tested function call */
        int _return  = ion_heap_map_user(_heap, _buffer, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_user_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_user_2 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_map_user(struct ion_heap *, struct ion_buffer *, struct vm_area_struct *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    /* Initializing argument 3 (vma) */ 
    struct vm_area_struct * _vma  = 0 ;
    {
        /* Tested function call */
        int _return  = ion_heap_map_user(_heap, _buffer, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_user_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_user_3 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_map_user(struct ion_heap *, struct ion_buffer *, struct vm_area_struct *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer _buffer_0 ;
    struct ion_buffer * _buffer  = & _buffer_0;
    /* Initializing argument 3 (vma) */ 
    struct vm_area_struct * _vma  = 0 ;
    {
        /* Tested function call */
        int _return  = ion_heap_map_user(_heap, _buffer, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_user_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_user_4 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_map_user(struct ion_heap *, struct ion_buffer *, struct vm_area_struct *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer _buffer_1 ;
    struct ion_buffer * _buffer  = & _buffer_1;
    /* Initializing argument 3 (vma) */ 
    struct vm_area_struct * _vma  = 0 ;
    {
        /* Tested function call */
        int _return  = ion_heap_map_user(_heap, _buffer, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_user_4 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_user_5 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_map_user(struct ion_heap *, struct ion_buffer *, struct vm_area_struct *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    /* Initializing argument 3 (vma) */ 
    struct vm_area_struct _vma_0 ;
    struct vm_area_struct * _vma  = & _vma_0;
    {
        /* Tested function call */
        int _return  = ion_heap_map_user(_heap, _buffer, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_user_5 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_user_6 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_map_user(struct ion_heap *, struct ion_buffer *, struct vm_area_struct *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    /* Initializing argument 3 (vma) */ 
    struct vm_area_struct _vma_1 ;
    struct vm_area_struct * _vma  = & _vma_1;
    {
        /* Tested function call */
        int _return  = ion_heap_map_user(_heap, _buffer, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_user_6 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_user_7 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_map_user(struct ion_heap *, struct ion_buffer *, struct vm_area_struct *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer _buffer_0 ;
    struct ion_buffer * _buffer  = & _buffer_0;
    /* Initializing argument 3 (vma) */ 
    struct vm_area_struct _vma_1 ;
    struct vm_area_struct * _vma  = & _vma_1;
    {
        /* Tested function call */
        int _return  = ion_heap_map_user(_heap, _buffer, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_user_7 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_map_user_8 */
/* CPPTEST_TEST_CASE_CONTEXT int ion_heap_map_user(struct ion_heap *, struct ion_buffer *, struct vm_area_struct *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_map_user_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer _buffer_1 ;
    struct ion_buffer * _buffer  = & _buffer_1;
    /* Initializing argument 3 (vma) */ 
    struct vm_area_struct _vma_2 ;
    struct vm_area_struct * _vma  = & _vma_2;
    {
        /* Tested function call */
        int _return  = ion_heap_map_user(_heap, _buffer, _vma);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
        CPPTEST_POST_CONDITION_PTR("struct vm_area_struct * _vma ", ( _vma ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_map_user_8 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_unmap_kernel_1 */
/* CPPTEST_TEST_CASE_CONTEXT void ion_heap_unmap_kernel(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    {
        /* Tested function call */
        ion_heap_unmap_kernel(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_unmap_kernel_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_unmap_kernel_2 */
/* CPPTEST_TEST_CASE_CONTEXT void ion_heap_unmap_kernel(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer * _buffer  = 0 ;
    {
        /* Tested function call */
        ion_heap_unmap_kernel(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_unmap_kernel_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_unmap_kernel_3 */
/* CPPTEST_TEST_CASE_CONTEXT void ion_heap_unmap_kernel(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap * _heap  = 0 ;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer _buffer_0 ;
    struct ion_buffer * _buffer  = & _buffer_0;
    {
        /* Tested function call */
        ion_heap_unmap_kernel(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_unmap_kernel_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_heap_unmap_kernel_4 */
/* CPPTEST_TEST_CASE_CONTEXT void ion_heap_unmap_kernel(struct ion_heap *, struct ion_buffer *) */
void TestSuite_ion_h_82a8b206_test_ion_heap_unmap_kernel_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (heap) */ 
    struct ion_heap _heap_0 ;
    struct ion_heap * _heap  = & _heap_0;
    /* Initializing argument 2 (buffer) */ 
    struct ion_buffer _buffer_1 ;
    struct ion_buffer * _buffer  = & _buffer_1;
    {
        /* Tested function call */
        ion_heap_unmap_kernel(_heap, _buffer);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("struct ion_heap * _heap ", ( _heap ));
        CPPTEST_POST_CONDITION_PTR("struct ion_buffer * _buffer ", ( _buffer ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_heap_unmap_kernel_4 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_query_heaps_kernel_1 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_query_heaps_kernel(struct ion_heap_data *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (hdata) */ 
    struct ion_heap_data * _hdata  = 0 ;
    /* Initializing argument 2 (size) */ 
    size_t _size  = cpptestLimitsGetMaxUnsignedLong();
    {
        /* Tested function call */
        size_t _return  = ion_query_heaps_kernel(_hdata, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap_data * _hdata ", ( _hdata ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_query_heaps_kernel_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_query_heaps_kernel_2 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_query_heaps_kernel(struct ion_heap_data *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (hdata) */ 
    struct ion_heap_data _hdata_0 ;
    struct ion_heap_data * _hdata  = & _hdata_0;
    /* Initializing argument 2 (size) */ 
    size_t _size  = cpptestLimitsGetMaxUnsignedLong();
    {
        /* Tested function call */
        size_t _return  = ion_query_heaps_kernel(_hdata, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap_data * _hdata ", ( _hdata ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_query_heaps_kernel_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_query_heaps_kernel_3 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_query_heaps_kernel(struct ion_heap_data *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (hdata) */ 
    struct ion_heap_data * _hdata  = 0 ;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 1ul;
    {
        /* Tested function call */
        size_t _return  = ion_query_heaps_kernel(_hdata, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap_data * _hdata ", ( _hdata ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_query_heaps_kernel_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_query_heaps_kernel_4 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_query_heaps_kernel(struct ion_heap_data *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (hdata) */ 
    struct ion_heap_data _hdata_0 ;
    struct ion_heap_data * _hdata  = & _hdata_0;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 1ul;
    {
        /* Tested function call */
        size_t _return  = ion_query_heaps_kernel(_hdata, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap_data * _hdata ", ( _hdata ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_query_heaps_kernel_4 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_query_heaps_kernel_5 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_query_heaps_kernel(struct ion_heap_data *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (hdata) */ 
    struct ion_heap_data * _hdata  = 0 ;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 0ul;
    {
        /* Tested function call */
        size_t _return  = ion_query_heaps_kernel(_hdata, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap_data * _hdata ", ( _hdata ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_query_heaps_kernel_5 */

/* CPPTEST_TEST_CASE_BEGIN test_ion_query_heaps_kernel_6 */
/* CPPTEST_TEST_CASE_CONTEXT size_t ion_query_heaps_kernel(struct ion_heap_data *, size_t) */
void TestSuite_ion_h_82a8b206_test_ion_query_heaps_kernel_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (hdata) */ 
    struct ion_heap_data _hdata_0 ;
    struct ion_heap_data * _hdata  = & _hdata_0;
    /* Initializing argument 2 (size) */ 
    size_t _size  = 0ul;
    {
        /* Tested function call */
        size_t _return  = ion_query_heaps_kernel(_hdata, _size);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("size_t _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct ion_heap_data * _hdata ", ( _hdata ));
    }
}
/* CPPTEST_TEST_CASE_END test_ion_query_heaps_kernel_6 */
