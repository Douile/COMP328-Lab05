#!/bin/sh

FILE="$1"
BASENAME=$(basename "$FILE" ".c")

clang -Wall -Wextra -Wpedantic "$FILE" -o "$BASENAME" && "./$BASENAME"
