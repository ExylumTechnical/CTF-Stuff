#!/bin/python3

import os

messageFile=open("messages.txt","r")
messageline="begin";
linecount=0;
while(messageline):
	# print out the current line number in the log file we are at
	cmd=" echo " + str(linecount) + " >> message.log"
	os.system(cmd)
	# get the first 19 lines of the message file
	tempmessage=open("temp.txt","w")
	for i in range(19):
		messageline=messageFile.readline();
		linecount=linecount+1;
		tempmessage.write(messageline)
	tempmessage.close();
	os.system("gpg --verify temp.txt 2>> message.log")
	os.system("gpg --verify temp.txt 2>> temp.log")
	tempLog=open("temp.log","r")
	temp=tempLog.readline();
	while(temp):
		if("Good" in temp):# if the signature is good then it prints the message to the screen and signature to the screen
			os.system("cat temp.txt")
		temp=tempLog.readline();
	tempLog.close();
	os.system("rm temp.txt; rm temp.log")
