cmake_minimum_required(VERSION 3.10)
project(scaler_module_project)

include(/home/fdvp-gpu2/Tools/cpptest/integration/cmake/cpptest-project.cmake)

execute_process(COMMAND uname -r OUTPUT_VARIABLE KERNEL_RELEASE OUTPUT_STRIP_TRAILING_WHITESPACE)
set(KDIR /lib/modules/${KERNEL_RELEASE}/build CACHE PATH "Kernel build directory")

add_definitions(
    -D__KERNEL__
    -DMODULE
    -DKBUILD_MODNAME="scaler"
    -D"IS_ENABLED\(option\)=defined\(option\)"
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${KDIR}/include
    ${KDIR}/include/uapi
    ${KDIR}/arch/x86/include
    ${KDIR}/arch/x86/include/uapi
    ${KDIR}/arch/x86/include/generated
    ${KDIR}/include/generated/uapi
    /usr/src/linux-headers-6.8.0-90-generic/include
)

add_compile_options(-include ${KDIR}/include/linux/kconfig.h)

set(SCALER_SOURCES
    scaler-core.c
    scaler-regs.c
    scaler-debug.c
    scaler-ext.c
)

set(CPPTEST_PROJECT_NAME "scaler_analysis")
cpptest_add_executable(${CPPTEST_PROJECT_NAME}
    CPPTEST_COMPILER_ID gcc_11-64
    SOURCES ${SCALER_SOURCES}
)

add_custom_target(scaler
    ALL
    COMMAND make -C ${KDIR} M=${CMAKE_CURRENT_SOURCE_DIR} modules
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    COMMENT "Building Linux Kernel Module: scaler"
)