import os
if __name__=='__main__':
	if os.path.isdir('./data'):
		fs=os.listdir('./data')
		if len(fs) == 0:
			os.system('python3 data_deal.py')
			print('[ok] data_deal.py')
			os.system('python3 train.py')
		else:
			print('[ok] load data')
			os.system('python3 train.py')

	else:
		os.system('python3 data_deal.py')
		print('[ok] data_deal.py')
		os.system('python3 train.py')