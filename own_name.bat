@echo Full path and filename: %~f0
@echo.

@echo Drive: %~d0
@echo Path: %~p0
@echo.

@echo Drive and path: %~dp0
@echo.

@echo Filename without extension: %~n0
@echo Filename with    extension: %~nx0
@echo Extension: %~x0
@echo.

@echo Filename as given on command line: %0
@echo.

@echo Filename as given on command line minus quotes: %~0
@echo.

@REM Build from parts
@echo.

@SETLOCAL
@SET drv=%~d0
@SET pth=%~p0
@SET fpath=%~dp0
@SET fname=%~n0
@SET ext=%~x0
@echo Simply Constructed name: %fpath%%fname%%ext%
@echo.

@echo Fully  Constructed name: %drv%%pth%%fname%%ext%
@echo.

@echo Filename with dot    extension: %~n0.

@ENDLOCAL
pause