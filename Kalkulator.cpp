<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Calculator</title>
</head>
<body>
<form name="frm" style="padding: 20px; border: 1px solid black; width: 200px;">
<input name="result">
<br />
<input type="button" name="1" value="1" onClick="run(1)">
<input type="button" name="2" value="2" onClick="run(2)">
<input type="button" name="3" value="3" onClick="run(3)"><br />
<input type="button" name="4" value="4" onClick="run(4)">
<input type="button" name="5" value="5" onClick="run(5)">
<input type="button" name="6" value="6" onClick="run(6)"><br />
<input type="button" name="7" value="7" onClick="run(7)">
<input type="button" name="8" value="8" onClick="run(8)">
<input type="button" name="9" value="9" onClick="run(9)"><br />
<input type="button" name="plus" value="+" onClick="runplus()">
<input type="button" name="mult" value="*" onClick="runmult()">
<input type="button" name="div" value="/" onClick="rundiv()">
<input type="button" style="margin-left: 60px;" name="calc" value="=" onClick="evalu()">
</form>
<script type="text/javascript">
function run(num)
{
document.frm.result.value +=num;
}
function runplus()
{
document.frm.result.value += "+";
}
function runmult()
{
document.frm.result.value += "*";
}
function rundiv()
{
document.frm.result.value += "/";
}
function evalu()
{
var evalo = eval(document.frm.result.value)
document.frm.result.value = evalo;
}
</script>
</body>
</html>﻿
