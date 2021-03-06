# Harsh and Akshara are playing the Game of Strings. This game is a simple one and is played as a team. Both the players of a team # will be given a string respectively. At the end of this game, every team is required find out the length of the longest string S # such that the strings given to each of the team members is a subsequence of S and S contains no vowels. Help Harsh and Akshara in # finding out the required length.
#
# Input: 
# Input consists of a single line containing two space separated strings.
#
# Output: 
# The length of the longest string that satisfy the given conditions.
#
# Constraints:
# 1 ≤ length of string ≤ 5000
#
# Sample Input:                           Sample Output:
# singh king                              2
#
# Explanation:
# The required string is "ng".
#
##############################################################################################################################

s1, s2 = input().split()
sub = s1[:] if len(s1) < len(s2) else s2[:]
sup = s1[:] if len(s1) > len(s2) else s2[:]

l = 0
for j in range(len(sub)+1):
    for i in range(j+1,len(sub)+1):
        temp = sub[j:i]
        if len(temp) > l and (temp in sup) and not any(c in temp for c in 'aeiou'):
            ans = temp
            l = len(temp)

print(l, ans)


