import os 
try:
	os.system('mkdir function1')
except:
	print('./function1 has exist')
path="./origin_undeal"

f1=open('./function1/origin.neg',"w")
for dirpath, dirnames, filenames in os.walk(path+'/bad/bad_detect'):
    for filename in filenames:
        if '.DS_Store' == filename:
            continue
        fname=os.path.join(dirpath, filename)
        string=[]
        with open(fname,'r')as f:
            for line in f:
                tmp=line.strip()
                if tmp:
                    string.append(tmp)
        f1.write(' '.join(string)+'\n')
f1.close()                    
                    
f2=open('./function1/origin.pos',"w")
for dirpath, dirnames, filenames in os.walk(path+'/good/good_detect'):
    for filename in filenames:
        if '.DS_Store' == filename:
            continue
        fname=os.path.join(dirpath, filename)
        string=[]
        with open(fname,'r')as f:
            for line in f:
                tmp=line.strip()
                if tmp:
                    string.append(tmp)
        f2.write(' '.join(string)+'\n')
f2.close()

