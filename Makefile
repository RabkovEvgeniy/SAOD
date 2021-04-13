CC = g++
CFlags = -Wall -MMD -I src
PObj = obj/
PSrc = src/
PBin = bin/
EXEC = exe   
Target = $(PBin)main9.$(EXEC) $(PBin)main8.$(EXEC) $(PBin)main7.$(EXEC) $(PBin)main10.$(EXEC)

all: $(Target)

$(PBin)%.$(EXEC):$(PObj)%.o $(PObj)SAOD.a
	$(CC) $(CFlags) -o $@ $^

$(PObj)SAOD.a: $(PObj)SAOD.o $(PObj)PhoneNote.o
	ar rcs $@ $^

$(PObj)%.o:$(PSrc)%.cpp
	$(CC) -c $^ $(CFlags) -o $@

.PHONY: clean all

clean:
	rm -rf $(PObj)*.*
	rm -rf $(PBin)*.*

-include $(Pobj)SAOD.d $(Pobj)PhoneNote.d $(Pobj)main8.d $(Pobj)main7.d $(Pobj)main9.d
