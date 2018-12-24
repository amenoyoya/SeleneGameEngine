@call ../../../../vcvars.bat

%compile% /wd4005 *.cpp
@pause

lib.exe /OUT:"libSLTK3_win32.lib" /NOLOGO *.obj
@pause

@del *.obj
