clean:
	-@del *.exe
	-@del *.obj
	-@del *.winmd

build:
	cl /nologo /EHsc /MD /c arguments.cpp program.cpp
	cl /nologo /EHsc /ZW /wd4447 main.cpp program.obj arguments.obj /link shell32.lib user32.lib kernel32.lib /out:printargs.exe

rebuild: clean build

