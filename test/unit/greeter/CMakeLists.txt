add_executable(unit_greeter
	tst_greeter.cpp
)

target_link_libraries(unit_greeter
	GTest::Main
	GTest::GTest
)
