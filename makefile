out_filename = mycat
script_filename = main.cpp

all: main.cpp
	@g++ -o $(out_filename) $(script_filename)
