######################################################################
# @author      : Xue Yi (andy_xueyi@hotmail.com)
# @file        : Makefile
# @created     : Monday Dec 02, 2019 13:51:16 CST
######################################################################

CC=g++

SRCS=$(wildcard *.cpp)
#SRCS+=$(wildcard ./include/*.h)

#当前工程目录下头文件路径
PATH_NAME=$(shell pwd)

#以当前文件名称作为可执行文件名称
TAG:= $(shell basename $$PWD)

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

$(TAG):$(OBJS)
	$(CC) -o $@ $^

$(OBJS):%.o:%.cpp
	$(CC) -o $@ -c $<

#避免因为遇到clean重名文件导致规则失效
.PHONY: clean
clean:
	rm -f $(OBJS) $(TAG)

