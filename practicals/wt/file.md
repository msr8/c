| S.No. | Question | Page |
| ----- | -------- | ---- |
| 1     | Make the five different web pages | 1 |
| 2     | Create an unordered list nested inside ordered list | 7 |
| 3     | Design a table with row span and column span and make use of attributes colspan, rowspan, width, height, cellpadding, cellspacing  etc | 9 |
| 4     | Design following frames | 10 |
| 5     | Create a student registration form for admission in college | 14 |
| 6     | Create a webpage and show the usage of inline, internal, and external stylesheet | 16 |
| 7     | Create a webpage containing a background image and apply all the background styling attributes | 18 |
| 8     | Create a webpage showing the usage of font styling attributes | 20 |
| 9     | Create a web page and apply all text styling attributes using ID and class selector | 24 |
| 10    | Create a webpage with three equal columns | 26 |
| 11    | Create a webpage containing bootstrap table | 27 |
| 12    | Create a webpage containing various types of images | 29 |
| 13    | Create a webpage containing various types of buttons | 30 |
| 14    | Create a webpage containing various typography classes | 31 |
| 15    | Write a program to show the usage of alert box and confirm box | 35 |
| 16    | Write a program to show the usage of all the date, math and string object functions | 36 |
| 17    | WAP to display the bookstore details in XML with CSS and internal DTD | 41 |
| 18    |  WAP to format the Teacher details in XML with CSS using external DTD | 43 |

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q1) Make the five different web pages:
1. Formatting styles and headings: Include bold, italics, underline, strike, subscript, superscript and all six types of headings.
2. Font styles and image tag
3. Marquee: Move text, image and hyperlink
4. Other tags: br, hr, pre, p

Include following specifications:

- In all these web pages only mention about use, attributes apply them
- Insert a background image on home page
- Make all the topics as hyperlinks and go to some other page for description
- Insert a marquee showing HTML Tutorial as moving text.
- Use different font style for different topics.
- On every page, make a hyperlink for going back to home page and internal link also

<br><br>

**Structure**
```shell
.
├── home.html
├── i.html
├── ii.html
├── iii.html
└── iv.html
```

<br><br>

`./home.html`
```html
<style>

    html { 
        background: url('https://raw.githubusercontent.com/msr8/wallpapers/main/web%201490x725.png'); 
        background-size: cover;
    }
    body {
        background: transparent;
    }

</style>


<body>

<marquee><h1>HTML Tutorial</h1></marquee>
<a href="i.html">1) Formatting styles and headings</a><br>
<a href="ii.html">2) Font styles and image tags</a><br>
<a href="iii.html">3) Marquee</a><br>
<a href="iv.html">4) Other tags</a><br>

</body>


```

`./i.html`
```html
<body>

<h1>This is heading 1</h1>
<h2>This is heading 2</h2>
<h3>This is heading 3</h3>
<h4>This is heading 4</h4>
<h5>This is heading 5</h5>
<h6>This is heading 6</h6>

<br>This is normal text
<br><b>This is bold text</b>
<br><i>This is italic text</i>
<br><u>This is underlined text</u>
<br><del>This is strikethrough text</del>
<br><sub>This is subscript</sub>
<br><sup>This is superscript</sup>

<br><br><br><br><br><br>
<a href="home.html">Home</a>


</body>
```

`./ii.html`
```html
<style>
.i { font-style: italic; }
.o { font-style: oblique; }
</style>



<body>


<p>This is normal text</p>
<p class="i">This is italic text</p>
<p class="o">This is oblique text</p>

<img src="https://tinemettejespersen.files.wordpress.com/2012/03/ffftextthisisanimage.gif">

<br><br><br><br><br><br>
<a href="home.html">Home</a>
    
    
</body>
```

`./iii.html`
```html
<body>


<marquee>
    This is a marquee tag

    <br><img src="https://tinemettejespersen.files.wordpress.com/2012/03/ffftextthisisanimage.gif">

    <br><br><br><br><br><br>
    <a href="home.html">Home</a>
</marquee>


</body>
```

`./iv.html`
```html
<body>


<pre>This is a pre tag</pre>
<br>
<p>This is a paragraph tag</p>
<hr>

<br><br><br><br><br><br>
<a href="home.html">Home</a>


</body>
```

<br><br>

![Screenshot 2023-02-02 at 11.26.26 PM.png](:/acee9450bd7341d085143b2ebca43378)

![Screenshot 2023-02-03 at 12.28.38 AM.png](:/8569e2056f414d63bde1630cd7d5b380)

![Screenshot 2023-02-03 at 12.29.06 AM.png](:/a254e25a953f44329a9eb8206409971d)

![Screenshot 2023-02-03 at 12.29.50 AM.png](:/a3dd514de00748cb879ea969c5f0bd11)

![Screenshot 2023-02-03 at 12.31.58 AM.png](:/3b0119d8c80149d3bbf18896008af9da)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>


## Q2) Create an unordered list nested inside ordered list and apply the following:
- Insert an image of main item on top right corner of web page
- Display heading as a marquee
- Use different font styles and colors for different ordered list items
- Insert horizontal line after each ordered item

<br><br>

```html
<style>

    .red  {color: red;}
    .purp {color: purple;}
    .pink {color: pink;}
    .blue {color: blue;}

    .righ {text-align: right;}

</style>


<body>


<div class="righ">
    <img width="100" src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c3/Python-logo-notext.svg/1869px-Python-logo-notext.svg.png">
</div>

<marquee><h1>Programming Languages</h1></marquee>
<ol>
    <li class="red">Java</li><hr>
    <li class="purp">Python
        <ul>
            <li>Python 3.6</li>
            <li>Python 3.7</li>
            <li>Python 3.8</li>
            <li>Python 3.9</li>
            <li>Python 3.10</li>
            <li>Python 3.11</li>
        </ul>
    </li><hr>
    <li class="pink">Ruby</li><hr>
    <li class="blue">Go</li><hr>
</ol>


</body>
```

<br><br>

![Screenshot 2023-02-03 at 12.32.36 AM.png](:/487c0a64271b43d99df9b168e2e4a2a9)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>


## Q3) Design a table with row span and column span and make use of attributes colspan, rowspan, width, height, cellpadding, cellspacing, etc

<br><br>

```html
<table border="1" cellspacing="10" cellpadding="5">
    <tr>
        <th colspan="2" rowspan="2" width="200" height="50">Title</th>
        <th colspan="2" width="200">Category 1</th>
    </tr>
    <tr>
        <th width="100">Subcategory 1</th>
        <th width="100">Subcategory 2</th>
    </tr>
    <tr>
        <td rowspan="2" width="100">Item 1</td>
        <td width="100">Detail 1</td>
        <td width="100">Value 1</td>
        <td width="100">Value 2</td>
    </tr>
    <tr>
        <td width="100">Value 4</td>
        <td width="100">Detail 2</td>
        <td width="100">Value 3</td>
    </tr>
</table>
```

<br><br>

![Screenshot 2023-02-03 at 12.33.03 AM.png](:/1ade7198a25e46ac8f7a2fc918a42ecc)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>


## Q4) Design following frames:

![Screenshot 2023-02-02 at 11.48.15 PM.png](:/9afbcef1a4124c2b8b9dcb9e944bde73)

<br><br>

**Structure**
```shell
.
├── bottom/
│   ├── 1.html
│   ├── 2.html
│   └── 3.html
├── home.html
├── left.html
├── right.html
└── top/
    ├── 1.html
    ├── 2.html
    └── 3.html
```

<br><br>

`./home.html`
```html
<frameset cols="50%, 50%">
    <frame name="left"  src="left.html"></frame>
    <frame name="right" src="right.html"></frame>
</frameset>
```

`./right.html`
```html
<frameset rows="50%, 50%">
    <frame name="top"    src="top/1.html"></frame>
    <frame name="bottom" src="bottom/1.html"></frame>
</frameset>
```

`./left.html`
```html
<h1>Main Menu</h1>

<a href="top/1.html" target="top">
    &lt;b&gt; tag
</a><br>

<a href="top/2.html" target="top">
    &lt;i&gt; tag
</a><br>

<a href="top/3.html" target="top">
    &lt;u&gt; tag
</a><br>


```

`./top/1.html`
```html
&lt;b&gt; tag is used to make text bold in html
<br><br>
<a href="../bottom/1.html" target="bottom">View example</a>
```

`./top/2.html`
```html
&lt;i&gt; tag is used to make text italic in html
<br><br>
<a href="../bottom/2.html" target="bottom">View example</a>
```

`./top/3.html`
```html
&lt;u&gt; tag is used to make text underlined in html
<br><br>
<a href="../bottom/3.html" target="bottom">View example</a>
```

`./bottom/1.html`
```html
<b>This is bold text</b>
```

`./bottom/2.html`
```html
<i>This is italic text</i>
```

`./bottom/3.html`
```html
<u>This is underlined text</u>
```

<br><br>

![Screenshot 2023-02-03 at 12.33.52 AM.png](:/fec07cbb53dc4ed0ba83ab4a2614deae)

![Screenshot 2023-02-03 at 12.34.05 AM.png](:/9f3dd65de927479fb7fc95bdf13efa77)

![Screenshot 2023-02-03 at 12.34.28 AM.png](:/233d58aa00dd44f7a239b0fea04f378f)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q5) Create a student registration form for admission in college

<br><br>

```html
<body>


<h1>Student Registration Form</h1>

<form>
    <label>Name: </label>
    <input type="text", name="name">
    <br><br>
    <label>Gender: </label>
    <input type="radio", value="male", name="gender">
    <label>Male</label>
    <input type="radio", value="female", name="gender">
    <label>Female</label>
    <input type="radio", value="other", name="gender">
    <label>Other</label>
    <br><br>
    <label>D.O.B.: </label>
    <input type="date", name="dob">
    <br><br>
    <label>Email: </label>
    <input type="email", name="email">
    <br><br>
    <label>Phone: </label>
    <input type="tel", name="phone">
    <br><br>
    <label>Address:</label><br>
    <textarea name="address" rows="4" cols="50">Placeholder Text</textarea>
    <br><br>
    <label>Program:</label>
    <select name="program">
        <option value="computer-science">Computer Science</option>
        <option value="business">Business</option>
        <option value="engineering">Engineering</option>
        <option value="nursing">Nursing</option>
    </select>
    <br><br>
    <br><br>
    <br><br>
    <input type="submit" value="Submit">
</form> 


</body>
```

<br><br>

![Screenshot 2023-02-03 at 12.35.01 AM.png](:/ba3353d11c4243a9a43108062dd958b9)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q6) Create a webpage and show the usage of inline, internal, and external stylesheet

<br><br>

**Structure**
```shell
.
├── home.html
└── style.css
```

<br><br>

`./home.html`
```html
<link href="style.css" rel="stylesheet">
<style>
    #p2 {
        font-size: 1.5em;
        color: red;
        width: 100%;
        padding-top: 1.5em;
        padding-bottom: 1.5em;
        text-align: center;
        background-color: rgba(0, 225, 255, 0.5);
        border-radius: 10px;
        margin-top: 1.5em;
        margin-bottom: 1.5em;
    }
</style>

<body>
    <div style="color:rebeccapurple;
        width: 100%;
        padding-top: 1em;
        padding-bottom: 1em;
        background-color: rgba(55, 255, 0, 0.5);
        border-radius: 10px;
        margin-top: 1em;
        margin-bottom: 1em;"
    >This is inline styling</div>

    <div id="p2">This is internal styling</div>

    <div id="p3">This is styled using an external stylesheet</div>
</body>
```

`./style.css`
```css
#p3 {
    font-size: 2em;
    color: black;
    width: 100%;
    padding-top: 2em;
    padding-bottom: 2em;
    text-align: right;
    background-color: rgba(255, 225, 255, 0.5);
    border-radius: 10px;
    margin-top: 2em;
    margin-bottom: 2em;
}
```

<br><br>

![Screenshot 2023-02-03 at 12.35.42 AM.png](:/aa2d64ace3a040f989e09591ce09455e)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q7) Create a webpage containing a background image and apply all the background styling attributes

<br><br>

```html
<html>


<head>
	<style>
		html {
			background-image: url('https://raw.githubusercontent.com/msr8/wallpapers/main/neon%20planet.png');
			background-repeat: no-repeat;
			background-attachment: fixed;
			background-position: center;
			background-size: cover;
			color: white;
		}
		body {
			background: transparent;
		}
		div {
			padding: 3em;
			font-size: 120%;
			background-color: rgba(0,0,0, 0.3);
			border-radius: 1em;
			backdrop-filter: blur(4px);
		}
	</style>
</head>


<body>
	<div>
		<h1>Welcome to my webpage!</h1>
		<p>This webpage has a background image that covers the entire page and is fixed in place.</p>
	</div>
</body>


</html>
```

<br><br>

![Screenshot 2023-02-03 at 2.55.18 AM.png](:/8c85abcc1d714dd79befc84cfc28a455)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q8) Create a webpage showing the usage of font styling attributes
- Font size
- Font family
- Font style
- Font weight
- Text transform
- Text decoration

<br><br>

**Structure**

```shell
.
├── home.html
└── style.css
```

<br><br>

`home.html`
```html
<head>
    <link  href="style.css" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Comfortaa" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Ubuntu+Mono" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Roboto+Mono" rel="stylesheet">
</head>

<p class="heading">Font size</p>
<div>
    <p id="p1">This is small text</p>
    <p id="p2">This is medium text</p>
    <p id="p3">This is large text</p>
</div>

<p class="heading">Font Family</p>
<div>
    <p id="p4">This is the Ubuntu Mono font family</p>
    <p id="p5">This is the Comfortaa font family</p>
    <p id="p6">This is the Roboto Mono font family</p>
</div>

<p class="heading">Font Style</p>
<div>
    <p id="p7">This is normal text</p>
    <p id="p8">This is italic text</p>
    <p id="p9">This is oblique text</p>
</div>

<p class="heading">Font Weight</p>
<div>
    <p id="p10">This is light text</p>
    <p id="p11">This is normal text</p>
    <p id="p12">This is bold text</p>
</div>

<p class="heading">Text Tranform</p>
<div>
    <p id="p13">This is lowercase text</p>
    <p id="p14">This is uppercase text</p>
    <p id="p15">This is capitalized text</p>
</div>

<p class="heading">Text Decoration</p>
<div>
    <p id="p16">This is line through text decoration</p>
    <p id="p17">This is overline text decoration</p>
    <p id="p18">This is underline text decoration</p>
</div>
```

`style.css`
```css
html {
    background-image: url('https://raw.githubusercontent.com/msr8/wallpapers/main/neon%20planet.png');
    background-repeat: no-repeat;
    background-attachment: fixed;
    background-position: center;
    background-size: cover;
}
body {
    background: transparent;
}
.heading {
    font-size: 3em;
    font-family: Comfortaa;
    text-align: center;
    text-decoration: underline;
    backdrop-filter: blur(5px);
}
div {
    background-color: rgba(0,0,0, 0.5);
    padding: 10px;
    border-radius: 10px;
    backdrop-filter: blur(6px);
}

#p1     {font-size: small;}
#p2     {font-size: medium;}
#p3     {font-size: large;}
#p4     {font-family: 'Ubuntu Mono';}
#p5     {font-family: 'Comfortaa';}
#p6     {font-family: 'Roboto Mono';}
#p7     {font-style: normal;}
#p8     {font-style: italic;}
#p9     {font-style: oblique;}
#p10    {font-weight: lighter;}
#p11    {font-weight: normal;}
#p12    {font-weight: bold;}
#p13    {text-transform: lowercase;}
#p14    {text-transform: uppercase}
#p15    {text-transform: capitalize;}
#p16    {text-decoration: line-through;}
#p17    {text-decoration: overline;}
#p18    {text-decoration: underline;}
```

<br><br>

![Screenshot 2023-02-03 at 12.04.08 AM.png](:/46b6c732d2c94c6a8b517b47a8e90ff3)

![Screenshot 2023-02-03 at 12.04.27 AM.png](:/40a9d6ca771846b19cc0ec46b64a15ec)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q9) Create a web page and apply all text styling attributes using ID and class selector

<br><br>

```html
<style>
    .para {
        font-size: 1.5em;
        color: red;
        width: 100%;
        padding-top: 1.5em;
        padding-bottom: 1.5em;
        text-align: center;
        background-color: rgba(0, 225, 255, 0.5);
        border-radius: 10px;
        margin-top: 1.5em;
        margin-bottom: 1.5em;
    }

    #p1 {
        font-size: 1.5em;
        color: aqua;
        width: 100%;
        padding-top: 1.5em;
        padding-bottom: 1.5em;
        text-align: center;
        background-color: rgba(255, 0, 0, 0.5);
        border-radius: 10px;
        margin-top: 1.5em;
        margin-bottom: 1.5em;
    }
</style>


<p class="para">This is class styling</p>
<p id="p1">This is ID styling</p>
```

<br><br>

![Screenshot 2023-02-03 at 12.36.24 AM.png](:/408ff838374749a7b9d747cf837be840)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q10) Create a webpage with three equal columns

<br><br>

```html
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
<style>
    #col1    {background-color: rgba(255,0,0, 0.5);}
    #col2    {background-color: rgba(0,255,0, 0.5);}
    #col3    {background-color: rgba(0,0,255, 0.5);}
</style>


<div class="container-fluid">
    <div class="row">
        <div class="col-sm-4" id="col1">
            <h1>Column 1</h1>
            <p>This is column 1</p>
        </div>

        <div class="col-sm-4" id="col2">
            <h1>Column 2</h1>
            <p>This is column 2</p>
        </div>

        <div class="col-sm-4" id="col3">
            <h1>Column 3</h1>
            <p>This is column 3</p>
        </div>
    </div>
</div>
```

<br><br>

![Screenshot 2023-02-03 at 12.36.54 AM.png](:/c7a31dd334a244598767d650bcee5cf1)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q11) Create a webpage containing a bootstrap table

<br><br>

```html
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">


<table class="table">
    <tr>
        <th>S.No.</th>
        <th>Name</th>
    </tr>

    <tr>
        <td>1</td>
        <td>Default</td>
    </tr>

    <tr class="active">
        <td>2</td>
        <td>Active</td>
    </tr>

    <tr class="warning">
        <td>3</td>
        <td>Warning</td>
    </tr>

    <tr class="success">
        <td>4</td>
        <td>Success</td>
    </tr>

    <tr class="danger">
        <td>5</td>
        <td>Danger</td>
    </tr>

    <tr class="info">
        <td>6</td>
        <td>Info</td>
    </tr>
</table>
```

<br><br>

![Screenshot 2023-02-03 at 12.10.33 AM.png](:/8361898841d74e8abd96d70d96c124c3)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q12) Create a webpage containing various types of images

<br><br>

```html
<style>
    img {
        max-width: 49.5%;
    }
</style>

<img src="https://raw.githubusercontent.com/msr8/wallpapers/main/anime%20car%203313x1863.jpg">
<img src="https://raw.githubusercontent.com/msr8/wallpapers/main/architecture%201920x1080.jpeg">
<img src="https://raw.githubusercontent.com/msr8/wallpapers/main/deer%203840x2160.png">
<img src="https://raw.githubusercontent.com/msr8/wallpapers/main/dune%20from%20star%20wars%203840x2160.png">
```

<br><br>

![Screenshot 2023-02-03 at 12.12.05 AM.png](:/608d681429364f34945807e366a9b40e)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q13) Create a webpage containing various types of buttons

<br><br>

```html
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">

<button type="button" class="btn">Basic</button>
<button type="button" class="btn btn-primary">Primary</button>
<button type="button" class="btn btn-secondary">Secondary</button>
<br><br>
<button type="button" class="btn btn-success">Success</button>
<button type="button" class="btn btn-info">Info</button>
<button type="button" class="btn btn-warning">Warning</button>
<br><br>
<button type="button" class="btn btn-danger">Danger</button>
```

<br><br>

![Screenshot 2023-02-03 at 12.14.05 AM.png](:/7415ae04eb7a40dbace31a5f71a9af6b)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q14) Create a webpage containing various typography classes
- Headings
- Display heading
- Color
- Background Color
- Lead paragraph
- Inline text element
- Abbreviations
- Block quote

<br><br>

```html
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">

<style>
    html {
        background-image: url('https://raw.githubusercontent.com/msr8/wallpapers/main/neon%20planet.png');
        background-repeat: no-repeat;
        background-attachment: fixed;
        background-position: center;
        background-size: cover;
    }
    body {
        background: transparent;
    }
    .heading {
        font-size: 3em;
        font-family: Comfortaa;
        text-align: center;
        text-decoration: underline;
        backdrop-filter: blur(5px);
    }
    div {
        background-color: rgba(0,0,0, 0.5);
        padding: 10px;
        border-radius: 10px;
        backdrop-filter: blur(6px);
    }
</style>


<p class="heading">Headings</p>
<div>
    <h1>Heading 1</h1>
    <h2>Heading 2</h2>
    <h3>Heading 3</h3>
    <h4>Heading 4</h4>
    <h5>Heading 5</h5>
    <h6>Heading 6</h6>
</div>

<p class="heading">Display Headings</p>
<div>
    <h1 class="display-1">Display heading 1</h1>
    <h1 class="display-2">Display heading 2</h1>
    <h1 class="display-3">Display heading 3</h1>
    <h1 class="display-4">Display heading 4</h1>
</div>

<p class="heading">Color</p>
<div>
    <p class="text-primary">Primary</p>
    <p class="text-secondary">Secondary</p>
    <p class="text-success">Success</p>
    <p class="text-danger">Danger</p>
    <p class="text-warning">Warning</p>
    <p class="text-info">Info</p>
    <p class="text-muted">Muted</p>
</div>

<p class="heading">Background Color</p>
<div>
    <p class="bg-primary">Primary</p>
    <p class="bg-secondary">Secondary</p>
    <p class="bg-success">Success</p>
    <p class="bg-danger">Danger</p>
    <p class="bg-warning">Warning</p>
    <p class="bg-info">Info</p>
</div>

<p class="heading">Lead Paragraph</p>
<div>
    <p class="lead">This is a lead paragraph</p>
</div>

<p class="heading">Inline text elements</p>
<div>
    <p><mark>This is the mark tag</mark></p>
    <p><del>This is the del tag</del></p>
    <p><s>This is the s tag</s></p>
    <p><ins>This is the ins tag</ins></p>
    <p><b>This is the b tag</b></p>
    <p><i>This is the i tag</i></p>
    <p><u>This is the u tag</u></p>
    <p><small>This is the small tag</small></p>
    <p><strong>This is the strong tag</strong></p>
    <p><em>This is the em tag</em></p>
    <p><blockquote>This is the blockquote tag</blockquote></p>
    <p>This is the abbr tag: <abbr title="HyperText Markup Language">HTML</abbr></p>
</div>
```

<br><br>

![Screenshot 2023-02-03 at 12.16.31 AM.png](:/6a72ca3723f649bab334d126ca246cdd)

![Screenshot 2023-02-03 at 12.16.55 AM.png](:/8d5f03f1a2d54f2c91aa85924b26d2bf)

![Screenshot 2023-02-03 at 12.17.03 AM.png](:/75a6669a505c40a1b83d9bf2523f34f4)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q15) Write a program to show the usage of alert box and confirm box

<br><br>

```html
<script>
    let x   = confirm("This is a confirm box");
    let chc = x ? "Ok" : "Cancel";
    alert(`You selected "${chc}"`);
</script>
```

<br><br>

![Screenshot 2023-02-03 at 12.18.46 AM.png](:/25e61e924ce84c50920736156309107f)

![Screenshot 2023-02-03 at 12.18.56 AM.png](:/53b83d3974ab481a86721b250d95e591)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q16) Write a program to show the usage of all the date, math and string object functions

<br><br>

**Structure**
```shell
.
├── home.html
├── script.js
└── style.css
```

<br><br>

`home.html`
```html
<link   href="style.css" rel="stylesheet">
<script src="script.js"></script>


<p class="heading">Date</p>
<div>
    Date:             <span id="d1"></span> <br><br>
    Time:             <span id="d2"></span> <br><br>
    Day:              <span id="d3"></span> <br><br>
    Month:            <span id="d4"></span> <br><br>
    Year:             <span id="d5"></span> <br><br>
    Timezone Offset:  <span id="d6"></span> <br><br>
</div>

<p class="heading">Math</p>
<div>
    <span id="m1"></span> <br><br>
    <span id="m2"></span> <br><br>
    <span id="m3"></span> <br><br>
    <span id="m4"></span> <br><br>
    <span id="m5"></span> <br><br>
    <span id="m6"></span> <br><br>
    <span id="m7"></span> <br><br>
    <span id="m8"></span> <br><br>
</div>

<p class="heading">String</p>
<div>
    x:             <span id="s1"></span> <br><br>
    x.toUpperCase: <span id="s2"></span> <br><br>
    x.toLowerCase: <span id="s3"></span> <br><br>
    x.length:      <span id="s4"></span> <br><br>
    x.repeat(2):   <span id="s5"></span> <br><br>
</div>
```

`style.css`
```css
html {
    background-image: url('https://raw.githubusercontent.com/msr8/wallpapers/main/neon%20planet.png');
    background-repeat: no-repeat;
    background-attachment: fixed;
    background-position: center;
    background-size: cover;
}
body {
    background: transparent;
}
.heading {
    font-size: 3em;
    font-family: Comfortaa;
    text-align: center;
    text-decoration: underline;
    backdrop-filter: blur(5px);
}
div {
    background-color: rgba(0,0,0, 0.5);
    padding: 10px;
    border-radius: 10px;
    backdrop-filter: blur(6px);
}
```

`script.js`
```js
function changeDateContent() {
    const d1    = document.getElementById('d1');
    const d2    = document.getElementById('d2');
    const d3    = document.getElementById('d3');
    const d4    = document.getElementById('d4');
    const d5    = document.getElementById('d5');
    const d6    = document.getElementById('d6');
    const today = new Date();

    d1.innerHTML = today.toDateString();
    d2.innerHTML = today.toTimeString();
    d3.innerHTML = today.getDay();
    d4.innerHTML = today.getMonth();
    d5.innerHTML = today.getFullYear();
    d6.innerHTML = today.getTimezoneOffset();
}


function changeMathContent() {
    const m1 = document.getElementById('m1');
    const m2 = document.getElementById('m2');
    const m3 = document.getElementById('m3');
    const m4 = document.getElementById('m4');
    const m5 = document.getElementById('m5');
    const m6 = document.getElementById('m6');
    const m7 = document.getElementById('m7');
    const m8 = document.getElementById('m8');
    let   x  = Number(prompt("Enter a number"));

    m1.innerHTML = `floor(${x}) = ${Math.floor(x)}`;
    m2.innerHTML = `ceil(${x}) = ${Math.ceil(x)}`;
    m3.innerHTML = `pow(${x},2) = ${Math.pow(x,2)}`;
    m4.innerHTML = `sqrt(${x}) = ${Math.sqrt(x)}`;
    m5.innerHTML = `sin(${x}) = ${Math.sin(x)}`;
    m6.innerHTML = `cos(${x}) = ${Math.cos(x)}`;
    m7.innerHTML = `tan(${x}) = ${Math.tan(x)}`;
    m8.innerHTML = `random() = ${Math.random()}`;    
}


function changeStringContent() {
    const s1 = document.getElementById('s1');
    const s2 = document.getElementById('s2');
    const s3 = document.getElementById('s3');
    const s4 = document.getElementById('s4');
    const s5 = document.getElementById('s5');
    let   x  = prompt("Enter a string:");

    s1.innerHTML = x;
    s2.innerHTML = x.toUpperCase();
    s3.innerHTML = x.toLowerCase();
    s4.innerHTML = x.length;
    s5.innerHTML = x.repeat(2);
}



function main() {
    changeDateContent();
    changeMathContent();
    changeStringContent();
}

// Runs main() once DOM has loaded
window.onload = main
```

<br><br>

![Screenshot 2023-02-03 at 12.25.34 AM.png](:/f9500f2d549b47199689f7b76a95697f)

![Screenshot 2023-02-03 at 12.25.52 AM.png](:/8990c6365f2640b88c079af9b241f3af)

![Screenshot 2023-02-03 at 12.26.07 AM.png](:/f6605565ae5a4315aa3775996ef58017)

![Screenshot 2023-02-03 at 12.26.34 AM.png](:/b0a48e312d8142d28c1fef21d0573c9d)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q17) WAP to display the bookstore details in XML with CSS and internal DTD

<br><br>

```html
<!ELEMENT bookstore (book+)>
<!ELEMENT book (title, author, price)>
<!ELEMENT title_ (#PCDATA)>
<!ELEMENT author (#PCDATA)>
<!ELEMENT price (#PCDATA)>


<style>
    book {
        display: inline-block;
        margin: 20px;
        padding: 10px;
        border: 1px solid black;
    }
    title_ {
        font-size: 18px;
        font-weight: bold;
    }
    author {
        font-size: 14px;
        font-style: italic;
    }
    price {
        font-size: 16px;
        color: green;
    }
</style>


<bookstore>
    <book>
        <title_>To Kill a Mockingbird</title_>
        <author>Harper Lee</author>
        <price>1099</price>
    </book>

    <book>
        <title_>Pride and Prejudice</title_>
        <author>Jane Austen</author>
        <price>899</price>
    </book>

    <book>
        <title_>The Great Gatsby</title_>
        <author>F. Scott Fitzgerald</author>
        <price>999</price>
    </book>
</bookstore>
```

<br><br>

![Screenshot 2023-02-03 at 12.45.16 AM.png](:/e99b3e3a7030466d890593040138d69b)



<div style="page-break-after: always; visibility: hidden">\pagebreak</div>



## Q18) WAP to format the Teacher details in XML with CSS using external DTD

<br><br>

**Structure**
```shell
.
├── style.css
├── teacher.dtd
└── teacher.xml
```

<br><br>

`teacher.dtd`
```dtd
<!ELEMENT TeacherDetails (Name, Age, Salary, Subject, Course)>
<!ELEMENT Name (#PCDATA)>
<!ELEMENT Age (#PCDATA)>
<!ELEMENT Salary (#PCDATA)>
<!ELEMENT Subject (#PCDATA)>
<!ELEMENT Course (#PCDATA)>
```

`teacher.xml`
```xml
<?xml version="1.0"?>
<?xml-stylesheet type="text/css" href="style.css"?>
<!DOCTYPE TeacherDetails SYSTEM "teacher.dtd">
<TeacherDetails>
    <Teacher>
        <Name>Rakesh Sharma</Name>
        <Age>45</Age>
        <Salary>80,000</Salary>
        <Subject>Mathematics</Subject>
        <Course>BCA</Course>
    </Teacher>

    <Teacher>
        <Name>Anjali Batra</Name>
        <Age>39</Age>
        <Salary>150,000</Salary>
        <Subject>Computer Science</Subject>
        <Course>B.Tech</Course>
    </Teacher>

    <Teacher>
        <Name>Mohan Kumar</Name>
        <Age>51</Age>
        <Salary>97,000</Salary>
        <Subject>Web Technology</Subject>
        <Course>BCA</Course>
    </Teacher>
</TeacherDetails>
```

`style.css`
```css
Teacher, Name, Age, Subject, Salary, Course  {
    display: block;
}

Teacher {
    margin-top: 20px;
    margin-bottom: 20px;
    background-color: rgba(245,222,179, 0.8);
    border-radius: 5px;
}

Name {
    font-family: Comfortaa;
    font-size: 2em;
    text-align: center;
}
```

<br><br>

![Screenshot 2023-02-03 at 1.17.14 AM.png](:/689ac8bd61414ef0938f24f5e0e999be)


