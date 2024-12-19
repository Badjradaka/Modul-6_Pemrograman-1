Kolom, Baris = map(int, input().split())
Num = list(map(int, input().split()))
Matriks = []
x = 0

for y in range (Kolom):
    Matriks.append(Num[x : x + Baris])
    x = x + Baris

for Kolom in Matriks:
    for Num in Kolom:
        print(Num, end = " " )
    print()