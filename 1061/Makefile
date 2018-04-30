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
# Versão do projeto
#-------------------------------------------------------------------------------
MAJOR_VERSION=0
MINOR_VERSION=0
MICRO_VERSION=1
#VERSION=_$(MAJOR_VERSION).$(MINOR_VERSION).$(MICRO_VERSION)

#-------------------------------------------------------------------------------
# Diretórios
#-------------------------------------------------------------------------------
SRC_DIR=./src
#OBJ_DIR=./obj
INC_DIR=./inc
BIN_DIR=.

#-------------------------------------------------------------------------------
# C, Header, Object and Mapping Files
#-------------------------------------------------------------------------------
SRC = ${wildcard $(SRC_DIR)/*.cpp}
OBJ = ${addprefix $(OBJ_DIR)/, ${notdir ${SRC:.cpp=.o}}}
MAP = ${addprefix $(MAP_DIR)/, ${notdir ${OBJ:.o=.funcmap}}}
INC = -I$(INC_DIR)

#-------------------------------------------------------------------------------
# Compilador, flags e bibliotecas
#-------------------------------------------------------------------------------
CC=g++
CFLAGS= -std=c++11 -O2
LFLAGS= -lm


TARGET=$(BIN_DIR)/$(NAME)$(VERSION)

.PHONY: all clean dirs

all: $(TARGET)
	@cat input.txt | $(TARGET) > temp.txt
	@diff temp.txt output.txt
	@rm -f temp.txt

dirs:
	@mkdir -vp $(OBJ_DIR) $(BIN_DIR)

$(TARGET): main.cpp
	$(CC) -o $@ $^ $(CFLAGS) $(LFLAGS)

clean:
	@echo Cleaning...
	rm -rvf {$(SRC_DIR),.}/*~ $(OBJ_DIR) $(TARGET) *.err

.PRECIOUS: %.o
