#!/bin/bash

CC=gcc

CFLAGS="-Wall -Wextra"

SRC1="quick_Sort_Iteration.c"
SRC2="quick_sort.c"

EXEC1="quick_Sort_Iteration"
EXEC2="quick_sort"


echo "Running first program $SRC1"
$CC $CFLAGS -o $EXEC1 $SRC1

echo "Running second program $SRC2"
$CC $CFLAGS -o $EXEC2 $SRC2


echo "Running $EXEC1 and $EXEC2 simultaneously "

./$EXEC1 &   
./$EXEC2 &   


wait

echo "Both programs have finished running."

