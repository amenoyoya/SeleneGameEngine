@call ../../../../vcvars.bat

%compile% /wd4005 *.cpp
@pause

lib.exe /OUT:"libSLTK3_SDL.lib" /NOLOGO *.obj
@pause

@del *.obj
