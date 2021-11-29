#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.sos