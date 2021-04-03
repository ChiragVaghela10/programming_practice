#Input
#
#First line of the each input will contain two space seperated integers 'n' and 'k' denoting the size of the array and maximum size #of the subset, respectively.
#
#Next line will contain 'n' spaced integers denoting elements of the array.
#
#Output
#
#Output will consists of a single integer denoting the number of unique integers that can be formed by taking Bitwise OR  of every #subset of size less than or equal to 'k'.
#
#SAMPLE INPUT 
#3 2
#1 2 4
#SAMPLE OUTPUT 
#6
#
#Explanation
#Array is having 3 integers: 1, 2 and 4.
#Subsets having size less than or equal to 2 is {{1}, {2}, {4}, {1,2}, {2,4}, {1,4}}.
#Bitwise OR of the subsets thus obtained is {1,2,4,3,5,6}.
#Thus total unique intgers formed by taking bitwise OR of all subsets of size less than or equal to 2 is 6.

arr=list(map(int, input().split()))
n=arr[0]
k=arr[1]

numbers=list(map(int, input().split()))

sets = [set([])]
for n in numbers:
    sets.extend([s | {n} for s in sets])

superset = []
for i in sets:
    if len(i) <= k:
        superset.append(list(i))
superset.remove([])

ans = []
for i in superset:
    # print('>>>>(i):\n', i)
    t=0
    for j in i:
        t |= j
    print('t:', t)
    ans.append(t)
   # print('>>>>ans', ans)

print(len(set(ans)))






























