import os, glob
print(f'root directory is [{os.getcwd()}]')
files = glob.glob('**', recursive=True)
isEmpty = True
for file in files:
    if ('.exe' in file or '.' not in file or '.pdb' in file) and file != 'LICENSE' and not os.path.isdir(file):
        choice = input(f'delete "{file} (Yes/No): ')
        if choice.upper().startswith('Y'):
            print('\t', file, 'is deleted')
            os.remove(file)
            isEmpty = False
if isEmpty:
    print('Nothing has been erased.')