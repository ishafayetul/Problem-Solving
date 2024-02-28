import array as arr

nums1=arr.array("i",[5,0])
nums2=arr.array("i",[1])

ln=int(len(nums1)/2)
for i in range(ln,len(nums1)):
    nums1[i]=nums2[i-ln]

for i in range(len(nums1)):
    count=0
    for j in range(len(nums1)-1):
        if(nums1[j]>nums1[j+1]):
            temp=nums1[j]
            nums1[j]=nums1[j+1]
            nums1[j+1]=temp
            count=count+1
    if count==0:
        break
        
print(nums1)
