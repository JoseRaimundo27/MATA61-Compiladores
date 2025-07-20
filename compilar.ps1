# compilar.ps1

bison -d parser.y
flex lexico.l
gcc -o maglang.exe parser.tab.c lex.yy.c tree.c -mconsole
Get-Content teste.mag | .\maglang.exe

