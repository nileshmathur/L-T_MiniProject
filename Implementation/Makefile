PROJECT_NAME = Determinant of Matrix
BUILD = build

SRC = main.c\
src/determinant.c

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out
DOCUMENTATION_OUTPUT = documentation/html


$(PROJECT_NAME):all
.PHONY: run clean test doc all

run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out
  
clean:
  rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
  
$(BUILD):
	mkdir build
