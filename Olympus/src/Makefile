all:
	g++ -shared ./lib/*.cpp -o ../bin/api.dll #gerando dll 
	g++ main.cpp -L../bin -lapi -Wall -o ../bin/test.exe  #linkando a api.dll em main.cpp

clean:
	rm -f ../bin/*.o

run:
	../bin/test
	

	#mingw32-make.exe
	#mingw32-make.exe run