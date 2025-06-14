# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 12:17:45 by chhoflac          #+#    #+#              #
#    Updated: 2025/06/14 12:17:47 by chhoflac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = templates

SOURCES = main.cpp \
		Span.cpp
		
OBJS = $(SOURCES:.cpp=.o)

RM = rm -rf

CXX = c++

CPPFLAGS = -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re