# Harvard CS50 2016/2017x Weekly Overview 

[Link to edX](https://www.edx.org/course/introduction-computer-science-harvardx-cs50x#!)

## Week 0: Scratch
[![Week 0 Project](https://s27.postimg.org/96ui8sik3/pset0.png)](https://scratch.mit.edu/projects/137526206/#fullscreen)

Link to play the game that I created : 
```javascript
https://scratch.mit.edu/projects/137526206/#fullscreen
```

## Week 1: C
water.c : a program to convert shower's length (in minutes) to equivalent water bottles
```javascript
~/workspace/pset1/ (master) $ ./water
minutes: 10
bottles: 120
```

mario.c : a program that recreates half-pyramid using hashes (#) for blocks.
```javascript
~/workspace/pset1/ (master) $ ./mario
height: 8
       ##
      ###
     ####
    #####
   ######
  #######
 ########
#########
```
greedy.c : a program to count minimum number of coins needed for a change using greedy algorithm
```javascript
~/workspace/pset1/ (master) $ ./mario
Height: -2
Height: -1
Height: foo
Retry: bar
Retry: 1
##
```

## Week 2: Crypto
caesar.c : a program to caesar cipher a text
```javascript
~/workspace/pset2/ (master) $ ./caesar 13
Be sure to drink your Ovaltine!
Or fher gb qevax lbhe Binygvar!
```

vigenere.c : a program to vigenere cipher a text
```javascript
~/workspace/pset2/ (master) $ ./vigenere bacon
Meet me at the park at eleven am
Negh zf av huf pcfx bt gzrwep oz
```

## Week 3: Game of Fifteen
fifteen.c : a game of fifteen games
```javascript
~/workspace/pset3/ (master) $ ./fifteen 4

15 14 13 12

11 10  9  8

 7  6  5  4

 3  1  2  _
 
Tile to move:
```

## Week 4: Forensics
whodunit.c : a program that intelligently analyze an image (clue.bmp) and turn it to a better image (verdict.bmp)
```javascript
~/workspace/pset4/ (master) $ ./whodunit clue.bmp verdict.bmp
```
Before running whodunit.c

![Image of clue](https://s30.postimg.org/gtxuk8y69/download.png)

After running whodunit.c

![Image of verdict](https://s30.postimg.org/p9eotmns1/download_1.png)

resize.c : a program that can enlarge an image to n size
```javascript
~/workspace/pset4/ (master) $ ./resize 4 small.bmp large.bmp
```

Before and after running resize.c

![Image of small](https://s24.postimg.org/u4la5vqyt/small.png)
![Image of large](https://s30.postimg.org/zevkxb49d/large.png)

recover.c : a program that recovers .jpeg images from card.raw
```javascript
~/workspace/pset4/ (master) $ ./recover
```
![Image of before and after](https://s29.postimg.org/whkiz0dlj/test.png)

## Week 5 and 6: Spellchecker
```javascript
~/workspace/pset5/ (master) $ ./speller dictionaries/large endi.txt

MISSPELLED WORDS

nme
veri
persan
yo
bro
USConstitution
http
usconstitution
const
html

WORDS MISSPELLED:     10
WORDS IN DICTIONARY:  143091
WORDS IN TEXT:        722
TIME IN load:         0.10
TIME IN check:        0.00
TIME IN size:         0.00
TIME IN unload:       0.06
TIME IN TOTAL:        0.16
```


## Week 7 and 8: Python
Requirements & Dependencies:
```javascript
cd ~/workspace/pset6/sentiments/
pip3 install --user -r requirements.txt
```

Convert some of week 1 & 2 .c programs to .py
```javascript
~/workspace/pset6/ (master) $ python mario.py
Height: 5
    ##
   ###
  ####
 #####
######
```

```javascript
~/workspace/pset6/ (master) $ python greedy.py
O hai! How much change is owed?
0.41
4
```

```javascript
~/workspace/pset6/ (master) $ python caesar.py 13
HELLO
URYYB
```

```javascript
~/workspace/pset6/ (master) $ python vigenere.py bacon
Meet me at the park at eleven am
Negh zf av huf pcfx bt gzrwep oz
```

Sentiments

smile.py : a program that categorizes a word as positive or negative

[![smile.png](https://s28.postimg.org/jzsjsjkod/smile.png)](https://postimg.org/image/907cgxu95/)

tweets.py categorizes a user’s recent 100 tweets as positive or negative (uses Twitter API)

[![tweets.png](https://s23.postimg.org/xjn5x6qm3/tweets.png)](https://postimg.org/image/4u0a0jmlz/)

Implement a website that generates a pie chart categorizing a user’s tweets
[![sentiments.png](https://s23.postimg.org/ortjkn7vf/sentiments.png)](https://postimg.org/image/o2ar8a7br/)

Usage: 
```javascript
~/workspace/pset6/sentiments/ (master) $ export API_KEY= <insert your API_KEY from Twitter here>
~/workspace/pset6/sentiments/ (master) $ export API_SECRET= <insert your API_SECRET from Twitter here>
~/workspace/pset6/sentiments/ (master) $ export FLASK_APP=application.py
~/workspace/pset6/sentiments/ (master) $ export FLASK_DEBUG=1
~/workspace/pset6/sentiments/ (master) $ flask run
```
## Week 9: Python & SQL

C$50 Finance
Implement a website via which users can "buy" and "sell" stocks, a la the below.

[![login.png](https://s29.postimg.org/9db3is4tz/login.png)](https://postimg.org/image/kpnp0kdir/)

[![history.png](https://s28.postimg.org/8lwbj1hf1/history.png)](https://postimg.org/image/6hbyhyfs9/)

[![register.png](https://s29.postimg.org/y3lizvo7r/register.png)](https://postimg.org/image/9abyz8577/)

Requirements & Dependencies:
```javascript
cd ~/workspace/pset7/finance/
pip3 install --user -r requirements.txt
```
Usage: 
```javascript
~/workspace/pset7/finance/ (master) $ flask run
~/workspace/pset7/finance/ (master) $ phpliteadmin finance.db
```
## Week 10 & 11: Javascript
Implement a website that lets users search for articles atop a map (using Google's API)

[![mashup.png](https://s29.postimg.org/nejvi69pz/mashup.png)](https://postimg.org/image/ewafdu377/)

Requirements & Dependencies:
```javascript
cd ~/workspace/pse8/mashup/
pip3 install --user -r requirements.txt
```
Usage: 
```javascript
~/workspace/pset8/mashup/ (master) $ export API_KEY=<API_KEY from Google Maps API>
~/workspace/pset8/mashup/ (master) $ flask run
~/workspace/pset8/mashup/ (master) $ phpliteadmin mashup.db
```


## Week 12-end: Final Project
In progress

## Disclaimer : I am aware that my materials might not be free of errors. I intend to correct them as I encounter it. I am still learning :)


