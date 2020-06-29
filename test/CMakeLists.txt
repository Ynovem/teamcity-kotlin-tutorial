option(UNIT_TEST "Enable unit testing"
	OFF
)

if (UNIT_TEST)
	add_subdirectory(unit)
endif (UNIT_TEST)
