#!bin/sh
groups $FT_USER | TR ' ' ',' |TR -d '\n'
