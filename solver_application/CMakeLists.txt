add_executable(solver ${CMAKE_CURRENT_SOURCE_DIR}/equation.cpp)
target_link_libraries(solver PUBLIC formatter_ex)
target_link_libraries(solver PUBLIC solver_lib)
