def dfs(begin, target, words, level):
    if level > len(words):
        return -1
    if begin == target:
        return level
    glv = len(words)
    candi = []
    for word in words:
        a = len(word)-[ord(x)-ord(y) for x,y in zip(begin, word)].count(0)==1
        if a and word in maps.get(begin,[]):
            candi.append(word)
            idx =maps[begin].index(word)
            maps[begin].pop(idx)
    print(begin, candi)
    for w in candi:
        lv = dfs(w, target, words, level+1)
        if lv < glv and lv > -1:
            glv = lv
    return glv
    
def solution(begin, target, words):
    global maps
    maps = {x:words[:] for x in words}
    maps[begin] = words[:]
    if target not in words:
        return 0
    answer = dfs(begin, target, words, 0)
    return answer