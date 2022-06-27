cmake_minimum_required(VERSION 3.10)

project(CCC_server_app)

add_executable(CCC_server_app main.cpp)

target_link_libraries(CCC_server_app
	PRIVATE CCC_server_lib)

target_compile_features(CCC_server_app PUBLIC cxx_std_20)
install(TARGETS CCC_server_app DESTINATION bin)
