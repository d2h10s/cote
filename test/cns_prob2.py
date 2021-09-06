def solution(start_day, gap_time):
    _, _, D, H, M, S = map(int,start_day[0].split(':'))
    days = set([D])
    for g in gap_time:
        d, h, m, s = map(int, g.split(':'))
        D, H, M, S = D+d, H+h, M+m, S+s
        if S > 60: S %= 60; M += 1
        if M > 60: M %= 60; H += 1
        if H > 24: H %= 24; D += 1
        days.add(D)
    
    return (1 if max(days)-min(days) == len(days)-1 else 0, len(days))

assert solution(['1234:10:03:02:28:30'], [ "02:03:04:05", "00:23:04:05", "00:23:34:12"]) == (0, 4)