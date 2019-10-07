import math
def getRightMostSetBit(n):
    return math.log2(n&-n)+1
    
def main():
    
    T=int(input())
    
    while(T>0):
        
        
        mn=[int(x) for x in input().strip().split()]
        m=mn[0]
        n=mn[1]
        
        print(math.floor(posOfRightMostDiffBit(m,n)))
        
        
        
        
        T-=1
    
    
if __name__=="__main__":
    main()


//code
def posOfRightMostDiffBit(m,n):
    
    pos=1;
    for i in range(0,32):
        if not((m^n)&(1<<i)):
            pos += 1;
        else:
            break;
    return pos;
