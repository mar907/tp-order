:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include -c .\src\Customer.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Article.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Order.cpp
g++ -Wall -std=c++11 -I.\include -c main.cpp 

:: Compilo el Binario
g++ -I.\include Article.o Customer.o Order.o main.o -o app.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
app.exe