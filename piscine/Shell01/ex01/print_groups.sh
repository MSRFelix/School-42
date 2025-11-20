#!/bin/bash

printf "%s" $(id -Gn $FT_USER | tr ' ' ',')
