bar_razor = list(input())
answer = 0
st = []

for i in range(len(bar_razor)):
    if bar_razor[i] == '(':
        st.append('(')

    else:
        if bar_razor[i-1] == '(': 
            st.pop()
            answer += len(st)

        else:
            st.pop() 
            answer += 1 

print(answer)