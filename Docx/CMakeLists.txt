# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Docx "CMakeProject1.cpp" "CMakeProject1.h")
target_link_libraries(Docx PUBLIC duckx::duckx)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Docx PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
