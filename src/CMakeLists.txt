add_subdirectory(greeter)

add_executable(example
	main.cpp
)

target_link_libraries(example
	greeter
)

target_include_directories(example PUBLIC
	greeter
)
