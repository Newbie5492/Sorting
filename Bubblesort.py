def bubbleSort(arr):
    
    for i in range(len(arr) - 1):
        x = False
        for j in range(0, len(arr) - i - 1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                x = True
            
        if(x == False):
            return
            


array = [5, 1, 3, 9, 4]
bubbleSort(array)
for i in range(len(array)):
    print(array[i], end=" ")
