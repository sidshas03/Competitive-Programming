THICKNESS = int(input()) 
c = 'H'

for i in range(THICKNESS):
    print((c*i).rjust(THICKNESS-1)+c+(c*i).ljust(THICKNESS-1))

for i in range(THICKNESS+1):
    print((c*THICKNESS).center(THICKNESS*2)+(c*THICKNESS).center(THICKNESS*6))
    
for i in range((THICKNESS+1)//2):
    print((c*THICKNESS*5).center(THICKNESS*6))    

for i in range(THICKNESS+1):
    print((c*THICKNESS).center(THICKNESS*2)+(c*THICKNESS).center(THICKNESS*6))    

for i in range(THICKNESS):
    print(((c*(THICKNESS-i-1)).rjust(THICKNESS)+c+(c*(THICKNESS-i-1)).ljust(THICKNESS)).rjust(THICKNESS*6))
