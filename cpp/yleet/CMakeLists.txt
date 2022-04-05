include_directories(../include)
aux_source_directory(. ALL_SRCS)
add_library(yleet STATIC ${ALL_SRCS})