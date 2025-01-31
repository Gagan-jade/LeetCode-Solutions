bool canJump(int* nums, int numsSize) {
    int max=0;
    
    for(int i=0;i<numsSize;i++){
        if(i>max)
            return false;
        if(max<nums[i]+i)
            max=nums[i]+i;
    }
    return true;
}
