# The Wallet

This is a simple C program along with Insert, Bubble short and Delete operation.

**Show Menu:**
<br><br>
![img_1](https://user-images.githubusercontent.com/18496091/112374617-8545cc00-8d0c-11eb-8a5c-ed99f4c494f2.PNG)

Here we are asking user what he would like to do?<br><br>To operate the program user have to press the option digit and 
enter to start the operation.
<br><br>

**The** _getInput()_ **function**
<br><br>
![img_2](https://user-images.githubusercontent.com/18496091/112374619-8676f900-8d0c-11eb-8778-f5ecfcd9e8dd.PNG)

If the user press "1", "Add to wallet" or the _getInput()_ function will be execute. If user already have stored elements
in the array this function will execute _insertData(int start, int limit)_ function with the parameter as length of the 
current array and current array + new limit, else if user is inserting the data for the first time start will be '0' and
limit will the number of elements he wants to put in. 

**The** _showWallet()_ **function**
<br><br>
![img_3](https://user-images.githubusercontent.com/18496091/112374621-870f8f80-8d0c-11eb-9278-d03d6d979d5a.PNG)

If the user press "2", "My Wallet" or the _showWallet()_ function will be execute. In this function all the 
elements of the array will be sorted accedingly using the bubble sort operation. After the elements are sorted it will
print the elements by given format.

**the** _spend()_ **function**
<br><br>
![img_4](https://user-images.githubusercontent.com/18496091/112374661-9393e800-8d0c-11eb-869e-c5f4fdc01734.PNG)

If user press "3", "Spend from wallet" or the _spend()_ function will be execute. In this function program will ask the
user which note he want to spend. After providing a valid input program will erase that element from the array.

**The** _insertData(int start, int limit)_ **function**
<br><br>
In this function program will ask the user to enter each notes value. It takes the input and stores into the 
_walletAry_ which is an integer type array. After storing the value successfully "isAryDefined" variable store as
 boolean value true, and the arySize variable will contain the length of the arrya and finally it will show the main menus.
 
 **The Exit**
 <br><br>
![img_5](https://user-images.githubusercontent.com/18496091/112374676-98589c00-8d0c-11eb-994d-f8061eccbae8.PNG)

If user wish to leave the program he have to press "4".

<br><br>
Project completed by -> **Md Shaki Ahmed, Md Mezbahul Kabir, Md Saif, Riaz Khan**

<br><br><br><br>
Also you can check this [link](https://docs.google.com/document/d/14yMjXaqnBzml-V5WVMRmThsbAlvFO4UXQY39rMaGPW8/edit?usp=sharing) for the Doc file.
