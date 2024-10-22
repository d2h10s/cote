def dist(a, b): return abs(a[0]-b[0]) + abs(a[1]-b[1])

def main():
    n, m = map(int, input().split())
    road = [x for _ in range(n) for x in map(int, input().split()) ] #[list(map(int, input().split())) for _ in range(n)]
    chicken = [(i // n, i % n) for i, x in enumerate(road) if x == 2]
    house = [(i // n, i % n) for i, x in enumerate(road) if x == 1]
    answer = []
    for c in chicken:
        sums = sum(dist(c, h) for h in house)
        answer.append(sums)
    print(answer)
    answer = sum(answer[:m])
    print(answer)

main()