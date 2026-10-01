#!/usr/bin/env bash
set -euo pipefail

if (($# < 1)); then
    echo "Usage: bash run-source.sh <file.c|file.cpp> [program arguments...]" >&2
    exit 2
fi

source_file=$1
shift

if [[ ! -f "$source_file" ]]; then
    echo "Error: source file not found: $source_file" >&2
    exit 2
fi

case "${source_file##*.}" in
    c)
        compiler=gcc
        standard=c17
        ;;
    cc|cpp|cxx)
        compiler=g++
        standard=c++17
        ;;
    *)
        echo "Error: expected a .c, .cc, .cpp, or .cxx source file: $source_file" >&2
        exit 2
        ;;
esac

if ! command -v "$compiler" >/dev/null 2>&1; then
    echo "Error: $compiler is not installed or not on PATH." >&2
    exit 127
fi

binary=$(mktemp "${TMPDIR:-/tmp}/c-practice.XXXXXX")
trap 'rm -f "$binary"' EXIT

"$compiler" "-std=$standard" -Wall -Wextra -Wpedantic "$source_file" -o "$binary"
chmod u+x "$binary"
"$binary" "$@"