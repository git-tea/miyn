# Compiler and Flags
CC=gcc
CFLAGS= -I.

# Headers
HDRS= -I.
#HDRS+= -I../include
#HDRS+= /Users/nickbell/Documents/My\ Documents/GameMaking/SDL2.framework/Headers
HDRS+= /Users/nickbell/Documents/My\ Documents/GameMaking/SDL2.framework/Headers/SDL.h
HDRS+= -I../include/Game.hpp
HDRS+= -I../include/GameBoard.hpp
HDRS+= -I../include/Card.hpp
HDRS+= -I../include/Player.hpp

# Source Files
SRCS= main.cpp
SRCS+= Player.cpp
SRCS+= GameBoard.cpp
SRCS+= Card.cpp
SRCS+= Game.cpp

# Objects
OBJS=$(SRCS:.cpp=.o)

# Executables
TARG=miyn

# default recipe
all: $(TARG)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $(HDRS) $< -o $@

$(TARG): $(OBJS)
	$(CC) -o $@ $(OBJS)

clean:
	rm -f *.out *.o miyn






