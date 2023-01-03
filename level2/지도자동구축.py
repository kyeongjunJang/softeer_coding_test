N = int(input())

def dot_cnt(n):
    if n==1:
        return 3
    n = n-1
    return dot_cnt(n) * 2 - 1
        
print(dot_cnt(N)**2)