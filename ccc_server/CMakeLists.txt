cmake_minimum_required(VERSION 3.10)

# set the project name
project(
	CCC_server
	VERSION 0.1
	DESCRIPTION "Server for the framework")

# add the executable
add_subdirectory(ccc_server_lib)
add_subdirectory(ccc_server_app)
# add_subdirectory(tests)
