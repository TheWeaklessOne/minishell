cmake_minimum_required(VERSION 3.14)
project(minishell C)

set(CMAKE_C_STANDARD 11)

include_directories(Includes)

add_executable(minishell
        Includes/minishell.h
        Sources/commands.c
        Sources/exit.c
        Sources/ft.c
        Sources/ft_2.c
        Sources/ft_strsplit.c
        Sources/minishell.c
        Sources/unstandart.c Sources/shell.c Sources/env.c Sources/unstandart_2.c Sources/list.c Includes/list.h Sources/cd.c Sources/ft_split_whitespaces.c)
