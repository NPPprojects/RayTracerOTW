cmake_minimum_required(VERSION 2.6)

project(RayTracerOTW)

include_directories(
	contrib/include
)

link_directories(
	${CMAKE_SOURCE_DIR}/contrib/lib
)

add_executable((RayTracerOTW

	src/main.cpp
)

target_link_libraries((RayTracerOTW SDL2)

add_custom_command(TARGET (RayTracerOTW
	POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy
	"${PROJECT_SOURCE_DIR}/contrib/lib/SDL2.dll"
	$<TARGET_FILE_DIR:(RayTracerOTW>
)
