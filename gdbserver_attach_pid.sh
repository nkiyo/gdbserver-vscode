#!/bin/bash

sudo gdbserver --attach :9091 $(pidof a.out)
