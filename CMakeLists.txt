cmake_minimum_required(VERSION 3.14)
project(minishell C)

set(CMAKE_C_STANDARD 99)

add_executable(minishell Sources/minishell.c Sources/ft's.c Includes/minishell.h Sources/ft_strsplit.c Sources/commands.c Sources/exit.c)