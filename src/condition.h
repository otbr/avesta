



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "ABZ6GAc48pPeeiokNVgoVVaRWbqZUlxtZw:1406096408677";
 
 
 var CS_env = {"relativeBaseUrl": "", "projectHomeUrl": "/p/avesta74", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/13997016681179179006", "profileUrl": "/u/108692122734644646415/", "loggedInUserEmail": "jose.guitian@coremain.com", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "projectName": "avesta74", "domainName": null, "token": "ABZ6GAc48pPeeiokNVgoVVaRWbqZUlxtZw:1406096408677"};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 _gaq.push(
 ['projectTracker._setAccount', 'UA-27551938-1'],
 ['projectTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>condition.h - 
 avesta74 -
 
 
 A modified Open Tibia Server for the old tibia 7.4 - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 
 <a href="#" id="multilogin-dropdown" onclick="return false;"
 ><u><b>jose.guitian@coremain.com</b></u> <small>&#9660;</small></a>
 
 
 | <a href="/u/108692122734644646415/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/108692122734644646415/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Favesta74%2Fsource%2Fbrowse%2Ftrunk%2Fsrc%2Fcondition.h" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 
 
 <td id="plogo">
 <link itemprop="url" href="/p/avesta74">
 <a href="/p/avesta74/">
 
 <img src="https://ssl.gstatic.com/codesite/ph/images/defaultlogo.png" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/avesta74/"><span itemprop="name">avesta74</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/avesta74/"><span itemprop="description">A modified Open Tibia Server for the old tibia 7.4</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/avesta74/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 <a href="/p/avesta74/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/avesta74/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/avesta74/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/avesta74/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/avesta74/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/avesta74/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/avesta74/source/list">Changes</a></span> &nbsp;
 
 
 
 
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/avesta74/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/avesta74/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/avesta74/source/browse/trunk/src/">src</a><span class="sp">/&nbsp;</span>condition.h</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/avesta74/source/browse/trunk/src/condition.h?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/avesta74/source/browse/trunk/src/condition.h?r=91" title="Previous">&lsaquo;r91</a></li>
 
 </ul>
 </td>
 
 <td class="flipper"><b>r102</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(https://ssl.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn102_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn102_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn102_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn102_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn102_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn102_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn102_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn102_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn102_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn102_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn102_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn102_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn102_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn102_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn102_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn102_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn102_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn102_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn102_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn102_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn102_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn102_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn102_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn102_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn102_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn102_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn102_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn102_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn102_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn102_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn102_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn102_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn102_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn102_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn102_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn102_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn102_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn102_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn102_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn102_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn102_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn102_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn102_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn102_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn102_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn102_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn102_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn102_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn102_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn102_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn102_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn102_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn102_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn102_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn102_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn102_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn102_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn102_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn102_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn102_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn102_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn102_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn102_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn102_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn102_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn102_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn102_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn102_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn102_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn102_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn102_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn102_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn102_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn102_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn102_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn102_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn102_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn102_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn102_79"

><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn102_80"

><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn102_81"

><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn102_82"

><td id="82"><a href="#82">82</a></td></tr
><tr id="gr_svn102_83"

><td id="83"><a href="#83">83</a></td></tr
><tr id="gr_svn102_84"

><td id="84"><a href="#84">84</a></td></tr
><tr id="gr_svn102_85"

><td id="85"><a href="#85">85</a></td></tr
><tr id="gr_svn102_86"

><td id="86"><a href="#86">86</a></td></tr
><tr id="gr_svn102_87"

><td id="87"><a href="#87">87</a></td></tr
><tr id="gr_svn102_88"

><td id="88"><a href="#88">88</a></td></tr
><tr id="gr_svn102_89"

><td id="89"><a href="#89">89</a></td></tr
><tr id="gr_svn102_90"

><td id="90"><a href="#90">90</a></td></tr
><tr id="gr_svn102_91"

><td id="91"><a href="#91">91</a></td></tr
><tr id="gr_svn102_92"

><td id="92"><a href="#92">92</a></td></tr
><tr id="gr_svn102_93"

><td id="93"><a href="#93">93</a></td></tr
><tr id="gr_svn102_94"

><td id="94"><a href="#94">94</a></td></tr
><tr id="gr_svn102_95"

><td id="95"><a href="#95">95</a></td></tr
><tr id="gr_svn102_96"

><td id="96"><a href="#96">96</a></td></tr
><tr id="gr_svn102_97"

><td id="97"><a href="#97">97</a></td></tr
><tr id="gr_svn102_98"

><td id="98"><a href="#98">98</a></td></tr
><tr id="gr_svn102_99"

><td id="99"><a href="#99">99</a></td></tr
><tr id="gr_svn102_100"

><td id="100"><a href="#100">100</a></td></tr
><tr id="gr_svn102_101"

><td id="101"><a href="#101">101</a></td></tr
><tr id="gr_svn102_102"

><td id="102"><a href="#102">102</a></td></tr
><tr id="gr_svn102_103"

><td id="103"><a href="#103">103</a></td></tr
><tr id="gr_svn102_104"

><td id="104"><a href="#104">104</a></td></tr
><tr id="gr_svn102_105"

><td id="105"><a href="#105">105</a></td></tr
><tr id="gr_svn102_106"

><td id="106"><a href="#106">106</a></td></tr
><tr id="gr_svn102_107"

><td id="107"><a href="#107">107</a></td></tr
><tr id="gr_svn102_108"

><td id="108"><a href="#108">108</a></td></tr
><tr id="gr_svn102_109"

><td id="109"><a href="#109">109</a></td></tr
><tr id="gr_svn102_110"

><td id="110"><a href="#110">110</a></td></tr
><tr id="gr_svn102_111"

><td id="111"><a href="#111">111</a></td></tr
><tr id="gr_svn102_112"

><td id="112"><a href="#112">112</a></td></tr
><tr id="gr_svn102_113"

><td id="113"><a href="#113">113</a></td></tr
><tr id="gr_svn102_114"

><td id="114"><a href="#114">114</a></td></tr
><tr id="gr_svn102_115"

><td id="115"><a href="#115">115</a></td></tr
><tr id="gr_svn102_116"

><td id="116"><a href="#116">116</a></td></tr
><tr id="gr_svn102_117"

><td id="117"><a href="#117">117</a></td></tr
><tr id="gr_svn102_118"

><td id="118"><a href="#118">118</a></td></tr
><tr id="gr_svn102_119"

><td id="119"><a href="#119">119</a></td></tr
><tr id="gr_svn102_120"

><td id="120"><a href="#120">120</a></td></tr
><tr id="gr_svn102_121"

><td id="121"><a href="#121">121</a></td></tr
><tr id="gr_svn102_122"

><td id="122"><a href="#122">122</a></td></tr
><tr id="gr_svn102_123"

><td id="123"><a href="#123">123</a></td></tr
><tr id="gr_svn102_124"

><td id="124"><a href="#124">124</a></td></tr
><tr id="gr_svn102_125"

><td id="125"><a href="#125">125</a></td></tr
><tr id="gr_svn102_126"

><td id="126"><a href="#126">126</a></td></tr
><tr id="gr_svn102_127"

><td id="127"><a href="#127">127</a></td></tr
><tr id="gr_svn102_128"

><td id="128"><a href="#128">128</a></td></tr
><tr id="gr_svn102_129"

><td id="129"><a href="#129">129</a></td></tr
><tr id="gr_svn102_130"

><td id="130"><a href="#130">130</a></td></tr
><tr id="gr_svn102_131"

><td id="131"><a href="#131">131</a></td></tr
><tr id="gr_svn102_132"

><td id="132"><a href="#132">132</a></td></tr
><tr id="gr_svn102_133"

><td id="133"><a href="#133">133</a></td></tr
><tr id="gr_svn102_134"

><td id="134"><a href="#134">134</a></td></tr
><tr id="gr_svn102_135"

><td id="135"><a href="#135">135</a></td></tr
><tr id="gr_svn102_136"

><td id="136"><a href="#136">136</a></td></tr
><tr id="gr_svn102_137"

><td id="137"><a href="#137">137</a></td></tr
><tr id="gr_svn102_138"

><td id="138"><a href="#138">138</a></td></tr
><tr id="gr_svn102_139"

><td id="139"><a href="#139">139</a></td></tr
><tr id="gr_svn102_140"

><td id="140"><a href="#140">140</a></td></tr
><tr id="gr_svn102_141"

><td id="141"><a href="#141">141</a></td></tr
><tr id="gr_svn102_142"

><td id="142"><a href="#142">142</a></td></tr
><tr id="gr_svn102_143"

><td id="143"><a href="#143">143</a></td></tr
><tr id="gr_svn102_144"

><td id="144"><a href="#144">144</a></td></tr
><tr id="gr_svn102_145"

><td id="145"><a href="#145">145</a></td></tr
><tr id="gr_svn102_146"

><td id="146"><a href="#146">146</a></td></tr
><tr id="gr_svn102_147"

><td id="147"><a href="#147">147</a></td></tr
><tr id="gr_svn102_148"

><td id="148"><a href="#148">148</a></td></tr
><tr id="gr_svn102_149"

><td id="149"><a href="#149">149</a></td></tr
><tr id="gr_svn102_150"

><td id="150"><a href="#150">150</a></td></tr
><tr id="gr_svn102_151"

><td id="151"><a href="#151">151</a></td></tr
><tr id="gr_svn102_152"

><td id="152"><a href="#152">152</a></td></tr
><tr id="gr_svn102_153"

><td id="153"><a href="#153">153</a></td></tr
><tr id="gr_svn102_154"

><td id="154"><a href="#154">154</a></td></tr
><tr id="gr_svn102_155"

><td id="155"><a href="#155">155</a></td></tr
><tr id="gr_svn102_156"

><td id="156"><a href="#156">156</a></td></tr
><tr id="gr_svn102_157"

><td id="157"><a href="#157">157</a></td></tr
><tr id="gr_svn102_158"

><td id="158"><a href="#158">158</a></td></tr
><tr id="gr_svn102_159"

><td id="159"><a href="#159">159</a></td></tr
><tr id="gr_svn102_160"

><td id="160"><a href="#160">160</a></td></tr
><tr id="gr_svn102_161"

><td id="161"><a href="#161">161</a></td></tr
><tr id="gr_svn102_162"

><td id="162"><a href="#162">162</a></td></tr
><tr id="gr_svn102_163"

><td id="163"><a href="#163">163</a></td></tr
><tr id="gr_svn102_164"

><td id="164"><a href="#164">164</a></td></tr
><tr id="gr_svn102_165"

><td id="165"><a href="#165">165</a></td></tr
><tr id="gr_svn102_166"

><td id="166"><a href="#166">166</a></td></tr
><tr id="gr_svn102_167"

><td id="167"><a href="#167">167</a></td></tr
><tr id="gr_svn102_168"

><td id="168"><a href="#168">168</a></td></tr
><tr id="gr_svn102_169"

><td id="169"><a href="#169">169</a></td></tr
><tr id="gr_svn102_170"

><td id="170"><a href="#170">170</a></td></tr
><tr id="gr_svn102_171"

><td id="171"><a href="#171">171</a></td></tr
><tr id="gr_svn102_172"

><td id="172"><a href="#172">172</a></td></tr
><tr id="gr_svn102_173"

><td id="173"><a href="#173">173</a></td></tr
><tr id="gr_svn102_174"

><td id="174"><a href="#174">174</a></td></tr
><tr id="gr_svn102_175"

><td id="175"><a href="#175">175</a></td></tr
><tr id="gr_svn102_176"

><td id="176"><a href="#176">176</a></td></tr
><tr id="gr_svn102_177"

><td id="177"><a href="#177">177</a></td></tr
><tr id="gr_svn102_178"

><td id="178"><a href="#178">178</a></td></tr
><tr id="gr_svn102_179"

><td id="179"><a href="#179">179</a></td></tr
><tr id="gr_svn102_180"

><td id="180"><a href="#180">180</a></td></tr
><tr id="gr_svn102_181"

><td id="181"><a href="#181">181</a></td></tr
><tr id="gr_svn102_182"

><td id="182"><a href="#182">182</a></td></tr
><tr id="gr_svn102_183"

><td id="183"><a href="#183">183</a></td></tr
><tr id="gr_svn102_184"

><td id="184"><a href="#184">184</a></td></tr
><tr id="gr_svn102_185"

><td id="185"><a href="#185">185</a></td></tr
><tr id="gr_svn102_186"

><td id="186"><a href="#186">186</a></td></tr
><tr id="gr_svn102_187"

><td id="187"><a href="#187">187</a></td></tr
><tr id="gr_svn102_188"

><td id="188"><a href="#188">188</a></td></tr
><tr id="gr_svn102_189"

><td id="189"><a href="#189">189</a></td></tr
><tr id="gr_svn102_190"

><td id="190"><a href="#190">190</a></td></tr
><tr id="gr_svn102_191"

><td id="191"><a href="#191">191</a></td></tr
><tr id="gr_svn102_192"

><td id="192"><a href="#192">192</a></td></tr
><tr id="gr_svn102_193"

><td id="193"><a href="#193">193</a></td></tr
><tr id="gr_svn102_194"

><td id="194"><a href="#194">194</a></td></tr
><tr id="gr_svn102_195"

><td id="195"><a href="#195">195</a></td></tr
><tr id="gr_svn102_196"

><td id="196"><a href="#196">196</a></td></tr
><tr id="gr_svn102_197"

><td id="197"><a href="#197">197</a></td></tr
><tr id="gr_svn102_198"

><td id="198"><a href="#198">198</a></td></tr
><tr id="gr_svn102_199"

><td id="199"><a href="#199">199</a></td></tr
><tr id="gr_svn102_200"

><td id="200"><a href="#200">200</a></td></tr
><tr id="gr_svn102_201"

><td id="201"><a href="#201">201</a></td></tr
><tr id="gr_svn102_202"

><td id="202"><a href="#202">202</a></td></tr
><tr id="gr_svn102_203"

><td id="203"><a href="#203">203</a></td></tr
><tr id="gr_svn102_204"

><td id="204"><a href="#204">204</a></td></tr
><tr id="gr_svn102_205"

><td id="205"><a href="#205">205</a></td></tr
><tr id="gr_svn102_206"

><td id="206"><a href="#206">206</a></td></tr
><tr id="gr_svn102_207"

><td id="207"><a href="#207">207</a></td></tr
><tr id="gr_svn102_208"

><td id="208"><a href="#208">208</a></td></tr
><tr id="gr_svn102_209"

><td id="209"><a href="#209">209</a></td></tr
><tr id="gr_svn102_210"

><td id="210"><a href="#210">210</a></td></tr
><tr id="gr_svn102_211"

><td id="211"><a href="#211">211</a></td></tr
><tr id="gr_svn102_212"

><td id="212"><a href="#212">212</a></td></tr
><tr id="gr_svn102_213"

><td id="213"><a href="#213">213</a></td></tr
><tr id="gr_svn102_214"

><td id="214"><a href="#214">214</a></td></tr
><tr id="gr_svn102_215"

><td id="215"><a href="#215">215</a></td></tr
><tr id="gr_svn102_216"

><td id="216"><a href="#216">216</a></td></tr
><tr id="gr_svn102_217"

><td id="217"><a href="#217">217</a></td></tr
><tr id="gr_svn102_218"

><td id="218"><a href="#218">218</a></td></tr
><tr id="gr_svn102_219"

><td id="219"><a href="#219">219</a></td></tr
><tr id="gr_svn102_220"

><td id="220"><a href="#220">220</a></td></tr
><tr id="gr_svn102_221"

><td id="221"><a href="#221">221</a></td></tr
><tr id="gr_svn102_222"

><td id="222"><a href="#222">222</a></td></tr
><tr id="gr_svn102_223"

><td id="223"><a href="#223">223</a></td></tr
><tr id="gr_svn102_224"

><td id="224"><a href="#224">224</a></td></tr
><tr id="gr_svn102_225"

><td id="225"><a href="#225">225</a></td></tr
><tr id="gr_svn102_226"

><td id="226"><a href="#226">226</a></td></tr
><tr id="gr_svn102_227"

><td id="227"><a href="#227">227</a></td></tr
><tr id="gr_svn102_228"

><td id="228"><a href="#228">228</a></td></tr
><tr id="gr_svn102_229"

><td id="229"><a href="#229">229</a></td></tr
><tr id="gr_svn102_230"

><td id="230"><a href="#230">230</a></td></tr
><tr id="gr_svn102_231"

><td id="231"><a href="#231">231</a></td></tr
><tr id="gr_svn102_232"

><td id="232"><a href="#232">232</a></td></tr
><tr id="gr_svn102_233"

><td id="233"><a href="#233">233</a></td></tr
><tr id="gr_svn102_234"

><td id="234"><a href="#234">234</a></td></tr
><tr id="gr_svn102_235"

><td id="235"><a href="#235">235</a></td></tr
><tr id="gr_svn102_236"

><td id="236"><a href="#236">236</a></td></tr
><tr id="gr_svn102_237"

><td id="237"><a href="#237">237</a></td></tr
><tr id="gr_svn102_238"

><td id="238"><a href="#238">238</a></td></tr
><tr id="gr_svn102_239"

><td id="239"><a href="#239">239</a></td></tr
><tr id="gr_svn102_240"

><td id="240"><a href="#240">240</a></td></tr
><tr id="gr_svn102_241"

><td id="241"><a href="#241">241</a></td></tr
><tr id="gr_svn102_242"

><td id="242"><a href="#242">242</a></td></tr
><tr id="gr_svn102_243"

><td id="243"><a href="#243">243</a></td></tr
><tr id="gr_svn102_244"

><td id="244"><a href="#244">244</a></td></tr
><tr id="gr_svn102_245"

><td id="245"><a href="#245">245</a></td></tr
><tr id="gr_svn102_246"

><td id="246"><a href="#246">246</a></td></tr
><tr id="gr_svn102_247"

><td id="247"><a href="#247">247</a></td></tr
><tr id="gr_svn102_248"

><td id="248"><a href="#248">248</a></td></tr
><tr id="gr_svn102_249"

><td id="249"><a href="#249">249</a></td></tr
><tr id="gr_svn102_250"

><td id="250"><a href="#250">250</a></td></tr
><tr id="gr_svn102_251"

><td id="251"><a href="#251">251</a></td></tr
><tr id="gr_svn102_252"

><td id="252"><a href="#252">252</a></td></tr
><tr id="gr_svn102_253"

><td id="253"><a href="#253">253</a></td></tr
><tr id="gr_svn102_254"

><td id="254"><a href="#254">254</a></td></tr
><tr id="gr_svn102_255"

><td id="255"><a href="#255">255</a></td></tr
><tr id="gr_svn102_256"

><td id="256"><a href="#256">256</a></td></tr
><tr id="gr_svn102_257"

><td id="257"><a href="#257">257</a></td></tr
><tr id="gr_svn102_258"

><td id="258"><a href="#258">258</a></td></tr
><tr id="gr_svn102_259"

><td id="259"><a href="#259">259</a></td></tr
><tr id="gr_svn102_260"

><td id="260"><a href="#260">260</a></td></tr
><tr id="gr_svn102_261"

><td id="261"><a href="#261">261</a></td></tr
><tr id="gr_svn102_262"

><td id="262"><a href="#262">262</a></td></tr
><tr id="gr_svn102_263"

><td id="263"><a href="#263">263</a></td></tr
><tr id="gr_svn102_264"

><td id="264"><a href="#264">264</a></td></tr
><tr id="gr_svn102_265"

><td id="265"><a href="#265">265</a></td></tr
><tr id="gr_svn102_266"

><td id="266"><a href="#266">266</a></td></tr
><tr id="gr_svn102_267"

><td id="267"><a href="#267">267</a></td></tr
><tr id="gr_svn102_268"

><td id="268"><a href="#268">268</a></td></tr
><tr id="gr_svn102_269"

><td id="269"><a href="#269">269</a></td></tr
><tr id="gr_svn102_270"

><td id="270"><a href="#270">270</a></td></tr
><tr id="gr_svn102_271"

><td id="271"><a href="#271">271</a></td></tr
><tr id="gr_svn102_272"

><td id="272"><a href="#272">272</a></td></tr
><tr id="gr_svn102_273"

><td id="273"><a href="#273">273</a></td></tr
><tr id="gr_svn102_274"

><td id="274"><a href="#274">274</a></td></tr
><tr id="gr_svn102_275"

><td id="275"><a href="#275">275</a></td></tr
><tr id="gr_svn102_276"

><td id="276"><a href="#276">276</a></td></tr
><tr id="gr_svn102_277"

><td id="277"><a href="#277">277</a></td></tr
><tr id="gr_svn102_278"

><td id="278"><a href="#278">278</a></td></tr
><tr id="gr_svn102_279"

><td id="279"><a href="#279">279</a></td></tr
><tr id="gr_svn102_280"

><td id="280"><a href="#280">280</a></td></tr
><tr id="gr_svn102_281"

><td id="281"><a href="#281">281</a></td></tr
><tr id="gr_svn102_282"

><td id="282"><a href="#282">282</a></td></tr
><tr id="gr_svn102_283"

><td id="283"><a href="#283">283</a></td></tr
><tr id="gr_svn102_284"

><td id="284"><a href="#284">284</a></td></tr
><tr id="gr_svn102_285"

><td id="285"><a href="#285">285</a></td></tr
><tr id="gr_svn102_286"

><td id="286"><a href="#286">286</a></td></tr
><tr id="gr_svn102_287"

><td id="287"><a href="#287">287</a></td></tr
><tr id="gr_svn102_288"

><td id="288"><a href="#288">288</a></td></tr
><tr id="gr_svn102_289"

><td id="289"><a href="#289">289</a></td></tr
><tr id="gr_svn102_290"

><td id="290"><a href="#290">290</a></td></tr
><tr id="gr_svn102_291"

><td id="291"><a href="#291">291</a></td></tr
><tr id="gr_svn102_292"

><td id="292"><a href="#292">292</a></td></tr
><tr id="gr_svn102_293"

><td id="293"><a href="#293">293</a></td></tr
><tr id="gr_svn102_294"

><td id="294"><a href="#294">294</a></td></tr
><tr id="gr_svn102_295"

><td id="295"><a href="#295">295</a></td></tr
><tr id="gr_svn102_296"

><td id="296"><a href="#296">296</a></td></tr
><tr id="gr_svn102_297"

><td id="297"><a href="#297">297</a></td></tr
><tr id="gr_svn102_298"

><td id="298"><a href="#298">298</a></td></tr
><tr id="gr_svn102_299"

><td id="299"><a href="#299">299</a></td></tr
><tr id="gr_svn102_300"

><td id="300"><a href="#300">300</a></td></tr
><tr id="gr_svn102_301"

><td id="301"><a href="#301">301</a></td></tr
><tr id="gr_svn102_302"

><td id="302"><a href="#302">302</a></td></tr
><tr id="gr_svn102_303"

><td id="303"><a href="#303">303</a></td></tr
><tr id="gr_svn102_304"

><td id="304"><a href="#304">304</a></td></tr
><tr id="gr_svn102_305"

><td id="305"><a href="#305">305</a></td></tr
><tr id="gr_svn102_306"

><td id="306"><a href="#306">306</a></td></tr
><tr id="gr_svn102_307"

><td id="307"><a href="#307">307</a></td></tr
><tr id="gr_svn102_308"

><td id="308"><a href="#308">308</a></td></tr
><tr id="gr_svn102_309"

><td id="309"><a href="#309">309</a></td></tr
><tr id="gr_svn102_310"

><td id="310"><a href="#310">310</a></td></tr
><tr id="gr_svn102_311"

><td id="311"><a href="#311">311</a></td></tr
><tr id="gr_svn102_312"

><td id="312"><a href="#312">312</a></td></tr
><tr id="gr_svn102_313"

><td id="313"><a href="#313">313</a></td></tr
><tr id="gr_svn102_314"

><td id="314"><a href="#314">314</a></td></tr
><tr id="gr_svn102_315"

><td id="315"><a href="#315">315</a></td></tr
><tr id="gr_svn102_316"

><td id="316"><a href="#316">316</a></td></tr
><tr id="gr_svn102_317"

><td id="317"><a href="#317">317</a></td></tr
><tr id="gr_svn102_318"

><td id="318"><a href="#318">318</a></td></tr
><tr id="gr_svn102_319"

><td id="319"><a href="#319">319</a></td></tr
><tr id="gr_svn102_320"

><td id="320"><a href="#320">320</a></td></tr
><tr id="gr_svn102_321"

><td id="321"><a href="#321">321</a></td></tr
><tr id="gr_svn102_322"

><td id="322"><a href="#322">322</a></td></tr
><tr id="gr_svn102_323"

><td id="323"><a href="#323">323</a></td></tr
><tr id="gr_svn102_324"

><td id="324"><a href="#324">324</a></td></tr
><tr id="gr_svn102_325"

><td id="325"><a href="#325">325</a></td></tr
><tr id="gr_svn102_326"

><td id="326"><a href="#326">326</a></td></tr
><tr id="gr_svn102_327"

><td id="327"><a href="#327">327</a></td></tr
><tr id="gr_svn102_328"

><td id="328"><a href="#328">328</a></td></tr
><tr id="gr_svn102_329"

><td id="329"><a href="#329">329</a></td></tr
><tr id="gr_svn102_330"

><td id="330"><a href="#330">330</a></td></tr
><tr id="gr_svn102_331"

><td id="331"><a href="#331">331</a></td></tr
><tr id="gr_svn102_332"

><td id="332"><a href="#332">332</a></td></tr
><tr id="gr_svn102_333"

><td id="333"><a href="#333">333</a></td></tr
><tr id="gr_svn102_334"

><td id="334"><a href="#334">334</a></td></tr
><tr id="gr_svn102_335"

><td id="335"><a href="#335">335</a></td></tr
><tr id="gr_svn102_336"

><td id="336"><a href="#336">336</a></td></tr
><tr id="gr_svn102_337"

><td id="337"><a href="#337">337</a></td></tr
><tr id="gr_svn102_338"

><td id="338"><a href="#338">338</a></td></tr
><tr id="gr_svn102_339"

><td id="339"><a href="#339">339</a></td></tr
><tr id="gr_svn102_340"

><td id="340"><a href="#340">340</a></td></tr
><tr id="gr_svn102_341"

><td id="341"><a href="#341">341</a></td></tr
><tr id="gr_svn102_342"

><td id="342"><a href="#342">342</a></td></tr
><tr id="gr_svn102_343"

><td id="343"><a href="#343">343</a></td></tr
><tr id="gr_svn102_344"

><td id="344"><a href="#344">344</a></td></tr
><tr id="gr_svn102_345"

><td id="345"><a href="#345">345</a></td></tr
><tr id="gr_svn102_346"

><td id="346"><a href="#346">346</a></td></tr
><tr id="gr_svn102_347"

><td id="347"><a href="#347">347</a></td></tr
><tr id="gr_svn102_348"

><td id="348"><a href="#348">348</a></td></tr
><tr id="gr_svn102_349"

><td id="349"><a href="#349">349</a></td></tr
><tr id="gr_svn102_350"

><td id="350"><a href="#350">350</a></td></tr
><tr id="gr_svn102_351"

><td id="351"><a href="#351">351</a></td></tr
><tr id="gr_svn102_352"

><td id="352"><a href="#352">352</a></td></tr
><tr id="gr_svn102_353"

><td id="353"><a href="#353">353</a></td></tr
><tr id="gr_svn102_354"

><td id="354"><a href="#354">354</a></td></tr
><tr id="gr_svn102_355"

><td id="355"><a href="#355">355</a></td></tr
><tr id="gr_svn102_356"

><td id="356"><a href="#356">356</a></td></tr
><tr id="gr_svn102_357"

><td id="357"><a href="#357">357</a></td></tr
><tr id="gr_svn102_358"

><td id="358"><a href="#358">358</a></td></tr
><tr id="gr_svn102_359"

><td id="359"><a href="#359">359</a></td></tr
><tr id="gr_svn102_360"

><td id="360"><a href="#360">360</a></td></tr
><tr id="gr_svn102_361"

><td id="361"><a href="#361">361</a></td></tr
><tr id="gr_svn102_362"

><td id="362"><a href="#362">362</a></td></tr
><tr id="gr_svn102_363"

><td id="363"><a href="#363">363</a></td></tr
><tr id="gr_svn102_364"

><td id="364"><a href="#364">364</a></td></tr
><tr id="gr_svn102_365"

><td id="365"><a href="#365">365</a></td></tr
><tr id="gr_svn102_366"

><td id="366"><a href="#366">366</a></td></tr
><tr id="gr_svn102_367"

><td id="367"><a href="#367">367</a></td></tr
><tr id="gr_svn102_368"

><td id="368"><a href="#368">368</a></td></tr
><tr id="gr_svn102_369"

><td id="369"><a href="#369">369</a></td></tr
><tr id="gr_svn102_370"

><td id="370"><a href="#370">370</a></td></tr
><tr id="gr_svn102_371"

><td id="371"><a href="#371">371</a></td></tr
><tr id="gr_svn102_372"

><td id="372"><a href="#372">372</a></td></tr
><tr id="gr_svn102_373"

><td id="373"><a href="#373">373</a></td></tr
><tr id="gr_svn102_374"

><td id="374"><a href="#374">374</a></td></tr
><tr id="gr_svn102_375"

><td id="375"><a href="#375">375</a></td></tr
><tr id="gr_svn102_376"

><td id="376"><a href="#376">376</a></td></tr
><tr id="gr_svn102_377"

><td id="377"><a href="#377">377</a></td></tr
><tr id="gr_svn102_378"

><td id="378"><a href="#378">378</a></td></tr
><tr id="gr_svn102_379"

><td id="379"><a href="#379">379</a></td></tr
><tr id="gr_svn102_380"

><td id="380"><a href="#380">380</a></td></tr
><tr id="gr_svn102_381"

><td id="381"><a href="#381">381</a></td></tr
><tr id="gr_svn102_382"

><td id="382"><a href="#382">382</a></td></tr
><tr id="gr_svn102_383"

><td id="383"><a href="#383">383</a></td></tr
><tr id="gr_svn102_384"

><td id="384"><a href="#384">384</a></td></tr
><tr id="gr_svn102_385"

><td id="385"><a href="#385">385</a></td></tr
><tr id="gr_svn102_386"

><td id="386"><a href="#386">386</a></td></tr
><tr id="gr_svn102_387"

><td id="387"><a href="#387">387</a></td></tr
><tr id="gr_svn102_388"

><td id="388"><a href="#388">388</a></td></tr
><tr id="gr_svn102_389"

><td id="389"><a href="#389">389</a></td></tr
><tr id="gr_svn102_390"

><td id="390"><a href="#390">390</a></td></tr
><tr id="gr_svn102_391"

><td id="391"><a href="#391">391</a></td></tr
><tr id="gr_svn102_392"

><td id="392"><a href="#392">392</a></td></tr
><tr id="gr_svn102_393"

><td id="393"><a href="#393">393</a></td></tr
><tr id="gr_svn102_394"

><td id="394"><a href="#394">394</a></td></tr
><tr id="gr_svn102_395"

><td id="395"><a href="#395">395</a></td></tr
><tr id="gr_svn102_396"

><td id="396"><a href="#396">396</a></td></tr
><tr id="gr_svn102_397"

><td id="397"><a href="#397">397</a></td></tr
><tr id="gr_svn102_398"

><td id="398"><a href="#398">398</a></td></tr
><tr id="gr_svn102_399"

><td id="399"><a href="#399">399</a></td></tr
><tr id="gr_svn102_400"

><td id="400"><a href="#400">400</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn102_1

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_2

><td class="source">// OpenTibia - an opensource roleplaying game<br></td></tr
><tr
id=sl_svn102_3

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_4

><td class="source">// <br></td></tr
><tr
id=sl_svn102_5

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_6

><td class="source">// This program is free software; you can redistribute it and/or<br></td></tr
><tr
id=sl_svn102_7

><td class="source">// modify it under the terms of the GNU General Public License<br></td></tr
><tr
id=sl_svn102_8

><td class="source">// as published by the Free Software Foundation; either version 2<br></td></tr
><tr
id=sl_svn102_9

><td class="source">// of the License, or (at your option) any later version.<br></td></tr
><tr
id=sl_svn102_10

><td class="source">// <br></td></tr
><tr
id=sl_svn102_11

><td class="source">// This program is distributed in the hope that it will be useful,<br></td></tr
><tr
id=sl_svn102_12

><td class="source">// but WITHOUT ANY WARRANTY; without even the implied warranty of<br></td></tr
><tr
id=sl_svn102_13

><td class="source">// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the<br></td></tr
><tr
id=sl_svn102_14

><td class="source">// GNU General Public License for more details.<br></td></tr
><tr
id=sl_svn102_15

><td class="source">//<br></td></tr
><tr
id=sl_svn102_16

><td class="source">// You should have received a copy of the GNU General Public License<br></td></tr
><tr
id=sl_svn102_17

><td class="source">// along with this program; if not, write to the Free Software Foundation,<br></td></tr
><tr
id=sl_svn102_18

><td class="source">// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.<br></td></tr
><tr
id=sl_svn102_19

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_20

><td class="source"><br></td></tr
><tr
id=sl_svn102_21

><td class="source">#ifndef __OTSERV_CONDITION_H__<br></td></tr
><tr
id=sl_svn102_22

><td class="source">#define __OTSERV_CONDITION_H__<br></td></tr
><tr
id=sl_svn102_23

><td class="source"><br></td></tr
><tr
id=sl_svn102_24

><td class="source">#include &quot;definitions.h&quot;<br></td></tr
><tr
id=sl_svn102_25

><td class="source">#include &quot;fileloader.h&quot;<br></td></tr
><tr
id=sl_svn102_26

><td class="source">#include &quot;enums.h&quot;<br></td></tr
><tr
id=sl_svn102_27

><td class="source"><br></td></tr
><tr
id=sl_svn102_28

><td class="source">#include &lt;list&gt;<br></td></tr
><tr
id=sl_svn102_29

><td class="source">#include &lt;vector&gt;<br></td></tr
><tr
id=sl_svn102_30

><td class="source"><br></td></tr
><tr
id=sl_svn102_31

><td class="source">class Creature;<br></td></tr
><tr
id=sl_svn102_32

><td class="source">class Player;<br></td></tr
><tr
id=sl_svn102_33

><td class="source">class PropStream;<br></td></tr
><tr
id=sl_svn102_34

><td class="source"><br></td></tr
><tr
id=sl_svn102_35

><td class="source">enum ConditionType_t {<br></td></tr
><tr
id=sl_svn102_36

><td class="source">	CONDITION_NONE          = 0,<br></td></tr
><tr
id=sl_svn102_37

><td class="source">	CONDITION_POISON        = 1 &lt;&lt; 0,<br></td></tr
><tr
id=sl_svn102_38

><td class="source">	CONDITION_FIRE          = 1 &lt;&lt; 1,<br></td></tr
><tr
id=sl_svn102_39

><td class="source">	CONDITION_ENERGY        = 1 &lt;&lt; 2,<br></td></tr
><tr
id=sl_svn102_40

><td class="source">	CONDITION_LIFEDRAIN     = 1 &lt;&lt; 3,<br></td></tr
><tr
id=sl_svn102_41

><td class="source">	CONDITION_HASTE         = 1 &lt;&lt; 4,<br></td></tr
><tr
id=sl_svn102_42

><td class="source">	CONDITION_PARALYZE		= 1 &lt;&lt; 5,<br></td></tr
><tr
id=sl_svn102_43

><td class="source">	CONDITION_OUTFIT        = 1 &lt;&lt; 6,<br></td></tr
><tr
id=sl_svn102_44

><td class="source">	CONDITION_INVISIBLE     = 1 &lt;&lt; 7,<br></td></tr
><tr
id=sl_svn102_45

><td class="source">	CONDITION_LIGHT         = 1 &lt;&lt; 8,<br></td></tr
><tr
id=sl_svn102_46

><td class="source">	CONDITION_MANASHIELD    = 1 &lt;&lt; 9,<br></td></tr
><tr
id=sl_svn102_47

><td class="source">	CONDITION_INFIGHT       = 1 &lt;&lt; 10,<br></td></tr
><tr
id=sl_svn102_48

><td class="source">	CONDITION_DRUNK         = 1 &lt;&lt; 11,<br></td></tr
><tr
id=sl_svn102_49

><td class="source">	CONDITION_YELL          = 1 &lt;&lt; 12,<br></td></tr
><tr
id=sl_svn102_50

><td class="source">	CONDITION_REGENERATION  = 1 &lt;&lt; 13,<br></td></tr
><tr
id=sl_svn102_51

><td class="source">#ifdef __PROTOCOL_76__<br></td></tr
><tr
id=sl_svn102_52

><td class="source">	CONDITION_SOUL          = 1 &lt;&lt; 14,<br></td></tr
><tr
id=sl_svn102_53

><td class="source">#endif // __PROTOCOL_76__<br></td></tr
><tr
id=sl_svn102_54

><td class="source">	CONDITION_MUTED         = 1 &lt;&lt; 15,<br></td></tr
><tr
id=sl_svn102_55

><td class="source">	CONDITION_ATTRIBUTES    = 1 &lt;&lt; 16,<br></td></tr
><tr
id=sl_svn102_56

><td class="source">	CONDITION_EXHAUST_COMBAT = 1 &lt;&lt; 17,<br></td></tr
><tr
id=sl_svn102_57

><td class="source">	CONDITION_EXHAUST_HEAL   = 1 &lt;&lt; 18,<br></td></tr
><tr
id=sl_svn102_58

><td class="source">	CONDITION_TRADE_MUTED    = 1 &lt;&lt; 19<br></td></tr
><tr
id=sl_svn102_59

><td class="source">};<br></td></tr
><tr
id=sl_svn102_60

><td class="source"><br></td></tr
><tr
id=sl_svn102_61

><td class="source">enum ConditionEnd_t{<br></td></tr
><tr
id=sl_svn102_62

><td class="source">	CONDITIONEND_CLEANUP,<br></td></tr
><tr
id=sl_svn102_63

><td class="source">	CONDITIONEND_DIE,<br></td></tr
><tr
id=sl_svn102_64

><td class="source">	CONDITIONEND_TICKS,<br></td></tr
><tr
id=sl_svn102_65

><td class="source">	CONDITIONEND_ABORT<br></td></tr
><tr
id=sl_svn102_66

><td class="source">};<br></td></tr
><tr
id=sl_svn102_67

><td class="source"><br></td></tr
><tr
id=sl_svn102_68

><td class="source">enum ConditionAttr_t{<br></td></tr
><tr
id=sl_svn102_69

><td class="source">	CONDITIONATTR_TYPE = 1,<br></td></tr
><tr
id=sl_svn102_70

><td class="source">	CONDITIONATTR_ID = 2,<br></td></tr
><tr
id=sl_svn102_71

><td class="source">	CONDITIONATTR_TICKS = 3,<br></td></tr
><tr
id=sl_svn102_72

><td class="source">	CONDITIONATTR_HEALTHTICKS = 4,<br></td></tr
><tr
id=sl_svn102_73

><td class="source">	CONDITIONATTR_HEALTHGAIN = 5,<br></td></tr
><tr
id=sl_svn102_74

><td class="source">	CONDITIONATTR_MANATICKS = 6,<br></td></tr
><tr
id=sl_svn102_75

><td class="source">	CONDITIONATTR_MANAGAIN = 7,<br></td></tr
><tr
id=sl_svn102_76

><td class="source">	CONDITIONATTR_DELAYED = 8,<br></td></tr
><tr
id=sl_svn102_77

><td class="source">	CONDITIONATTR_OWNER = 9,<br></td></tr
><tr
id=sl_svn102_78

><td class="source">	CONDITIONATTR_INTERVALDATA = 10,<br></td></tr
><tr
id=sl_svn102_79

><td class="source">	CONDITIONATTR_SPEEDDELTA = 11,<br></td></tr
><tr
id=sl_svn102_80

><td class="source">	CONDITIONATTR_FORMULA_MINA = 12,<br></td></tr
><tr
id=sl_svn102_81

><td class="source">	CONDITIONATTR_FORMULA_MINB = 13,<br></td></tr
><tr
id=sl_svn102_82

><td class="source">	CONDITIONATTR_FORMULA_MAXA = 14,<br></td></tr
><tr
id=sl_svn102_83

><td class="source">	CONDITIONATTR_FORMULA_MAXB = 15,<br></td></tr
><tr
id=sl_svn102_84

><td class="source">	CONDITIONATTR_LIGHTCOLOR = 16,<br></td></tr
><tr
id=sl_svn102_85

><td class="source">	CONDITIONATTR_LIGHTLEVEL = 17,<br></td></tr
><tr
id=sl_svn102_86

><td class="source">	CONDITIONATTR_LIGHTTICKS = 18,<br></td></tr
><tr
id=sl_svn102_87

><td class="source">	CONDITIONATTR_LIGHTINTERVAL = 19,<br></td></tr
><tr
id=sl_svn102_88

><td class="source">#ifdef __PROTOCOL_76__<br></td></tr
><tr
id=sl_svn102_89

><td class="source">	CONDITIONATTR_SOULTICKS = 20,<br></td></tr
><tr
id=sl_svn102_90

><td class="source">	CONDITIONATTR_SOULGAIN = 21,<br></td></tr
><tr
id=sl_svn102_91

><td class="source">#endif // __PROTOCOL_76__<br></td></tr
><tr
id=sl_svn102_92

><td class="source">	CONDITIONATTR_SKILLS = 22,<br></td></tr
><tr
id=sl_svn102_93

><td class="source">	CONDITIONATTR_STATS = 23,<br></td></tr
><tr
id=sl_svn102_94

><td class="source">	CONDITIONATTR_OUTFIT = 24,<br></td></tr
><tr
id=sl_svn102_95

><td class="source">	CONDITIONATTR_PERIODDAMAGE = 25,<br></td></tr
><tr
id=sl_svn102_96

><td class="source">	CONDITIONATTR_SKILLSPERCENT = 26,<br></td></tr
><tr
id=sl_svn102_97

><td class="source"><br></td></tr
><tr
id=sl_svn102_98

><td class="source">	//reserved for serialization<br></td></tr
><tr
id=sl_svn102_99

><td class="source">	CONDITIONATTR_END      = 254<br></td></tr
><tr
id=sl_svn102_100

><td class="source">};<br></td></tr
><tr
id=sl_svn102_101

><td class="source"><br></td></tr
><tr
id=sl_svn102_102

><td class="source">struct IntervalInfo{<br></td></tr
><tr
id=sl_svn102_103

><td class="source">	int32_t timeLeft;<br></td></tr
><tr
id=sl_svn102_104

><td class="source">	int32_t value;<br></td></tr
><tr
id=sl_svn102_105

><td class="source">	int32_t interval;<br></td></tr
><tr
id=sl_svn102_106

><td class="source">};<br></td></tr
><tr
id=sl_svn102_107

><td class="source"><br></td></tr
><tr
id=sl_svn102_108

><td class="source">class Condition{<br></td></tr
><tr
id=sl_svn102_109

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_110

><td class="source">	Condition(ConditionId_t _id, ConditionType_t _type, int32_t _ticks);<br></td></tr
><tr
id=sl_svn102_111

><td class="source">	virtual ~Condition(){};<br></td></tr
><tr
id=sl_svn102_112

><td class="source"><br></td></tr
><tr
id=sl_svn102_113

><td class="source">	virtual bool startCondition(Creature* creature);<br></td></tr
><tr
id=sl_svn102_114

><td class="source">	virtual bool executeCondition(Creature* creature, int32_t interval);<br></td></tr
><tr
id=sl_svn102_115

><td class="source">	virtual void endCondition(Creature* creature, ConditionEnd_t reason) = 0;<br></td></tr
><tr
id=sl_svn102_116

><td class="source">	virtual void addCondition(Creature* creature, const Condition* condition) = 0;<br></td></tr
><tr
id=sl_svn102_117

><td class="source">	virtual uint32_t getIcons() const;<br></td></tr
><tr
id=sl_svn102_118

><td class="source">	ConditionId_t getId() const {return id;}<br></td></tr
><tr
id=sl_svn102_119

><td class="source"><br></td></tr
><tr
id=sl_svn102_120

><td class="source">	virtual Condition* clone() const = 0;<br></td></tr
><tr
id=sl_svn102_121

><td class="source"><br></td></tr
><tr
id=sl_svn102_122

><td class="source">	ConditionType_t getType() const { return conditionType;}<br></td></tr
><tr
id=sl_svn102_123

><td class="source">	int64_t getEndTime() const {return endTime;}<br></td></tr
><tr
id=sl_svn102_124

><td class="source">	int32_t getTicks() const { return ticks; }<br></td></tr
><tr
id=sl_svn102_125

><td class="source">	void setTicks(int32_t newTicks);<br></td></tr
><tr
id=sl_svn102_126

><td class="source"><br></td></tr
><tr
id=sl_svn102_127

><td class="source">	static bool canBeAggressive(ConditionType_t type);<br></td></tr
><tr
id=sl_svn102_128

><td class="source">	static Condition* createCondition(ConditionId_t _id, ConditionType_t _type, int32_t ticks, int32_t param);<br></td></tr
><tr
id=sl_svn102_129

><td class="source">	static Condition* createCondition(PropStream&amp; propStream);<br></td></tr
><tr
id=sl_svn102_130

><td class="source"><br></td></tr
><tr
id=sl_svn102_131

><td class="source">	virtual bool setParam(ConditionParam_t param, int32_t value);<br></td></tr
><tr
id=sl_svn102_132

><td class="source"><br></td></tr
><tr
id=sl_svn102_133

><td class="source">	//serialization<br></td></tr
><tr
id=sl_svn102_134

><td class="source">	bool unserialize(PropStream&amp; propStream);<br></td></tr
><tr
id=sl_svn102_135

><td class="source">	virtual bool serialize(PropWriteStream&amp; propWriteStream);<br></td></tr
><tr
id=sl_svn102_136

><td class="source">	virtual bool unserializeProp(ConditionAttr_t attr, PropStream&amp; propStream);<br></td></tr
><tr
id=sl_svn102_137

><td class="source"><br></td></tr
><tr
id=sl_svn102_138

><td class="source">	bool isPersistent() const;<br></td></tr
><tr
id=sl_svn102_139

><td class="source"><br></td></tr
><tr
id=sl_svn102_140

><td class="source">protected:<br></td></tr
><tr
id=sl_svn102_141

><td class="source">	ConditionId_t id;<br></td></tr
><tr
id=sl_svn102_142

><td class="source">	int32_t ticks;<br></td></tr
><tr
id=sl_svn102_143

><td class="source">	int64_t endTime;<br></td></tr
><tr
id=sl_svn102_144

><td class="source">	ConditionType_t conditionType;<br></td></tr
><tr
id=sl_svn102_145

><td class="source"><br></td></tr
><tr
id=sl_svn102_146

><td class="source">	virtual bool updateCondition(const Condition* addCondition);<br></td></tr
><tr
id=sl_svn102_147

><td class="source">};<br></td></tr
><tr
id=sl_svn102_148

><td class="source"><br></td></tr
><tr
id=sl_svn102_149

><td class="source">class ConditionGeneric: public Condition<br></td></tr
><tr
id=sl_svn102_150

><td class="source">{<br></td></tr
><tr
id=sl_svn102_151

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_152

><td class="source">	ConditionGeneric(ConditionId_t _id, ConditionType_t _type, int32_t _ticks);<br></td></tr
><tr
id=sl_svn102_153

><td class="source">	virtual ~ConditionGeneric(){};<br></td></tr
><tr
id=sl_svn102_154

><td class="source"><br></td></tr
><tr
id=sl_svn102_155

><td class="source">	virtual bool startCondition(Creature* creature);<br></td></tr
><tr
id=sl_svn102_156

><td class="source">	virtual bool executeCondition(Creature* creature, int32_t interval);<br></td></tr
><tr
id=sl_svn102_157

><td class="source">	virtual void endCondition(Creature* creature, ConditionEnd_t reason);<br></td></tr
><tr
id=sl_svn102_158

><td class="source">	virtual void addCondition(Creature* creature, const Condition* condition);<br></td></tr
><tr
id=sl_svn102_159

><td class="source">	virtual uint32_t getIcons() const;<br></td></tr
><tr
id=sl_svn102_160

><td class="source"><br></td></tr
><tr
id=sl_svn102_161

><td class="source">	virtual ConditionGeneric* clone()  const { return new ConditionGeneric(*this); }<br></td></tr
><tr
id=sl_svn102_162

><td class="source">};<br></td></tr
><tr
id=sl_svn102_163

><td class="source"><br></td></tr
><tr
id=sl_svn102_164

><td class="source">class ConditionManaShield : public ConditionGeneric<br></td></tr
><tr
id=sl_svn102_165

><td class="source">{<br></td></tr
><tr
id=sl_svn102_166

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_167

><td class="source">	ConditionManaShield(ConditionId_t _id, ConditionType_t _type, int32_t _ticks) : ConditionGeneric(_id, _type, _ticks) {};<br></td></tr
><tr
id=sl_svn102_168

><td class="source">	virtual ~ConditionManaShield(){};<br></td></tr
><tr
id=sl_svn102_169

><td class="source"><br></td></tr
><tr
id=sl_svn102_170

><td class="source">	virtual ConditionManaShield* clone()  const { return new ConditionManaShield(*this); }<br></td></tr
><tr
id=sl_svn102_171

><td class="source">};<br></td></tr
><tr
id=sl_svn102_172

><td class="source"><br></td></tr
><tr
id=sl_svn102_173

><td class="source">class ConditionAttributes : public ConditionGeneric<br></td></tr
><tr
id=sl_svn102_174

><td class="source">{<br></td></tr
><tr
id=sl_svn102_175

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_176

><td class="source">	ConditionAttributes(ConditionId_t _id, ConditionType_t _type, int32_t _ticks);<br></td></tr
><tr
id=sl_svn102_177

><td class="source">	virtual ~ConditionAttributes(){};<br></td></tr
><tr
id=sl_svn102_178

><td class="source"><br></td></tr
><tr
id=sl_svn102_179

><td class="source">	virtual bool startCondition(Creature* creature);<br></td></tr
><tr
id=sl_svn102_180

><td class="source">	virtual bool executeCondition(Creature* creature, int32_t interval);<br></td></tr
><tr
id=sl_svn102_181

><td class="source">	virtual void endCondition(Creature* creature, ConditionEnd_t reason);<br></td></tr
><tr
id=sl_svn102_182

><td class="source">	virtual void addCondition(Creature* creature, const Condition* condition);<br></td></tr
><tr
id=sl_svn102_183

><td class="source"><br></td></tr
><tr
id=sl_svn102_184

><td class="source">	virtual ConditionAttributes* clone()  const { return new ConditionAttributes(*this); }<br></td></tr
><tr
id=sl_svn102_185

><td class="source"><br></td></tr
><tr
id=sl_svn102_186

><td class="source">	virtual bool setParam(ConditionParam_t param, int32_t value);<br></td></tr
><tr
id=sl_svn102_187

><td class="source"><br></td></tr
><tr
id=sl_svn102_188

><td class="source">	//serialization<br></td></tr
><tr
id=sl_svn102_189

><td class="source">	virtual bool serialize(PropWriteStream&amp; propWriteStream);<br></td></tr
><tr
id=sl_svn102_190

><td class="source">	virtual bool unserializeProp(ConditionAttr_t attr, PropStream&amp; propStream);<br></td></tr
><tr
id=sl_svn102_191

><td class="source"><br></td></tr
><tr
id=sl_svn102_192

><td class="source">protected:<br></td></tr
><tr
id=sl_svn102_193

><td class="source">	int32_t skills[SKILL_LAST + 1];<br></td></tr
><tr
id=sl_svn102_194

><td class="source">	int32_t skillsPercent[SKILL_LAST + 1];<br></td></tr
><tr
id=sl_svn102_195

><td class="source">	int32_t stats[STAT_LAST + 1];<br></td></tr
><tr
id=sl_svn102_196

><td class="source">	int32_t statsPercent[STAT_LAST + 1];<br></td></tr
><tr
id=sl_svn102_197

><td class="source">	int32_t currentSkill;<br></td></tr
><tr
id=sl_svn102_198

><td class="source">	int32_t currentStat;<br></td></tr
><tr
id=sl_svn102_199

><td class="source"><br></td></tr
><tr
id=sl_svn102_200

><td class="source">	void updatePercentStats(Player* player);<br></td></tr
><tr
id=sl_svn102_201

><td class="source">	void updateStats(Player* player);<br></td></tr
><tr
id=sl_svn102_202

><td class="source">	void updatePercentSkills(Player* player);<br></td></tr
><tr
id=sl_svn102_203

><td class="source">	void updateSkills(Player* player);<br></td></tr
><tr
id=sl_svn102_204

><td class="source">};<br></td></tr
><tr
id=sl_svn102_205

><td class="source"><br></td></tr
><tr
id=sl_svn102_206

><td class="source">class ConditionRegeneration : public ConditionGeneric<br></td></tr
><tr
id=sl_svn102_207

><td class="source">{<br></td></tr
><tr
id=sl_svn102_208

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_209

><td class="source">	ConditionRegeneration(ConditionId_t _id, ConditionType_t _type, int32_t _ticks);<br></td></tr
><tr
id=sl_svn102_210

><td class="source">	virtual ~ConditionRegeneration(){};<br></td></tr
><tr
id=sl_svn102_211

><td class="source">	virtual void addCondition(Creature* creature, const Condition* addCondition);<br></td></tr
><tr
id=sl_svn102_212

><td class="source">	virtual bool executeCondition(Creature* creature, int32_t interval);<br></td></tr
><tr
id=sl_svn102_213

><td class="source"><br></td></tr
><tr
id=sl_svn102_214

><td class="source">	virtual ConditionRegeneration* clone()  const { return new ConditionRegeneration(*this); }<br></td></tr
><tr
id=sl_svn102_215

><td class="source"><br></td></tr
><tr
id=sl_svn102_216

><td class="source">	virtual bool setParam(ConditionParam_t param, int32_t value);<br></td></tr
><tr
id=sl_svn102_217

><td class="source"><br></td></tr
><tr
id=sl_svn102_218

><td class="source">	//serialization<br></td></tr
><tr
id=sl_svn102_219

><td class="source">	virtual bool serialize(PropWriteStream&amp; propWriteStream);<br></td></tr
><tr
id=sl_svn102_220

><td class="source">	virtual bool unserializeProp(ConditionAttr_t attr, PropStream&amp; propStream);<br></td></tr
><tr
id=sl_svn102_221

><td class="source"><br></td></tr
><tr
id=sl_svn102_222

><td class="source">protected:<br></td></tr
><tr
id=sl_svn102_223

><td class="source">	uint32_t internalHealthTicks;<br></td></tr
><tr
id=sl_svn102_224

><td class="source">	uint32_t internalManaTicks;<br></td></tr
><tr
id=sl_svn102_225

><td class="source"><br></td></tr
><tr
id=sl_svn102_226

><td class="source">	uint32_t healthTicks;<br></td></tr
><tr
id=sl_svn102_227

><td class="source">	uint32_t manaTicks;<br></td></tr
><tr
id=sl_svn102_228

><td class="source">	uint32_t healthGain;<br></td></tr
><tr
id=sl_svn102_229

><td class="source">	uint32_t manaGain;<br></td></tr
><tr
id=sl_svn102_230

><td class="source">};<br></td></tr
><tr
id=sl_svn102_231

><td class="source"><br></td></tr
><tr
id=sl_svn102_232

><td class="source">#ifdef __PROTOCOL_76__<br></td></tr
><tr
id=sl_svn102_233

><td class="source">class ConditionSoul : public ConditionGeneric<br></td></tr
><tr
id=sl_svn102_234

><td class="source">{<br></td></tr
><tr
id=sl_svn102_235

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_236

><td class="source">	ConditionSoul(ConditionId_t _id, ConditionType_t _type, int32_t _ticks);<br></td></tr
><tr
id=sl_svn102_237

><td class="source">	virtual ~ConditionSoul(){};<br></td></tr
><tr
id=sl_svn102_238

><td class="source">	virtual void addCondition(Creature* creature, const Condition* addCondition);<br></td></tr
><tr
id=sl_svn102_239

><td class="source">	virtual bool executeCondition(Creature* creature, int32_t interval);<br></td></tr
><tr
id=sl_svn102_240

><td class="source"><br></td></tr
><tr
id=sl_svn102_241

><td class="source">	virtual ConditionSoul* clone()  const { return new ConditionSoul(*this); }<br></td></tr
><tr
id=sl_svn102_242

><td class="source"><br></td></tr
><tr
id=sl_svn102_243

><td class="source">	virtual bool setParam(ConditionParam_t param, int32_t value);<br></td></tr
><tr
id=sl_svn102_244

><td class="source"><br></td></tr
><tr
id=sl_svn102_245

><td class="source">	//serialization<br></td></tr
><tr
id=sl_svn102_246

><td class="source">	virtual bool serialize(PropWriteStream&amp; propWriteStream);<br></td></tr
><tr
id=sl_svn102_247

><td class="source">	virtual bool unserializeProp(ConditionAttr_t attr, PropStream&amp; propStream);<br></td></tr
><tr
id=sl_svn102_248

><td class="source"><br></td></tr
><tr
id=sl_svn102_249

><td class="source">protected:<br></td></tr
><tr
id=sl_svn102_250

><td class="source">	uint32_t internalSoulTicks;<br></td></tr
><tr
id=sl_svn102_251

><td class="source">	uint32_t soulTicks;<br></td></tr
><tr
id=sl_svn102_252

><td class="source">	uint32_t soulGain;<br></td></tr
><tr
id=sl_svn102_253

><td class="source">};<br></td></tr
><tr
id=sl_svn102_254

><td class="source">#endif // __PROTOCOL_76__<br></td></tr
><tr
id=sl_svn102_255

><td class="source"><br></td></tr
><tr
id=sl_svn102_256

><td class="source">class ConditionInvisible: public ConditionGeneric<br></td></tr
><tr
id=sl_svn102_257

><td class="source">{<br></td></tr
><tr
id=sl_svn102_258

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_259

><td class="source">	ConditionInvisible(ConditionId_t _id, ConditionType_t _type, int32_t _ticks);<br></td></tr
><tr
id=sl_svn102_260

><td class="source">	virtual ~ConditionInvisible(){};<br></td></tr
><tr
id=sl_svn102_261

><td class="source"><br></td></tr
><tr
id=sl_svn102_262

><td class="source">	virtual bool startCondition(Creature* creature);<br></td></tr
><tr
id=sl_svn102_263

><td class="source">	virtual void endCondition(Creature* creature, ConditionEnd_t reason);<br></td></tr
><tr
id=sl_svn102_264

><td class="source"><br></td></tr
><tr
id=sl_svn102_265

><td class="source">	virtual ConditionInvisible* clone()  const { return new ConditionInvisible(*this); }<br></td></tr
><tr
id=sl_svn102_266

><td class="source">};<br></td></tr
><tr
id=sl_svn102_267

><td class="source"><br></td></tr
><tr
id=sl_svn102_268

><td class="source">class ConditionDamage: public Condition<br></td></tr
><tr
id=sl_svn102_269

><td class="source">{<br></td></tr
><tr
id=sl_svn102_270

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_271

><td class="source">	ConditionDamage(ConditionId_t _id, ConditionType_t _type);<br></td></tr
><tr
id=sl_svn102_272

><td class="source">	virtual ~ConditionDamage(){};<br></td></tr
><tr
id=sl_svn102_273

><td class="source"><br></td></tr
><tr
id=sl_svn102_274

><td class="source">	static void generateDamageList(int32_t amount, int32_t start, std::list&lt;int32_t&gt;&amp; list);<br></td></tr
><tr
id=sl_svn102_275

><td class="source"><br></td></tr
><tr
id=sl_svn102_276

><td class="source">	virtual bool startCondition(Creature* creature);<br></td></tr
><tr
id=sl_svn102_277

><td class="source">	virtual bool executeCondition(Creature* creature, int32_t interval);<br></td></tr
><tr
id=sl_svn102_278

><td class="source">	virtual void endCondition(Creature* creature, ConditionEnd_t reason);<br></td></tr
><tr
id=sl_svn102_279

><td class="source">	virtual void addCondition(Creature* creature, const Condition* condition);<br></td></tr
><tr
id=sl_svn102_280

><td class="source">	virtual uint32_t getIcons() const;<br></td></tr
><tr
id=sl_svn102_281

><td class="source"><br></td></tr
><tr
id=sl_svn102_282

><td class="source">	virtual ConditionDamage* clone()  const { return new ConditionDamage(*this); }<br></td></tr
><tr
id=sl_svn102_283

><td class="source"><br></td></tr
><tr
id=sl_svn102_284

><td class="source">	virtual bool setParam(ConditionParam_t param, int32_t value);<br></td></tr
><tr
id=sl_svn102_285

><td class="source"><br></td></tr
><tr
id=sl_svn102_286

><td class="source">	bool addDamage(int32_t rounds, int32_t time, int32_t value);<br></td></tr
><tr
id=sl_svn102_287

><td class="source">	bool doForceUpdate() const { return forceUpdate;}<br></td></tr
><tr
id=sl_svn102_288

><td class="source">	int32_t getTotalDamage() const;<br></td></tr
><tr
id=sl_svn102_289

><td class="source"><br></td></tr
><tr
id=sl_svn102_290

><td class="source">	//serialization<br></td></tr
><tr
id=sl_svn102_291

><td class="source">	virtual bool serialize(PropWriteStream&amp; propWriteStream);<br></td></tr
><tr
id=sl_svn102_292

><td class="source">	virtual bool unserializeProp(ConditionAttr_t attr, PropStream&amp; propStream);<br></td></tr
><tr
id=sl_svn102_293

><td class="source"><br></td></tr
><tr
id=sl_svn102_294

><td class="source">protected:<br></td></tr
><tr
id=sl_svn102_295

><td class="source">	int32_t maxDamage;<br></td></tr
><tr
id=sl_svn102_296

><td class="source">	int32_t minDamage;<br></td></tr
><tr
id=sl_svn102_297

><td class="source">	int32_t startDamage;<br></td></tr
><tr
id=sl_svn102_298

><td class="source">	int32_t periodDamage;<br></td></tr
><tr
id=sl_svn102_299

><td class="source">	int32_t periodDamageTick;<br></td></tr
><tr
id=sl_svn102_300

><td class="source">	int32_t tickInterval;<br></td></tr
><tr
id=sl_svn102_301

><td class="source"><br></td></tr
><tr
id=sl_svn102_302

><td class="source">	bool forceUpdate;<br></td></tr
><tr
id=sl_svn102_303

><td class="source">	bool delayed;<br></td></tr
><tr
id=sl_svn102_304

><td class="source">	uint32_t owner;<br></td></tr
><tr
id=sl_svn102_305

><td class="source"><br></td></tr
><tr
id=sl_svn102_306

><td class="source">	bool init();<br></td></tr
><tr
id=sl_svn102_307

><td class="source"><br></td></tr
><tr
id=sl_svn102_308

><td class="source">	typedef std::list&lt;IntervalInfo&gt; DamageList;<br></td></tr
><tr
id=sl_svn102_309

><td class="source">	DamageList damageList;<br></td></tr
><tr
id=sl_svn102_310

><td class="source"><br></td></tr
><tr
id=sl_svn102_311

><td class="source">	bool getNextDamage(int32_t&amp; damage);<br></td></tr
><tr
id=sl_svn102_312

><td class="source">	bool doDamage(Creature* creature, int32_t damage);<br></td></tr
><tr
id=sl_svn102_313

><td class="source">	bool updateCondition(const ConditionDamage* addCondition);<br></td></tr
><tr
id=sl_svn102_314

><td class="source">};<br></td></tr
><tr
id=sl_svn102_315

><td class="source"><br></td></tr
><tr
id=sl_svn102_316

><td class="source">class ConditionSpeed: public Condition<br></td></tr
><tr
id=sl_svn102_317

><td class="source">{<br></td></tr
><tr
id=sl_svn102_318

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_319

><td class="source">	ConditionSpeed(ConditionId_t _id, ConditionType_t _type, int32_t _ticks, int32_t changeSpeed);<br></td></tr
><tr
id=sl_svn102_320

><td class="source">	virtual ~ConditionSpeed(){};<br></td></tr
><tr
id=sl_svn102_321

><td class="source"><br></td></tr
><tr
id=sl_svn102_322

><td class="source">	virtual bool startCondition(Creature* creature);<br></td></tr
><tr
id=sl_svn102_323

><td class="source">	virtual bool executeCondition(Creature* creature, int32_t interval);<br></td></tr
><tr
id=sl_svn102_324

><td class="source">	virtual void endCondition(Creature* creature, ConditionEnd_t reason);<br></td></tr
><tr
id=sl_svn102_325

><td class="source">	virtual void addCondition(Creature* creature, const Condition* condition);<br></td></tr
><tr
id=sl_svn102_326

><td class="source">	virtual uint32_t getIcons() const;<br></td></tr
><tr
id=sl_svn102_327

><td class="source"><br></td></tr
><tr
id=sl_svn102_328

><td class="source">	virtual ConditionSpeed* clone()  const { return new ConditionSpeed(*this); }<br></td></tr
><tr
id=sl_svn102_329

><td class="source"><br></td></tr
><tr
id=sl_svn102_330

><td class="source">	virtual bool setParam(ConditionParam_t param, int32_t value);<br></td></tr
><tr
id=sl_svn102_331

><td class="source"><br></td></tr
><tr
id=sl_svn102_332

><td class="source">	void setFormulaVars(float _mina, float _minb, float _maxa, float _maxb);<br></td></tr
><tr
id=sl_svn102_333

><td class="source"><br></td></tr
><tr
id=sl_svn102_334

><td class="source">	//serialization<br></td></tr
><tr
id=sl_svn102_335

><td class="source">	virtual bool serialize(PropWriteStream&amp; propWriteStream);<br></td></tr
><tr
id=sl_svn102_336

><td class="source">	virtual bool unserializeProp(ConditionAttr_t attr, PropStream&amp; propStream);<br></td></tr
><tr
id=sl_svn102_337

><td class="source"><br></td></tr
><tr
id=sl_svn102_338

><td class="source">protected:<br></td></tr
><tr
id=sl_svn102_339

><td class="source">	void getFormulaValues(int32_t var, int32_t&amp; min, int32_t&amp; max) const;<br></td></tr
><tr
id=sl_svn102_340

><td class="source"><br></td></tr
><tr
id=sl_svn102_341

><td class="source">	int32_t speedDelta;<br></td></tr
><tr
id=sl_svn102_342

><td class="source"><br></td></tr
><tr
id=sl_svn102_343

><td class="source">	//formula variables<br></td></tr
><tr
id=sl_svn102_344

><td class="source">	float mina;<br></td></tr
><tr
id=sl_svn102_345

><td class="source">	float minb;<br></td></tr
><tr
id=sl_svn102_346

><td class="source">	float maxa;<br></td></tr
><tr
id=sl_svn102_347

><td class="source">	float maxb;<br></td></tr
><tr
id=sl_svn102_348

><td class="source">};<br></td></tr
><tr
id=sl_svn102_349

><td class="source"><br></td></tr
><tr
id=sl_svn102_350

><td class="source">class ConditionOutfit: public Condition<br></td></tr
><tr
id=sl_svn102_351

><td class="source">{<br></td></tr
><tr
id=sl_svn102_352

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_353

><td class="source">	ConditionOutfit(ConditionId_t _id, ConditionType_t _type, int32_t _ticks);<br></td></tr
><tr
id=sl_svn102_354

><td class="source">	virtual ~ConditionOutfit(){};<br></td></tr
><tr
id=sl_svn102_355

><td class="source"><br></td></tr
><tr
id=sl_svn102_356

><td class="source">	virtual bool startCondition(Creature* creature);<br></td></tr
><tr
id=sl_svn102_357

><td class="source">	virtual bool executeCondition(Creature* creature, int32_t interval);<br></td></tr
><tr
id=sl_svn102_358

><td class="source">	virtual void endCondition(Creature* creature, ConditionEnd_t reason);<br></td></tr
><tr
id=sl_svn102_359

><td class="source">	virtual void addCondition(Creature* creature, const Condition* condition);<br></td></tr
><tr
id=sl_svn102_360

><td class="source"><br></td></tr
><tr
id=sl_svn102_361

><td class="source">	virtual ConditionOutfit* clone()  const { return new ConditionOutfit(*this); }<br></td></tr
><tr
id=sl_svn102_362

><td class="source"><br></td></tr
><tr
id=sl_svn102_363

><td class="source">	void addOutfit(Outfit_t outfit);<br></td></tr
><tr
id=sl_svn102_364

><td class="source"><br></td></tr
><tr
id=sl_svn102_365

><td class="source">	//serialization<br></td></tr
><tr
id=sl_svn102_366

><td class="source">	virtual bool serialize(PropWriteStream&amp; propWriteStream);<br></td></tr
><tr
id=sl_svn102_367

><td class="source">	virtual bool unserializeProp(ConditionAttr_t attr, PropStream&amp; propStream);<br></td></tr
><tr
id=sl_svn102_368

><td class="source"><br></td></tr
><tr
id=sl_svn102_369

><td class="source">protected:<br></td></tr
><tr
id=sl_svn102_370

><td class="source">	std::vector&lt;Outfit_t&gt; outfits;<br></td></tr
><tr
id=sl_svn102_371

><td class="source"><br></td></tr
><tr
id=sl_svn102_372

><td class="source">	void changeOutfit(Creature* creature, int32_t index = -1);<br></td></tr
><tr
id=sl_svn102_373

><td class="source">};<br></td></tr
><tr
id=sl_svn102_374

><td class="source"><br></td></tr
><tr
id=sl_svn102_375

><td class="source">class ConditionLight: public Condition<br></td></tr
><tr
id=sl_svn102_376

><td class="source">{<br></td></tr
><tr
id=sl_svn102_377

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_378

><td class="source">	ConditionLight(ConditionId_t _id, ConditionType_t _type, int32_t _ticks, int32_t _lightlevel, int32_t _lightcolor);<br></td></tr
><tr
id=sl_svn102_379

><td class="source">	virtual ~ConditionLight(){};<br></td></tr
><tr
id=sl_svn102_380

><td class="source"><br></td></tr
><tr
id=sl_svn102_381

><td class="source">	virtual bool startCondition(Creature* creature);<br></td></tr
><tr
id=sl_svn102_382

><td class="source">	virtual bool executeCondition(Creature* creature, int32_t interval);<br></td></tr
><tr
id=sl_svn102_383

><td class="source">	virtual void endCondition(Creature* creature, ConditionEnd_t reason);<br></td></tr
><tr
id=sl_svn102_384

><td class="source">	virtual void addCondition(Creature* creature, const Condition* addCondition);<br></td></tr
><tr
id=sl_svn102_385

><td class="source"><br></td></tr
><tr
id=sl_svn102_386

><td class="source">	virtual ConditionLight* clone()  const { return new ConditionLight(*this); }<br></td></tr
><tr
id=sl_svn102_387

><td class="source"><br></td></tr
><tr
id=sl_svn102_388

><td class="source">	virtual bool setParam(ConditionParam_t param, int32_t value);<br></td></tr
><tr
id=sl_svn102_389

><td class="source"><br></td></tr
><tr
id=sl_svn102_390

><td class="source">	//serialization<br></td></tr
><tr
id=sl_svn102_391

><td class="source">	virtual bool serialize(PropWriteStream&amp; propWriteStream);<br></td></tr
><tr
id=sl_svn102_392

><td class="source">	virtual bool unserializeProp(ConditionAttr_t attr, PropStream&amp; propStream);<br></td></tr
><tr
id=sl_svn102_393

><td class="source"><br></td></tr
><tr
id=sl_svn102_394

><td class="source">protected:<br></td></tr
><tr
id=sl_svn102_395

><td class="source">	LightInfo lightInfo;<br></td></tr
><tr
id=sl_svn102_396

><td class="source">	uint32_t internalLightTicks;<br></td></tr
><tr
id=sl_svn102_397

><td class="source">	uint32_t lightChangeInterval;<br></td></tr
><tr
id=sl_svn102_398

><td class="source">};<br></td></tr
><tr
id=sl_svn102_399

><td class="source"><br></td></tr
><tr
id=sl_svn102_400

><td class="source">#endif<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn102_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn102_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/avesta74/source/detail?spec=svn102&amp;r=96">r96</a>
 by r...@ymail.com
 on Sep 28, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=96&amp;format=side&amp;path=/trunk/src/condition.h&amp;old_path=/trunk/src/condition.h&amp;old=91">Diff</a>
 </div>
 <pre>minor fixes</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/avesta74/source/detail?r=96&spec=svn102';
 var publish_url = '/p/avesta74/source/detail?r=96&spec=svn102#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/misc/schema.sqlite');
 changed_urls.push('/p/avesta74/source/browse/trunk/misc/schema.sqlite?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/combat.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/combat.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/condition.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/condition.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/condition.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/condition.h?r\x3d96\x26spec\x3dsvn102');
 
 var selected_path = '/trunk/src/condition.h';
 
 
 changed_paths.push('/trunk/src/creature.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creature.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/creature.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creature.h?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/item.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/item.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/item.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/item.h?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/items.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/items.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/items.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/items.h?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/luascript.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/luascript.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/movement.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/movement.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/npc.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/npc.h?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/player.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/player.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/player.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/player.h?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/spells.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/spells.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/vocation.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/vocation.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/vocation.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/vocation.h?r\x3d96\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/weapons.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/weapons.cpp?r\x3d96\x26spec\x3dsvn102');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/avesta74/source/browse/trunk/misc/schema.sqlite?r=96&amp;spec=svn102"
 
 >/trunk/misc/schema.sqlite</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/combat.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/combat.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/condition.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/condition.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/condition.h?r=96&amp;spec=svn102"
 selected="selected"
 >/trunk/src/condition.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creature.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/creature.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creature.h?r=96&amp;spec=svn102"
 
 >/trunk/src/creature.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/item.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/item.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/item.h?r=96&amp;spec=svn102"
 
 >/trunk/src/item.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/items.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/items.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/items.h?r=96&amp;spec=svn102"
 
 >/trunk/src/items.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/luascript.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/luascript.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/movement.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/movement.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/npc.h?r=96&amp;spec=svn102"
 
 >/trunk/src/npc.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/player.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/player.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/player.h?r=96&amp;spec=svn102"
 
 >/trunk/src/player.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/spells.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/spells.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/vocation.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/vocation.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/vocation.h?r=96&amp;spec=svn102"
 
 >/trunk/src/vocation.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/weapons.cpp?r=96&amp;spec=svn102"
 
 >/trunk/src/weapons.cpp</option>
 
 </select>
 </td></tr></table>
 
 
 



 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/avesta74/source/detail?spec=svn102&r=91">r91</a>
 by r...@ymail.com
 on Jul 17, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=91&amp;format=side&amp;path=/trunk/src/condition.h&amp;old_path=/trunk/src/condition.h&amp;old=55">Diff</a>
 <br>
 <pre class="ifOpened">compilation fix and some minor changes</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/avesta74/source/detail?spec=svn102&r=55">r55</a>
 by r...@ymail.com
 on Jul 10, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=55&amp;format=side&amp;path=/trunk/src/condition.h&amp;old_path=/trunk/src/condition.h&amp;old=54">Diff</a>
 <br>
 <pre class="ifOpened">[No log message]</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/avesta74/source/detail?spec=svn102&r=54">r54</a>
 by r...@ymail.com
 on Jul 10, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=54&amp;format=side&amp;path=/trunk/src/condition.h&amp;old_path=/trunk/src/condition.h&amp;old=52">Diff</a>
 <br>
 <pre class="ifOpened">some chat changes</pre>
 </div>
 
 
 <a href="/p/avesta74/source/list?path=/trunk/src/condition.h&start=96">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 13006 bytes,
 400 lines</div>
 
 <div><a href="//avesta74.googlecode.com/svn/trunk/src/condition.h">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/kibbles.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn102': '/trunk/src/condition.h'}
 codereviews = CR_controller.setup(
 {"relativeBaseUrl": "", "projectHomeUrl": "/p/avesta74", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/13997016681179179006", "profileUrl": "/u/108692122734644646415/", "loggedInUserEmail": "jose.guitian@coremain.com", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "projectName": "avesta74", "domainName": null, "token": "ABZ6GAc48pPeeiokNVgoVVaRWbqZUlxtZw:1406096408677"}, '', 'svn102', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/ph_core.js"></script>
 
 
 
 
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 </body>
</html>
