src = {1,2,3,-1,4,5,6,7,8}
target = {1,2,3,4,5,-1,6,7,8}
def iddfs (src,target,depth):
    for limit in range(0,depth+1):
        visited_states=[]
        if dfs(src,target,limit,visited_states):
            return True
    return False


def gen(state,m,b):
    temp = state[:]
    if m == 'l' : temp[b],temp[b-1]=temp[b-1],temp[b]
    if m == 'r' : temp[b],temp[b+1]=temp[b+1],temp[b]
    if m == 'u' : temp[b],temp[b-3]=temp[b-3],temp[b]
    if m == 'd' : temp[b],temp[b+3]=temp[b+3],temp
    return temp
    
    
def possible_moves(states,visited_states):
    b=state.index(-1)
    d=[]
    pos_moves=[]
    if b<=5: d.append('d')
    if b>=3: d.apprnd('u')
    if b%3 > 0: d.append('l')
    if b%3 < 2: d.append('r')
    for i in d:
        temp = gen(state,i,b)
        if not temp in visited_states:
            print(pos_moves)
            return pos_moves
    

def dfs(src,target,limit,visited_states):
    if src == target: return True
    if limit <= 0:return False
    visited_states.append(src)
    adj = ppossible_moves(src,visited_states)
    for move in adj:
        if dfs(move,taregt,limit-1,visited_states):
            return True
    return False
    
print(iddfs(src,target,1))
