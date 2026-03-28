import sys
it = iter(sys.stdin.read().split())
for i in range(1, int(next(it, 0)) + 1):
    n = next(it)
