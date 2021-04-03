#   arr[]  ---> Input Array
#   n      ---> Size of input array
#   r      ---> Size of a combination to be printed
#   index  ---> Current index in data[]
#   data[] ---> Temporary array to store current combination
#   i      ---> index of current element in arr[]

def combinationUtil(arr, n, r, index, data, i):
    # Current cobination is ready, print it
    if index == r:
        for j in range(r):
            print(data[j], end=" ")
        print("\n")
        return

    # When no more elements are there to put in data[]
    if (i >= n):
        return

    data[index] = arr[i]
    combinationUtil(arr, n, r, index + 1, data, i + 1)
    combinationUtil(arr, n, r, index, data, i + 1)

 
arr = [ 1, 2, 3, 4, 5 ]
r = 3
data = [0] * r      # temporary array to show the data
n = len(arr)

combinationUtil(arr, n, r, 0, data, 0)

