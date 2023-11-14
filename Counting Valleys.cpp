//Time Complexity: O(n) -> Space Complexity: O(1)

int countingValleys(int steps, string path) {
//read each character of the string path 
//if the character is U -> step+1
//if the character is D -> step-1
//when the step count is equal to zero, the hiker has returned to sealevel and has crossed a valley -> increment valley by 1

//UDDDUDUU
// U, step=1 valley=0
// D   step=0 valley=0
// D    step=-1 valley=0
// D    step=-2 valley=0
// U    step=-1 valley=0
//D    step=-2 valley=0
//U    step=-1 valley=0
//U    step=0 valley=1

int step = 0;
int valley = 0;
for(int i = 0; i < steps; i++){
    if (path[i] == 'U'){
        step+=1;
        
        if(step == 0){
        valley++;
        }
    }
    
    else {
        step-=1;
    }
}
    return valley;
}
