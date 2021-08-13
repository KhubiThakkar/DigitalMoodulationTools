PROJ_NAME = ModulationTechniques
TEST_PROJ_NAME = test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/NRZI.c\
src/NRZL.c\
src/RZ.c\
src/pbPlots.c\
src/supportLib.c\
src/displayNRZ.c\
src/displayRZ.c\
src/zeropadding.c\
src/buffer.c\
src/fskcode.c\
src/qamcode.c\
src/qamdisplay.c\
src/pskcode.c\
src/ASKDisplay.c\
src/FSKDisplay.c\
src/PSKDisplay.c\
src/AnalogDisplayFunction.c\
src/differential_modulation.c\
src/manchester_modulation.c\
src/manchester_display.c\
src/differential_display.c\
src/Conversion.c\
src/displayScreen.c\
src/displayScreen1.c\
src/displayScreen2.c\
src/quitFunction.c\
src/screen.c

TEST_SRC = test/test_$(PROJ_NAME).c\
unity/unity.c

INC = -Iinc\
-Iunity


#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

# COMPILE CODE
all:$(BUILD_DIR)
	gcc -Wall -g program_main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) -lm

# RUN CODE
run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

# UNIT TESTING
test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) -lm
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

# # COVERAGE CHECK
# # # coverage:${PROJECT_NAME}
# # # 	gcc -fprofile-arcs -ftest-coverage -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) $(INC) $(SRC) program_main.c 
# # # 	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
# # # 	mv again.gcda clear.gcda explor.gcda name.gcda number.gcda quit.gcda screen.gcda symbol.gcda again.gcno clear.gcno explor.gcno name.gcno number.gcno quit.gcno screen.gcno symbol.gcno src
# # # 	gcov -a -b -c $(SRC) program_main.c

coverage:$(BUILD_DIR)
	gcc -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) -lm
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))


# #MAKE DIRECTORY
doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

#CLEAN EXTRA FILES
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
	$(RM) *.c.gcov *.gcno *.gcda *.png
	$(RM) $(call FixPath,src/*.gcno)
	$(RM) $(call FixPath,src/*.gcda)
	#make clean -C doc
	rmdir $(BUILD_DIR) 
	#doc/html

# VALGRIND MEMORY LEAK
leak:all
	valgrind $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

# CPPCHECK STATIC TEST
check:
	cppcheck --enable=all $(INC)--suppress=missingIncludeSystem main.c $(SRC)
	#--check-config : when error description needed

# GDB DEBUG
debug:all
	gdb $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
