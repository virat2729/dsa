def takeinput(sport):
    player=int(input(f"Enter number of players in {sport}:"))
    array=['name']*player
    for i in range(0,player):
        array[i]=input("Enter name of players :")
    return array 

cricket=takeinput("cricket")
badminton=takeinput("badminton")
football=takeinput("football")

print("playing cricket",cricket)
print("playing badminton",badminton)
print("playing football ",football)

#1.cricket and badminton 
CAB=[]
for players in cricket:
    if players in badminton:
        CAB.append(players)
print(" Players playing cricket and badminton are :",CAB)

#2.cricket or badminton not both 
COBNB=[]
for players in cricket:
    if players not in badminton:
        COBNB.append(players)

for players in badminton:
    if players not in cricket:
        COBNB.append(players)
print("players playing either cricket or badminton but not both are :",COBNB)

#3.nither cricket nor badminton 
NCNB=[]
for players in football:
    if players not in cricket:
        if players not in badminton :
            NCNB.append(players)
print("player who naither play cricket or basketball are :",NCNB)

#4.cricket and football but not badminton :
CAFNB=[]
for players in cricket:
    if players in football:
        if players not in badminton:
            CAFNB.append(players)
print("players playing cricket and football but not badminton :",CAFNB)
            





























