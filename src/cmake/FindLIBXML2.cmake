find_path(LIBXML2_INCLUDE_DIR NAMES libxml2 PATHS /usr/local/include /usr/include)
find_library(LIBXML2_LIBRARY NAMES xml2 PATHS /usr/lib /usr/local/lib)

if (LIBXML2_INCLUDE_DIR AND LIBXML2_LIBRARY)
    set (LIBXML2_FOUND TRUE)
endif (LIBXML2_INCLUDE_DIR AND LIBXML2_LIBRARY)

if (LIBXML2_FOUND)
    if (NOT LIBXML2_FIND_QUIETLY)
        message (STATUS "found libxml2: ${LIBXML2_LIBRARY}")
    endif (NOT LIBXML2_FIND_QUIETLY)
else (LIBXML2_FOUND)
    if (NOT LIBXML2_FIND_QUIETLY)
        message (FATAL_ERROR "can't find libxml2 library")
    endif (NOT LIBXML2_FIND_QUIETLY)
endif (LIBXML2_FOUND)


