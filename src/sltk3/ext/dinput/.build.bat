@call ../../../../vcvars.bat

@set include=%~dp0tolua;%include%

%compile% /wd4005 /wd4800 *.cpp
@pause

lib.exe /OUT:"libSLTK3_dinput.lib" /NOLOGO *.obj
@pause

@del *.obj
