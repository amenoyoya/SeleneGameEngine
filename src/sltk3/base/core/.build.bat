@call ../../../../vcvars.bat

%compile% /I"babel" /wd4005 /wd4309 *.cpp
@pause

lib.exe /OUT:"libSLTK3_core.lib" /NOLOGO *.obj
@pause

@del *.obj
