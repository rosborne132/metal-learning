#!/bin/bash

echo -n "Running process $1"
echo

case $1 in
  debug)
    make

    ./build/main
    ;;

  clean)
    make clean
    ;;

  *)
    echo -n "unknown"
    ;;
esac

echo "Process complete!"