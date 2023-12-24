cmake_minimum_required(VERSION 3.10.2)

project(calculator_project)

# Додайте вашу версію бібліотеки
set(CALCULATOR_VERSION_MAJOR 1)
set(CALCULATOR_VERSION_MINOR 0)

# Збірка бібліотеки
add_library(calculator STATIC calculator.cpp)

# Збірка виконуваного файлу
add_executable(calculator_app main.cpp)

# Підключення бібліотеки до виконуваного файлу
target_link_libraries(calculator_app calculator)

# Установка версії бібліотеки
set_target_properties(calculator PROPERTIES
    VERSION "${CALCULATOR_VERSION_MAJOR}.${CALCULATOR_VERSION_MINOR}"
    SOVERSION "${CALCULATOR_VERSION_MAJOR}.${CALCULATOR_VERSION_MINOR}")

# Додайте папку з інклудами
target_include_directories(calculator PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

# Встановлення виконуваного файлу та бібліотеки в ту ж саму директорію
install(TARGETS calculator calculator_app
    DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}"
    LIBRARY DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}"
    ARCHIVE DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}")
