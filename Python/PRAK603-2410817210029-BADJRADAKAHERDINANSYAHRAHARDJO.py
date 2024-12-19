d1,d2=map(int,input().split())
if d1 != d2:
    print("Jumlah tidak sama")
else :
    bil1=list(map(int,input().split()))
    bil2=list(map(int,input().split()))
    hasilkali=[bil1[i]*bil2[i] for i in range(d1)]

    print(" ".join(map(str, hasilkali)))