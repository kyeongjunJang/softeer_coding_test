import sys

M, N, K = map(int, input().split())
secret_order = list(map(int, input().split()))
order = list(map(int, input().split()))

if M > N:
        print('normal')
else:  
    for i in range(N-M+1):
        if secret_order == order[i:i+M]:
            print('secret')
            break
        if i == N-M:
            print('normal')