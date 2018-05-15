#-------------------------------------------------------------------------------
# Copyright (c) 2018 Mateus Furquim
# Baseado no Makefile de:
# Edson Alves da Costa Júnior [https://github.com/edsomjr]
# Leonn Ferreira <leonn.paiva@gmail.com>
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Estrutura do projeto
# .
# ├── input.txt
# ├── main.cpp
# ├── Makefile
# └── output.txt
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# Capture current directory with Makefile
# https://stackoverflow.com/questions/18136918/how-to-get-current-relative-directory-of-your-makefile#18137056
#-------------------------------------------------------------------------------
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
current_dir := $(notdir $(patsubst %/,%,$(dir $(mkfile_path))))

#-------------------------------------------------------------------------------
# Nome do projeto
#-------------------------------------------------------------------------------
NAME=$(current_dir)

#-------------------------------------------------------------------------------
# Compilador, flags e bibliotecas
#-------------------------------------------------------------------------------
CC=gcc
CPP=g++
C99=0
CFLAGS= -O2
C99FLAGS= -std=c99
CPPFLAGS= -std=c++11
LFLAGS= -lm

TARGET=$(NAME)

.PHONY: all clean dirs

C_EXISTS:=$(shell [ -e $(shell pwd)/main.c ] && echo 1 || echo 0 )

.ONESHELL:
print: diff
	@cat main.c*

.ONESHELL:
diff: compile
	@diff result.txt output.txt

.ONESHELL:
compile:
ifeq ($(C_EXISTS), 1)
	@$(MAKE) --no-print-directory c99
else
	$(MAKE) --no-print-directory cpp
endif
	-rm -f result.txt
	cat input.txt | ./$(TARGET) > result.txt

.ONESHELL:
c99:
	@$(CC)  -o $(TARGET) main.c   $(C99FLAGS) $(CFLAGS) $(LFLAGS)

.ONESHELL:
cpp:
	@$(CPP) -o $(TARGET) main.cpp $(CPPFLAGS) $(CFLAGS) $(LFLAGS)

clean:
	@echo Cleaning...
	rm -rvf $(TARGET) result.txt diff.tmp
