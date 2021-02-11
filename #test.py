import os, glob

files = glob.glob('*.c.cc')
for file in files:
    print(file[:-5])
    #os.rename(file, file[:-5]+'.cc')