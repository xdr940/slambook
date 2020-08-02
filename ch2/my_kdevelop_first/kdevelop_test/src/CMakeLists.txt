set(kdevelop_test_SRCS
    kdevelop_test.cpp
)

ecm_qt_declare_logging_category(kdevelop_test_SRCS
    HEADER debug.h
    IDENTIFIER PLUGIN_KDEVELOP_TEST
    CATEGORY_NAME "kdevelop.plugin.kdevelop_test"
)

kdevplatform_add_plugin(kdevelop_test
    JSON kdevelop_test.json
    SOURCES ${kdevelop_test_SRCS}
)

target_link_libraries(kdevelop_test
    KDev::Interfaces
)
