TARGET = lttng_ust_test

CC = gcc
CFLAGS = -c -g -finstrument-functions

INC+=

OBJS+=main.o

all : $(TARGET)

$(TARGET) : $(OBJS) 
	$(CC) -o $@ $^ $(LDFLAGS)

.c.o:
	$(CC) $(INC) $(CFLAGS) $<

clean:
	rm -f $(OBJS) $(TARGET)
