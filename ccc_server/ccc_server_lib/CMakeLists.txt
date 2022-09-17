cmake_minimum_required(VERSION 3.10)

# set the project name
project(CCC_server_lib VERSION 0.0.1)

# add the executable
add_definitions(-DBOOST_LOG_DYN_LINK)
find_package(Boost COMPONENTS thread log REQUIRED)
find_package(OpenSSL REQUIRED)

set(SOURCE_FILES
	include/main.hpp
	include/server.hpp
	include/monitoring.hpp
	src/monitoring.cpp
	src/server.cpp
)
add_library(CCC_server_lib)

target_link_libraries(
	${PROJECT_NAME}
	Boost::thread
	Boost::log
	OpenSSL::SSL
	Boost::program_options
)
FIND_PACKAGE( Boost  COMPONENTS program_options REQUIRED )

target_include_directories(CCC_server_lib
	PUBLIC ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/../include)


target_sources(CCC_server_lib PRIVATE
	${SOURCE_FILES}
)

target_compile_features(CCC_server_lib PUBLIC cxx_std_20)

add_custom_command(TARGET CCC_server_lib POST_BUILD
	COMMAND "${CMAKE_COMMAND}" -E copy
	"$<TARGET_FILE:CCC_server_lib>"
	"../CCC_server_app/$<CONFIGURATION>/$<TARGET_FILE_NAME:CCC_server_lib>"
	COMMENT "Copying to the output directory of the build")


#add_custom_command(TARGET CCC_server_lib POST_BUILD
#	COMMAND "${CMAKE_COMMAND}" -E copy
#	"$<TARGET_FILE:CCC_server_lib>"
#	"../tests/$<CONFIGURATION>/$<TARGET_FILE_NAME:CCC_server_lib>"
	#COMMENT "Copying the tests to the output directory of the build")

install(TARGETS CCC_server_lib DESTINATION lib)
