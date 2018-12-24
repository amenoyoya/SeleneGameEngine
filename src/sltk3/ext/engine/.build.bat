@call ../../../../vcvars.bat

@set include=%~dp0tolua;%include%

%compile% /wd4005 /wd4800 core.cpp win32.cpp SDL.cpp
@pause

lib.exe /OUT:"libSLTK3_engine.lib" /NOLOGO core.obj
lib.exe /OUT:"libSLTK3_engine_win32.lib" /NOLOGO win32.obj
lib.exe /OUT:"libSLTK3_engine_SDL.lib" /NOLOGO SDL.obj
@pause

@del *.obj
