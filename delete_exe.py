import os, glob
print(f'root directory is [{os.getcwd()}]')
files = glob.glob('**', recursive=True)
isEmpty = True 
for file in files:
    if '.exe' in file and file != 'LICENSE' and not os.path.isdir(file):
        print(file, 'is deleted')
        os.remove(file)
        isEmpty = False
if isEmpty:
    print('there is nothing to erase')
