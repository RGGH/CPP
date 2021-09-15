# -*- coding: utf-8 -*-
#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#|r|e|d|a|n|d|g|r|e|e|n|.|c|o|.|u|k|
#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

ph = 4 # pyramid height
startrow = 1 # start row number
cols = 1
prev = 1 # previous row number at start

spaces = 0


def pr_row(prev, cols):
    pstr=" "
    spaces = ph - cols
    for i in range(0, cols):
        pstr += (str(prev+i) + " ")
    spaces = str(spaces*" ")
    print(spaces + " " + pstr)
  
# main
for rowno in range (startrow, ph+1):
    cols = rowno    
    maxnum = rowno + prev
    pr_row(prev, cols)
    prev = maxnum
    

  

