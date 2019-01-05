#encoding=utf-8
import operator
import os
import os.path
def GetOneFeature(filename,fundict):
    f1=open(filename)
    context=f1.readlines()
    f1.close()
    count1=0
    grams={}
    while(count1+4<len(context)):
        apia=fundict[context[count1][:-1]]
        apia_s=''
        if(apia<10):
            apia_s='00'+str(apia)
        elif(apia<100):
            apia_s='0'+str(apia)
        else:
            apia_s=str(apia)

        apib=fundict[context[count1+1][:-1]]
        apib_s=''
        if(apib<10):
            apib_s='00'+str(apib)
        elif(apib<100):
            apib_s='0'+str(apib)
        else:
            apib_s=str(apib)

        apic=fundict[context[count1+2][:-1]]
        apic_s=''
        if(apic<10):
            apic_s='00'+str(apic)
        elif(apic<100):
            apic_s='0'+str(apic)
        else:
            apic_s=str(apic)
        try:
            apid=fundict[context[count1+3][:-1]]
        except:
            print(context[count1+3])
            print(1)
        apid_s=''
        if(apid<10):
            apid_s='00'+str(apid)
        elif(apid<100):
            apid_s='0'+str(apid)
        else:
            apid_s=str(apid)
        gram=apia_s+apib_s+apic_s+apid_s
        if(gram in grams):
            grams[gram]=grams[gram]+1
        else:
            grams[gram]=1
        count1=count1+1
    sorted_x = sorted(grams.items(), key=lambda grams : grams[1],reverse=True)
    feature=[]
    count2=0
    for i in sorted_x:
        feature.append(i)
        count2=count2+1
        if(count2>=40):
            break
    return feature

if __name__ == '__main__':
    fundict={}
    count=0
    f=open('ssdtfun_new')
    for i in f.readlines():
        fundict[i[:-1]]=count
        count=count+1
    f.close()

    # Get badfeatures
    badfeatures=[]
    rootdir = "D:\\Study\\范老师项目\\dataset\\badoutput"
    for parent,dirnames,filenames in os.walk(rootdir):    #三个参数：分别返回1.父目录 2.所有文件夹名字（不含路径） 3.所有文件名字
        for filename in  filenames:
            badfeatures.append(GetOneFeature(rootdir+'\\'+filename,fundict))
            print(filename+' Finished!')

    # Get goodfeatures
    goodfeatures=[]
    rootdir = "D:\\Study\\范老师项目\\dataset\\goodoutput"
    for parent,dirnames,filenames in os.walk(rootdir):    #三个参数：分别返回1.父目录 2.所有文件夹名字（不含路径） 3.所有文件名字
        for filename in  filenames:
            goodfeatures.append(GetOneFeature(rootdir+'\\'+filename,fundict))
            print(filename+' Finished!')

    # Get badfeatures' common features and let it as the judge features
    commonfeature={}
    for i in badfeatures:
        for j in i:
            if(j[0] in commonfeature):
                commonfeature[j[0]]=commonfeature[j[0]]+1
            else:
                commonfeature[j[0]]=1
    sorted_x = sorted(commonfeature.items(), key=lambda commonfeature : commonfeature[1],reverse=True)
    commonfeatureshortfeature=[]
    count2=0
    for i in sorted_x:
        commonfeatureshortfeature.append(i)
        count2=count2+1
        if(count2>=40):
            break

    # Transform goodfeatures to goodfeaturesdict
    goodfeaturesdict={}
    count1=0
    for i in goodfeatures:
        singlegoodfeaturesdict={}
        for j in i:
            singlegoodfeaturesdict[j[0]]=j[1]
        goodfeaturesdict[count1]=singlegoodfeaturesdict
        count1=count1+1

    # Transform badfeatures to badfeaturesdict
    badfeaturesdict={}
    count2=0
    for i in badfeatures:
        singlebadfeaturesdict={}
        for j in i:
            singlebadfeaturesdict[j[0]]=j[1]
        badfeaturesdict[count2]=singlebadfeaturesdict
        count2=count2+1

    goodtrainset=''
    for i in goodfeaturesdict:
        goodsingletrainset='+1'
        count3=1
        for j in commonfeatureshortfeature:
            if(j[0] in goodfeaturesdict[i]):
                goodsingletrainset=goodsingletrainset+' '+str(count3)+':'+str(goodfeaturesdict[i][j[0]])
            else:
                goodsingletrainset=goodsingletrainset+' '+str(count3)+':'+'0'
            count3=count3+1
        goodtrainset=goodtrainset+goodsingletrainset+'\n'
    badtrainset=''
    for i in badfeaturesdict:
        badsingletrainset='-1'
        count3=1
        for j in commonfeatureshortfeature:
            if(j[0] in badfeaturesdict[i]):
                badsingletrainset=badsingletrainset+' '+str(count3)+':'+str(badfeaturesdict[i][j[0]])
            else:
                badsingletrainset=badsingletrainset+' '+str(count3)+':'+'0'
            count3=count3+1
        badtrainset=badtrainset+badsingletrainset+'\n'
    f1=open('goodtrainset.train','w')
    f1.write(goodtrainset)
    f1.close()
    f2=open('badtrainset.train','w')
    f2.write(badtrainset)
    f2.close()
    print('Goodtrainset.train Finished!')
    print('Badtrainset.train Finished!')