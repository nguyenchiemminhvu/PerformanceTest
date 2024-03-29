CPP_FLAGS= \
        -g \
        -Wall \
        -pthread

LD_FLAGS= \
        -g

LD_LIBS= \
        -lpthread

CPP_FILES= \
	timer.cpp \
	performancetest.cpp \
        main.cpp

OBJ_FILES= \
	timer.o \
	performancetest.o \
        main.o

main: $(OBJ_FILES)
	g++ -std=c++11 $(LD_FLAGS) -o main $(OBJ_FILES) $(LD_LIBS) && chmod +x ./main

$(OBJ_FILES): $(CPP_FILES)
	g++ -std=c++11 $(CPP_FLAGS) -c $(CPP_FILES)

clean:
	rm -rf main
	rm -rf $(OBJ_FILES)

