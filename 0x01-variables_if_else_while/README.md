If_else_while tasks
<h2>Task 10</h2>
<html>
	<b>
		The first and last numbers are different<br>
		The first and last numbers should only occur once
	</b>
	<p>
		the numbers of each tens upto the when the two digits are the same i.e numbers before ... 00, 11, 22, 33 ,44 ... already exists so we have to skip them
		<br>
		e.g<br>
		01, 02, 03, 04, 05 .... == 10, 20, 30, 40, 50	<br>
		12, 13, 14, 15 ....== 21, 31, 41, 42	<br>
		23, 24, 25, 26 ... == 32, 42, 52, 62	<br>
		34, 35, 36, 37 ... == 43, 53, 63, 73	<br>
	</p>
	<p>
		All numbers before the point where the two digits are the same already exists	<br>
		was able to apply this in the code with the for loop..	<br>
		for num2 = num1 + 1	<br>
		for that for statement if num1 == 0 ..then num2 will start form one <br>
		if num1 == 1....then num2 will start from 2 <br>
		if num1 ==5 ..... num2 will start from 6 
	</p>
	<p>
		and since num1 is first digit and num2 is the second digit ..	<br>
			if num1 == 1 then the digits would start from 12	<br>
		  	if num1 == 2 then the digits would start form 23	<br>
		  	if num1 == 3 then the digits would start form 34	<br>
			if num1 == 4 then the digits would start form 45	<br>
		Hence our loops start after the point where the digits are the same i.e 33, 44, 55
	</p>
</html>
