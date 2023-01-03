n = int(input())

number = {'1':"0010010", 
          '2':"1011101", 
          '3':"1011011", 
          '4':"0111010", 
          '5':"1101011",
          '6':"1101111",
          '7':"1110010",
          '8':"1111111",
          '9':"1111011",
          '0':"1110111",
          '_':"0000000"}

for i in range(n):
    cnt = 0
    In, Out = map(str, input().split())
    
    In = '_'*(5-len(In)) + In
    Out = '_'*(5-len(Out)) + Out

    for j in range(5):
        if In[j] != Out[j]:
            for k in range(7):
                if number[In[j]][k] != number[Out[j]][k]:
                    cnt+=1
    print(cnt)