cl /c /EHsc /I C:\freeglut\include Matrix.cpp
link Matrix.obj /LIBPATH:C:\freeglut\lib freeglut.lib /SUBSYSTEM:CONSOLE
Matrix.exe
