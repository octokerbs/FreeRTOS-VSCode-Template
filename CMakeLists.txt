cmake_minimum_required(VERSION 3.13)

project(FreeRTOSProject C)

# Set C Standard
set(CMAKE_C_STANDARD 99)

# Optional: Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Source files
set(SOURCES
    main.c
    FreeRTOS/heap_4.c
    FreeRTOS/list.c
    FreeRTOS/port.c
    FreeRTOS/queue.c
    FreeRTOS/tasks.c
    FreeRTOS/timers.c
    FreeRTOS/stream_buffer.c
    FreeRTOS/croutine.c
)

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    "C:/FreeRTOS-LTS/FreeRTOS/FreeRTOS-Kernel/include"
    "C:/FreeRTOS-LTS/FreeRTOS/FreeRTOS-Kernel/portable/MSVC-MingW"
)

# Add executable
add_executable(freertos_app ${SOURCES})
