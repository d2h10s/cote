import os, glob

files = glob.glob('*')
isEmpty = True 
for file in files:
    if '.' not in file:
        isEmpty = False
        if os.path.isdir(file):
            continue
        print(file, 'is deleted')
        os.remove(file)
if isEmpty:
    print('there is nothing to erase')