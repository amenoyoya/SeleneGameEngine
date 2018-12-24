@call ../../../../vcvars.bat

%compile% /wd4005 /wd4800 *.cpp
@pause

lib.exe /OUT:"libSLTK3_curl.lib" /NOLOGO *.obj
@pause

@del *.obj
