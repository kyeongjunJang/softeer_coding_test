from collections import deque
N = int(input())

dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]
ans = []
mapp = []
for i in range(N):
    line = list(map(int,input()))
    mapp.append(line)

checked = [[False] * N for _ in range(N)]

def bfs(x,y):
    cnt = 1
    queue = deque()
    queue.append((x, y))
    checked[x][y] = True
    while queue:
        x,y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if -1 < nx < N and -1 < ny < N:
                if not checked[nx][ny] and mapp[nx][ny] == 1:
                    queue.append((nx, ny))
                    checked[nx][ny] = True
                    cnt +=1            
    ans.append(cnt)

for i in range(N):
    for j in range(N):
        if not checked[i][j] and mapp[i][j] == 1:
            bfs(i, j)

print(len(ans))
for blocks in sorted(ans):
    print(blocks)