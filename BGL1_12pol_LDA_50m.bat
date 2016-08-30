@echo Author: Adolfo Correa
@echo Full path and DOS batch name: %~f0
@echo.
@echo Filename: %~n0.prm

".\Pg\Prosim_omeu.exe" %~n0. %~n0. %~dp0I_O\ < .\I_O\y.txt

PAUSE
