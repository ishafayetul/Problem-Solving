import array

a=array.array("i",[2,4,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50])
                                                                   
def binarySearch(Array,value):
    l=0
    m=len(Array)
    while True:
        i=int((l+m)/2)
        #print("L= ",l," i= ",i," M= ",m)
        if(value<Array[i]):
            m=i
        if(value>Array[i]):
            l=i
        if(value==Array[i]):
            print(value," is at ",i+1)
            return i
        if(l==i==m-1):
            print("Not found")
            return -1

binarySearch(a,50)