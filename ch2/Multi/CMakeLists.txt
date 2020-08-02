# 声明要求的 cmake 最低版本
cmake_minimum_required( VERSION 2.8 )

# 声明一个 cmake 工程
project( myHelloSLAM )

# 设置编译模式
set( CMAKE_BUILD_TYPE "Debug" )



##########################################

# 添加一个库
add_library( hello libHelloSLAM.cpp )
# 共享库
add_library( hello_shared SHARED libHelloSLAM.cpp )

##################################################

# 语法：add_executable( 程序名 源代码文件 ）
add_executable( main main.cpp )
# 将库文件链接到可执行程序上
target_link_libraries( main hello_shared )
