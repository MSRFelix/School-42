#!/bin/bash

ifconfig -a | grep -o 'ether .*' | cut -b 7-23

