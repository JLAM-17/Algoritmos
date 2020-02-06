letrasProposicionales = ['p', 'q', 'r', 's']
conectivosBinarios = ['O', 'Y', '>' , '<->']
negacion = ['-']

class Tree(object):
    def __init__(self,l,iz,der):
        self.left = iz
        self.right = der
        self.label = l
    
A0 = Tree('r',None,None)
A1 = Tree('q',None,None)
A2 = Tree('>',A1,A0)
A3 = Tree('p',None,None)
A4 = Tree('Y',A3,A2)

def Inorder(A):
    if A.right == None:
        return A.label
    elif A.label in negacion:
        return "¬" + Inorder(A.right)
    elif A.label in conectivosBinarios:
        return "(" + Inorder(A.left) + A.label + Inorder(A.right) + ")"

#print(Inorder(A4))
#f = Tree('O', Tree('>', Tree('Y', Tree('p', None, None), Tree('-', None, Tree('s', None, None))),Tree('>', Tree('Y', Tree('p', None, None), Tree('-', None, Tree('s', None, None))),Tree('O', Tree('-', None, Tree('q', None, None)), Tree('p', None, None)))
def Num_Conec(A):
    if A.right == None:
        return 0
    elif A.label in negacion:
        return 1 + Num_Conec(A.right)
    elif A.label in conectivosBinarios:
        return 1 + Num_Conec(A.right) + Num_Conec(A.left)

#print (Num_Conec(f))

def Num_Atoms(A):
    
    if A.right == None:
        return 1
    elif A.label == "-":
        return Num_Atoms(A.right)
    else:
        return Num_Atoms(A.left) + Num_Atoms(A.right)
j = Tree('O', Tree('>', Tree('Y', Tree('p', None, None), Tree('-', None, Tree('s', None, None))),Tree('Y', Tree('p', None, None), Tree('-', None, Tree('r', None, None)))),Tree('O', Tree('-', None, Tree('q', None, None)), Tree('p', None, None)))
print(Num_Atoms(j))
    