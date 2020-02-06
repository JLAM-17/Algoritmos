letrasProposicionales = ['p', 'q', 'r', 's']
conectivosBinarios = ['O', 'Y', '>' , '<->']
negacion = ['-']

class Tree(object):
    def __init__(self,l,iz,der):
        self.left = iz
        self.right = der
        self.label = l
    
r = Tree('r',None,None)
nr = Tree('-',None,r)
q = Tree('q',None,None)
nq = Tree('-',None,q)
s = Tree('s',None,None)
ns = Tree('-',None,s)
p = Tree('p',None,None)
np = nq = Tree('-',None,p)


I = {'p':0, 'q':1, 'r':1, 's':0}
#print(I['q'])
def V1(f):
    if f.right == None:
        return I[f.label]
    elif f.label in negacion:
        return 1-V1(f.right)
    elif f.label == 'Y':
        return V1(f.left)*V1(f.right)
    elif f.label == 'O':
        return max(V1(f.left),V1(f.right))
    elif f.label == '>':
        return max(1-V1(f.left),V1(f.right))
    elif f.label == '<->':
        return 1 - (V1(f.left)-V1(f.right))**2


trb = Tree('>',Tree('O',nr,np ),Tree('Y',p,nq))
trc = Tree('O',ns,q)
trd = Tree('>',Tree('Y',nr,np),Tree('O',ns,q))
print(V1(trd))
    