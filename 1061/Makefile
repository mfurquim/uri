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
CC=g++
CFLAGS= -std=c++11 -O2
LFLAGS= -lm

TARGET=$(NAME)

.PHONY: all clean dirs

all: $(TARGET)
	@cat input.txt | ./$(TARGET) > result.txt
	@diff result.txt output.txt
	@rm -f result.txt

$(TARGET): main.cpp
	$(CC) -o $@ $^ $(CFLAGS) $(LFLAGS)

clean:
	@echo Cleaning...
	rm -rvf $(TARGET) result.txt
