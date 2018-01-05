find_package(LIBXML2)

set(SRC_LIST
    )

#-------------------------------------------------
# build and install tstate
#-------------------------------------------------
if (BUILD_SHARED)
    add_library(tstate SHARED ${SRC_LIST})
    set_target_properties(tstate PROPERTIES VERSION 
        ${VERSION_MAJOR}.${VERSION_MINOR}.${REVISION_NUMBER}.${BUILD_NUMBER} SOVERSION ${VERSION_MAJOR})
    install(TARGETS tstate
        LIBRARY DESTINATION "lib")
else (BUILD_SHARED)
    add_library(tstate STATIC ${SRC_LIST})
    install(TARGETS tstate
        ARCHIVE DESTINATION "lib")
endif (BUILD_SHARED)

#-------------------------------------------------
# generate and install pc
#-------------------------------------------------
configure_file(
    cmake/tstate.pc.in
    "${CMAKE_BINARY_DIR}/tstate.pc"
    @ONLY)

install(FILES "${CMAKE_BINARY_DIR}/tstate.pc" DESTINATION "/usr/lib/pkgconfig")


