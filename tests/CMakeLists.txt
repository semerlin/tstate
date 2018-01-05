set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package (GTEST)
if (GTEST_FOUND)
    include_directories(../src)
    include_directories(${GTEST_INCLUDE_DIR})

    set(LIB_LIST
        ${GTEST_LIBRARY}
        pthread)

endif (GTEST_FOUND)



