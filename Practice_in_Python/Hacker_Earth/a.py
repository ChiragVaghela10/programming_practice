t=int(input())

while t:
    s = input()
    ans = []
    cp = 0
    for i in s:
        tp = ord(i) - 97
        o_m = ord('m') - 97
        o_n = ord('n') - 97
        o_a = ord('a') - 97
        o_z = ord('z') - 97
        # print('>>>>>>.', chr(cp+97) ,chr(tp+97), i)
        if ((cp >= o_a and cp <= o_m) and (tp >= o_a and tp <= o_m)) or ((cp >= o_n and cp <= o_z) and (tp >= o_n and tp <= o_z)) or (cp == tp):
            print(tp - cp, end=' ')
        elif (cp >= o_a and cp <= o_m) and (tp >= o_n and tp <= o_z):
            cl = tp - cp
            ac = (26 - tp) + cp
            print(cl if cl == ac else cl if cl < ac else -ac, end=' ')
        elif (cp >= o_n and cp <= o_z) and (tp >= o_a and tp <= o_m):
            cl = (26 - cp) + tp
            ac = cp - tp
            print(cl if cl == ac else cl if cl < ac else -ac, end=' ')
        cp = tp
    # print(ans)
    t -= 1


