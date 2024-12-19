Ruangan = int(input())
Isi = list(map(int,input().split()))

for x in range (Ruangan):
    print((x + 1) * Isi[x], end = " ")