If_else_while tasks
<h3>Task 10<\>
file 100
<ul>
	<b>
		The first and last numbers are different<br>
		The first and last numbers should only occur once
	</b>
	<li>
		the numbers of each tens upto the when the two digits are the same i.e numbers before ... 00, 11, 22, 33 ,44 ... already exists so we have to skip them
	</li>
	<li>
		01, 02, 03, 04, 05 .... == 10, 20, 30, 40, 50<br>
		12, 13, 14, 15 ....== 21, 31, 41, 42<br>
		23, 24, 25, 26 ... == 32, 42, 52, 62<br>
		34, 35, 36, 37 ... == 43, 53, 63, 73<br>
		<p>All numbers before the point where the two digits are the same already exists
		<br>was able to apply this in the code with the for loop..<br>
		for num2 = num1 + 1<br>
		for that for statement if num1 == 0 ..then num2 will start form one
		if num1 == 1....then num2 will start from 2
		if num1 ==5 ..... num2 will start from 6
		and since num1 is first digit and num2 is the second digit ..
		<b>if num1 == 1 then the digits would start from 12<br>
		  if num1 == 2 then the digits would start form 23<br>
		  num1 ==3 .....................34<br>
		  num1 ==5.....................56<br>
	       
		</b>
		Hence our loops start after the point where the digits are the same i.e 33, 44, 55
		</p>
	</li>
</ul>
