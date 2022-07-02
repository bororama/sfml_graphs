
SRCS	= main.cpp 
HEADERS = -I/Users/npinto-g/.brew/include
SFML 	= -L/Users/npinto-g/.brew/lib -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system


all:
	clang++ $(HEADERS) $(SFML) main.cpp 
