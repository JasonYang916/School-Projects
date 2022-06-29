import matplotlib.pyplot as plt
import numpy as np
import numpy.linalg as la

def setzero(N):
    size = len(N)
    for i in range(size):
            for j in range(size):
                if abs(N[i][j])<=0.000000001:
                    N[i][j] = 0

def QRalgorithm(A, err):
    size = len(A)
    currErr = 1000
    iterations = 0
    
    while currErr > err and iterations < 999:
        iterations += 1
        
        #Q & R Calculation
        Ak = A
        ePrev = np.diag(Ak)
        Pprev = np.identity(size)
        for i in range(size - 1):
            P = np.identity(size)
            P[i][i] = Ak[i][i]/(np.sqrt(Ak[i][i]**2+Ak[i+1][i]**2))
            P[i+1][i+1] = P[i][i]
            P[i+1][i] = -Ak[i+1][i]/(np.sqrt(Ak[i][i]**2+Ak[i+1][i]**2))
            P[i][i+1] = -P[i+1][i]
            Q = np.matmul(P, Pprev)
            Pprev = Q
            Ak = np.matmul(P, Ak)
        Q = np.transpose(Q)
        R = Ak
        
        #A Calculation
        A = np.matmul(R, Q)
        
        #Error Calculation
        e = np.diag(A)
        currErr = np.linalg.norm(ePrev-e, np.inf)
    
    setzero(A)
    print("A"+str(iterations+1))
    print(A)
    return list(e)

def SVDcompression(A, k):
    U,D,Vt = la.svd(A,full_matrices=True)
    if k>len(D):
        print('k is too large')
        return
    Uk = U[:,:k]
    Sk = np.diag(D[:k])
    Vtk = Vt[:k,]
    US = np.dot(Uk,Sk)
    return np.dot(US,Vtk)

np.set_printoptions(precision=3)
np.set_printoptions(suppress=True)

M = np.identity(10)
for i in range(len(M)):
    M[i][i] = 10-i
    if i > 0:
        M[i-1][i] = 1
    if i < 9:
        M[i+1][i] = 1
print(M)

QRalgorithm(M, 0.00001)

sloth_img = plt.imread('Image Processing\sloth_gray.png') 
sloth_img_array = sloth_img[:,:,0] 
# These two lines read 'sloth_gray.png' and record it as an array.

new_img = np.ndarray((480,360,3),dtype=float)
for i in range(3):
    new_img[:,:,i] = sloth_img_array
# This part makes a multi-dimensional array, which can be understood as an image.
    
plt.imshow(new_img)
plt.show()

A = np.array([[1,0,1],[0,1,0],[0,1,1],[0,1,0],[1,1,0]])
U, D, Vt = la.svd(A, full_matrices = True)
print("U=", U)
print("D=", D)
print("V^t=", Vt)

dog_img = plt.imread('Image Processing\dog_gray.jpg') 
dog_img_array = dog_img[:,:,0] 

klist = [1, 5, 10, 50]
for i in klist:
    M = SVDcompression(dog_img_array,i)
    new_img = np.ndarray((300,332,3),dtype=float)
    for j in range(3):
        new_img[:,:,j] = M
    plt.imshow(new_img)
    print("k =", i)
    plt.show()