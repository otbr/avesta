



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 (function(){(function(){function c(a){this.t={};this.tick=function(a,b,c){b=void 0!=c?c:(new Date).getTime();this.t[a]=b;if(void 0==c)try{window.console.timeStamp("CSI/"+a)}catch(d){}};this.tick("start",null,a)}var a;window.performance&&(a=window.performance.timing);var b=a?new c(a.responseStart):new c;window.jstiming={Timer:c,load:b};a&&(b=a.navigationStart,a=a.responseStart,0<b&&a>=b&&(window.jstiming.srt=a-b));try{a=null,window.chrome&&window.chrome.csi&&(a=Math.floor(window.chrome.csi().pageT)),null==a&&
window.gtbExternal&&(a=window.gtbExternal.pageT()),null==a&&window.external&&(a=window.external.pageT),a&&(window.jstiming.pt=a)}catch(d){}})();})();

 
 
 
 
 var codesite_token = "ABZ6GAewZ-W1wLA55ryFhn07SBW5fDT79g:1406096398820";
 
 
 var CS_env = {"projectName": "avesta74", "loggedInUserEmail": "jose.guitian@coremain.com", "profileUrl": "/u/108692122734644646415/", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/13997016681179179006", "token": "ABZ6GAewZ-W1wLA55ryFhn07SBW5fDT79g:1406096398820", "projectHomeUrl": "/p/avesta74", "relativeBaseUrl": "", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "domainName": null};
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
 
 
 <title>commands.cpp - 
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
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Favesta74%2Fsource%2Fbrowse%2Ftrunk%2Fsrc%2Fcommands.cpp" 
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
 <span id="crumb_links" class="ifClosed"><a href="/p/avesta74/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/avesta74/source/browse/trunk/src/">src</a><span class="sp">/&nbsp;</span>commands.cpp</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/avesta74/source/browse/trunk/src/commands.cpp?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/avesta74/source/browse/trunk/src/commands.cpp?r=75" title="Previous">&lsaquo;r75</a></li>
 
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
><tr id="gr_svn102_401"

><td id="401"><a href="#401">401</a></td></tr
><tr id="gr_svn102_402"

><td id="402"><a href="#402">402</a></td></tr
><tr id="gr_svn102_403"

><td id="403"><a href="#403">403</a></td></tr
><tr id="gr_svn102_404"

><td id="404"><a href="#404">404</a></td></tr
><tr id="gr_svn102_405"

><td id="405"><a href="#405">405</a></td></tr
><tr id="gr_svn102_406"

><td id="406"><a href="#406">406</a></td></tr
><tr id="gr_svn102_407"

><td id="407"><a href="#407">407</a></td></tr
><tr id="gr_svn102_408"

><td id="408"><a href="#408">408</a></td></tr
><tr id="gr_svn102_409"

><td id="409"><a href="#409">409</a></td></tr
><tr id="gr_svn102_410"

><td id="410"><a href="#410">410</a></td></tr
><tr id="gr_svn102_411"

><td id="411"><a href="#411">411</a></td></tr
><tr id="gr_svn102_412"

><td id="412"><a href="#412">412</a></td></tr
><tr id="gr_svn102_413"

><td id="413"><a href="#413">413</a></td></tr
><tr id="gr_svn102_414"

><td id="414"><a href="#414">414</a></td></tr
><tr id="gr_svn102_415"

><td id="415"><a href="#415">415</a></td></tr
><tr id="gr_svn102_416"

><td id="416"><a href="#416">416</a></td></tr
><tr id="gr_svn102_417"

><td id="417"><a href="#417">417</a></td></tr
><tr id="gr_svn102_418"

><td id="418"><a href="#418">418</a></td></tr
><tr id="gr_svn102_419"

><td id="419"><a href="#419">419</a></td></tr
><tr id="gr_svn102_420"

><td id="420"><a href="#420">420</a></td></tr
><tr id="gr_svn102_421"

><td id="421"><a href="#421">421</a></td></tr
><tr id="gr_svn102_422"

><td id="422"><a href="#422">422</a></td></tr
><tr id="gr_svn102_423"

><td id="423"><a href="#423">423</a></td></tr
><tr id="gr_svn102_424"

><td id="424"><a href="#424">424</a></td></tr
><tr id="gr_svn102_425"

><td id="425"><a href="#425">425</a></td></tr
><tr id="gr_svn102_426"

><td id="426"><a href="#426">426</a></td></tr
><tr id="gr_svn102_427"

><td id="427"><a href="#427">427</a></td></tr
><tr id="gr_svn102_428"

><td id="428"><a href="#428">428</a></td></tr
><tr id="gr_svn102_429"

><td id="429"><a href="#429">429</a></td></tr
><tr id="gr_svn102_430"

><td id="430"><a href="#430">430</a></td></tr
><tr id="gr_svn102_431"

><td id="431"><a href="#431">431</a></td></tr
><tr id="gr_svn102_432"

><td id="432"><a href="#432">432</a></td></tr
><tr id="gr_svn102_433"

><td id="433"><a href="#433">433</a></td></tr
><tr id="gr_svn102_434"

><td id="434"><a href="#434">434</a></td></tr
><tr id="gr_svn102_435"

><td id="435"><a href="#435">435</a></td></tr
><tr id="gr_svn102_436"

><td id="436"><a href="#436">436</a></td></tr
><tr id="gr_svn102_437"

><td id="437"><a href="#437">437</a></td></tr
><tr id="gr_svn102_438"

><td id="438"><a href="#438">438</a></td></tr
><tr id="gr_svn102_439"

><td id="439"><a href="#439">439</a></td></tr
><tr id="gr_svn102_440"

><td id="440"><a href="#440">440</a></td></tr
><tr id="gr_svn102_441"

><td id="441"><a href="#441">441</a></td></tr
><tr id="gr_svn102_442"

><td id="442"><a href="#442">442</a></td></tr
><tr id="gr_svn102_443"

><td id="443"><a href="#443">443</a></td></tr
><tr id="gr_svn102_444"

><td id="444"><a href="#444">444</a></td></tr
><tr id="gr_svn102_445"

><td id="445"><a href="#445">445</a></td></tr
><tr id="gr_svn102_446"

><td id="446"><a href="#446">446</a></td></tr
><tr id="gr_svn102_447"

><td id="447"><a href="#447">447</a></td></tr
><tr id="gr_svn102_448"

><td id="448"><a href="#448">448</a></td></tr
><tr id="gr_svn102_449"

><td id="449"><a href="#449">449</a></td></tr
><tr id="gr_svn102_450"

><td id="450"><a href="#450">450</a></td></tr
><tr id="gr_svn102_451"

><td id="451"><a href="#451">451</a></td></tr
><tr id="gr_svn102_452"

><td id="452"><a href="#452">452</a></td></tr
><tr id="gr_svn102_453"

><td id="453"><a href="#453">453</a></td></tr
><tr id="gr_svn102_454"

><td id="454"><a href="#454">454</a></td></tr
><tr id="gr_svn102_455"

><td id="455"><a href="#455">455</a></td></tr
><tr id="gr_svn102_456"

><td id="456"><a href="#456">456</a></td></tr
><tr id="gr_svn102_457"

><td id="457"><a href="#457">457</a></td></tr
><tr id="gr_svn102_458"

><td id="458"><a href="#458">458</a></td></tr
><tr id="gr_svn102_459"

><td id="459"><a href="#459">459</a></td></tr
><tr id="gr_svn102_460"

><td id="460"><a href="#460">460</a></td></tr
><tr id="gr_svn102_461"

><td id="461"><a href="#461">461</a></td></tr
><tr id="gr_svn102_462"

><td id="462"><a href="#462">462</a></td></tr
><tr id="gr_svn102_463"

><td id="463"><a href="#463">463</a></td></tr
><tr id="gr_svn102_464"

><td id="464"><a href="#464">464</a></td></tr
><tr id="gr_svn102_465"

><td id="465"><a href="#465">465</a></td></tr
><tr id="gr_svn102_466"

><td id="466"><a href="#466">466</a></td></tr
><tr id="gr_svn102_467"

><td id="467"><a href="#467">467</a></td></tr
><tr id="gr_svn102_468"

><td id="468"><a href="#468">468</a></td></tr
><tr id="gr_svn102_469"

><td id="469"><a href="#469">469</a></td></tr
><tr id="gr_svn102_470"

><td id="470"><a href="#470">470</a></td></tr
><tr id="gr_svn102_471"

><td id="471"><a href="#471">471</a></td></tr
><tr id="gr_svn102_472"

><td id="472"><a href="#472">472</a></td></tr
><tr id="gr_svn102_473"

><td id="473"><a href="#473">473</a></td></tr
><tr id="gr_svn102_474"

><td id="474"><a href="#474">474</a></td></tr
><tr id="gr_svn102_475"

><td id="475"><a href="#475">475</a></td></tr
><tr id="gr_svn102_476"

><td id="476"><a href="#476">476</a></td></tr
><tr id="gr_svn102_477"

><td id="477"><a href="#477">477</a></td></tr
><tr id="gr_svn102_478"

><td id="478"><a href="#478">478</a></td></tr
><tr id="gr_svn102_479"

><td id="479"><a href="#479">479</a></td></tr
><tr id="gr_svn102_480"

><td id="480"><a href="#480">480</a></td></tr
><tr id="gr_svn102_481"

><td id="481"><a href="#481">481</a></td></tr
><tr id="gr_svn102_482"

><td id="482"><a href="#482">482</a></td></tr
><tr id="gr_svn102_483"

><td id="483"><a href="#483">483</a></td></tr
><tr id="gr_svn102_484"

><td id="484"><a href="#484">484</a></td></tr
><tr id="gr_svn102_485"

><td id="485"><a href="#485">485</a></td></tr
><tr id="gr_svn102_486"

><td id="486"><a href="#486">486</a></td></tr
><tr id="gr_svn102_487"

><td id="487"><a href="#487">487</a></td></tr
><tr id="gr_svn102_488"

><td id="488"><a href="#488">488</a></td></tr
><tr id="gr_svn102_489"

><td id="489"><a href="#489">489</a></td></tr
><tr id="gr_svn102_490"

><td id="490"><a href="#490">490</a></td></tr
><tr id="gr_svn102_491"

><td id="491"><a href="#491">491</a></td></tr
><tr id="gr_svn102_492"

><td id="492"><a href="#492">492</a></td></tr
><tr id="gr_svn102_493"

><td id="493"><a href="#493">493</a></td></tr
><tr id="gr_svn102_494"

><td id="494"><a href="#494">494</a></td></tr
><tr id="gr_svn102_495"

><td id="495"><a href="#495">495</a></td></tr
><tr id="gr_svn102_496"

><td id="496"><a href="#496">496</a></td></tr
><tr id="gr_svn102_497"

><td id="497"><a href="#497">497</a></td></tr
><tr id="gr_svn102_498"

><td id="498"><a href="#498">498</a></td></tr
><tr id="gr_svn102_499"

><td id="499"><a href="#499">499</a></td></tr
><tr id="gr_svn102_500"

><td id="500"><a href="#500">500</a></td></tr
><tr id="gr_svn102_501"

><td id="501"><a href="#501">501</a></td></tr
><tr id="gr_svn102_502"

><td id="502"><a href="#502">502</a></td></tr
><tr id="gr_svn102_503"

><td id="503"><a href="#503">503</a></td></tr
><tr id="gr_svn102_504"

><td id="504"><a href="#504">504</a></td></tr
><tr id="gr_svn102_505"

><td id="505"><a href="#505">505</a></td></tr
><tr id="gr_svn102_506"

><td id="506"><a href="#506">506</a></td></tr
><tr id="gr_svn102_507"

><td id="507"><a href="#507">507</a></td></tr
><tr id="gr_svn102_508"

><td id="508"><a href="#508">508</a></td></tr
><tr id="gr_svn102_509"

><td id="509"><a href="#509">509</a></td></tr
><tr id="gr_svn102_510"

><td id="510"><a href="#510">510</a></td></tr
><tr id="gr_svn102_511"

><td id="511"><a href="#511">511</a></td></tr
><tr id="gr_svn102_512"

><td id="512"><a href="#512">512</a></td></tr
><tr id="gr_svn102_513"

><td id="513"><a href="#513">513</a></td></tr
><tr id="gr_svn102_514"

><td id="514"><a href="#514">514</a></td></tr
><tr id="gr_svn102_515"

><td id="515"><a href="#515">515</a></td></tr
><tr id="gr_svn102_516"

><td id="516"><a href="#516">516</a></td></tr
><tr id="gr_svn102_517"

><td id="517"><a href="#517">517</a></td></tr
><tr id="gr_svn102_518"

><td id="518"><a href="#518">518</a></td></tr
><tr id="gr_svn102_519"

><td id="519"><a href="#519">519</a></td></tr
><tr id="gr_svn102_520"

><td id="520"><a href="#520">520</a></td></tr
><tr id="gr_svn102_521"

><td id="521"><a href="#521">521</a></td></tr
><tr id="gr_svn102_522"

><td id="522"><a href="#522">522</a></td></tr
><tr id="gr_svn102_523"

><td id="523"><a href="#523">523</a></td></tr
><tr id="gr_svn102_524"

><td id="524"><a href="#524">524</a></td></tr
><tr id="gr_svn102_525"

><td id="525"><a href="#525">525</a></td></tr
><tr id="gr_svn102_526"

><td id="526"><a href="#526">526</a></td></tr
><tr id="gr_svn102_527"

><td id="527"><a href="#527">527</a></td></tr
><tr id="gr_svn102_528"

><td id="528"><a href="#528">528</a></td></tr
><tr id="gr_svn102_529"

><td id="529"><a href="#529">529</a></td></tr
><tr id="gr_svn102_530"

><td id="530"><a href="#530">530</a></td></tr
><tr id="gr_svn102_531"

><td id="531"><a href="#531">531</a></td></tr
><tr id="gr_svn102_532"

><td id="532"><a href="#532">532</a></td></tr
><tr id="gr_svn102_533"

><td id="533"><a href="#533">533</a></td></tr
><tr id="gr_svn102_534"

><td id="534"><a href="#534">534</a></td></tr
><tr id="gr_svn102_535"

><td id="535"><a href="#535">535</a></td></tr
><tr id="gr_svn102_536"

><td id="536"><a href="#536">536</a></td></tr
><tr id="gr_svn102_537"

><td id="537"><a href="#537">537</a></td></tr
><tr id="gr_svn102_538"

><td id="538"><a href="#538">538</a></td></tr
><tr id="gr_svn102_539"

><td id="539"><a href="#539">539</a></td></tr
><tr id="gr_svn102_540"

><td id="540"><a href="#540">540</a></td></tr
><tr id="gr_svn102_541"

><td id="541"><a href="#541">541</a></td></tr
><tr id="gr_svn102_542"

><td id="542"><a href="#542">542</a></td></tr
><tr id="gr_svn102_543"

><td id="543"><a href="#543">543</a></td></tr
><tr id="gr_svn102_544"

><td id="544"><a href="#544">544</a></td></tr
><tr id="gr_svn102_545"

><td id="545"><a href="#545">545</a></td></tr
><tr id="gr_svn102_546"

><td id="546"><a href="#546">546</a></td></tr
><tr id="gr_svn102_547"

><td id="547"><a href="#547">547</a></td></tr
><tr id="gr_svn102_548"

><td id="548"><a href="#548">548</a></td></tr
><tr id="gr_svn102_549"

><td id="549"><a href="#549">549</a></td></tr
><tr id="gr_svn102_550"

><td id="550"><a href="#550">550</a></td></tr
><tr id="gr_svn102_551"

><td id="551"><a href="#551">551</a></td></tr
><tr id="gr_svn102_552"

><td id="552"><a href="#552">552</a></td></tr
><tr id="gr_svn102_553"

><td id="553"><a href="#553">553</a></td></tr
><tr id="gr_svn102_554"

><td id="554"><a href="#554">554</a></td></tr
><tr id="gr_svn102_555"

><td id="555"><a href="#555">555</a></td></tr
><tr id="gr_svn102_556"

><td id="556"><a href="#556">556</a></td></tr
><tr id="gr_svn102_557"

><td id="557"><a href="#557">557</a></td></tr
><tr id="gr_svn102_558"

><td id="558"><a href="#558">558</a></td></tr
><tr id="gr_svn102_559"

><td id="559"><a href="#559">559</a></td></tr
><tr id="gr_svn102_560"

><td id="560"><a href="#560">560</a></td></tr
><tr id="gr_svn102_561"

><td id="561"><a href="#561">561</a></td></tr
><tr id="gr_svn102_562"

><td id="562"><a href="#562">562</a></td></tr
><tr id="gr_svn102_563"

><td id="563"><a href="#563">563</a></td></tr
><tr id="gr_svn102_564"

><td id="564"><a href="#564">564</a></td></tr
><tr id="gr_svn102_565"

><td id="565"><a href="#565">565</a></td></tr
><tr id="gr_svn102_566"

><td id="566"><a href="#566">566</a></td></tr
><tr id="gr_svn102_567"

><td id="567"><a href="#567">567</a></td></tr
><tr id="gr_svn102_568"

><td id="568"><a href="#568">568</a></td></tr
><tr id="gr_svn102_569"

><td id="569"><a href="#569">569</a></td></tr
><tr id="gr_svn102_570"

><td id="570"><a href="#570">570</a></td></tr
><tr id="gr_svn102_571"

><td id="571"><a href="#571">571</a></td></tr
><tr id="gr_svn102_572"

><td id="572"><a href="#572">572</a></td></tr
><tr id="gr_svn102_573"

><td id="573"><a href="#573">573</a></td></tr
><tr id="gr_svn102_574"

><td id="574"><a href="#574">574</a></td></tr
><tr id="gr_svn102_575"

><td id="575"><a href="#575">575</a></td></tr
><tr id="gr_svn102_576"

><td id="576"><a href="#576">576</a></td></tr
><tr id="gr_svn102_577"

><td id="577"><a href="#577">577</a></td></tr
><tr id="gr_svn102_578"

><td id="578"><a href="#578">578</a></td></tr
><tr id="gr_svn102_579"

><td id="579"><a href="#579">579</a></td></tr
><tr id="gr_svn102_580"

><td id="580"><a href="#580">580</a></td></tr
><tr id="gr_svn102_581"

><td id="581"><a href="#581">581</a></td></tr
><tr id="gr_svn102_582"

><td id="582"><a href="#582">582</a></td></tr
><tr id="gr_svn102_583"

><td id="583"><a href="#583">583</a></td></tr
><tr id="gr_svn102_584"

><td id="584"><a href="#584">584</a></td></tr
><tr id="gr_svn102_585"

><td id="585"><a href="#585">585</a></td></tr
><tr id="gr_svn102_586"

><td id="586"><a href="#586">586</a></td></tr
><tr id="gr_svn102_587"

><td id="587"><a href="#587">587</a></td></tr
><tr id="gr_svn102_588"

><td id="588"><a href="#588">588</a></td></tr
><tr id="gr_svn102_589"

><td id="589"><a href="#589">589</a></td></tr
><tr id="gr_svn102_590"

><td id="590"><a href="#590">590</a></td></tr
><tr id="gr_svn102_591"

><td id="591"><a href="#591">591</a></td></tr
><tr id="gr_svn102_592"

><td id="592"><a href="#592">592</a></td></tr
><tr id="gr_svn102_593"

><td id="593"><a href="#593">593</a></td></tr
><tr id="gr_svn102_594"

><td id="594"><a href="#594">594</a></td></tr
><tr id="gr_svn102_595"

><td id="595"><a href="#595">595</a></td></tr
><tr id="gr_svn102_596"

><td id="596"><a href="#596">596</a></td></tr
><tr id="gr_svn102_597"

><td id="597"><a href="#597">597</a></td></tr
><tr id="gr_svn102_598"

><td id="598"><a href="#598">598</a></td></tr
><tr id="gr_svn102_599"

><td id="599"><a href="#599">599</a></td></tr
><tr id="gr_svn102_600"

><td id="600"><a href="#600">600</a></td></tr
><tr id="gr_svn102_601"

><td id="601"><a href="#601">601</a></td></tr
><tr id="gr_svn102_602"

><td id="602"><a href="#602">602</a></td></tr
><tr id="gr_svn102_603"

><td id="603"><a href="#603">603</a></td></tr
><tr id="gr_svn102_604"

><td id="604"><a href="#604">604</a></td></tr
><tr id="gr_svn102_605"

><td id="605"><a href="#605">605</a></td></tr
><tr id="gr_svn102_606"

><td id="606"><a href="#606">606</a></td></tr
><tr id="gr_svn102_607"

><td id="607"><a href="#607">607</a></td></tr
><tr id="gr_svn102_608"

><td id="608"><a href="#608">608</a></td></tr
><tr id="gr_svn102_609"

><td id="609"><a href="#609">609</a></td></tr
><tr id="gr_svn102_610"

><td id="610"><a href="#610">610</a></td></tr
><tr id="gr_svn102_611"

><td id="611"><a href="#611">611</a></td></tr
><tr id="gr_svn102_612"

><td id="612"><a href="#612">612</a></td></tr
><tr id="gr_svn102_613"

><td id="613"><a href="#613">613</a></td></tr
><tr id="gr_svn102_614"

><td id="614"><a href="#614">614</a></td></tr
><tr id="gr_svn102_615"

><td id="615"><a href="#615">615</a></td></tr
><tr id="gr_svn102_616"

><td id="616"><a href="#616">616</a></td></tr
><tr id="gr_svn102_617"

><td id="617"><a href="#617">617</a></td></tr
><tr id="gr_svn102_618"

><td id="618"><a href="#618">618</a></td></tr
><tr id="gr_svn102_619"

><td id="619"><a href="#619">619</a></td></tr
><tr id="gr_svn102_620"

><td id="620"><a href="#620">620</a></td></tr
><tr id="gr_svn102_621"

><td id="621"><a href="#621">621</a></td></tr
><tr id="gr_svn102_622"

><td id="622"><a href="#622">622</a></td></tr
><tr id="gr_svn102_623"

><td id="623"><a href="#623">623</a></td></tr
><tr id="gr_svn102_624"

><td id="624"><a href="#624">624</a></td></tr
><tr id="gr_svn102_625"

><td id="625"><a href="#625">625</a></td></tr
><tr id="gr_svn102_626"

><td id="626"><a href="#626">626</a></td></tr
><tr id="gr_svn102_627"

><td id="627"><a href="#627">627</a></td></tr
><tr id="gr_svn102_628"

><td id="628"><a href="#628">628</a></td></tr
><tr id="gr_svn102_629"

><td id="629"><a href="#629">629</a></td></tr
><tr id="gr_svn102_630"

><td id="630"><a href="#630">630</a></td></tr
><tr id="gr_svn102_631"

><td id="631"><a href="#631">631</a></td></tr
><tr id="gr_svn102_632"

><td id="632"><a href="#632">632</a></td></tr
><tr id="gr_svn102_633"

><td id="633"><a href="#633">633</a></td></tr
><tr id="gr_svn102_634"

><td id="634"><a href="#634">634</a></td></tr
><tr id="gr_svn102_635"

><td id="635"><a href="#635">635</a></td></tr
><tr id="gr_svn102_636"

><td id="636"><a href="#636">636</a></td></tr
><tr id="gr_svn102_637"

><td id="637"><a href="#637">637</a></td></tr
><tr id="gr_svn102_638"

><td id="638"><a href="#638">638</a></td></tr
><tr id="gr_svn102_639"

><td id="639"><a href="#639">639</a></td></tr
><tr id="gr_svn102_640"

><td id="640"><a href="#640">640</a></td></tr
><tr id="gr_svn102_641"

><td id="641"><a href="#641">641</a></td></tr
><tr id="gr_svn102_642"

><td id="642"><a href="#642">642</a></td></tr
><tr id="gr_svn102_643"

><td id="643"><a href="#643">643</a></td></tr
><tr id="gr_svn102_644"

><td id="644"><a href="#644">644</a></td></tr
><tr id="gr_svn102_645"

><td id="645"><a href="#645">645</a></td></tr
><tr id="gr_svn102_646"

><td id="646"><a href="#646">646</a></td></tr
><tr id="gr_svn102_647"

><td id="647"><a href="#647">647</a></td></tr
><tr id="gr_svn102_648"

><td id="648"><a href="#648">648</a></td></tr
><tr id="gr_svn102_649"

><td id="649"><a href="#649">649</a></td></tr
><tr id="gr_svn102_650"

><td id="650"><a href="#650">650</a></td></tr
><tr id="gr_svn102_651"

><td id="651"><a href="#651">651</a></td></tr
><tr id="gr_svn102_652"

><td id="652"><a href="#652">652</a></td></tr
><tr id="gr_svn102_653"

><td id="653"><a href="#653">653</a></td></tr
><tr id="gr_svn102_654"

><td id="654"><a href="#654">654</a></td></tr
><tr id="gr_svn102_655"

><td id="655"><a href="#655">655</a></td></tr
><tr id="gr_svn102_656"

><td id="656"><a href="#656">656</a></td></tr
><tr id="gr_svn102_657"

><td id="657"><a href="#657">657</a></td></tr
><tr id="gr_svn102_658"

><td id="658"><a href="#658">658</a></td></tr
><tr id="gr_svn102_659"

><td id="659"><a href="#659">659</a></td></tr
><tr id="gr_svn102_660"

><td id="660"><a href="#660">660</a></td></tr
><tr id="gr_svn102_661"

><td id="661"><a href="#661">661</a></td></tr
><tr id="gr_svn102_662"

><td id="662"><a href="#662">662</a></td></tr
><tr id="gr_svn102_663"

><td id="663"><a href="#663">663</a></td></tr
><tr id="gr_svn102_664"

><td id="664"><a href="#664">664</a></td></tr
><tr id="gr_svn102_665"

><td id="665"><a href="#665">665</a></td></tr
><tr id="gr_svn102_666"

><td id="666"><a href="#666">666</a></td></tr
><tr id="gr_svn102_667"

><td id="667"><a href="#667">667</a></td></tr
><tr id="gr_svn102_668"

><td id="668"><a href="#668">668</a></td></tr
><tr id="gr_svn102_669"

><td id="669"><a href="#669">669</a></td></tr
><tr id="gr_svn102_670"

><td id="670"><a href="#670">670</a></td></tr
><tr id="gr_svn102_671"

><td id="671"><a href="#671">671</a></td></tr
><tr id="gr_svn102_672"

><td id="672"><a href="#672">672</a></td></tr
><tr id="gr_svn102_673"

><td id="673"><a href="#673">673</a></td></tr
><tr id="gr_svn102_674"

><td id="674"><a href="#674">674</a></td></tr
><tr id="gr_svn102_675"

><td id="675"><a href="#675">675</a></td></tr
><tr id="gr_svn102_676"

><td id="676"><a href="#676">676</a></td></tr
><tr id="gr_svn102_677"

><td id="677"><a href="#677">677</a></td></tr
><tr id="gr_svn102_678"

><td id="678"><a href="#678">678</a></td></tr
><tr id="gr_svn102_679"

><td id="679"><a href="#679">679</a></td></tr
><tr id="gr_svn102_680"

><td id="680"><a href="#680">680</a></td></tr
><tr id="gr_svn102_681"

><td id="681"><a href="#681">681</a></td></tr
><tr id="gr_svn102_682"

><td id="682"><a href="#682">682</a></td></tr
><tr id="gr_svn102_683"

><td id="683"><a href="#683">683</a></td></tr
><tr id="gr_svn102_684"

><td id="684"><a href="#684">684</a></td></tr
><tr id="gr_svn102_685"

><td id="685"><a href="#685">685</a></td></tr
><tr id="gr_svn102_686"

><td id="686"><a href="#686">686</a></td></tr
><tr id="gr_svn102_687"

><td id="687"><a href="#687">687</a></td></tr
><tr id="gr_svn102_688"

><td id="688"><a href="#688">688</a></td></tr
><tr id="gr_svn102_689"

><td id="689"><a href="#689">689</a></td></tr
><tr id="gr_svn102_690"

><td id="690"><a href="#690">690</a></td></tr
><tr id="gr_svn102_691"

><td id="691"><a href="#691">691</a></td></tr
><tr id="gr_svn102_692"

><td id="692"><a href="#692">692</a></td></tr
><tr id="gr_svn102_693"

><td id="693"><a href="#693">693</a></td></tr
><tr id="gr_svn102_694"

><td id="694"><a href="#694">694</a></td></tr
><tr id="gr_svn102_695"

><td id="695"><a href="#695">695</a></td></tr
><tr id="gr_svn102_696"

><td id="696"><a href="#696">696</a></td></tr
><tr id="gr_svn102_697"

><td id="697"><a href="#697">697</a></td></tr
><tr id="gr_svn102_698"

><td id="698"><a href="#698">698</a></td></tr
><tr id="gr_svn102_699"

><td id="699"><a href="#699">699</a></td></tr
><tr id="gr_svn102_700"

><td id="700"><a href="#700">700</a></td></tr
><tr id="gr_svn102_701"

><td id="701"><a href="#701">701</a></td></tr
><tr id="gr_svn102_702"

><td id="702"><a href="#702">702</a></td></tr
><tr id="gr_svn102_703"

><td id="703"><a href="#703">703</a></td></tr
><tr id="gr_svn102_704"

><td id="704"><a href="#704">704</a></td></tr
><tr id="gr_svn102_705"

><td id="705"><a href="#705">705</a></td></tr
><tr id="gr_svn102_706"

><td id="706"><a href="#706">706</a></td></tr
><tr id="gr_svn102_707"

><td id="707"><a href="#707">707</a></td></tr
><tr id="gr_svn102_708"

><td id="708"><a href="#708">708</a></td></tr
><tr id="gr_svn102_709"

><td id="709"><a href="#709">709</a></td></tr
><tr id="gr_svn102_710"

><td id="710"><a href="#710">710</a></td></tr
><tr id="gr_svn102_711"

><td id="711"><a href="#711">711</a></td></tr
><tr id="gr_svn102_712"

><td id="712"><a href="#712">712</a></td></tr
><tr id="gr_svn102_713"

><td id="713"><a href="#713">713</a></td></tr
><tr id="gr_svn102_714"

><td id="714"><a href="#714">714</a></td></tr
><tr id="gr_svn102_715"

><td id="715"><a href="#715">715</a></td></tr
><tr id="gr_svn102_716"

><td id="716"><a href="#716">716</a></td></tr
><tr id="gr_svn102_717"

><td id="717"><a href="#717">717</a></td></tr
><tr id="gr_svn102_718"

><td id="718"><a href="#718">718</a></td></tr
><tr id="gr_svn102_719"

><td id="719"><a href="#719">719</a></td></tr
><tr id="gr_svn102_720"

><td id="720"><a href="#720">720</a></td></tr
><tr id="gr_svn102_721"

><td id="721"><a href="#721">721</a></td></tr
><tr id="gr_svn102_722"

><td id="722"><a href="#722">722</a></td></tr
><tr id="gr_svn102_723"

><td id="723"><a href="#723">723</a></td></tr
><tr id="gr_svn102_724"

><td id="724"><a href="#724">724</a></td></tr
><tr id="gr_svn102_725"

><td id="725"><a href="#725">725</a></td></tr
><tr id="gr_svn102_726"

><td id="726"><a href="#726">726</a></td></tr
><tr id="gr_svn102_727"

><td id="727"><a href="#727">727</a></td></tr
><tr id="gr_svn102_728"

><td id="728"><a href="#728">728</a></td></tr
><tr id="gr_svn102_729"

><td id="729"><a href="#729">729</a></td></tr
><tr id="gr_svn102_730"

><td id="730"><a href="#730">730</a></td></tr
><tr id="gr_svn102_731"

><td id="731"><a href="#731">731</a></td></tr
><tr id="gr_svn102_732"

><td id="732"><a href="#732">732</a></td></tr
><tr id="gr_svn102_733"

><td id="733"><a href="#733">733</a></td></tr
><tr id="gr_svn102_734"

><td id="734"><a href="#734">734</a></td></tr
><tr id="gr_svn102_735"

><td id="735"><a href="#735">735</a></td></tr
><tr id="gr_svn102_736"

><td id="736"><a href="#736">736</a></td></tr
><tr id="gr_svn102_737"

><td id="737"><a href="#737">737</a></td></tr
><tr id="gr_svn102_738"

><td id="738"><a href="#738">738</a></td></tr
><tr id="gr_svn102_739"

><td id="739"><a href="#739">739</a></td></tr
><tr id="gr_svn102_740"

><td id="740"><a href="#740">740</a></td></tr
><tr id="gr_svn102_741"

><td id="741"><a href="#741">741</a></td></tr
><tr id="gr_svn102_742"

><td id="742"><a href="#742">742</a></td></tr
><tr id="gr_svn102_743"

><td id="743"><a href="#743">743</a></td></tr
><tr id="gr_svn102_744"

><td id="744"><a href="#744">744</a></td></tr
><tr id="gr_svn102_745"

><td id="745"><a href="#745">745</a></td></tr
><tr id="gr_svn102_746"

><td id="746"><a href="#746">746</a></td></tr
><tr id="gr_svn102_747"

><td id="747"><a href="#747">747</a></td></tr
><tr id="gr_svn102_748"

><td id="748"><a href="#748">748</a></td></tr
><tr id="gr_svn102_749"

><td id="749"><a href="#749">749</a></td></tr
><tr id="gr_svn102_750"

><td id="750"><a href="#750">750</a></td></tr
><tr id="gr_svn102_751"

><td id="751"><a href="#751">751</a></td></tr
><tr id="gr_svn102_752"

><td id="752"><a href="#752">752</a></td></tr
><tr id="gr_svn102_753"

><td id="753"><a href="#753">753</a></td></tr
><tr id="gr_svn102_754"

><td id="754"><a href="#754">754</a></td></tr
><tr id="gr_svn102_755"

><td id="755"><a href="#755">755</a></td></tr
><tr id="gr_svn102_756"

><td id="756"><a href="#756">756</a></td></tr
><tr id="gr_svn102_757"

><td id="757"><a href="#757">757</a></td></tr
><tr id="gr_svn102_758"

><td id="758"><a href="#758">758</a></td></tr
><tr id="gr_svn102_759"

><td id="759"><a href="#759">759</a></td></tr
><tr id="gr_svn102_760"

><td id="760"><a href="#760">760</a></td></tr
><tr id="gr_svn102_761"

><td id="761"><a href="#761">761</a></td></tr
><tr id="gr_svn102_762"

><td id="762"><a href="#762">762</a></td></tr
><tr id="gr_svn102_763"

><td id="763"><a href="#763">763</a></td></tr
><tr id="gr_svn102_764"

><td id="764"><a href="#764">764</a></td></tr
><tr id="gr_svn102_765"

><td id="765"><a href="#765">765</a></td></tr
><tr id="gr_svn102_766"

><td id="766"><a href="#766">766</a></td></tr
><tr id="gr_svn102_767"

><td id="767"><a href="#767">767</a></td></tr
><tr id="gr_svn102_768"

><td id="768"><a href="#768">768</a></td></tr
><tr id="gr_svn102_769"

><td id="769"><a href="#769">769</a></td></tr
><tr id="gr_svn102_770"

><td id="770"><a href="#770">770</a></td></tr
><tr id="gr_svn102_771"

><td id="771"><a href="#771">771</a></td></tr
><tr id="gr_svn102_772"

><td id="772"><a href="#772">772</a></td></tr
><tr id="gr_svn102_773"

><td id="773"><a href="#773">773</a></td></tr
><tr id="gr_svn102_774"

><td id="774"><a href="#774">774</a></td></tr
><tr id="gr_svn102_775"

><td id="775"><a href="#775">775</a></td></tr
><tr id="gr_svn102_776"

><td id="776"><a href="#776">776</a></td></tr
><tr id="gr_svn102_777"

><td id="777"><a href="#777">777</a></td></tr
><tr id="gr_svn102_778"

><td id="778"><a href="#778">778</a></td></tr
><tr id="gr_svn102_779"

><td id="779"><a href="#779">779</a></td></tr
><tr id="gr_svn102_780"

><td id="780"><a href="#780">780</a></td></tr
><tr id="gr_svn102_781"

><td id="781"><a href="#781">781</a></td></tr
><tr id="gr_svn102_782"

><td id="782"><a href="#782">782</a></td></tr
><tr id="gr_svn102_783"

><td id="783"><a href="#783">783</a></td></tr
><tr id="gr_svn102_784"

><td id="784"><a href="#784">784</a></td></tr
><tr id="gr_svn102_785"

><td id="785"><a href="#785">785</a></td></tr
><tr id="gr_svn102_786"

><td id="786"><a href="#786">786</a></td></tr
><tr id="gr_svn102_787"

><td id="787"><a href="#787">787</a></td></tr
><tr id="gr_svn102_788"

><td id="788"><a href="#788">788</a></td></tr
><tr id="gr_svn102_789"

><td id="789"><a href="#789">789</a></td></tr
><tr id="gr_svn102_790"

><td id="790"><a href="#790">790</a></td></tr
><tr id="gr_svn102_791"

><td id="791"><a href="#791">791</a></td></tr
><tr id="gr_svn102_792"

><td id="792"><a href="#792">792</a></td></tr
><tr id="gr_svn102_793"

><td id="793"><a href="#793">793</a></td></tr
><tr id="gr_svn102_794"

><td id="794"><a href="#794">794</a></td></tr
><tr id="gr_svn102_795"

><td id="795"><a href="#795">795</a></td></tr
><tr id="gr_svn102_796"

><td id="796"><a href="#796">796</a></td></tr
><tr id="gr_svn102_797"

><td id="797"><a href="#797">797</a></td></tr
><tr id="gr_svn102_798"

><td id="798"><a href="#798">798</a></td></tr
><tr id="gr_svn102_799"

><td id="799"><a href="#799">799</a></td></tr
><tr id="gr_svn102_800"

><td id="800"><a href="#800">800</a></td></tr
><tr id="gr_svn102_801"

><td id="801"><a href="#801">801</a></td></tr
><tr id="gr_svn102_802"

><td id="802"><a href="#802">802</a></td></tr
><tr id="gr_svn102_803"

><td id="803"><a href="#803">803</a></td></tr
><tr id="gr_svn102_804"

><td id="804"><a href="#804">804</a></td></tr
><tr id="gr_svn102_805"

><td id="805"><a href="#805">805</a></td></tr
><tr id="gr_svn102_806"

><td id="806"><a href="#806">806</a></td></tr
><tr id="gr_svn102_807"

><td id="807"><a href="#807">807</a></td></tr
><tr id="gr_svn102_808"

><td id="808"><a href="#808">808</a></td></tr
><tr id="gr_svn102_809"

><td id="809"><a href="#809">809</a></td></tr
><tr id="gr_svn102_810"

><td id="810"><a href="#810">810</a></td></tr
><tr id="gr_svn102_811"

><td id="811"><a href="#811">811</a></td></tr
><tr id="gr_svn102_812"

><td id="812"><a href="#812">812</a></td></tr
><tr id="gr_svn102_813"

><td id="813"><a href="#813">813</a></td></tr
><tr id="gr_svn102_814"

><td id="814"><a href="#814">814</a></td></tr
><tr id="gr_svn102_815"

><td id="815"><a href="#815">815</a></td></tr
><tr id="gr_svn102_816"

><td id="816"><a href="#816">816</a></td></tr
><tr id="gr_svn102_817"

><td id="817"><a href="#817">817</a></td></tr
><tr id="gr_svn102_818"

><td id="818"><a href="#818">818</a></td></tr
><tr id="gr_svn102_819"

><td id="819"><a href="#819">819</a></td></tr
><tr id="gr_svn102_820"

><td id="820"><a href="#820">820</a></td></tr
><tr id="gr_svn102_821"

><td id="821"><a href="#821">821</a></td></tr
><tr id="gr_svn102_822"

><td id="822"><a href="#822">822</a></td></tr
><tr id="gr_svn102_823"

><td id="823"><a href="#823">823</a></td></tr
><tr id="gr_svn102_824"

><td id="824"><a href="#824">824</a></td></tr
><tr id="gr_svn102_825"

><td id="825"><a href="#825">825</a></td></tr
><tr id="gr_svn102_826"

><td id="826"><a href="#826">826</a></td></tr
><tr id="gr_svn102_827"

><td id="827"><a href="#827">827</a></td></tr
><tr id="gr_svn102_828"

><td id="828"><a href="#828">828</a></td></tr
><tr id="gr_svn102_829"

><td id="829"><a href="#829">829</a></td></tr
><tr id="gr_svn102_830"

><td id="830"><a href="#830">830</a></td></tr
><tr id="gr_svn102_831"

><td id="831"><a href="#831">831</a></td></tr
><tr id="gr_svn102_832"

><td id="832"><a href="#832">832</a></td></tr
><tr id="gr_svn102_833"

><td id="833"><a href="#833">833</a></td></tr
><tr id="gr_svn102_834"

><td id="834"><a href="#834">834</a></td></tr
><tr id="gr_svn102_835"

><td id="835"><a href="#835">835</a></td></tr
><tr id="gr_svn102_836"

><td id="836"><a href="#836">836</a></td></tr
><tr id="gr_svn102_837"

><td id="837"><a href="#837">837</a></td></tr
><tr id="gr_svn102_838"

><td id="838"><a href="#838">838</a></td></tr
><tr id="gr_svn102_839"

><td id="839"><a href="#839">839</a></td></tr
><tr id="gr_svn102_840"

><td id="840"><a href="#840">840</a></td></tr
><tr id="gr_svn102_841"

><td id="841"><a href="#841">841</a></td></tr
><tr id="gr_svn102_842"

><td id="842"><a href="#842">842</a></td></tr
><tr id="gr_svn102_843"

><td id="843"><a href="#843">843</a></td></tr
><tr id="gr_svn102_844"

><td id="844"><a href="#844">844</a></td></tr
><tr id="gr_svn102_845"

><td id="845"><a href="#845">845</a></td></tr
><tr id="gr_svn102_846"

><td id="846"><a href="#846">846</a></td></tr
><tr id="gr_svn102_847"

><td id="847"><a href="#847">847</a></td></tr
><tr id="gr_svn102_848"

><td id="848"><a href="#848">848</a></td></tr
><tr id="gr_svn102_849"

><td id="849"><a href="#849">849</a></td></tr
><tr id="gr_svn102_850"

><td id="850"><a href="#850">850</a></td></tr
><tr id="gr_svn102_851"

><td id="851"><a href="#851">851</a></td></tr
><tr id="gr_svn102_852"

><td id="852"><a href="#852">852</a></td></tr
><tr id="gr_svn102_853"

><td id="853"><a href="#853">853</a></td></tr
><tr id="gr_svn102_854"

><td id="854"><a href="#854">854</a></td></tr
><tr id="gr_svn102_855"

><td id="855"><a href="#855">855</a></td></tr
><tr id="gr_svn102_856"

><td id="856"><a href="#856">856</a></td></tr
><tr id="gr_svn102_857"

><td id="857"><a href="#857">857</a></td></tr
><tr id="gr_svn102_858"

><td id="858"><a href="#858">858</a></td></tr
><tr id="gr_svn102_859"

><td id="859"><a href="#859">859</a></td></tr
><tr id="gr_svn102_860"

><td id="860"><a href="#860">860</a></td></tr
><tr id="gr_svn102_861"

><td id="861"><a href="#861">861</a></td></tr
><tr id="gr_svn102_862"

><td id="862"><a href="#862">862</a></td></tr
><tr id="gr_svn102_863"

><td id="863"><a href="#863">863</a></td></tr
><tr id="gr_svn102_864"

><td id="864"><a href="#864">864</a></td></tr
><tr id="gr_svn102_865"

><td id="865"><a href="#865">865</a></td></tr
><tr id="gr_svn102_866"

><td id="866"><a href="#866">866</a></td></tr
><tr id="gr_svn102_867"

><td id="867"><a href="#867">867</a></td></tr
><tr id="gr_svn102_868"

><td id="868"><a href="#868">868</a></td></tr
><tr id="gr_svn102_869"

><td id="869"><a href="#869">869</a></td></tr
><tr id="gr_svn102_870"

><td id="870"><a href="#870">870</a></td></tr
><tr id="gr_svn102_871"

><td id="871"><a href="#871">871</a></td></tr
><tr id="gr_svn102_872"

><td id="872"><a href="#872">872</a></td></tr
><tr id="gr_svn102_873"

><td id="873"><a href="#873">873</a></td></tr
><tr id="gr_svn102_874"

><td id="874"><a href="#874">874</a></td></tr
><tr id="gr_svn102_875"

><td id="875"><a href="#875">875</a></td></tr
><tr id="gr_svn102_876"

><td id="876"><a href="#876">876</a></td></tr
><tr id="gr_svn102_877"

><td id="877"><a href="#877">877</a></td></tr
><tr id="gr_svn102_878"

><td id="878"><a href="#878">878</a></td></tr
><tr id="gr_svn102_879"

><td id="879"><a href="#879">879</a></td></tr
><tr id="gr_svn102_880"

><td id="880"><a href="#880">880</a></td></tr
><tr id="gr_svn102_881"

><td id="881"><a href="#881">881</a></td></tr
><tr id="gr_svn102_882"

><td id="882"><a href="#882">882</a></td></tr
><tr id="gr_svn102_883"

><td id="883"><a href="#883">883</a></td></tr
><tr id="gr_svn102_884"

><td id="884"><a href="#884">884</a></td></tr
><tr id="gr_svn102_885"

><td id="885"><a href="#885">885</a></td></tr
><tr id="gr_svn102_886"

><td id="886"><a href="#886">886</a></td></tr
><tr id="gr_svn102_887"

><td id="887"><a href="#887">887</a></td></tr
><tr id="gr_svn102_888"

><td id="888"><a href="#888">888</a></td></tr
><tr id="gr_svn102_889"

><td id="889"><a href="#889">889</a></td></tr
><tr id="gr_svn102_890"

><td id="890"><a href="#890">890</a></td></tr
><tr id="gr_svn102_891"

><td id="891"><a href="#891">891</a></td></tr
><tr id="gr_svn102_892"

><td id="892"><a href="#892">892</a></td></tr
><tr id="gr_svn102_893"

><td id="893"><a href="#893">893</a></td></tr
><tr id="gr_svn102_894"

><td id="894"><a href="#894">894</a></td></tr
><tr id="gr_svn102_895"

><td id="895"><a href="#895">895</a></td></tr
><tr id="gr_svn102_896"

><td id="896"><a href="#896">896</a></td></tr
><tr id="gr_svn102_897"

><td id="897"><a href="#897">897</a></td></tr
><tr id="gr_svn102_898"

><td id="898"><a href="#898">898</a></td></tr
><tr id="gr_svn102_899"

><td id="899"><a href="#899">899</a></td></tr
><tr id="gr_svn102_900"

><td id="900"><a href="#900">900</a></td></tr
><tr id="gr_svn102_901"

><td id="901"><a href="#901">901</a></td></tr
><tr id="gr_svn102_902"

><td id="902"><a href="#902">902</a></td></tr
><tr id="gr_svn102_903"

><td id="903"><a href="#903">903</a></td></tr
><tr id="gr_svn102_904"

><td id="904"><a href="#904">904</a></td></tr
><tr id="gr_svn102_905"

><td id="905"><a href="#905">905</a></td></tr
><tr id="gr_svn102_906"

><td id="906"><a href="#906">906</a></td></tr
><tr id="gr_svn102_907"

><td id="907"><a href="#907">907</a></td></tr
><tr id="gr_svn102_908"

><td id="908"><a href="#908">908</a></td></tr
><tr id="gr_svn102_909"

><td id="909"><a href="#909">909</a></td></tr
><tr id="gr_svn102_910"

><td id="910"><a href="#910">910</a></td></tr
><tr id="gr_svn102_911"

><td id="911"><a href="#911">911</a></td></tr
><tr id="gr_svn102_912"

><td id="912"><a href="#912">912</a></td></tr
><tr id="gr_svn102_913"

><td id="913"><a href="#913">913</a></td></tr
><tr id="gr_svn102_914"

><td id="914"><a href="#914">914</a></td></tr
><tr id="gr_svn102_915"

><td id="915"><a href="#915">915</a></td></tr
><tr id="gr_svn102_916"

><td id="916"><a href="#916">916</a></td></tr
><tr id="gr_svn102_917"

><td id="917"><a href="#917">917</a></td></tr
><tr id="gr_svn102_918"

><td id="918"><a href="#918">918</a></td></tr
><tr id="gr_svn102_919"

><td id="919"><a href="#919">919</a></td></tr
><tr id="gr_svn102_920"

><td id="920"><a href="#920">920</a></td></tr
><tr id="gr_svn102_921"

><td id="921"><a href="#921">921</a></td></tr
><tr id="gr_svn102_922"

><td id="922"><a href="#922">922</a></td></tr
><tr id="gr_svn102_923"

><td id="923"><a href="#923">923</a></td></tr
><tr id="gr_svn102_924"

><td id="924"><a href="#924">924</a></td></tr
><tr id="gr_svn102_925"

><td id="925"><a href="#925">925</a></td></tr
><tr id="gr_svn102_926"

><td id="926"><a href="#926">926</a></td></tr
><tr id="gr_svn102_927"

><td id="927"><a href="#927">927</a></td></tr
><tr id="gr_svn102_928"

><td id="928"><a href="#928">928</a></td></tr
><tr id="gr_svn102_929"

><td id="929"><a href="#929">929</a></td></tr
><tr id="gr_svn102_930"

><td id="930"><a href="#930">930</a></td></tr
><tr id="gr_svn102_931"

><td id="931"><a href="#931">931</a></td></tr
><tr id="gr_svn102_932"

><td id="932"><a href="#932">932</a></td></tr
><tr id="gr_svn102_933"

><td id="933"><a href="#933">933</a></td></tr
><tr id="gr_svn102_934"

><td id="934"><a href="#934">934</a></td></tr
><tr id="gr_svn102_935"

><td id="935"><a href="#935">935</a></td></tr
><tr id="gr_svn102_936"

><td id="936"><a href="#936">936</a></td></tr
><tr id="gr_svn102_937"

><td id="937"><a href="#937">937</a></td></tr
><tr id="gr_svn102_938"

><td id="938"><a href="#938">938</a></td></tr
><tr id="gr_svn102_939"

><td id="939"><a href="#939">939</a></td></tr
><tr id="gr_svn102_940"

><td id="940"><a href="#940">940</a></td></tr
><tr id="gr_svn102_941"

><td id="941"><a href="#941">941</a></td></tr
><tr id="gr_svn102_942"

><td id="942"><a href="#942">942</a></td></tr
><tr id="gr_svn102_943"

><td id="943"><a href="#943">943</a></td></tr
><tr id="gr_svn102_944"

><td id="944"><a href="#944">944</a></td></tr
><tr id="gr_svn102_945"

><td id="945"><a href="#945">945</a></td></tr
><tr id="gr_svn102_946"

><td id="946"><a href="#946">946</a></td></tr
><tr id="gr_svn102_947"

><td id="947"><a href="#947">947</a></td></tr
><tr id="gr_svn102_948"

><td id="948"><a href="#948">948</a></td></tr
><tr id="gr_svn102_949"

><td id="949"><a href="#949">949</a></td></tr
><tr id="gr_svn102_950"

><td id="950"><a href="#950">950</a></td></tr
><tr id="gr_svn102_951"

><td id="951"><a href="#951">951</a></td></tr
><tr id="gr_svn102_952"

><td id="952"><a href="#952">952</a></td></tr
><tr id="gr_svn102_953"

><td id="953"><a href="#953">953</a></td></tr
><tr id="gr_svn102_954"

><td id="954"><a href="#954">954</a></td></tr
><tr id="gr_svn102_955"

><td id="955"><a href="#955">955</a></td></tr
><tr id="gr_svn102_956"

><td id="956"><a href="#956">956</a></td></tr
><tr id="gr_svn102_957"

><td id="957"><a href="#957">957</a></td></tr
><tr id="gr_svn102_958"

><td id="958"><a href="#958">958</a></td></tr
><tr id="gr_svn102_959"

><td id="959"><a href="#959">959</a></td></tr
><tr id="gr_svn102_960"

><td id="960"><a href="#960">960</a></td></tr
><tr id="gr_svn102_961"

><td id="961"><a href="#961">961</a></td></tr
><tr id="gr_svn102_962"

><td id="962"><a href="#962">962</a></td></tr
><tr id="gr_svn102_963"

><td id="963"><a href="#963">963</a></td></tr
><tr id="gr_svn102_964"

><td id="964"><a href="#964">964</a></td></tr
><tr id="gr_svn102_965"

><td id="965"><a href="#965">965</a></td></tr
><tr id="gr_svn102_966"

><td id="966"><a href="#966">966</a></td></tr
><tr id="gr_svn102_967"

><td id="967"><a href="#967">967</a></td></tr
><tr id="gr_svn102_968"

><td id="968"><a href="#968">968</a></td></tr
><tr id="gr_svn102_969"

><td id="969"><a href="#969">969</a></td></tr
><tr id="gr_svn102_970"

><td id="970"><a href="#970">970</a></td></tr
><tr id="gr_svn102_971"

><td id="971"><a href="#971">971</a></td></tr
><tr id="gr_svn102_972"

><td id="972"><a href="#972">972</a></td></tr
><tr id="gr_svn102_973"

><td id="973"><a href="#973">973</a></td></tr
><tr id="gr_svn102_974"

><td id="974"><a href="#974">974</a></td></tr
><tr id="gr_svn102_975"

><td id="975"><a href="#975">975</a></td></tr
><tr id="gr_svn102_976"

><td id="976"><a href="#976">976</a></td></tr
><tr id="gr_svn102_977"

><td id="977"><a href="#977">977</a></td></tr
><tr id="gr_svn102_978"

><td id="978"><a href="#978">978</a></td></tr
><tr id="gr_svn102_979"

><td id="979"><a href="#979">979</a></td></tr
><tr id="gr_svn102_980"

><td id="980"><a href="#980">980</a></td></tr
><tr id="gr_svn102_981"

><td id="981"><a href="#981">981</a></td></tr
><tr id="gr_svn102_982"

><td id="982"><a href="#982">982</a></td></tr
><tr id="gr_svn102_983"

><td id="983"><a href="#983">983</a></td></tr
><tr id="gr_svn102_984"

><td id="984"><a href="#984">984</a></td></tr
><tr id="gr_svn102_985"

><td id="985"><a href="#985">985</a></td></tr
><tr id="gr_svn102_986"

><td id="986"><a href="#986">986</a></td></tr
><tr id="gr_svn102_987"

><td id="987"><a href="#987">987</a></td></tr
><tr id="gr_svn102_988"

><td id="988"><a href="#988">988</a></td></tr
><tr id="gr_svn102_989"

><td id="989"><a href="#989">989</a></td></tr
><tr id="gr_svn102_990"

><td id="990"><a href="#990">990</a></td></tr
><tr id="gr_svn102_991"

><td id="991"><a href="#991">991</a></td></tr
><tr id="gr_svn102_992"

><td id="992"><a href="#992">992</a></td></tr
><tr id="gr_svn102_993"

><td id="993"><a href="#993">993</a></td></tr
><tr id="gr_svn102_994"

><td id="994"><a href="#994">994</a></td></tr
><tr id="gr_svn102_995"

><td id="995"><a href="#995">995</a></td></tr
><tr id="gr_svn102_996"

><td id="996"><a href="#996">996</a></td></tr
><tr id="gr_svn102_997"

><td id="997"><a href="#997">997</a></td></tr
><tr id="gr_svn102_998"

><td id="998"><a href="#998">998</a></td></tr
><tr id="gr_svn102_999"

><td id="999"><a href="#999">999</a></td></tr
><tr id="gr_svn102_1000"

><td id="1000"><a href="#1000">1000</a></td></tr
><tr id="gr_svn102_1001"

><td id="1001"><a href="#1001">1001</a></td></tr
><tr id="gr_svn102_1002"

><td id="1002"><a href="#1002">1002</a></td></tr
><tr id="gr_svn102_1003"

><td id="1003"><a href="#1003">1003</a></td></tr
><tr id="gr_svn102_1004"

><td id="1004"><a href="#1004">1004</a></td></tr
><tr id="gr_svn102_1005"

><td id="1005"><a href="#1005">1005</a></td></tr
><tr id="gr_svn102_1006"

><td id="1006"><a href="#1006">1006</a></td></tr
><tr id="gr_svn102_1007"

><td id="1007"><a href="#1007">1007</a></td></tr
><tr id="gr_svn102_1008"

><td id="1008"><a href="#1008">1008</a></td></tr
><tr id="gr_svn102_1009"

><td id="1009"><a href="#1009">1009</a></td></tr
><tr id="gr_svn102_1010"

><td id="1010"><a href="#1010">1010</a></td></tr
><tr id="gr_svn102_1011"

><td id="1011"><a href="#1011">1011</a></td></tr
><tr id="gr_svn102_1012"

><td id="1012"><a href="#1012">1012</a></td></tr
><tr id="gr_svn102_1013"

><td id="1013"><a href="#1013">1013</a></td></tr
><tr id="gr_svn102_1014"

><td id="1014"><a href="#1014">1014</a></td></tr
><tr id="gr_svn102_1015"

><td id="1015"><a href="#1015">1015</a></td></tr
><tr id="gr_svn102_1016"

><td id="1016"><a href="#1016">1016</a></td></tr
><tr id="gr_svn102_1017"

><td id="1017"><a href="#1017">1017</a></td></tr
><tr id="gr_svn102_1018"

><td id="1018"><a href="#1018">1018</a></td></tr
><tr id="gr_svn102_1019"

><td id="1019"><a href="#1019">1019</a></td></tr
><tr id="gr_svn102_1020"

><td id="1020"><a href="#1020">1020</a></td></tr
><tr id="gr_svn102_1021"

><td id="1021"><a href="#1021">1021</a></td></tr
><tr id="gr_svn102_1022"

><td id="1022"><a href="#1022">1022</a></td></tr
><tr id="gr_svn102_1023"

><td id="1023"><a href="#1023">1023</a></td></tr
><tr id="gr_svn102_1024"

><td id="1024"><a href="#1024">1024</a></td></tr
><tr id="gr_svn102_1025"

><td id="1025"><a href="#1025">1025</a></td></tr
><tr id="gr_svn102_1026"

><td id="1026"><a href="#1026">1026</a></td></tr
><tr id="gr_svn102_1027"

><td id="1027"><a href="#1027">1027</a></td></tr
><tr id="gr_svn102_1028"

><td id="1028"><a href="#1028">1028</a></td></tr
><tr id="gr_svn102_1029"

><td id="1029"><a href="#1029">1029</a></td></tr
><tr id="gr_svn102_1030"

><td id="1030"><a href="#1030">1030</a></td></tr
><tr id="gr_svn102_1031"

><td id="1031"><a href="#1031">1031</a></td></tr
><tr id="gr_svn102_1032"

><td id="1032"><a href="#1032">1032</a></td></tr
><tr id="gr_svn102_1033"

><td id="1033"><a href="#1033">1033</a></td></tr
><tr id="gr_svn102_1034"

><td id="1034"><a href="#1034">1034</a></td></tr
><tr id="gr_svn102_1035"

><td id="1035"><a href="#1035">1035</a></td></tr
><tr id="gr_svn102_1036"

><td id="1036"><a href="#1036">1036</a></td></tr
><tr id="gr_svn102_1037"

><td id="1037"><a href="#1037">1037</a></td></tr
><tr id="gr_svn102_1038"

><td id="1038"><a href="#1038">1038</a></td></tr
><tr id="gr_svn102_1039"

><td id="1039"><a href="#1039">1039</a></td></tr
><tr id="gr_svn102_1040"

><td id="1040"><a href="#1040">1040</a></td></tr
><tr id="gr_svn102_1041"

><td id="1041"><a href="#1041">1041</a></td></tr
><tr id="gr_svn102_1042"

><td id="1042"><a href="#1042">1042</a></td></tr
><tr id="gr_svn102_1043"

><td id="1043"><a href="#1043">1043</a></td></tr
><tr id="gr_svn102_1044"

><td id="1044"><a href="#1044">1044</a></td></tr
><tr id="gr_svn102_1045"

><td id="1045"><a href="#1045">1045</a></td></tr
><tr id="gr_svn102_1046"

><td id="1046"><a href="#1046">1046</a></td></tr
><tr id="gr_svn102_1047"

><td id="1047"><a href="#1047">1047</a></td></tr
><tr id="gr_svn102_1048"

><td id="1048"><a href="#1048">1048</a></td></tr
><tr id="gr_svn102_1049"

><td id="1049"><a href="#1049">1049</a></td></tr
><tr id="gr_svn102_1050"

><td id="1050"><a href="#1050">1050</a></td></tr
><tr id="gr_svn102_1051"

><td id="1051"><a href="#1051">1051</a></td></tr
><tr id="gr_svn102_1052"

><td id="1052"><a href="#1052">1052</a></td></tr
><tr id="gr_svn102_1053"

><td id="1053"><a href="#1053">1053</a></td></tr
><tr id="gr_svn102_1054"

><td id="1054"><a href="#1054">1054</a></td></tr
><tr id="gr_svn102_1055"

><td id="1055"><a href="#1055">1055</a></td></tr
><tr id="gr_svn102_1056"

><td id="1056"><a href="#1056">1056</a></td></tr
><tr id="gr_svn102_1057"

><td id="1057"><a href="#1057">1057</a></td></tr
><tr id="gr_svn102_1058"

><td id="1058"><a href="#1058">1058</a></td></tr
><tr id="gr_svn102_1059"

><td id="1059"><a href="#1059">1059</a></td></tr
><tr id="gr_svn102_1060"

><td id="1060"><a href="#1060">1060</a></td></tr
><tr id="gr_svn102_1061"

><td id="1061"><a href="#1061">1061</a></td></tr
><tr id="gr_svn102_1062"

><td id="1062"><a href="#1062">1062</a></td></tr
><tr id="gr_svn102_1063"

><td id="1063"><a href="#1063">1063</a></td></tr
><tr id="gr_svn102_1064"

><td id="1064"><a href="#1064">1064</a></td></tr
><tr id="gr_svn102_1065"

><td id="1065"><a href="#1065">1065</a></td></tr
><tr id="gr_svn102_1066"

><td id="1066"><a href="#1066">1066</a></td></tr
><tr id="gr_svn102_1067"

><td id="1067"><a href="#1067">1067</a></td></tr
><tr id="gr_svn102_1068"

><td id="1068"><a href="#1068">1068</a></td></tr
><tr id="gr_svn102_1069"

><td id="1069"><a href="#1069">1069</a></td></tr
><tr id="gr_svn102_1070"

><td id="1070"><a href="#1070">1070</a></td></tr
><tr id="gr_svn102_1071"

><td id="1071"><a href="#1071">1071</a></td></tr
><tr id="gr_svn102_1072"

><td id="1072"><a href="#1072">1072</a></td></tr
><tr id="gr_svn102_1073"

><td id="1073"><a href="#1073">1073</a></td></tr
><tr id="gr_svn102_1074"

><td id="1074"><a href="#1074">1074</a></td></tr
><tr id="gr_svn102_1075"

><td id="1075"><a href="#1075">1075</a></td></tr
><tr id="gr_svn102_1076"

><td id="1076"><a href="#1076">1076</a></td></tr
><tr id="gr_svn102_1077"

><td id="1077"><a href="#1077">1077</a></td></tr
><tr id="gr_svn102_1078"

><td id="1078"><a href="#1078">1078</a></td></tr
><tr id="gr_svn102_1079"

><td id="1079"><a href="#1079">1079</a></td></tr
><tr id="gr_svn102_1080"

><td id="1080"><a href="#1080">1080</a></td></tr
><tr id="gr_svn102_1081"

><td id="1081"><a href="#1081">1081</a></td></tr
><tr id="gr_svn102_1082"

><td id="1082"><a href="#1082">1082</a></td></tr
><tr id="gr_svn102_1083"

><td id="1083"><a href="#1083">1083</a></td></tr
><tr id="gr_svn102_1084"

><td id="1084"><a href="#1084">1084</a></td></tr
><tr id="gr_svn102_1085"

><td id="1085"><a href="#1085">1085</a></td></tr
><tr id="gr_svn102_1086"

><td id="1086"><a href="#1086">1086</a></td></tr
><tr id="gr_svn102_1087"

><td id="1087"><a href="#1087">1087</a></td></tr
><tr id="gr_svn102_1088"

><td id="1088"><a href="#1088">1088</a></td></tr
><tr id="gr_svn102_1089"

><td id="1089"><a href="#1089">1089</a></td></tr
><tr id="gr_svn102_1090"

><td id="1090"><a href="#1090">1090</a></td></tr
><tr id="gr_svn102_1091"

><td id="1091"><a href="#1091">1091</a></td></tr
><tr id="gr_svn102_1092"

><td id="1092"><a href="#1092">1092</a></td></tr
><tr id="gr_svn102_1093"

><td id="1093"><a href="#1093">1093</a></td></tr
><tr id="gr_svn102_1094"

><td id="1094"><a href="#1094">1094</a></td></tr
><tr id="gr_svn102_1095"

><td id="1095"><a href="#1095">1095</a></td></tr
><tr id="gr_svn102_1096"

><td id="1096"><a href="#1096">1096</a></td></tr
><tr id="gr_svn102_1097"

><td id="1097"><a href="#1097">1097</a></td></tr
><tr id="gr_svn102_1098"

><td id="1098"><a href="#1098">1098</a></td></tr
><tr id="gr_svn102_1099"

><td id="1099"><a href="#1099">1099</a></td></tr
><tr id="gr_svn102_1100"

><td id="1100"><a href="#1100">1100</a></td></tr
><tr id="gr_svn102_1101"

><td id="1101"><a href="#1101">1101</a></td></tr
><tr id="gr_svn102_1102"

><td id="1102"><a href="#1102">1102</a></td></tr
><tr id="gr_svn102_1103"

><td id="1103"><a href="#1103">1103</a></td></tr
><tr id="gr_svn102_1104"

><td id="1104"><a href="#1104">1104</a></td></tr
><tr id="gr_svn102_1105"

><td id="1105"><a href="#1105">1105</a></td></tr
><tr id="gr_svn102_1106"

><td id="1106"><a href="#1106">1106</a></td></tr
><tr id="gr_svn102_1107"

><td id="1107"><a href="#1107">1107</a></td></tr
><tr id="gr_svn102_1108"

><td id="1108"><a href="#1108">1108</a></td></tr
><tr id="gr_svn102_1109"

><td id="1109"><a href="#1109">1109</a></td></tr
><tr id="gr_svn102_1110"

><td id="1110"><a href="#1110">1110</a></td></tr
><tr id="gr_svn102_1111"

><td id="1111"><a href="#1111">1111</a></td></tr
><tr id="gr_svn102_1112"

><td id="1112"><a href="#1112">1112</a></td></tr
><tr id="gr_svn102_1113"

><td id="1113"><a href="#1113">1113</a></td></tr
><tr id="gr_svn102_1114"

><td id="1114"><a href="#1114">1114</a></td></tr
><tr id="gr_svn102_1115"

><td id="1115"><a href="#1115">1115</a></td></tr
><tr id="gr_svn102_1116"

><td id="1116"><a href="#1116">1116</a></td></tr
><tr id="gr_svn102_1117"

><td id="1117"><a href="#1117">1117</a></td></tr
><tr id="gr_svn102_1118"

><td id="1118"><a href="#1118">1118</a></td></tr
><tr id="gr_svn102_1119"

><td id="1119"><a href="#1119">1119</a></td></tr
><tr id="gr_svn102_1120"

><td id="1120"><a href="#1120">1120</a></td></tr
><tr id="gr_svn102_1121"

><td id="1121"><a href="#1121">1121</a></td></tr
><tr id="gr_svn102_1122"

><td id="1122"><a href="#1122">1122</a></td></tr
><tr id="gr_svn102_1123"

><td id="1123"><a href="#1123">1123</a></td></tr
><tr id="gr_svn102_1124"

><td id="1124"><a href="#1124">1124</a></td></tr
><tr id="gr_svn102_1125"

><td id="1125"><a href="#1125">1125</a></td></tr
><tr id="gr_svn102_1126"

><td id="1126"><a href="#1126">1126</a></td></tr
><tr id="gr_svn102_1127"

><td id="1127"><a href="#1127">1127</a></td></tr
><tr id="gr_svn102_1128"

><td id="1128"><a href="#1128">1128</a></td></tr
><tr id="gr_svn102_1129"

><td id="1129"><a href="#1129">1129</a></td></tr
><tr id="gr_svn102_1130"

><td id="1130"><a href="#1130">1130</a></td></tr
><tr id="gr_svn102_1131"

><td id="1131"><a href="#1131">1131</a></td></tr
><tr id="gr_svn102_1132"

><td id="1132"><a href="#1132">1132</a></td></tr
><tr id="gr_svn102_1133"

><td id="1133"><a href="#1133">1133</a></td></tr
><tr id="gr_svn102_1134"

><td id="1134"><a href="#1134">1134</a></td></tr
><tr id="gr_svn102_1135"

><td id="1135"><a href="#1135">1135</a></td></tr
><tr id="gr_svn102_1136"

><td id="1136"><a href="#1136">1136</a></td></tr
><tr id="gr_svn102_1137"

><td id="1137"><a href="#1137">1137</a></td></tr
><tr id="gr_svn102_1138"

><td id="1138"><a href="#1138">1138</a></td></tr
><tr id="gr_svn102_1139"

><td id="1139"><a href="#1139">1139</a></td></tr
><tr id="gr_svn102_1140"

><td id="1140"><a href="#1140">1140</a></td></tr
><tr id="gr_svn102_1141"

><td id="1141"><a href="#1141">1141</a></td></tr
><tr id="gr_svn102_1142"

><td id="1142"><a href="#1142">1142</a></td></tr
><tr id="gr_svn102_1143"

><td id="1143"><a href="#1143">1143</a></td></tr
><tr id="gr_svn102_1144"

><td id="1144"><a href="#1144">1144</a></td></tr
><tr id="gr_svn102_1145"

><td id="1145"><a href="#1145">1145</a></td></tr
><tr id="gr_svn102_1146"

><td id="1146"><a href="#1146">1146</a></td></tr
><tr id="gr_svn102_1147"

><td id="1147"><a href="#1147">1147</a></td></tr
><tr id="gr_svn102_1148"

><td id="1148"><a href="#1148">1148</a></td></tr
><tr id="gr_svn102_1149"

><td id="1149"><a href="#1149">1149</a></td></tr
><tr id="gr_svn102_1150"

><td id="1150"><a href="#1150">1150</a></td></tr
><tr id="gr_svn102_1151"

><td id="1151"><a href="#1151">1151</a></td></tr
><tr id="gr_svn102_1152"

><td id="1152"><a href="#1152">1152</a></td></tr
><tr id="gr_svn102_1153"

><td id="1153"><a href="#1153">1153</a></td></tr
><tr id="gr_svn102_1154"

><td id="1154"><a href="#1154">1154</a></td></tr
><tr id="gr_svn102_1155"

><td id="1155"><a href="#1155">1155</a></td></tr
><tr id="gr_svn102_1156"

><td id="1156"><a href="#1156">1156</a></td></tr
><tr id="gr_svn102_1157"

><td id="1157"><a href="#1157">1157</a></td></tr
><tr id="gr_svn102_1158"

><td id="1158"><a href="#1158">1158</a></td></tr
><tr id="gr_svn102_1159"

><td id="1159"><a href="#1159">1159</a></td></tr
><tr id="gr_svn102_1160"

><td id="1160"><a href="#1160">1160</a></td></tr
><tr id="gr_svn102_1161"

><td id="1161"><a href="#1161">1161</a></td></tr
><tr id="gr_svn102_1162"

><td id="1162"><a href="#1162">1162</a></td></tr
><tr id="gr_svn102_1163"

><td id="1163"><a href="#1163">1163</a></td></tr
><tr id="gr_svn102_1164"

><td id="1164"><a href="#1164">1164</a></td></tr
><tr id="gr_svn102_1165"

><td id="1165"><a href="#1165">1165</a></td></tr
><tr id="gr_svn102_1166"

><td id="1166"><a href="#1166">1166</a></td></tr
><tr id="gr_svn102_1167"

><td id="1167"><a href="#1167">1167</a></td></tr
><tr id="gr_svn102_1168"

><td id="1168"><a href="#1168">1168</a></td></tr
><tr id="gr_svn102_1169"

><td id="1169"><a href="#1169">1169</a></td></tr
><tr id="gr_svn102_1170"

><td id="1170"><a href="#1170">1170</a></td></tr
><tr id="gr_svn102_1171"

><td id="1171"><a href="#1171">1171</a></td></tr
><tr id="gr_svn102_1172"

><td id="1172"><a href="#1172">1172</a></td></tr
><tr id="gr_svn102_1173"

><td id="1173"><a href="#1173">1173</a></td></tr
><tr id="gr_svn102_1174"

><td id="1174"><a href="#1174">1174</a></td></tr
><tr id="gr_svn102_1175"

><td id="1175"><a href="#1175">1175</a></td></tr
><tr id="gr_svn102_1176"

><td id="1176"><a href="#1176">1176</a></td></tr
><tr id="gr_svn102_1177"

><td id="1177"><a href="#1177">1177</a></td></tr
><tr id="gr_svn102_1178"

><td id="1178"><a href="#1178">1178</a></td></tr
><tr id="gr_svn102_1179"

><td id="1179"><a href="#1179">1179</a></td></tr
><tr id="gr_svn102_1180"

><td id="1180"><a href="#1180">1180</a></td></tr
><tr id="gr_svn102_1181"

><td id="1181"><a href="#1181">1181</a></td></tr
><tr id="gr_svn102_1182"

><td id="1182"><a href="#1182">1182</a></td></tr
><tr id="gr_svn102_1183"

><td id="1183"><a href="#1183">1183</a></td></tr
><tr id="gr_svn102_1184"

><td id="1184"><a href="#1184">1184</a></td></tr
><tr id="gr_svn102_1185"

><td id="1185"><a href="#1185">1185</a></td></tr
><tr id="gr_svn102_1186"

><td id="1186"><a href="#1186">1186</a></td></tr
><tr id="gr_svn102_1187"

><td id="1187"><a href="#1187">1187</a></td></tr
><tr id="gr_svn102_1188"

><td id="1188"><a href="#1188">1188</a></td></tr
><tr id="gr_svn102_1189"

><td id="1189"><a href="#1189">1189</a></td></tr
><tr id="gr_svn102_1190"

><td id="1190"><a href="#1190">1190</a></td></tr
><tr id="gr_svn102_1191"

><td id="1191"><a href="#1191">1191</a></td></tr
><tr id="gr_svn102_1192"

><td id="1192"><a href="#1192">1192</a></td></tr
><tr id="gr_svn102_1193"

><td id="1193"><a href="#1193">1193</a></td></tr
><tr id="gr_svn102_1194"

><td id="1194"><a href="#1194">1194</a></td></tr
><tr id="gr_svn102_1195"

><td id="1195"><a href="#1195">1195</a></td></tr
><tr id="gr_svn102_1196"

><td id="1196"><a href="#1196">1196</a></td></tr
><tr id="gr_svn102_1197"

><td id="1197"><a href="#1197">1197</a></td></tr
><tr id="gr_svn102_1198"

><td id="1198"><a href="#1198">1198</a></td></tr
><tr id="gr_svn102_1199"

><td id="1199"><a href="#1199">1199</a></td></tr
><tr id="gr_svn102_1200"

><td id="1200"><a href="#1200">1200</a></td></tr
><tr id="gr_svn102_1201"

><td id="1201"><a href="#1201">1201</a></td></tr
><tr id="gr_svn102_1202"

><td id="1202"><a href="#1202">1202</a></td></tr
><tr id="gr_svn102_1203"

><td id="1203"><a href="#1203">1203</a></td></tr
><tr id="gr_svn102_1204"

><td id="1204"><a href="#1204">1204</a></td></tr
><tr id="gr_svn102_1205"

><td id="1205"><a href="#1205">1205</a></td></tr
><tr id="gr_svn102_1206"

><td id="1206"><a href="#1206">1206</a></td></tr
><tr id="gr_svn102_1207"

><td id="1207"><a href="#1207">1207</a></td></tr
><tr id="gr_svn102_1208"

><td id="1208"><a href="#1208">1208</a></td></tr
><tr id="gr_svn102_1209"

><td id="1209"><a href="#1209">1209</a></td></tr
><tr id="gr_svn102_1210"

><td id="1210"><a href="#1210">1210</a></td></tr
><tr id="gr_svn102_1211"

><td id="1211"><a href="#1211">1211</a></td></tr
><tr id="gr_svn102_1212"

><td id="1212"><a href="#1212">1212</a></td></tr
><tr id="gr_svn102_1213"

><td id="1213"><a href="#1213">1213</a></td></tr
><tr id="gr_svn102_1214"

><td id="1214"><a href="#1214">1214</a></td></tr
><tr id="gr_svn102_1215"

><td id="1215"><a href="#1215">1215</a></td></tr
><tr id="gr_svn102_1216"

><td id="1216"><a href="#1216">1216</a></td></tr
><tr id="gr_svn102_1217"

><td id="1217"><a href="#1217">1217</a></td></tr
><tr id="gr_svn102_1218"

><td id="1218"><a href="#1218">1218</a></td></tr
><tr id="gr_svn102_1219"

><td id="1219"><a href="#1219">1219</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint lang-cpp"><table id="src_table_0"><tr
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

><td class="source">//<br></td></tr
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

><td class="source">//<br></td></tr
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

><td class="source">#include &quot;otpch.h&quot;<br></td></tr
><tr
id=sl_svn102_21

><td class="source"><br></td></tr
><tr
id=sl_svn102_22

><td class="source">#include &lt;string&gt;<br></td></tr
><tr
id=sl_svn102_23

><td class="source">#include &lt;sstream&gt;<br></td></tr
><tr
id=sl_svn102_24

><td class="source">#include &lt;utility&gt;<br></td></tr
><tr
id=sl_svn102_25

><td class="source"><br></td></tr
><tr
id=sl_svn102_26

><td class="source">#include &lt;boost/tokenizer.hpp&gt;<br></td></tr
><tr
id=sl_svn102_27

><td class="source">typedef boost::tokenizer&lt;boost::char_separator&lt;char&gt; &gt; tokenizer;<br></td></tr
><tr
id=sl_svn102_28

><td class="source"><br></td></tr
><tr
id=sl_svn102_29

><td class="source">#include &quot;commands.h&quot;<br></td></tr
><tr
id=sl_svn102_30

><td class="source">#include &quot;player.h&quot;<br></td></tr
><tr
id=sl_svn102_31

><td class="source">#include &quot;npc.h&quot;<br></td></tr
><tr
id=sl_svn102_32

><td class="source">#include &quot;monsters.h&quot;<br></td></tr
><tr
id=sl_svn102_33

><td class="source">#include &quot;game.h&quot;<br></td></tr
><tr
id=sl_svn102_34

><td class="source">#include &quot;actions.h&quot;<br></td></tr
><tr
id=sl_svn102_35

><td class="source">#include &quot;house.h&quot;<br></td></tr
><tr
id=sl_svn102_36

><td class="source">#include &quot;ioplayer.h&quot;<br></td></tr
><tr
id=sl_svn102_37

><td class="source">#include &quot;tools.h&quot;<br></td></tr
><tr
id=sl_svn102_38

><td class="source">#include &quot;ban.h&quot;<br></td></tr
><tr
id=sl_svn102_39

><td class="source">#include &quot;configmanager.h&quot;<br></td></tr
><tr
id=sl_svn102_40

><td class="source">#include &quot;town.h&quot;<br></td></tr
><tr
id=sl_svn102_41

><td class="source">#include &quot;spells.h&quot;<br></td></tr
><tr
id=sl_svn102_42

><td class="source">#include &quot;talkaction.h&quot;<br></td></tr
><tr
id=sl_svn102_43

><td class="source">#include &quot;movement.h&quot;<br></td></tr
><tr
id=sl_svn102_44

><td class="source">#include &quot;spells.h&quot;<br></td></tr
><tr
id=sl_svn102_45

><td class="source">#include &quot;weapons.h&quot;<br></td></tr
><tr
id=sl_svn102_46

><td class="source">#include &quot;raids.h&quot;<br></td></tr
><tr
id=sl_svn102_47

><td class="source">#include &quot;globalevent.h&quot;<br></td></tr
><tr
id=sl_svn102_48

><td class="source"><br></td></tr
><tr
id=sl_svn102_49

><td class="source">#ifdef __ENABLE_SERVER_DIAGNOSTIC__<br></td></tr
><tr
id=sl_svn102_50

><td class="source">#include &quot;outputmessage.h&quot;<br></td></tr
><tr
id=sl_svn102_51

><td class="source">#include &quot;connection.h&quot;<br></td></tr
><tr
id=sl_svn102_52

><td class="source">#include &quot;status.h&quot;<br></td></tr
><tr
id=sl_svn102_53

><td class="source">#include &quot;protocollogin.h&quot;<br></td></tr
><tr
id=sl_svn102_54

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_55

><td class="source"><br></td></tr
><tr
id=sl_svn102_56

><td class="source">#include &lt;libxml/xmlmemory.h&gt;<br></td></tr
><tr
id=sl_svn102_57

><td class="source">#include &lt;libxml/parser.h&gt;<br></td></tr
><tr
id=sl_svn102_58

><td class="source"><br></td></tr
><tr
id=sl_svn102_59

><td class="source">extern ConfigManager g_config;<br></td></tr
><tr
id=sl_svn102_60

><td class="source">extern Actions* g_actions;<br></td></tr
><tr
id=sl_svn102_61

><td class="source">extern Monsters g_monsters;<br></td></tr
><tr
id=sl_svn102_62

><td class="source">extern BanManager g_bans;<br></td></tr
><tr
id=sl_svn102_63

><td class="source">extern Npcs g_npcs;<br></td></tr
><tr
id=sl_svn102_64

><td class="source">extern TalkActions* g_talkactions;<br></td></tr
><tr
id=sl_svn102_65

><td class="source">extern MoveEvents* g_moveEvents;<br></td></tr
><tr
id=sl_svn102_66

><td class="source">extern Spells* g_spells;<br></td></tr
><tr
id=sl_svn102_67

><td class="source">extern Weapons* g_weapons;<br></td></tr
><tr
id=sl_svn102_68

><td class="source">extern CreatureEvents* g_creatureEvents;<br></td></tr
><tr
id=sl_svn102_69

><td class="source">extern Game g_game;<br></td></tr
><tr
id=sl_svn102_70

><td class="source">extern GlobalEvents* g_globalEvents;<br></td></tr
><tr
id=sl_svn102_71

><td class="source"><br></td></tr
><tr
id=sl_svn102_72

><td class="source">extern bool readXMLInteger(xmlNodePtr p, const char *tag, int &amp;value);<br></td></tr
><tr
id=sl_svn102_73

><td class="source"><br></td></tr
><tr
id=sl_svn102_74

><td class="source">#define ipText(a) (unsigned int)a[0] &lt;&lt; &quot;.&quot; &lt;&lt; (unsigned int)a[1] &lt;&lt; &quot;.&quot; &lt;&lt; (unsigned int)a[2] &lt;&lt; &quot;.&quot; &lt;&lt; (unsigned int)a[3]<br></td></tr
><tr
id=sl_svn102_75

><td class="source"><br></td></tr
><tr
id=sl_svn102_76

><td class="source">//table of commands<br></td></tr
><tr
id=sl_svn102_77

><td class="source">s_defcommands Commands::defined_commands[] = {<br></td></tr
><tr
id=sl_svn102_78

><td class="source">	{&quot;/s&quot;,&amp;Commands::placeNpc},<br></td></tr
><tr
id=sl_svn102_79

><td class="source">	{&quot;/m&quot;,&amp;Commands::placeMonster},<br></td></tr
><tr
id=sl_svn102_80

><td class="source">	{&quot;/summon&quot;,&amp;Commands::placeSummon},<br></td></tr
><tr
id=sl_svn102_81

><td class="source">	{&quot;/B&quot;,&amp;Commands::broadcastMessage},<br></td></tr
><tr
id=sl_svn102_82

><td class="source">	//{&quot;/b&quot;,&amp;Commands::banPlayer},<br></td></tr
><tr
id=sl_svn102_83

><td class="source">	{&quot;/t&quot;,&amp;Commands::teleportMasterPos},<br></td></tr
><tr
id=sl_svn102_84

><td class="source">	{&quot;/c&quot;,&amp;Commands::teleportHere},<br></td></tr
><tr
id=sl_svn102_85

><td class="source">	{&quot;/i&quot;,&amp;Commands::createItemById},<br></td></tr
><tr
id=sl_svn102_86

><td class="source">	{&quot;/n&quot;,&amp;Commands::createItemByName},<br></td></tr
><tr
id=sl_svn102_87

><td class="source">	{&quot;/q&quot;,&amp;Commands::subtractMoney},<br></td></tr
><tr
id=sl_svn102_88

><td class="source">	{&quot;/reload&quot;,&amp;Commands::reloadInfo},<br></td></tr
><tr
id=sl_svn102_89

><td class="source">	{&quot;/z&quot;,&amp;Commands::testCommand},<br></td></tr
><tr
id=sl_svn102_90

><td class="source">	{&quot;/goto&quot;,&amp;Commands::teleportTo},<br></td></tr
><tr
id=sl_svn102_91

><td class="source">	{&quot;/info&quot;,&amp;Commands::getInfo},<br></td></tr
><tr
id=sl_svn102_92

><td class="source">	{&quot;/save&quot;,&amp;Commands::saveServer},<br></td></tr
><tr
id=sl_svn102_93

><td class="source">	{&quot;/closeserver&quot;,&amp;Commands::closeServer},<br></td></tr
><tr
id=sl_svn102_94

><td class="source">	{&quot;/openserver&quot;,&amp;Commands::openServer},<br></td></tr
><tr
id=sl_svn102_95

><td class="source">	{&quot;/getonline&quot;,&amp;Commands::onlineList},<br></td></tr
><tr
id=sl_svn102_96

><td class="source">	{&quot;/a&quot;,&amp;Commands::teleportNTiles},<br></td></tr
><tr
id=sl_svn102_97

><td class="source">	{&quot;/kick&quot;,&amp;Commands::kickPlayer},<br></td></tr
><tr
id=sl_svn102_98

><td class="source">	{&quot;/owner&quot;,&amp;Commands::setHouseOwner},<br></td></tr
><tr
id=sl_svn102_99

><td class="source">	{&quot;/sellhouse&quot;,&amp;Commands::sellHouse},<br></td></tr
><tr
id=sl_svn102_100

><td class="source">	{&quot;/gethouse&quot;,&amp;Commands::getHouse},<br></td></tr
><tr
id=sl_svn102_101

><td class="source">	{&quot;/buyhouse&quot;,&amp;Commands::buyHouse},<br></td></tr
><tr
id=sl_svn102_102

><td class="source">	{&quot;/town&quot;,&amp;Commands::teleportToTown},<br></td></tr
><tr
id=sl_svn102_103

><td class="source">	{&quot;/serverinfo&quot;,&amp;Commands::serverInfo},<br></td></tr
><tr
id=sl_svn102_104

><td class="source">	{&quot;/raid&quot;,&amp;Commands::forceRaid},<br></td></tr
><tr
id=sl_svn102_105

><td class="source">	{&quot;/up&quot;,&amp;Commands::goUp},<br></td></tr
><tr
id=sl_svn102_106

><td class="source">	{&quot;/down&quot;,&amp;Commands::goDown},<br></td></tr
><tr
id=sl_svn102_107

><td class="source">	{&quot;!online&quot;,&amp;Commands::whoIsOnline},<br></td></tr
><tr
id=sl_svn102_108

><td class="source">	{&quot;!frags&quot;,&amp;Commands::playerKills},<br></td></tr
><tr
id=sl_svn102_109

><td class="source">	{&quot;/refreshmap&quot;,&amp;Commands::refreshMap},<br></td></tr
><tr
id=sl_svn102_110

><td class="source">#ifdef __ENABLE_SERVER_DIAGNOSTIC__<br></td></tr
><tr
id=sl_svn102_111

><td class="source">	{&quot;/serverdiag&quot;,&amp;Commands::serverDiag}<br></td></tr
><tr
id=sl_svn102_112

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_113

><td class="source">};<br></td></tr
><tr
id=sl_svn102_114

><td class="source"><br></td></tr
><tr
id=sl_svn102_115

><td class="source"><br></td></tr
><tr
id=sl_svn102_116

><td class="source">Commands::Commands()<br></td></tr
><tr
id=sl_svn102_117

><td class="source">{<br></td></tr
><tr
id=sl_svn102_118

><td class="source">	loaded = false;<br></td></tr
><tr
id=sl_svn102_119

><td class="source">	<br></td></tr
><tr
id=sl_svn102_120

><td class="source">	//setup command map<br></td></tr
><tr
id=sl_svn102_121

><td class="source">	for(uint32_t i = 0; i &lt; sizeof(defined_commands) / sizeof(defined_commands[0]); i++){<br></td></tr
><tr
id=sl_svn102_122

><td class="source">		Command* cmd = new Command;<br></td></tr
><tr
id=sl_svn102_123

><td class="source">		cmd-&gt;loaded = false;<br></td></tr
><tr
id=sl_svn102_124

><td class="source">		cmd-&gt;accesslevel = 1;<br></td></tr
><tr
id=sl_svn102_125

><td class="source">		cmd-&gt;f = defined_commands[i].f;<br></td></tr
><tr
id=sl_svn102_126

><td class="source">		std::string key = defined_commands[i].name;<br></td></tr
><tr
id=sl_svn102_127

><td class="source">		commandMap[key] = cmd;<br></td></tr
><tr
id=sl_svn102_128

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_129

><td class="source">}<br></td></tr
><tr
id=sl_svn102_130

><td class="source"><br></td></tr
><tr
id=sl_svn102_131

><td class="source">bool Commands::loadXml(const std::string&amp; _datadir)<br></td></tr
><tr
id=sl_svn102_132

><td class="source">{<br></td></tr
><tr
id=sl_svn102_133

><td class="source">	datadir = _datadir;<br></td></tr
><tr
id=sl_svn102_134

><td class="source">	std::string filename = datadir + &quot;commands.xml&quot;;<br></td></tr
><tr
id=sl_svn102_135

><td class="source"><br></td></tr
><tr
id=sl_svn102_136

><td class="source">	xmlDocPtr doc = xmlParseFile(filename.c_str());<br></td></tr
><tr
id=sl_svn102_137

><td class="source">	if(doc){<br></td></tr
><tr
id=sl_svn102_138

><td class="source">		loaded = true;<br></td></tr
><tr
id=sl_svn102_139

><td class="source">		xmlNodePtr root, p;<br></td></tr
><tr
id=sl_svn102_140

><td class="source">		root = xmlDocGetRootElement(doc);<br></td></tr
><tr
id=sl_svn102_141

><td class="source"><br></td></tr
><tr
id=sl_svn102_142

><td class="source">		if(xmlStrcmp(root-&gt;name,(const xmlChar*)&quot;commands&quot;) != 0){<br></td></tr
><tr
id=sl_svn102_143

><td class="source">			xmlFreeDoc(doc);<br></td></tr
><tr
id=sl_svn102_144

><td class="source">			return false;<br></td></tr
><tr
id=sl_svn102_145

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_146

><td class="source"><br></td></tr
><tr
id=sl_svn102_147

><td class="source">		std::string strCmd;<br></td></tr
><tr
id=sl_svn102_148

><td class="source"><br></td></tr
><tr
id=sl_svn102_149

><td class="source">		p = root-&gt;children;<br></td></tr
><tr
id=sl_svn102_150

><td class="source"><br></td></tr
><tr
id=sl_svn102_151

><td class="source">		while (p){<br></td></tr
><tr
id=sl_svn102_152

><td class="source">			if(xmlStrcmp(p-&gt;name, (const xmlChar*)&quot;command&quot;) == 0){<br></td></tr
><tr
id=sl_svn102_153

><td class="source">				if(readXMLString(p, &quot;cmd&quot;, strCmd)){<br></td></tr
><tr
id=sl_svn102_154

><td class="source">					CommandMap::iterator it = commandMap.find(strCmd);<br></td></tr
><tr
id=sl_svn102_155

><td class="source">					int alevel;<br></td></tr
><tr
id=sl_svn102_156

><td class="source">					if(it != commandMap.end()){<br></td></tr
><tr
id=sl_svn102_157

><td class="source">						if(readXMLInteger(p,&quot;access&quot;,alevel)){<br></td></tr
><tr
id=sl_svn102_158

><td class="source">							if(!it-&gt;second-&gt;loaded){<br></td></tr
><tr
id=sl_svn102_159

><td class="source">								it-&gt;second-&gt;accesslevel = alevel;<br></td></tr
><tr
id=sl_svn102_160

><td class="source">								it-&gt;second-&gt;loaded = true;<br></td></tr
><tr
id=sl_svn102_161

><td class="source">							}<br></td></tr
><tr
id=sl_svn102_162

><td class="source">							else{<br></td></tr
><tr
id=sl_svn102_163

><td class="source">								std::cout &lt;&lt; &quot;Duplicated command &quot; &lt;&lt; strCmd &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn102_164

><td class="source">							}<br></td></tr
><tr
id=sl_svn102_165

><td class="source">						}<br></td></tr
><tr
id=sl_svn102_166

><td class="source">						else{<br></td></tr
><tr
id=sl_svn102_167

><td class="source">							std::cout &lt;&lt; &quot;missing access tag for &quot; &lt;&lt; strCmd &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn102_168

><td class="source">						}<br></td></tr
><tr
id=sl_svn102_169

><td class="source">					}<br></td></tr
><tr
id=sl_svn102_170

><td class="source">					else{<br></td></tr
><tr
id=sl_svn102_171

><td class="source">						//error<br></td></tr
><tr
id=sl_svn102_172

><td class="source">						std::cout &lt;&lt; &quot;Unknown command &quot; &lt;&lt; strCmd &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn102_173

><td class="source">					}<br></td></tr
><tr
id=sl_svn102_174

><td class="source">				}<br></td></tr
><tr
id=sl_svn102_175

><td class="source">				else{<br></td></tr
><tr
id=sl_svn102_176

><td class="source">					std::cout &lt;&lt; &quot;missing cmd.&quot; &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn102_177

><td class="source">				}<br></td></tr
><tr
id=sl_svn102_178

><td class="source">			}<br></td></tr
><tr
id=sl_svn102_179

><td class="source">			p = p-&gt;next;<br></td></tr
><tr
id=sl_svn102_180

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_181

><td class="source">		xmlFreeDoc(doc);<br></td></tr
><tr
id=sl_svn102_182

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_183

><td class="source"><br></td></tr
><tr
id=sl_svn102_184

><td class="source">	//<br></td></tr
><tr
id=sl_svn102_185

><td class="source">	for(CommandMap::iterator it = commandMap.begin(); it != commandMap.end(); ++it){<br></td></tr
><tr
id=sl_svn102_186

><td class="source">		if(it-&gt;second-&gt;loaded == false){<br></td></tr
><tr
id=sl_svn102_187

><td class="source">			std::cout &lt;&lt; &quot;Warning: Missing access level for command &quot; &lt;&lt; it-&gt;first &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn102_188

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_189

><td class="source">		//register command tag in game<br></td></tr
><tr
id=sl_svn102_190

><td class="source">		g_game.addCommandTag(it-&gt;first.substr(0,1));<br></td></tr
><tr
id=sl_svn102_191

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_192

><td class="source"><br></td></tr
><tr
id=sl_svn102_193

><td class="source"><br></td></tr
><tr
id=sl_svn102_194

><td class="source">	return this-&gt;loaded;<br></td></tr
><tr
id=sl_svn102_195

><td class="source">}<br></td></tr
><tr
id=sl_svn102_196

><td class="source"><br></td></tr
><tr
id=sl_svn102_197

><td class="source">bool Commands::reload()<br></td></tr
><tr
id=sl_svn102_198

><td class="source">{<br></td></tr
><tr
id=sl_svn102_199

><td class="source">	loaded = false;<br></td></tr
><tr
id=sl_svn102_200

><td class="source">	for(CommandMap::iterator it = commandMap.begin(); it != commandMap.end(); ++it){<br></td></tr
><tr
id=sl_svn102_201

><td class="source">		it-&gt;second-&gt;accesslevel = 1;<br></td></tr
><tr
id=sl_svn102_202

><td class="source">		it-&gt;second-&gt;loaded = false;<br></td></tr
><tr
id=sl_svn102_203

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_204

><td class="source">	g_game.resetCommandTag();<br></td></tr
><tr
id=sl_svn102_205

><td class="source">	<br></td></tr
><tr
id=sl_svn102_206

><td class="source">	loadXml(datadir);<br></td></tr
><tr
id=sl_svn102_207

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_208

><td class="source">}<br></td></tr
><tr
id=sl_svn102_209

><td class="source"><br></td></tr
><tr
id=sl_svn102_210

><td class="source">bool Commands::exeCommand(Creature* creature, const std::string&amp; cmd)<br></td></tr
><tr
id=sl_svn102_211

><td class="source">{<br></td></tr
><tr
id=sl_svn102_212

><td class="source">	std::string str_command;<br></td></tr
><tr
id=sl_svn102_213

><td class="source">	std::string str_param;<br></td></tr
><tr
id=sl_svn102_214

><td class="source"><br></td></tr
><tr
id=sl_svn102_215

><td class="source">	std::string::size_type loc = cmd.find( &#39; &#39;, 0 );<br></td></tr
><tr
id=sl_svn102_216

><td class="source">	if(loc != std::string::npos &amp;&amp; loc &gt;= 0){<br></td></tr
><tr
id=sl_svn102_217

><td class="source">		str_command = std::string(cmd, 0, loc);<br></td></tr
><tr
id=sl_svn102_218

><td class="source">		str_param = std::string(cmd, (loc+1), cmd.size()-loc-1);<br></td></tr
><tr
id=sl_svn102_219

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_220

><td class="source">	else {<br></td></tr
><tr
id=sl_svn102_221

><td class="source">		str_command = cmd;<br></td></tr
><tr
id=sl_svn102_222

><td class="source">		str_param = std::string(&quot;&quot;);<br></td></tr
><tr
id=sl_svn102_223

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_224

><td class="source"><br></td></tr
><tr
id=sl_svn102_225

><td class="source">	//find command<br></td></tr
><tr
id=sl_svn102_226

><td class="source">	CommandMap::iterator it = commandMap.find(str_command);<br></td></tr
><tr
id=sl_svn102_227

><td class="source">	if(it == commandMap.end()){<br></td></tr
><tr
id=sl_svn102_228

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_229

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_230

><td class="source"><br></td></tr
><tr
id=sl_svn102_231

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_232

><td class="source">	//check access for this command<br></td></tr
><tr
id=sl_svn102_233

><td class="source">	if(player &amp;&amp; player-&gt;getAccessLevel() &lt; it-&gt;second-&gt;accesslevel){<br></td></tr
><tr
id=sl_svn102_234

><td class="source">		if(player-&gt;getAccessLevel() &gt; 0){<br></td></tr
><tr
id=sl_svn102_235

><td class="source">			player-&gt;sendTextMessage(MSG_STATUS_SMALL, &quot;You can not execute this command.&quot;);<br></td></tr
><tr
id=sl_svn102_236

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_237

><td class="source"><br></td></tr
><tr
id=sl_svn102_238

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_239

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_240

><td class="source"><br></td></tr
><tr
id=sl_svn102_241

><td class="source">	//execute command<br></td></tr
><tr
id=sl_svn102_242

><td class="source">	CommandFunc cfunc = it-&gt;second-&gt;f;<br></td></tr
><tr
id=sl_svn102_243

><td class="source">	(this-&gt;*cfunc)(creature, str_command, str_param);<br></td></tr
><tr
id=sl_svn102_244

><td class="source">	if(player)<br></td></tr
><tr
id=sl_svn102_245

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_RED, cmd.c_str());<br></td></tr
><tr
id=sl_svn102_246

><td class="source"><br></td></tr
><tr
id=sl_svn102_247

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_248

><td class="source">}<br></td></tr
><tr
id=sl_svn102_249

><td class="source"><br></td></tr
><tr
id=sl_svn102_250

><td class="source">bool Commands::placeNpc(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_251

><td class="source">{<br></td></tr
><tr
id=sl_svn102_252

><td class="source">	Npc* npc = Npc::createNpc(param);<br></td></tr
><tr
id=sl_svn102_253

><td class="source">	if(!npc){<br></td></tr
><tr
id=sl_svn102_254

><td class="source">        return false;<br></td></tr
><tr
id=sl_svn102_255

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_256

><td class="source"><br></td></tr
><tr
id=sl_svn102_257

><td class="source">	// Place the npc<br></td></tr
><tr
id=sl_svn102_258

><td class="source">	if(g_game.placeCreature(npc, creature-&gt;getPosition())){<br></td></tr
><tr
id=sl_svn102_259

><td class="source">		g_game.addMagicEffect(creature-&gt;getPosition(), NM_ME_MAGIC_BLOOD);<br></td></tr
><tr
id=sl_svn102_260

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_261

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_262

><td class="source">	else{<br></td></tr
><tr
id=sl_svn102_263

><td class="source">		delete npc;<br></td></tr
><tr
id=sl_svn102_264

><td class="source">		Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_265

><td class="source">		if(player){<br></td></tr
><tr
id=sl_svn102_266

><td class="source">			player-&gt;sendCancelMessage(RET_NOTENOUGHROOM);<br></td></tr
><tr
id=sl_svn102_267

><td class="source">			g_game.addMagicEffect(creature-&gt;getPosition(), NM_ME_PUFF);<br></td></tr
><tr
id=sl_svn102_268

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_269

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_270

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_271

><td class="source"><br></td></tr
><tr
id=sl_svn102_272

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_273

><td class="source">}<br></td></tr
><tr
id=sl_svn102_274

><td class="source"><br></td></tr
><tr
id=sl_svn102_275

><td class="source">bool Commands::placeMonster(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_276

><td class="source">{<br></td></tr
><tr
id=sl_svn102_277

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_278

><td class="source"><br></td></tr
><tr
id=sl_svn102_279

><td class="source">	Monster* monster = Monster::createMonster(param);<br></td></tr
><tr
id=sl_svn102_280

><td class="source">	if(!monster){<br></td></tr
><tr
id=sl_svn102_281

><td class="source">		if(player){<br></td></tr
><tr
id=sl_svn102_282

><td class="source">			player-&gt;sendCancelMessage(RET_NOTPOSSIBLE);<br></td></tr
><tr
id=sl_svn102_283

><td class="source">			g_game.addMagicEffect(player-&gt;getPosition(), NM_ME_PUFF);<br></td></tr
><tr
id=sl_svn102_284

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_285

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_286

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_287

><td class="source"><br></td></tr
><tr
id=sl_svn102_288

><td class="source">	// Place the monster<br></td></tr
><tr
id=sl_svn102_289

><td class="source">	if(g_game.placeCreature(monster, creature-&gt;getPosition())){<br></td></tr
><tr
id=sl_svn102_290

><td class="source">		g_game.addMagicEffect(creature-&gt;getPosition(), NM_ME_MAGIC_BLOOD);<br></td></tr
><tr
id=sl_svn102_291

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_292

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_293

><td class="source">	else{<br></td></tr
><tr
id=sl_svn102_294

><td class="source">		delete monster;<br></td></tr
><tr
id=sl_svn102_295

><td class="source">		if(player){<br></td></tr
><tr
id=sl_svn102_296

><td class="source">			player-&gt;sendCancelMessage(RET_NOTENOUGHROOM);<br></td></tr
><tr
id=sl_svn102_297

><td class="source">			g_game.addMagicEffect(player-&gt;getPosition(), NM_ME_PUFF);<br></td></tr
><tr
id=sl_svn102_298

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_299

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_300

><td class="source"><br></td></tr
><tr
id=sl_svn102_301

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_302

><td class="source">}<br></td></tr
><tr
id=sl_svn102_303

><td class="source"><br></td></tr
><tr
id=sl_svn102_304

><td class="source">bool Commands::placeSummon(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_305

><td class="source">{<br></td></tr
><tr
id=sl_svn102_306

><td class="source">	ReturnValue ret = RET_NOERROR;<br></td></tr
><tr
id=sl_svn102_307

><td class="source"><br></td></tr
><tr
id=sl_svn102_308

><td class="source">	Monster* monster = Monster::createMonster(param);<br></td></tr
><tr
id=sl_svn102_309

><td class="source">	if(monster){<br></td></tr
><tr
id=sl_svn102_310

><td class="source">		// Place the monster<br></td></tr
><tr
id=sl_svn102_311

><td class="source">		creature-&gt;addSummon(monster);<br></td></tr
><tr
id=sl_svn102_312

><td class="source">		if(!g_game.placeCreature(monster, creature-&gt;getPosition())){<br></td></tr
><tr
id=sl_svn102_313

><td class="source">			creature-&gt;removeSummon(monster);<br></td></tr
><tr
id=sl_svn102_314

><td class="source">			ret = RET_NOTENOUGHROOM;<br></td></tr
><tr
id=sl_svn102_315

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_316

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_317

><td class="source">	else{<br></td></tr
><tr
id=sl_svn102_318

><td class="source">		ret = RET_NOTPOSSIBLE;<br></td></tr
><tr
id=sl_svn102_319

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_320

><td class="source"><br></td></tr
><tr
id=sl_svn102_321

><td class="source">	if(ret != RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_322

><td class="source">		if(Player* player = creature-&gt;getPlayer()){<br></td></tr
><tr
id=sl_svn102_323

><td class="source">			player-&gt;sendCancelMessage(ret);<br></td></tr
><tr
id=sl_svn102_324

><td class="source">			g_game.addMagicEffect(player-&gt;getPosition(), NM_ME_PUFF);<br></td></tr
><tr
id=sl_svn102_325

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_326

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_327

><td class="source"><br></td></tr
><tr
id=sl_svn102_328

><td class="source">	return (ret == RET_NOERROR);<br></td></tr
><tr
id=sl_svn102_329

><td class="source">}<br></td></tr
><tr
id=sl_svn102_330

><td class="source"><br></td></tr
><tr
id=sl_svn102_331

><td class="source">bool Commands::broadcastMessage(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_332

><td class="source">{<br></td></tr
><tr
id=sl_svn102_333

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_334

><td class="source">	if(!player)<br></td></tr
><tr
id=sl_svn102_335

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_336

><td class="source"><br></td></tr
><tr
id=sl_svn102_337

><td class="source">	g_game.internalBroadcastMessage(player, param);<br></td></tr
><tr
id=sl_svn102_338

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_339

><td class="source">}<br></td></tr
><tr
id=sl_svn102_340

><td class="source"><br></td></tr
><tr
id=sl_svn102_341

><td class="source">bool Commands::teleportMasterPos(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_342

><td class="source">{<br></td></tr
><tr
id=sl_svn102_343

><td class="source">	Position destPos = creature-&gt;getPosition();<br></td></tr
><tr
id=sl_svn102_344

><td class="source">	if(g_game.internalTeleport(creature, creature-&gt;masterPos) == RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_345

><td class="source">		g_game.addMagicEffect(destPos, NM_ME_ENERGY_AREA);<br></td></tr
><tr
id=sl_svn102_346

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_347

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_348

><td class="source"><br></td></tr
><tr
id=sl_svn102_349

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_350

><td class="source">}<br></td></tr
><tr
id=sl_svn102_351

><td class="source"><br></td></tr
><tr
id=sl_svn102_352

><td class="source">bool Commands::teleportHere(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_353

><td class="source">{<br></td></tr
><tr
id=sl_svn102_354

><td class="source">	Creature* paramCreature = g_game.getCreatureByName(param);<br></td></tr
><tr
id=sl_svn102_355

><td class="source">	if(paramCreature){<br></td></tr
><tr
id=sl_svn102_356

><td class="source">		Position destPos = paramCreature-&gt;getPosition();<br></td></tr
><tr
id=sl_svn102_357

><td class="source">		if(g_game.internalTeleport(paramCreature, creature-&gt;getPosition()) == RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_358

><td class="source">			g_game.addMagicEffect(destPos, NM_ME_ENERGY_AREA);<br></td></tr
><tr
id=sl_svn102_359

><td class="source">			return true;<br></td></tr
><tr
id=sl_svn102_360

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_361

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_362

><td class="source"><br></td></tr
><tr
id=sl_svn102_363

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_364

><td class="source">}<br></td></tr
><tr
id=sl_svn102_365

><td class="source"><br></td></tr
><tr
id=sl_svn102_366

><td class="source">bool Commands::createItemById(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_367

><td class="source">{<br></td></tr
><tr
id=sl_svn102_368

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_369

><td class="source">	if(!player)<br></td></tr
><tr
id=sl_svn102_370

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_371

><td class="source"><br></td></tr
><tr
id=sl_svn102_372

><td class="source">	std::string tmp = param;<br></td></tr
><tr
id=sl_svn102_373

><td class="source"><br></td></tr
><tr
id=sl_svn102_374

><td class="source">	std::string::size_type pos = tmp.find(&#39; &#39;, 0);<br></td></tr
><tr
id=sl_svn102_375

><td class="source">	if(pos == std::string::npos){<br></td></tr
><tr
id=sl_svn102_376

><td class="source">		pos = tmp.size();<br></td></tr
><tr
id=sl_svn102_377

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_378

><td class="source"><br></td></tr
><tr
id=sl_svn102_379

><td class="source">	int32_t type = atoi(tmp.substr(0, pos).c_str());<br></td></tr
><tr
id=sl_svn102_380

><td class="source">	int32_t count = 1;<br></td></tr
><tr
id=sl_svn102_381

><td class="source">	if(pos &lt; tmp.size()){<br></td></tr
><tr
id=sl_svn102_382

><td class="source">		tmp.erase(0, pos+1);<br></td></tr
><tr
id=sl_svn102_383

><td class="source">		count = std::max(0, std::min(atoi(tmp.c_str()), 100));<br></td></tr
><tr
id=sl_svn102_384

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_385

><td class="source"><br></td></tr
><tr
id=sl_svn102_386

><td class="source">	Item* newItem = Item::CreateItem(type, count);<br></td></tr
><tr
id=sl_svn102_387

><td class="source">	if(!newItem){<br></td></tr
><tr
id=sl_svn102_388

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_389

><td class="source">    }<br></td></tr
><tr
id=sl_svn102_390

><td class="source">    g_game.startDecay(newItem);<br></td></tr
><tr
id=sl_svn102_391

><td class="source"><br></td></tr
><tr
id=sl_svn102_392

><td class="source">	ReturnValue ret = g_game.internalAddItem(player, newItem);<br></td></tr
><tr
id=sl_svn102_393

><td class="source"><br></td></tr
><tr
id=sl_svn102_394

><td class="source">	if(ret != RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_395

><td class="source">		ret = g_game.internalAddItem(player-&gt;getTile(), newItem, INDEX_WHEREEVER, FLAG_NOLIMIT);<br></td></tr
><tr
id=sl_svn102_396

><td class="source"><br></td></tr
><tr
id=sl_svn102_397

><td class="source">		if(ret != RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_398

><td class="source">			delete newItem;<br></td></tr
><tr
id=sl_svn102_399

><td class="source">			return false;<br></td></tr
><tr
id=sl_svn102_400

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_401

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_402

><td class="source"><br></td></tr
><tr
id=sl_svn102_403

><td class="source">	g_game.addMagicEffect(player-&gt;getPosition(), NM_ME_MAGIC_POISON);<br></td></tr
><tr
id=sl_svn102_404

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_405

><td class="source">}<br></td></tr
><tr
id=sl_svn102_406

><td class="source"><br></td></tr
><tr
id=sl_svn102_407

><td class="source">bool Commands::createItemByName(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_408

><td class="source">{<br></td></tr
><tr
id=sl_svn102_409

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_410

><td class="source">	if(!player)<br></td></tr
><tr
id=sl_svn102_411

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_412

><td class="source"><br></td></tr
><tr
id=sl_svn102_413

><td class="source">	std::string::size_type pos1 = param.find(&quot;\&quot;&quot;);<br></td></tr
><tr
id=sl_svn102_414

><td class="source">	pos1 = (std::string::npos == pos1 ? 0 : pos1 + 1);<br></td></tr
><tr
id=sl_svn102_415

><td class="source"><br></td></tr
><tr
id=sl_svn102_416

><td class="source">	std::string::size_type pos2 = param.rfind(&quot;\&quot;&quot;);<br></td></tr
><tr
id=sl_svn102_417

><td class="source">	if(pos2 == pos1 || pos2 == std::string::npos){<br></td></tr
><tr
id=sl_svn102_418

><td class="source">		pos2 = param.rfind(&#39; &#39;);<br></td></tr
><tr
id=sl_svn102_419

><td class="source"><br></td></tr
><tr
id=sl_svn102_420

><td class="source">		if(pos2 == std::string::npos){<br></td></tr
><tr
id=sl_svn102_421

><td class="source">			pos2 = param.size();<br></td></tr
><tr
id=sl_svn102_422

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_423

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_424

><td class="source"><br></td></tr
><tr
id=sl_svn102_425

><td class="source">	std::string itemName = param.substr(pos1, pos2 - pos1);<br></td></tr
><tr
id=sl_svn102_426

><td class="source"><br></td></tr
><tr
id=sl_svn102_427

><td class="source">	int32_t count = 1;<br></td></tr
><tr
id=sl_svn102_428

><td class="source">	if(pos2 &lt; param.size()){<br></td></tr
><tr
id=sl_svn102_429

><td class="source">		std::string itemCount = param.substr(pos2 + 1, param.size() - (pos2 + 1));<br></td></tr
><tr
id=sl_svn102_430

><td class="source">		count = std::max(0, std::min(atoi(itemCount.c_str()), 100));<br></td></tr
><tr
id=sl_svn102_431

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_432

><td class="source"><br></td></tr
><tr
id=sl_svn102_433

><td class="source">	int32_t itemId = Item::items.getItemIdByName(itemName);<br></td></tr
><tr
id=sl_svn102_434

><td class="source">	if(itemId == -1){<br></td></tr
><tr
id=sl_svn102_435

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_RED, &quot;Item could not be summoned.&quot;);<br></td></tr
><tr
id=sl_svn102_436

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_437

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_438

><td class="source"><br></td></tr
><tr
id=sl_svn102_439

><td class="source">	Item* newItem = Item::CreateItem(itemId, count);<br></td></tr
><tr
id=sl_svn102_440

><td class="source">	 if(!newItem){<br></td></tr
><tr
id=sl_svn102_441

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_442

><td class="source">    }<br></td></tr
><tr
id=sl_svn102_443

><td class="source">    g_game.startDecay(newItem);<br></td></tr
><tr
id=sl_svn102_444

><td class="source"><br></td></tr
><tr
id=sl_svn102_445

><td class="source">	ReturnValue ret = g_game.internalAddItem(player, newItem);<br></td></tr
><tr
id=sl_svn102_446

><td class="source"><br></td></tr
><tr
id=sl_svn102_447

><td class="source">	if(ret != RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_448

><td class="source">		ret = g_game.internalAddItem(player-&gt;getTile(), newItem, INDEX_WHEREEVER, FLAG_NOLIMIT);<br></td></tr
><tr
id=sl_svn102_449

><td class="source"><br></td></tr
><tr
id=sl_svn102_450

><td class="source">		if(ret != RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_451

><td class="source">			delete newItem;<br></td></tr
><tr
id=sl_svn102_452

><td class="source">			return false;<br></td></tr
><tr
id=sl_svn102_453

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_454

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_455

><td class="source"><br></td></tr
><tr
id=sl_svn102_456

><td class="source">	g_game.addMagicEffect(player-&gt;getPosition(), NM_ME_MAGIC_POISON);<br></td></tr
><tr
id=sl_svn102_457

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_458

><td class="source">}<br></td></tr
><tr
id=sl_svn102_459

><td class="source"><br></td></tr
><tr
id=sl_svn102_460

><td class="source">bool Commands::subtractMoney(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_461

><td class="source">{<br></td></tr
><tr
id=sl_svn102_462

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_463

><td class="source">	if(!player)<br></td></tr
><tr
id=sl_svn102_464

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_465

><td class="source"><br></td></tr
><tr
id=sl_svn102_466

><td class="source">	int count = atoi(param.c_str());<br></td></tr
><tr
id=sl_svn102_467

><td class="source">	uint32_t money = g_game.getMoney(player);<br></td></tr
><tr
id=sl_svn102_468

><td class="source">	if(!count){<br></td></tr
><tr
id=sl_svn102_469

><td class="source">		std::stringstream info;<br></td></tr
><tr
id=sl_svn102_470

><td class="source">		info &lt;&lt; &quot;You have &quot; &lt;&lt; money &lt;&lt; &quot; gold.&quot;;<br></td></tr
><tr
id=sl_svn102_471

><td class="source">		player-&gt;sendCancel(info.str().c_str());<br></td></tr
><tr
id=sl_svn102_472

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_473

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_474

><td class="source">	else if(count &gt; (int)money){<br></td></tr
><tr
id=sl_svn102_475

><td class="source">		std::stringstream info;<br></td></tr
><tr
id=sl_svn102_476

><td class="source">		info &lt;&lt; &quot;You have &quot; &lt;&lt; money &lt;&lt; &quot; gold and is not sufficient.&quot;;<br></td></tr
><tr
id=sl_svn102_477

><td class="source">		player-&gt;sendCancel(info.str().c_str());<br></td></tr
><tr
id=sl_svn102_478

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_479

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_480

><td class="source"><br></td></tr
><tr
id=sl_svn102_481

><td class="source">	if(!g_game.removeMoney(player, count)){<br></td></tr
><tr
id=sl_svn102_482

><td class="source">		std::stringstream info;<br></td></tr
><tr
id=sl_svn102_483

><td class="source">		info &lt;&lt; &quot;Can not subtract money!&quot;;<br></td></tr
><tr
id=sl_svn102_484

><td class="source">		player-&gt;sendCancel(info.str().c_str());<br></td></tr
><tr
id=sl_svn102_485

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_486

><td class="source"><br></td></tr
><tr
id=sl_svn102_487

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_488

><td class="source">}<br></td></tr
><tr
id=sl_svn102_489

><td class="source"><br></td></tr
><tr
id=sl_svn102_490

><td class="source">bool Commands::reloadInfo(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_491

><td class="source">{<br></td></tr
><tr
id=sl_svn102_492

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_493

><td class="source"><br></td></tr
><tr
id=sl_svn102_494

><td class="source">	if(param == &quot;actions&quot; || param == &quot;action&quot;){<br></td></tr
><tr
id=sl_svn102_495

><td class="source">		g_actions-&gt;reload();<br></td></tr
><tr
id=sl_svn102_496

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded actions.&quot;);<br></td></tr
><tr
id=sl_svn102_497

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_498

><td class="source">	else if(param == &quot;commands&quot; || param == &quot;command&quot;){<br></td></tr
><tr
id=sl_svn102_499

><td class="source">		this-&gt;reload();<br></td></tr
><tr
id=sl_svn102_500

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded commands.&quot;);<br></td></tr
><tr
id=sl_svn102_501

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_502

><td class="source">	else if(param == &quot;monsters&quot; || param == &quot;monster&quot;){<br></td></tr
><tr
id=sl_svn102_503

><td class="source">		g_monsters.reload();<br></td></tr
><tr
id=sl_svn102_504

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded monsters.&quot;);<br></td></tr
><tr
id=sl_svn102_505

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_506

><td class="source">	else if(param == &quot;npc&quot;){<br></td></tr
><tr
id=sl_svn102_507

><td class="source">		g_npcs.reload();<br></td></tr
><tr
id=sl_svn102_508

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded npcs.&quot;);<br></td></tr
><tr
id=sl_svn102_509

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_510

><td class="source">	else if(param == &quot;config&quot;){<br></td></tr
><tr
id=sl_svn102_511

><td class="source">		g_config.reload();<br></td></tr
><tr
id=sl_svn102_512

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded config.&quot;);<br></td></tr
><tr
id=sl_svn102_513

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_514

><td class="source">	else if(param == &quot;talk&quot; || param == &quot;talkactions&quot; || param == &quot;talk actions&quot; || param == &quot;ta&quot;){<br></td></tr
><tr
id=sl_svn102_515

><td class="source">		g_talkactions-&gt;reload();<br></td></tr
><tr
id=sl_svn102_516

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded talk actions.&quot;);<br></td></tr
><tr
id=sl_svn102_517

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_518

><td class="source">	else if(param == &quot;move&quot; || param == &quot;movement&quot; || param == &quot;movement actions&quot;){<br></td></tr
><tr
id=sl_svn102_519

><td class="source">		g_moveEvents-&gt;reload();<br></td></tr
><tr
id=sl_svn102_520

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded movement actions.&quot;);<br></td></tr
><tr
id=sl_svn102_521

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_522

><td class="source">	else if(param == &quot;spells&quot; || param == &quot;spell&quot;){<br></td></tr
><tr
id=sl_svn102_523

><td class="source">		g_spells-&gt;reload();<br></td></tr
><tr
id=sl_svn102_524

><td class="source">		g_monsters.reload();<br></td></tr
><tr
id=sl_svn102_525

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded spells and monsters.&quot;);<br></td></tr
><tr
id=sl_svn102_526

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_527

><td class="source">	else if(param == &quot;raids&quot; || param == &quot;raid&quot;){<br></td></tr
><tr
id=sl_svn102_528

><td class="source">		Raids::getInstance()-&gt;reload();<br></td></tr
><tr
id=sl_svn102_529

><td class="source">		Raids::getInstance()-&gt;startup();<br></td></tr
><tr
id=sl_svn102_530

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded raids.&quot;);<br></td></tr
><tr
id=sl_svn102_531

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_532

><td class="source">	/*<br></td></tr
><tr
id=sl_svn102_533

><td class="source">	else if(param == &quot;weapons&quot;){<br></td></tr
><tr
id=sl_svn102_534

><td class="source">		g_weapons-&gt;reload();<br></td></tr
><tr
id=sl_svn102_535

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_536

><td class="source">	else if(param == &quot;items&quot;){<br></td></tr
><tr
id=sl_svn102_537

><td class="source">		Item::items.reload();<br></td></tr
><tr
id=sl_svn102_538

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_539

><td class="source">	*/<br></td></tr
><tr
id=sl_svn102_540

><td class="source">	else if(param == &quot;creaturescripts&quot; || param == &quot;creature scripts&quot; || param == &quot;cs&quot;){<br></td></tr
><tr
id=sl_svn102_541

><td class="source">		g_creatureEvents-&gt;reload();<br></td></tr
><tr
id=sl_svn102_542

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded creature scripts.&quot;);<br></td></tr
><tr
id=sl_svn102_543

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_544

><td class="source">	else if(param == &quot;globalevent&quot; || param == &quot;global event&quot; || param == &quot;ge&quot;){<br></td></tr
><tr
id=sl_svn102_545

><td class="source">		g_globalEvents-&gt;reload();<br></td></tr
><tr
id=sl_svn102_546

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Reloaded global events.&quot;);<br></td></tr
><tr
id=sl_svn102_547

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_548

><td class="source">	else{<br></td></tr
><tr
id=sl_svn102_549

><td class="source">		if(player) player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Option not found.&quot;);<br></td></tr
><tr
id=sl_svn102_550

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_551

><td class="source"><br></td></tr
><tr
id=sl_svn102_552

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_553

><td class="source">}<br></td></tr
><tr
id=sl_svn102_554

><td class="source"><br></td></tr
><tr
id=sl_svn102_555

><td class="source">bool Commands::testCommand(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_556

><td class="source">{<br></td></tr
><tr
id=sl_svn102_557

><td class="source">	int color = atoi(param.c_str());<br></td></tr
><tr
id=sl_svn102_558

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_559

><td class="source">	if(player) {<br></td></tr
><tr
id=sl_svn102_560

><td class="source">		player-&gt;sendMagicEffect(player-&gt;getPosition(), color);<br></td></tr
><tr
id=sl_svn102_561

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_562

><td class="source"><br></td></tr
><tr
id=sl_svn102_563

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_564

><td class="source">}<br></td></tr
><tr
id=sl_svn102_565

><td class="source"><br></td></tr
><tr
id=sl_svn102_566

><td class="source">bool Commands::teleportToTown(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_567

><td class="source">{<br></td></tr
><tr
id=sl_svn102_568

><td class="source">	std::string tmp = param;<br></td></tr
><tr
id=sl_svn102_569

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_570

><td class="source"><br></td></tr
><tr
id=sl_svn102_571

><td class="source">	if(!player){<br></td></tr
><tr
id=sl_svn102_572

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_573

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_574

><td class="source"><br></td></tr
><tr
id=sl_svn102_575

><td class="source">	Town* town = Towns::getInstance().getTown(tmp);<br></td></tr
><tr
id=sl_svn102_576

><td class="source">	if(town){<br></td></tr
><tr
id=sl_svn102_577

><td class="source">		if(g_game.internalTeleport(creature, town-&gt;getTemplePosition()) == RET_NOERROR) {<br></td></tr
><tr
id=sl_svn102_578

><td class="source">			g_game.addMagicEffect(town-&gt;getTemplePosition(), NM_ME_ENERGY_AREA);<br></td></tr
><tr
id=sl_svn102_579

><td class="source">			return true;<br></td></tr
><tr
id=sl_svn102_580

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_581

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_582

><td class="source"><br></td></tr
><tr
id=sl_svn102_583

><td class="source">	player-&gt;sendCancel(&quot;Could not find the town.&quot;);<br></td></tr
><tr
id=sl_svn102_584

><td class="source"><br></td></tr
><tr
id=sl_svn102_585

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_586

><td class="source">}<br></td></tr
><tr
id=sl_svn102_587

><td class="source"><br></td></tr
><tr
id=sl_svn102_588

><td class="source">bool Commands::teleportTo(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_589

><td class="source">{<br></td></tr
><tr
id=sl_svn102_590

><td class="source">	Position destPos;<br></td></tr
><tr
id=sl_svn102_591

><td class="source">	if(Waypoint_ptr waypoint = g_game.getMap()-&gt;waypoints.getWaypointByName(param)){<br></td></tr
><tr
id=sl_svn102_592

><td class="source">		destPos = waypoint-&gt;pos;<br></td></tr
><tr
id=sl_svn102_593

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_594

><td class="source">	else if(Creature* paramCreature = g_game.getCreatureByName(param)){<br></td></tr
><tr
id=sl_svn102_595

><td class="source">		destPos = paramCreature-&gt;getPosition();<br></td></tr
><tr
id=sl_svn102_596

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_597

><td class="source">	else{<br></td></tr
><tr
id=sl_svn102_598

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_599

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_600

><td class="source"><br></td></tr
><tr
id=sl_svn102_601

><td class="source">	if(g_game.internalTeleport(creature, destPos) == RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_602

><td class="source">		g_game.addMagicEffect(destPos, NM_ME_ENERGY_AREA);<br></td></tr
><tr
id=sl_svn102_603

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_604

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_605

><td class="source"><br></td></tr
><tr
id=sl_svn102_606

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_607

><td class="source">}<br></td></tr
><tr
id=sl_svn102_608

><td class="source"><br></td></tr
><tr
id=sl_svn102_609

><td class="source">bool Commands::getInfo(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_610

><td class="source">{<br></td></tr
><tr
id=sl_svn102_611

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_612

><td class="source">	if(!player)<br></td></tr
><tr
id=sl_svn102_613

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_614

><td class="source"><br></td></tr
><tr
id=sl_svn102_615

><td class="source">	Player* paramPlayer = g_game.getPlayerByName(param);<br></td></tr
><tr
id=sl_svn102_616

><td class="source">	if(paramPlayer) {<br></td></tr
><tr
id=sl_svn102_617

><td class="source">		std::stringstream info;<br></td></tr
><tr
id=sl_svn102_618

><td class="source">		if(paramPlayer-&gt;getAccessLevel() &gt;= player-&gt;getAccessLevel() &amp;&amp; player != paramPlayer){<br></td></tr
><tr
id=sl_svn102_619

><td class="source">			player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;You can not get info about this player.&quot;);<br></td></tr
><tr
id=sl_svn102_620

><td class="source">			return true;<br></td></tr
><tr
id=sl_svn102_621

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_622

><td class="source">		<br></td></tr
><tr
id=sl_svn102_623

><td class="source">		uint8_t ip[4];<br></td></tr
><tr
id=sl_svn102_624

><td class="source">		*(uint32_t*)&amp;ip = paramPlayer-&gt;lastip;<br></td></tr
><tr
id=sl_svn102_625

><td class="source">		info &lt;&lt; &quot;name:   &quot; &lt;&lt; paramPlayer-&gt;getName() &lt;&lt; std::endl &lt;&lt;<br></td></tr
><tr
id=sl_svn102_626

><td class="source">				&quot;access: &quot; &lt;&lt; paramPlayer-&gt;getAccessLevel() &lt;&lt; std::endl &lt;&lt;<br></td></tr
><tr
id=sl_svn102_627

><td class="source">				&quot;level:  &quot; &lt;&lt; paramPlayer-&gt;getPlayerInfo(PLAYERINFO_LEVEL) &lt;&lt; std::endl &lt;&lt;<br></td></tr
><tr
id=sl_svn102_628

><td class="source">				&quot;maglvl: &quot; &lt;&lt; paramPlayer-&gt;getPlayerInfo(PLAYERINFO_MAGICLEVEL) &lt;&lt; std::endl &lt;&lt;<br></td></tr
><tr
id=sl_svn102_629

><td class="source">				&quot;speed:  &quot; &lt;&lt;  paramPlayer-&gt;getSpeed() &lt;&lt;std::endl &lt;&lt;<br></td></tr
><tr
id=sl_svn102_630

><td class="source">				&quot;position &quot; &lt;&lt; paramPlayer-&gt;getPosition() &lt;&lt; std::endl &lt;&lt;<br></td></tr
><tr
id=sl_svn102_631

><td class="source">				&quot;ip: &quot; &lt;&lt; ipText(ip);<br></td></tr
><tr
id=sl_svn102_632

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, info.str().c_str());<br></td></tr
><tr
id=sl_svn102_633

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_634

><td class="source">	else{<br></td></tr
><tr
id=sl_svn102_635

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Player not found.&quot;);<br></td></tr
><tr
id=sl_svn102_636

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_637

><td class="source"><br></td></tr
><tr
id=sl_svn102_638

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_639

><td class="source">}<br></td></tr
><tr
id=sl_svn102_640

><td class="source"><br></td></tr
><tr
id=sl_svn102_641

><td class="source">bool Commands::closeServer(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_642

><td class="source">{<br></td></tr
><tr
id=sl_svn102_643

><td class="source">	g_game.setGameState(GAME_STATE_CLOSED);<br></td></tr
><tr
id=sl_svn102_644

><td class="source"><br></td></tr
><tr
id=sl_svn102_645

><td class="source">	AutoList&lt;Player&gt;::listiterator it = Player::listPlayer.list.begin();<br></td></tr
><tr
id=sl_svn102_646

><td class="source">	while(it != Player::listPlayer.list.end()){<br></td></tr
><tr
id=sl_svn102_647

><td class="source">		if(!(*it).second-&gt;hasFlag(PlayerFlag_CanAlwaysLogin)){<br></td></tr
><tr
id=sl_svn102_648

><td class="source">			(*it).second-&gt;kickPlayer();<br></td></tr
><tr
id=sl_svn102_649

><td class="source">			it = Player::listPlayer.list.begin();<br></td></tr
><tr
id=sl_svn102_650

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_651

><td class="source">		else{<br></td></tr
><tr
id=sl_svn102_652

><td class="source">			++it;<br></td></tr
><tr
id=sl_svn102_653

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_654

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_655

><td class="source"><br></td></tr
><tr
id=sl_svn102_656

><td class="source">	// Is it a real serversave?<br></td></tr
><tr
id=sl_svn102_657

><td class="source">	if(param == &quot;serversave&quot;)<br></td></tr
><tr
id=sl_svn102_658

><td class="source">		g_game.saveServer(true);<br></td></tr
><tr
id=sl_svn102_659

><td class="source">	else<br></td></tr
><tr
id=sl_svn102_660

><td class="source">		g_game.saveServer(false);<br></td></tr
><tr
id=sl_svn102_661

><td class="source"><br></td></tr
><tr
id=sl_svn102_662

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_663

><td class="source">	if(player){<br></td></tr
><tr
id=sl_svn102_664

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Server is now closed.&quot;);<br></td></tr
><tr
id=sl_svn102_665

><td class="source">    }<br></td></tr
><tr
id=sl_svn102_666

><td class="source">    <br></td></tr
><tr
id=sl_svn102_667

><td class="source">    return true;<br></td></tr
><tr
id=sl_svn102_668

><td class="source">}<br></td></tr
><tr
id=sl_svn102_669

><td class="source"><br></td></tr
><tr
id=sl_svn102_670

><td class="source">bool Commands::saveServer(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_671

><td class="source">{<br></td></tr
><tr
id=sl_svn102_672

><td class="source">    // Save most everything<br></td></tr
><tr
id=sl_svn102_673

><td class="source">	g_game.saveServer(false);<br></td></tr
><tr
id=sl_svn102_674

><td class="source"><br></td></tr
><tr
id=sl_svn102_675

><td class="source">	// Notify player<br></td></tr
><tr
id=sl_svn102_676

><td class="source">	if(Player* player = creature-&gt;getPlayer()){<br></td></tr
><tr
id=sl_svn102_677

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Server has been saved.&quot;);<br></td></tr
><tr
id=sl_svn102_678

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_679

><td class="source"><br></td></tr
><tr
id=sl_svn102_680

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_681

><td class="source">}<br></td></tr
><tr
id=sl_svn102_682

><td class="source"><br></td></tr
><tr
id=sl_svn102_683

><td class="source">bool Commands::openServer(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_684

><td class="source">{<br></td></tr
><tr
id=sl_svn102_685

><td class="source">    g_game.setGameState(GAME_STATE_NORMAL);<br></td></tr
><tr
id=sl_svn102_686

><td class="source">    <br></td></tr
><tr
id=sl_svn102_687

><td class="source">    Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_688

><td class="source">    if(player){<br></td></tr
><tr
id=sl_svn102_689

><td class="source">        player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Server is now open.&quot;);<br></td></tr
><tr
id=sl_svn102_690

><td class="source">    }<br></td></tr
><tr
id=sl_svn102_691

><td class="source">    <br></td></tr
><tr
id=sl_svn102_692

><td class="source">    return true;<br></td></tr
><tr
id=sl_svn102_693

><td class="source">}<br></td></tr
><tr
id=sl_svn102_694

><td class="source"><br></td></tr
><tr
id=sl_svn102_695

><td class="source">bool Commands::onlineList(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_696

><td class="source">{<br></td></tr
><tr
id=sl_svn102_697

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_698

><td class="source">	if(!player)<br></td></tr
><tr
id=sl_svn102_699

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_700

><td class="source"><br></td></tr
><tr
id=sl_svn102_701

><td class="source">	int32_t alevelmin = 0;<br></td></tr
><tr
id=sl_svn102_702

><td class="source">	int32_t alevelmax = 10000;<br></td></tr
><tr
id=sl_svn102_703

><td class="source">	int i, n;<br></td></tr
><tr
id=sl_svn102_704

><td class="source"><br></td></tr
><tr
id=sl_svn102_705

><td class="source">	if(param == &quot;gm&quot;)<br></td></tr
><tr
id=sl_svn102_706

><td class="source">		alevelmin = 1;<br></td></tr
><tr
id=sl_svn102_707

><td class="source">	else if(param == &quot;normal&quot;)<br></td></tr
><tr
id=sl_svn102_708

><td class="source">		alevelmax = 0;<br></td></tr
><tr
id=sl_svn102_709

><td class="source"><br></td></tr
><tr
id=sl_svn102_710

><td class="source">	std::stringstream players;<br></td></tr
><tr
id=sl_svn102_711

><td class="source">	players &lt;&lt; &quot;name   level   mag&quot; &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn102_712

><td class="source"><br></td></tr
><tr
id=sl_svn102_713

><td class="source">	i = 0;<br></td></tr
><tr
id=sl_svn102_714

><td class="source">	n = 0;<br></td></tr
><tr
id=sl_svn102_715

><td class="source">	AutoList&lt;Player&gt;::listiterator it = Player::listPlayer.list.begin();<br></td></tr
><tr
id=sl_svn102_716

><td class="source">	for(;it != Player::listPlayer.list.end();++it)<br></td></tr
><tr
id=sl_svn102_717

><td class="source">	{<br></td></tr
><tr
id=sl_svn102_718

><td class="source">		if((*it).second-&gt;getAccessLevel() &gt;= alevelmin &amp;&amp; (*it).second-&gt;getAccessLevel() &lt;= alevelmax){<br></td></tr
><tr
id=sl_svn102_719

><td class="source">			players &lt;&lt; (*it).second-&gt;getName() &lt;&lt; &quot;   &quot; &lt;&lt;<br></td></tr
><tr
id=sl_svn102_720

><td class="source">				(*it).second-&gt;getPlayerInfo(PLAYERINFO_LEVEL) &lt;&lt; &quot;    &quot; &lt;&lt;<br></td></tr
><tr
id=sl_svn102_721

><td class="source">				(*it).second-&gt;getPlayerInfo(PLAYERINFO_MAGICLEVEL) &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn102_722

><td class="source">			n++;<br></td></tr
><tr
id=sl_svn102_723

><td class="source">			i++;<br></td></tr
><tr
id=sl_svn102_724

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_725

><td class="source">		if(i == 10){<br></td></tr
><tr
id=sl_svn102_726

><td class="source">			player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, players.str().c_str());<br></td></tr
><tr
id=sl_svn102_727

><td class="source">			players.str(&quot;&quot;);<br></td></tr
><tr
id=sl_svn102_728

><td class="source">			i = 0;<br></td></tr
><tr
id=sl_svn102_729

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_730

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_731

><td class="source">	if(i != 0)<br></td></tr
><tr
id=sl_svn102_732

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, players.str().c_str());<br></td></tr
><tr
id=sl_svn102_733

><td class="source"><br></td></tr
><tr
id=sl_svn102_734

><td class="source">	players.str(&quot;&quot;);<br></td></tr
><tr
id=sl_svn102_735

><td class="source">	players &lt;&lt; &quot;Total: &quot; &lt;&lt; n &lt;&lt; &quot; player(s)&quot; &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn102_736

><td class="source">	player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, players.str().c_str());<br></td></tr
><tr
id=sl_svn102_737

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_738

><td class="source">}<br></td></tr
><tr
id=sl_svn102_739

><td class="source"><br></td></tr
><tr
id=sl_svn102_740

><td class="source">bool Commands::teleportNTiles(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_741

><td class="source">{<br></td></tr
><tr
id=sl_svn102_742

><td class="source">	int ntiles = atoi(param.c_str());<br></td></tr
><tr
id=sl_svn102_743

><td class="source">	if(ntiles != 0)<br></td></tr
><tr
id=sl_svn102_744

><td class="source">	{<br></td></tr
><tr
id=sl_svn102_745

><td class="source">		Position newPos = creature-&gt;getPosition();<br></td></tr
><tr
id=sl_svn102_746

><td class="source">		switch(creature-&gt;getDirection()){<br></td></tr
><tr
id=sl_svn102_747

><td class="source">		case NORTH:<br></td></tr
><tr
id=sl_svn102_748

><td class="source">			newPos.y = newPos.y - ntiles;<br></td></tr
><tr
id=sl_svn102_749

><td class="source">			break;<br></td></tr
><tr
id=sl_svn102_750

><td class="source">		case SOUTH:<br></td></tr
><tr
id=sl_svn102_751

><td class="source">			newPos.y = newPos.y + ntiles;<br></td></tr
><tr
id=sl_svn102_752

><td class="source">			break;<br></td></tr
><tr
id=sl_svn102_753

><td class="source">		case EAST:<br></td></tr
><tr
id=sl_svn102_754

><td class="source">			newPos.x = newPos.x + ntiles;<br></td></tr
><tr
id=sl_svn102_755

><td class="source">			break;<br></td></tr
><tr
id=sl_svn102_756

><td class="source">		case WEST:<br></td></tr
><tr
id=sl_svn102_757

><td class="source">			newPos.x = newPos.x - ntiles;<br></td></tr
><tr
id=sl_svn102_758

><td class="source">			break;<br></td></tr
><tr
id=sl_svn102_759

><td class="source">		default:<br></td></tr
><tr
id=sl_svn102_760

><td class="source">			break;<br></td></tr
><tr
id=sl_svn102_761

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_762

><td class="source"><br></td></tr
><tr
id=sl_svn102_763

><td class="source">		if(g_game.internalTeleport(creature, newPos) == RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_764

><td class="source">			g_game.addMagicEffect(newPos, NM_ME_ENERGY_AREA);<br></td></tr
><tr
id=sl_svn102_765

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_766

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_767

><td class="source"><br></td></tr
><tr
id=sl_svn102_768

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_769

><td class="source">}<br></td></tr
><tr
id=sl_svn102_770

><td class="source"><br></td></tr
><tr
id=sl_svn102_771

><td class="source">bool Commands::kickPlayer(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_772

><td class="source">{<br></td></tr
><tr
id=sl_svn102_773

><td class="source">	Player* playerKick = g_game.getPlayerByName(param);<br></td></tr
><tr
id=sl_svn102_774

><td class="source">	if(playerKick){<br></td></tr
><tr
id=sl_svn102_775

><td class="source">		Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_776

><td class="source">		if(player &amp;&amp; player-&gt;getAccessLevel() &lt;= playerKick-&gt;getAccessLevel()){<br></td></tr
><tr
id=sl_svn102_777

><td class="source">			player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;You cannot kick this player.&quot;);<br></td></tr
><tr
id=sl_svn102_778

><td class="source">			return true;<br></td></tr
><tr
id=sl_svn102_779

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_780

><td class="source"><br></td></tr
><tr
id=sl_svn102_781

><td class="source">		playerKick-&gt;kickPlayer();<br></td></tr
><tr
id=sl_svn102_782

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_783

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_784

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_785

><td class="source">}<br></td></tr
><tr
id=sl_svn102_786

><td class="source"><br></td></tr
><tr
id=sl_svn102_787

><td class="source">bool Commands::setHouseOwner(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_788

><td class="source">{<br></td></tr
><tr
id=sl_svn102_789

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_790

><td class="source">	if(player){<br></td></tr
><tr
id=sl_svn102_791

><td class="source">		HouseTile* houseTile = player-&gt;getTile()-&gt;getHouseTile();<br></td></tr
><tr
id=sl_svn102_792

><td class="source">		if(houseTile){<br></td></tr
><tr
id=sl_svn102_793

><td class="source"><br></td></tr
><tr
id=sl_svn102_794

><td class="source">			std::string real_name = param;<br></td></tr
><tr
id=sl_svn102_795

><td class="source">			uint32_t guid;<br></td></tr
><tr
id=sl_svn102_796

><td class="source">			if(param == &quot;none&quot;){<br></td></tr
><tr
id=sl_svn102_797

><td class="source">				houseTile-&gt;getHouse()-&gt;setHouseOwner(0);<br></td></tr
><tr
id=sl_svn102_798

><td class="source">			}<br></td></tr
><tr
id=sl_svn102_799

><td class="source">			else if(IOPlayer::instance()-&gt;getGuidByName(guid, real_name)){<br></td></tr
><tr
id=sl_svn102_800

><td class="source">				houseTile-&gt;getHouse()-&gt;setHouseOwner(guid);<br></td></tr
><tr
id=sl_svn102_801

><td class="source">			}<br></td></tr
><tr
id=sl_svn102_802

><td class="source">			else{<br></td></tr
><tr
id=sl_svn102_803

><td class="source">				player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Player not found.&quot;);<br></td></tr
><tr
id=sl_svn102_804

><td class="source">			}<br></td></tr
><tr
id=sl_svn102_805

><td class="source"><br></td></tr
><tr
id=sl_svn102_806

><td class="source">			return true;<br></td></tr
><tr
id=sl_svn102_807

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_808

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_809

><td class="source"><br></td></tr
><tr
id=sl_svn102_810

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_811

><td class="source">}<br></td></tr
><tr
id=sl_svn102_812

><td class="source"><br></td></tr
><tr
id=sl_svn102_813

><td class="source">bool Commands::sellHouse(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_814

><td class="source">{<br></td></tr
><tr
id=sl_svn102_815

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_816

><td class="source">	if(player){<br></td></tr
><tr
id=sl_svn102_817

><td class="source">		House* house = Houses::getInstance().getHouseByPlayerId(player-&gt;getGUID());<br></td></tr
><tr
id=sl_svn102_818

><td class="source">		if(!house){<br></td></tr
><tr
id=sl_svn102_819

><td class="source">			player-&gt;sendCancel(&quot;You do not own any house.&quot;);<br></td></tr
><tr
id=sl_svn102_820

><td class="source">			return false;<br></td></tr
><tr
id=sl_svn102_821

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_822

><td class="source"><br></td></tr
><tr
id=sl_svn102_823

><td class="source">		Player* tradePartner = g_game.getPlayerByName(param);<br></td></tr
><tr
id=sl_svn102_824

><td class="source">		if(!(tradePartner &amp;&amp; tradePartner != player)){<br></td></tr
><tr
id=sl_svn102_825

><td class="source">			player-&gt;sendCancel(&quot;Trade player not found.&quot;);<br></td></tr
><tr
id=sl_svn102_826

><td class="source">			return false;<br></td></tr
><tr
id=sl_svn102_827

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_828

><td class="source"><br></td></tr
><tr
id=sl_svn102_829

><td class="source">		if(tradePartner-&gt;getPlayerInfo(PLAYERINFO_LEVEL) &lt; 1){<br></td></tr
><tr
id=sl_svn102_830

><td class="source">			player-&gt;sendCancel(&quot;Trade player level is too low.&quot;);<br></td></tr
><tr
id=sl_svn102_831

><td class="source">			return false;<br></td></tr
><tr
id=sl_svn102_832

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_833

><td class="source"><br></td></tr
><tr
id=sl_svn102_834

><td class="source">		if(Houses::getInstance().getHouseByPlayerId(tradePartner-&gt;getGUID())){<br></td></tr
><tr
id=sl_svn102_835

><td class="source">			player-&gt;sendCancel(&quot;Trade player already owns a house.&quot;);<br></td></tr
><tr
id=sl_svn102_836

><td class="source">			return false;<br></td></tr
><tr
id=sl_svn102_837

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_838

><td class="source"><br></td></tr
><tr
id=sl_svn102_839

><td class="source">		if(!Position::areInRange&lt;2,2,0&gt;(tradePartner-&gt;getPosition(), player-&gt;getPosition())){<br></td></tr
><tr
id=sl_svn102_840

><td class="source">			player-&gt;sendCancel(&quot;Trade player is too far away.&quot;);<br></td></tr
><tr
id=sl_svn102_841

><td class="source">			return false;<br></td></tr
><tr
id=sl_svn102_842

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_843

><td class="source"><br></td></tr
><tr
id=sl_svn102_844

><td class="source">		Item* transferItem = house-&gt;getTransferItem();<br></td></tr
><tr
id=sl_svn102_845

><td class="source">		if(!transferItem){<br></td></tr
><tr
id=sl_svn102_846

><td class="source">			player-&gt;sendCancel(&quot;You can not trade this house.&quot;);<br></td></tr
><tr
id=sl_svn102_847

><td class="source">			return false;<br></td></tr
><tr
id=sl_svn102_848

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_849

><td class="source"><br></td></tr
><tr
id=sl_svn102_850

><td class="source">		transferItem-&gt;getParent()-&gt;setParent(player);<br></td></tr
><tr
id=sl_svn102_851

><td class="source">		if(g_game.internalStartTrade(player, tradePartner, transferItem)){<br></td></tr
><tr
id=sl_svn102_852

><td class="source">			return true;<br></td></tr
><tr
id=sl_svn102_853

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_854

><td class="source">		else{<br></td></tr
><tr
id=sl_svn102_855

><td class="source">			house-&gt;resetTransferItem();<br></td></tr
><tr
id=sl_svn102_856

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_857

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_858

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_859

><td class="source">}<br></td></tr
><tr
id=sl_svn102_860

><td class="source"><br></td></tr
><tr
id=sl_svn102_861

><td class="source">bool Commands::getHouse(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_862

><td class="source">{<br></td></tr
><tr
id=sl_svn102_863

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_864

><td class="source">	if(!player)<br></td></tr
><tr
id=sl_svn102_865

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_866

><td class="source"><br></td></tr
><tr
id=sl_svn102_867

><td class="source">	std::string real_name = param;<br></td></tr
><tr
id=sl_svn102_868

><td class="source">	uint32_t guid;<br></td></tr
><tr
id=sl_svn102_869

><td class="source">	if(IOPlayer::instance()-&gt;getGuidByName(guid, real_name)){<br></td></tr
><tr
id=sl_svn102_870

><td class="source">		House* house = Houses::getInstance().getHouseByPlayerId(guid);<br></td></tr
><tr
id=sl_svn102_871

><td class="source">		std::stringstream str;<br></td></tr
><tr
id=sl_svn102_872

><td class="source">		str &lt;&lt; real_name;<br></td></tr
><tr
id=sl_svn102_873

><td class="source">		if(house){<br></td></tr
><tr
id=sl_svn102_874

><td class="source">			str &lt;&lt; &quot; owns house: &quot; &lt;&lt; house-&gt;getName() &lt;&lt; &quot;.&quot;;<br></td></tr
><tr
id=sl_svn102_875

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_876

><td class="source">		else{<br></td></tr
><tr
id=sl_svn102_877

><td class="source">			str &lt;&lt; &quot; does not own any house.&quot;;<br></td></tr
><tr
id=sl_svn102_878

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_879

><td class="source"><br></td></tr
><tr
id=sl_svn102_880

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, str.str().c_str());<br></td></tr
><tr
id=sl_svn102_881

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_882

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_883

><td class="source">}<br></td></tr
><tr
id=sl_svn102_884

><td class="source"><br></td></tr
><tr
id=sl_svn102_885

><td class="source">bool Commands::serverInfo(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_886

><td class="source">{<br></td></tr
><tr
id=sl_svn102_887

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_888

><td class="source">	if(!player)<br></td></tr
><tr
id=sl_svn102_889

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_890

><td class="source"><br></td></tr
><tr
id=sl_svn102_891

><td class="source">	std::stringstream text;<br></td></tr
><tr
id=sl_svn102_892

><td class="source">	text &lt;&lt; &quot;SERVER INFO:&quot;;<br></td></tr
><tr
id=sl_svn102_893

><td class="source">	text &lt;&lt; &quot;\nExp Rate: &quot; &lt;&lt; g_config.getNumber(ConfigManager::RATE_EXPERIENCE);<br></td></tr
><tr
id=sl_svn102_894

><td class="source">	text &lt;&lt; &quot;\nSkill Rate: &quot; &lt;&lt; g_config.getNumber(ConfigManager::RATE_SKILL);<br></td></tr
><tr
id=sl_svn102_895

><td class="source">	text &lt;&lt; &quot;\nMagic Rate: &quot; &lt;&lt; g_config.getNumber(ConfigManager::RATE_MAGIC);<br></td></tr
><tr
id=sl_svn102_896

><td class="source">	text &lt;&lt; &quot;\nLoot Rate: &quot; &lt;&lt; g_config.getNumber(ConfigManager::RATE_LOOT);<br></td></tr
><tr
id=sl_svn102_897

><td class="source"><br></td></tr
><tr
id=sl_svn102_898

><td class="source">	player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, text.str().c_str());<br></td></tr
><tr
id=sl_svn102_899

><td class="source"><br></td></tr
><tr
id=sl_svn102_900

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_901

><td class="source">}<br></td></tr
><tr
id=sl_svn102_902

><td class="source"><br></td></tr
><tr
id=sl_svn102_903

><td class="source">#ifdef __ENABLE_SERVER_DIAGNOSTIC__<br></td></tr
><tr
id=sl_svn102_904

><td class="source">bool Commands::serverDiag(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_905

><td class="source">{<br></td></tr
><tr
id=sl_svn102_906

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_907

><td class="source">	if(!player)<br></td></tr
><tr
id=sl_svn102_908

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_909

><td class="source"><br></td></tr
><tr
id=sl_svn102_910

><td class="source">	std::stringstream text;<br></td></tr
><tr
id=sl_svn102_911

><td class="source">	text &lt;&lt; &quot;Server diagonostic:\n&quot;;<br></td></tr
><tr
id=sl_svn102_912

><td class="source">	text &lt;&lt; &quot;World:&quot; &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_913

><td class="source">	text &lt;&lt; &quot;Player: &quot; &lt;&lt; g_game.getPlayersOnline() &lt;&lt; &quot; (&quot; &lt;&lt; Player::playerCount &lt;&lt; &quot;)\n&quot;;<br></td></tr
><tr
id=sl_svn102_914

><td class="source">	text &lt;&lt; &quot;Npc: &quot; &lt;&lt; g_game.getNpcsOnline() &lt;&lt; &quot; (&quot; &lt;&lt; Npc::npcCount &lt;&lt; &quot;)\n&quot;;<br></td></tr
><tr
id=sl_svn102_915

><td class="source">	text &lt;&lt; &quot;Monster: &quot; &lt;&lt; g_game.getMonstersOnline() &lt;&lt; &quot; (&quot; &lt;&lt; Monster::monsterCount &lt;&lt; &quot;)\n&quot;;<br></td></tr
><tr
id=sl_svn102_916

><td class="source"><br></td></tr
><tr
id=sl_svn102_917

><td class="source">	text &lt;&lt; &quot;\nProtocols:&quot; &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_918

><td class="source">	text &lt;&lt; &quot;--------------------\n&quot;;<br></td></tr
><tr
id=sl_svn102_919

><td class="source">	text &lt;&lt; &quot;ProtocolGame: &quot; &lt;&lt; ProtocolGame::ProtocolGameCount &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_920

><td class="source">	text &lt;&lt; &quot;ProtocolLogin: &quot; &lt;&lt; ProtocolLogin::protocolLoginCount &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_921

><td class="source">	text &lt;&lt; &quot;ProtocolStatus: &quot; &lt;&lt; ProtocolStatus::protocolStatusCount &lt;&lt; &quot;\n\n&quot;;<br></td></tr
><tr
id=sl_svn102_922

><td class="source"><br></td></tr
><tr
id=sl_svn102_923

><td class="source">	text &lt;&lt; &quot;\nConnections:\n&quot;;<br></td></tr
><tr
id=sl_svn102_924

><td class="source">	text &lt;&lt; &quot;--------------------\n&quot;;<br></td></tr
><tr
id=sl_svn102_925

><td class="source">	text &lt;&lt; &quot;Active connections: &quot; &lt;&lt; Connection::connectionCount &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_926

><td class="source">	text &lt;&lt; &quot;Total message pool: &quot; &lt;&lt; OutputMessagePool::getInstance()-&gt;getTotalMessageCount() &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_927

><td class="source">	text &lt;&lt; &quot;Auto message pool: &quot; &lt;&lt; OutputMessagePool::getInstance()-&gt;getAutoMessageCount() &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_928

><td class="source">	text &lt;&lt; &quot;Free message pool: &quot; &lt;&lt; OutputMessagePool::getInstance()-&gt;getAvailableMessageCount() &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_929

><td class="source"><br></td></tr
><tr
id=sl_svn102_930

><td class="source">	text &lt;&lt; &quot;\nLibraries:\n&quot;;<br></td></tr
><tr
id=sl_svn102_931

><td class="source">	text &lt;&lt; &quot;--------------------\n&quot;;<br></td></tr
><tr
id=sl_svn102_932

><td class="source">	text &lt;&lt; &quot;asio: &quot; &lt;&lt; BOOST_ASIO_VERSION &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_933

><td class="source">	text &lt;&lt; &quot;libxml: &quot; &lt;&lt; XML_DEFAULT_VERSION &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_934

><td class="source">	text &lt;&lt; &quot;lua: &quot; &lt;&lt; LUA_VERSION &lt;&lt; &quot;\n&quot;;<br></td></tr
><tr
id=sl_svn102_935

><td class="source"><br></td></tr
><tr
id=sl_svn102_936

><td class="source">	//TODO: more information that could be useful<br></td></tr
><tr
id=sl_svn102_937

><td class="source"><br></td></tr
><tr
id=sl_svn102_938

><td class="source">	player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, text.str().c_str());<br></td></tr
><tr
id=sl_svn102_939

><td class="source"><br></td></tr
><tr
id=sl_svn102_940

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_941

><td class="source">}<br></td></tr
><tr
id=sl_svn102_942

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_943

><td class="source"><br></td></tr
><tr
id=sl_svn102_944

><td class="source">void showTime(std::stringstream&amp; str, uint32_t time)<br></td></tr
><tr
id=sl_svn102_945

><td class="source">{<br></td></tr
><tr
id=sl_svn102_946

><td class="source">	if(time == 0xFFFFFFFF){<br></td></tr
><tr
id=sl_svn102_947

><td class="source">		str &lt;&lt; &quot;permanent&quot;;<br></td></tr
><tr
id=sl_svn102_948

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_949

><td class="source">	else if(time == 0){<br></td></tr
><tr
id=sl_svn102_950

><td class="source">		str &lt;&lt; &quot;serversave&quot;;<br></td></tr
><tr
id=sl_svn102_951

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_952

><td class="source">	else{<br></td></tr
><tr
id=sl_svn102_953

><td class="source">		char buffer[32];<br></td></tr
><tr
id=sl_svn102_954

><td class="source">		formatDate((time_t)time, buffer);<br></td></tr
><tr
id=sl_svn102_955

><td class="source">		str &lt;&lt; buffer;<br></td></tr
><tr
id=sl_svn102_956

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_957

><td class="source">}<br></td></tr
><tr
id=sl_svn102_958

><td class="source"><br></td></tr
><tr
id=sl_svn102_959

><td class="source">uint32_t parseTime(const std::string&amp; time)<br></td></tr
><tr
id=sl_svn102_960

><td class="source">{<br></td></tr
><tr
id=sl_svn102_961

><td class="source">	if(time == &quot;serversave&quot; || time == &quot;shutdown&quot;){<br></td></tr
><tr
id=sl_svn102_962

><td class="source">		return 0;<br></td></tr
><tr
id=sl_svn102_963

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_964

><td class="source">	if(time == &quot;permanent&quot;){<br></td></tr
><tr
id=sl_svn102_965

><td class="source">		return 0xFFFFFFFF;<br></td></tr
><tr
id=sl_svn102_966

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_967

><td class="source">	else{<br></td></tr
><tr
id=sl_svn102_968

><td class="source">		boost::char_separator&lt;char&gt; sep(&quot;+&quot;);<br></td></tr
><tr
id=sl_svn102_969

><td class="source">		tokenizer timetoken(time, sep);<br></td></tr
><tr
id=sl_svn102_970

><td class="source">		tokenizer::iterator timeit = timetoken.begin();<br></td></tr
><tr
id=sl_svn102_971

><td class="source">		if(timeit == timetoken.end()){<br></td></tr
><tr
id=sl_svn102_972

><td class="source">			return 0;<br></td></tr
><tr
id=sl_svn102_973

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_974

><td class="source">		uint32_t number = atoi(timeit-&gt;c_str());<br></td></tr
><tr
id=sl_svn102_975

><td class="source">		uint32_t multiplier = 0;<br></td></tr
><tr
id=sl_svn102_976

><td class="source">		++timeit;<br></td></tr
><tr
id=sl_svn102_977

><td class="source">		if(timeit == timetoken.end()){<br></td></tr
><tr
id=sl_svn102_978

><td class="source">			return 0;<br></td></tr
><tr
id=sl_svn102_979

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_980

><td class="source">		if(*timeit == &quot;m&quot;) //minute<br></td></tr
><tr
id=sl_svn102_981

><td class="source">			multiplier = 60;<br></td></tr
><tr
id=sl_svn102_982

><td class="source">		if(*timeit == &quot;h&quot;) //hour<br></td></tr
><tr
id=sl_svn102_983

><td class="source">			multiplier = 60*60;<br></td></tr
><tr
id=sl_svn102_984

><td class="source">		if(*timeit == &quot;d&quot;) //day<br></td></tr
><tr
id=sl_svn102_985

><td class="source">			multiplier = 60*60*24;<br></td></tr
><tr
id=sl_svn102_986

><td class="source">		if(*timeit == &quot;w&quot;) //week<br></td></tr
><tr
id=sl_svn102_987

><td class="source">			multiplier = 60*60*24*7;<br></td></tr
><tr
id=sl_svn102_988

><td class="source">		if(*timeit == &quot;o&quot;) //month<br></td></tr
><tr
id=sl_svn102_989

><td class="source">			multiplier = 60*60*24*30;<br></td></tr
><tr
id=sl_svn102_990

><td class="source">		if(*timeit == &quot;y&quot;) //year<br></td></tr
><tr
id=sl_svn102_991

><td class="source">			multiplier = 60*60*24*365;<br></td></tr
><tr
id=sl_svn102_992

><td class="source"><br></td></tr
><tr
id=sl_svn102_993

><td class="source">		uint32_t currentTime = std::time(NULL);<br></td></tr
><tr
id=sl_svn102_994

><td class="source">		return currentTime + number*multiplier;<br></td></tr
><tr
id=sl_svn102_995

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_996

><td class="source">}<br></td></tr
><tr
id=sl_svn102_997

><td class="source"><br></td></tr
><tr
id=sl_svn102_998

><td class="source">std::string parseParams(tokenizer::iterator &amp;it, tokenizer::iterator end)<br></td></tr
><tr
id=sl_svn102_999

><td class="source">{<br></td></tr
><tr
id=sl_svn102_1000

><td class="source">	std::string tmp;<br></td></tr
><tr
id=sl_svn102_1001

><td class="source">	if(it == end){<br></td></tr
><tr
id=sl_svn102_1002

><td class="source">		return &quot;&quot;;<br></td></tr
><tr
id=sl_svn102_1003

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1004

><td class="source">	else{<br></td></tr
><tr
id=sl_svn102_1005

><td class="source">		tmp = *it;<br></td></tr
><tr
id=sl_svn102_1006

><td class="source">		++it;<br></td></tr
><tr
id=sl_svn102_1007

><td class="source">		if(tmp[0] == &#39;&quot;&#39;){<br></td></tr
><tr
id=sl_svn102_1008

><td class="source">			tmp.erase(0,1);<br></td></tr
><tr
id=sl_svn102_1009

><td class="source">			while(it != end &amp;&amp; tmp[tmp.length() - 1] != &#39;&quot;&#39;){<br></td></tr
><tr
id=sl_svn102_1010

><td class="source">				tmp += &quot; &quot; + *it;<br></td></tr
><tr
id=sl_svn102_1011

><td class="source">				++it;<br></td></tr
><tr
id=sl_svn102_1012

><td class="source">			}<br></td></tr
><tr
id=sl_svn102_1013

><td class="source"><br></td></tr
><tr
id=sl_svn102_1014

><td class="source">			if(tmp.length() &gt; 0 &amp;&amp; tmp[tmp.length() - 1] == &#39;&quot;&#39;){<br></td></tr
><tr
id=sl_svn102_1015

><td class="source">				tmp.erase(tmp.length() - 1);<br></td></tr
><tr
id=sl_svn102_1016

><td class="source">			}<br></td></tr
><tr
id=sl_svn102_1017

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_1018

><td class="source">		return tmp;<br></td></tr
><tr
id=sl_svn102_1019

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1020

><td class="source">}<br></td></tr
><tr
id=sl_svn102_1021

><td class="source"><br></td></tr
><tr
id=sl_svn102_1022

><td class="source">bool Commands::forceRaid(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_1023

><td class="source">{<br></td></tr
><tr
id=sl_svn102_1024

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_1025

><td class="source">	if(!player){<br></td></tr
><tr
id=sl_svn102_1026

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_1027

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1028

><td class="source"><br></td></tr
><tr
id=sl_svn102_1029

><td class="source">	Raid* raid = Raids::getInstance()-&gt;getRaidByName(param);<br></td></tr
><tr
id=sl_svn102_1030

><td class="source">	if(!raid || !raid-&gt;isLoaded()){<br></td></tr
><tr
id=sl_svn102_1031

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;No such raid exists.&quot;);<br></td></tr
><tr
id=sl_svn102_1032

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_1033

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1034

><td class="source"><br></td></tr
><tr
id=sl_svn102_1035

><td class="source">	if(Raids::getInstance()-&gt;getRunning()){<br></td></tr
><tr
id=sl_svn102_1036

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Another raid is already being executed.&quot;);<br></td></tr
><tr
id=sl_svn102_1037

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_1038

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1039

><td class="source"><br></td></tr
><tr
id=sl_svn102_1040

><td class="source">	Raids::getInstance()-&gt;setRunning(raid);<br></td></tr
><tr
id=sl_svn102_1041

><td class="source">	RaidEvent* event = raid-&gt;getNextRaidEvent();<br></td></tr
><tr
id=sl_svn102_1042

><td class="source"><br></td></tr
><tr
id=sl_svn102_1043

><td class="source">	if(!event){<br></td></tr
><tr
id=sl_svn102_1044

><td class="source">		player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;The raid does not contain any data.&quot;);<br></td></tr
><tr
id=sl_svn102_1045

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_1046

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1047

><td class="source"><br></td></tr
><tr
id=sl_svn102_1048

><td class="source">	raid-&gt;setState(RAIDSTATE_EXECUTING);<br></td></tr
><tr
id=sl_svn102_1049

><td class="source">	uint32_t ticks = event-&gt;getDelay();<br></td></tr
><tr
id=sl_svn102_1050

><td class="source">	if(ticks &gt; 0){<br></td></tr
><tr
id=sl_svn102_1051

><td class="source">		Scheduler::getScheduler().addEvent(createSchedulerTask(ticks,<br></td></tr
><tr
id=sl_svn102_1052

><td class="source">			boost::bind(&amp;Raid::executeRaidEvent, raid, event)));<br></td></tr
><tr
id=sl_svn102_1053

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1054

><td class="source">	else{<br></td></tr
><tr
id=sl_svn102_1055

><td class="source">		Dispatcher::getDispatcher().addTask(createTask(<br></td></tr
><tr
id=sl_svn102_1056

><td class="source">		boost::bind(&amp;Raid::executeRaidEvent, raid, event)));<br></td></tr
><tr
id=sl_svn102_1057

><td class="source"><br></td></tr
><tr
id=sl_svn102_1058

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1059

><td class="source"><br></td></tr
><tr
id=sl_svn102_1060

><td class="source">	player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Raid started.&quot;);<br></td></tr
><tr
id=sl_svn102_1061

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_1062

><td class="source">}<br></td></tr
><tr
id=sl_svn102_1063

><td class="source"><br></td></tr
><tr
id=sl_svn102_1064

><td class="source">bool Commands::goUp(Creature* creature, const std::string &amp;cmd, const std::string &amp;param)<br></td></tr
><tr
id=sl_svn102_1065

><td class="source">{<br></td></tr
><tr
id=sl_svn102_1066

><td class="source">    Position newPos = creature-&gt;getPosition();<br></td></tr
><tr
id=sl_svn102_1067

><td class="source">	newPos.z--;<br></td></tr
><tr
id=sl_svn102_1068

><td class="source">	Tile* tile = g_game.getTile(newPos.x, newPos.y, newPos.z);<br></td></tr
><tr
id=sl_svn102_1069

><td class="source">	if(tile &amp;&amp; tile-&gt;creatures.size() != 0){<br></td></tr
><tr
id=sl_svn102_1070

><td class="source">		newPos.x++;<br></td></tr
><tr
id=sl_svn102_1071

><td class="source">    }<br></td></tr
><tr
id=sl_svn102_1072

><td class="source"><br></td></tr
><tr
id=sl_svn102_1073

><td class="source">	if(g_game.internalTeleport(creature, newPos) == RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_1074

><td class="source">			g_game.addMagicEffect(newPos, NM_ME_ENERGY_AREA);<br></td></tr
><tr
id=sl_svn102_1075

><td class="source">            		<br></td></tr
><tr
id=sl_svn102_1076

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_1077

><td class="source">    }<br></td></tr
><tr
id=sl_svn102_1078

><td class="source">    <br></td></tr
><tr
id=sl_svn102_1079

><td class="source">    return false;<br></td></tr
><tr
id=sl_svn102_1080

><td class="source">}<br></td></tr
><tr
id=sl_svn102_1081

><td class="source"><br></td></tr
><tr
id=sl_svn102_1082

><td class="source">bool Commands::goDown(Creature* creature, const std::string &amp;cmd, const std::string &amp;param)<br></td></tr
><tr
id=sl_svn102_1083

><td class="source">{<br></td></tr
><tr
id=sl_svn102_1084

><td class="source">    Position newPos = creature-&gt;getPosition();<br></td></tr
><tr
id=sl_svn102_1085

><td class="source">	newPos.z++;<br></td></tr
><tr
id=sl_svn102_1086

><td class="source">	Tile* tile = g_game.getTile(newPos.x, newPos.y, newPos.z);		<br></td></tr
><tr
id=sl_svn102_1087

><td class="source">	if(tile &amp;&amp; tile-&gt;creatures.size() != 0){<br></td></tr
><tr
id=sl_svn102_1088

><td class="source">		newPos.x++;<br></td></tr
><tr
id=sl_svn102_1089

><td class="source">    }<br></td></tr
><tr
id=sl_svn102_1090

><td class="source">    <br></td></tr
><tr
id=sl_svn102_1091

><td class="source">	if(g_game.internalTeleport(creature, newPos) == RET_NOERROR){<br></td></tr
><tr
id=sl_svn102_1092

><td class="source">			g_game.addMagicEffect(newPos, NM_ME_ENERGY_AREA);<br></td></tr
><tr
id=sl_svn102_1093

><td class="source">		<br></td></tr
><tr
id=sl_svn102_1094

><td class="source">		return true;<br></td></tr
><tr
id=sl_svn102_1095

><td class="source">    }<br></td></tr
><tr
id=sl_svn102_1096

><td class="source">    <br></td></tr
><tr
id=sl_svn102_1097

><td class="source">    return false;<br></td></tr
><tr
id=sl_svn102_1098

><td class="source">}<br></td></tr
><tr
id=sl_svn102_1099

><td class="source"><br></td></tr
><tr
id=sl_svn102_1100

><td class="source">bool Commands::whoIsOnline(Creature* creature, const std::string &amp;cmd, const std::string &amp;param)<br></td></tr
><tr
id=sl_svn102_1101

><td class="source">{<br></td></tr
><tr
id=sl_svn102_1102

><td class="source">	if(Player* player = creature-&gt;getPlayer()){<br></td></tr
><tr
id=sl_svn102_1103

><td class="source">		AutoList&lt;Player&gt;::listiterator iter = Player::listPlayer.list.begin();<br></td></tr
><tr
id=sl_svn102_1104

><td class="source">		uint16_t pos = 1;<br></td></tr
><tr
id=sl_svn102_1105

><td class="source">		std::stringstream info;<br></td></tr
><tr
id=sl_svn102_1106

><td class="source">		info &lt;&lt; &quot;Players online list:&quot;;<br></td></tr
><tr
id=sl_svn102_1107

><td class="source"><br></td></tr
><tr
id=sl_svn102_1108

><td class="source">		while(iter != Player::listPlayer.list.end()){<br></td></tr
><tr
id=sl_svn102_1109

><td class="source">			if((*iter).second-&gt;getAccessLevel() &lt; 3){<br></td></tr
><tr
id=sl_svn102_1110

><td class="source">				info &lt;&lt; &quot;\n&quot; &lt;&lt; pos &lt;&lt; &quot;. &quot; &lt;&lt; (*iter).second-&gt;getName() &lt;&lt; &quot; [&quot; &lt;&lt; (*iter).second-&gt;getLevel() &lt;&lt; &quot;]&quot;;           <br></td></tr
><tr
id=sl_svn102_1111

><td class="source">				++pos;<br></td></tr
><tr
id=sl_svn102_1112

><td class="source">			}<br></td></tr
><tr
id=sl_svn102_1113

><td class="source">			++iter;<br></td></tr
><tr
id=sl_svn102_1114

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_1115

><td class="source">        <br></td></tr
><tr
id=sl_svn102_1116

><td class="source">		player-&gt;sendTextWindow(1949, info.str().c_str());<br></td></tr
><tr
id=sl_svn102_1117

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1118

><td class="source"><br></td></tr
><tr
id=sl_svn102_1119

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_1120

><td class="source">}<br></td></tr
><tr
id=sl_svn102_1121

><td class="source"><br></td></tr
><tr
id=sl_svn102_1122

><td class="source">bool Commands::playerKills(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_1123

><td class="source">{<br></td></tr
><tr
id=sl_svn102_1124

><td class="source">	if (Player* player = creature-&gt;getPlayer()) {<br></td></tr
><tr
id=sl_svn102_1125

><td class="source">		int32_t fragTime = g_config.getNumber(ConfigManager::FRAG_TIME);<br></td></tr
><tr
id=sl_svn102_1126

><td class="source">		if (player-&gt;redSkullTicks &amp;&amp; fragTime &gt; 0) {<br></td></tr
><tr
id=sl_svn102_1127

><td class="source">			int32_t frags = (player-&gt;redSkullTicks / fragTime) + 1;<br></td></tr
><tr
id=sl_svn102_1128

><td class="source">			int32_t remainingTime = player-&gt;redSkullTicks - (fragTime * (frags - 1));<br></td></tr
><tr
id=sl_svn102_1129

><td class="source">			int32_t hours = ((remainingTime / 1000) / 60) / 60;<br></td></tr
><tr
id=sl_svn102_1130

><td class="source">			int32_t minutes = ((remainingTime / 1000) / 60) - (hours * 60);<br></td></tr
><tr
id=sl_svn102_1131

><td class="source"><br></td></tr
><tr
id=sl_svn102_1132

><td class="source">			char buffer[175];<br></td></tr
><tr
id=sl_svn102_1133

><td class="source">			sprintf(buffer, &quot;You have %d unjustified kill%s. The amount of unjustified kills will decrease after: %s.&quot;, frags, (frags &gt; 1 ? &quot;s&quot; : &quot;&quot;), formatTime(hours, minutes).c_str());<br></td></tr
><tr
id=sl_svn102_1134

><td class="source">			player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, buffer);<br></td></tr
><tr
id=sl_svn102_1135

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_1136

><td class="source">		else {<br></td></tr
><tr
id=sl_svn102_1137

><td class="source">			player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;You do not have any unjustified kill.&quot;);<br></td></tr
><tr
id=sl_svn102_1138

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_1139

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1140

><td class="source"><br></td></tr
><tr
id=sl_svn102_1141

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_1142

><td class="source">}<br></td></tr
><tr
id=sl_svn102_1143

><td class="source"><br></td></tr
><tr
id=sl_svn102_1144

><td class="source">bool Commands::buyHouse(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_1145

><td class="source">{<br></td></tr
><tr
id=sl_svn102_1146

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_1147

><td class="source">	if (player) {<br></td></tr
><tr
id=sl_svn102_1148

><td class="source">		Position pos = player-&gt;getPosition();<br></td></tr
><tr
id=sl_svn102_1149

><td class="source">		pos = getNextPosition(player-&gt;direction, pos);<br></td></tr
><tr
id=sl_svn102_1150

><td class="source">		for(HouseMap::iterator it = Houses::getInstance().getHouseBegin(); it != Houses::getInstance().getHouseEnd(); it++)<br></td></tr
><tr
id=sl_svn102_1151

><td class="source">		{<br></td></tr
><tr
id=sl_svn102_1152

><td class="source">			if (it-&gt;second-&gt;getHouseOwner() == player-&gt;guid) {<br></td></tr
><tr
id=sl_svn102_1153

><td class="source">				player-&gt;sendCancel(&quot;You are already the owner of a house.&quot;);<br></td></tr
><tr
id=sl_svn102_1154

><td class="source">				return false;<br></td></tr
><tr
id=sl_svn102_1155

><td class="source">			}<br></td></tr
><tr
id=sl_svn102_1156

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_1157

><td class="source">		if (Tile* tile = g_game.getTile(pos.x, pos.y, pos.z)) {<br></td></tr
><tr
id=sl_svn102_1158

><td class="source">			if (HouseTile* houseTile = dynamic_cast&lt;HouseTile*&gt;(tile)) {<br></td></tr
><tr
id=sl_svn102_1159

><td class="source">				if (House* house = houseTile-&gt;getHouse()) {<br></td></tr
><tr
id=sl_svn102_1160

><td class="source">					if (house-&gt;getDoorByPosition(pos)) {<br></td></tr
><tr
id=sl_svn102_1161

><td class="source">						if (!house-&gt;getHouseOwner()) {<br></td></tr
><tr
id=sl_svn102_1162

><td class="source">							if (player-&gt;isPremium()) {<br></td></tr
><tr
id=sl_svn102_1163

><td class="source">								uint32_t price = 0;<br></td></tr
><tr
id=sl_svn102_1164

><td class="source">								for (HouseTileList::iterator it = house-&gt;getHouseTileBegin(); it != house-&gt;getHouseTileEnd(); it++) {<br></td></tr
><tr
id=sl_svn102_1165

><td class="source">									price += g_config.getNumber(ConfigManager::HOUSE_PRICE);<br></td></tr
><tr
id=sl_svn102_1166

><td class="source">								}<br></td></tr
><tr
id=sl_svn102_1167

><td class="source">								if (price) {<br></td></tr
><tr
id=sl_svn102_1168

><td class="source">									uint32_t money = g_game.getMoney(player);<br></td></tr
><tr
id=sl_svn102_1169

><td class="source">									if (money &gt;= price &amp;&amp; g_game.removeMoney(player, price)) {<br></td></tr
><tr
id=sl_svn102_1170

><td class="source">										house-&gt;setHouseOwner(player-&gt;guid);<br></td></tr
><tr
id=sl_svn102_1171

><td class="source">										player-&gt;sendTextMessage(MSG_INFO_DESCR, &quot;You have successfully bought this house, be sure to have the money for the rent in your depot of this city.&quot;);<br></td></tr
><tr
id=sl_svn102_1172

><td class="source">										return true;<br></td></tr
><tr
id=sl_svn102_1173

><td class="source">									}<br></td></tr
><tr
id=sl_svn102_1174

><td class="source">									else {<br></td></tr
><tr
id=sl_svn102_1175

><td class="source">										player-&gt;sendCancel(&quot;You do not have enough money.&quot;);<br></td></tr
><tr
id=sl_svn102_1176

><td class="source">									}<br></td></tr
><tr
id=sl_svn102_1177

><td class="source">								}<br></td></tr
><tr
id=sl_svn102_1178

><td class="source">								else {<br></td></tr
><tr
id=sl_svn102_1179

><td class="source">									player-&gt;sendCancel(&quot;That house doesn&#39;t contain any house tile.&quot;);<br></td></tr
><tr
id=sl_svn102_1180

><td class="source">								}<br></td></tr
><tr
id=sl_svn102_1181

><td class="source">							}<br></td></tr
><tr
id=sl_svn102_1182

><td class="source">							else {<br></td></tr
><tr
id=sl_svn102_1183

><td class="source">								player-&gt;sendCancelMessage(RET_YOUNEEDPREMIUMACCOUNT);<br></td></tr
><tr
id=sl_svn102_1184

><td class="source">							}<br></td></tr
><tr
id=sl_svn102_1185

><td class="source">						}<br></td></tr
><tr
id=sl_svn102_1186

><td class="source">						else {<br></td></tr
><tr
id=sl_svn102_1187

><td class="source">							player-&gt;sendCancel(&quot;This house already has an owner.&quot;);<br></td></tr
><tr
id=sl_svn102_1188

><td class="source">						}<br></td></tr
><tr
id=sl_svn102_1189

><td class="source">					}<br></td></tr
><tr
id=sl_svn102_1190

><td class="source">					else {<br></td></tr
><tr
id=sl_svn102_1191

><td class="source">						player-&gt;sendCancel(&quot;You have to be in front of door of the house you would like to buy.&quot;);<br></td></tr
><tr
id=sl_svn102_1192

><td class="source">					}<br></td></tr
><tr
id=sl_svn102_1193

><td class="source">				}<br></td></tr
><tr
id=sl_svn102_1194

><td class="source">				else {<br></td></tr
><tr
id=sl_svn102_1195

><td class="source">					player-&gt;sendCancel(&quot;You have to be in front of door of the house you would like to buy.&quot;);<br></td></tr
><tr
id=sl_svn102_1196

><td class="source">				}<br></td></tr
><tr
id=sl_svn102_1197

><td class="source">			}<br></td></tr
><tr
id=sl_svn102_1198

><td class="source">			else<br></td></tr
><tr
id=sl_svn102_1199

><td class="source">				player-&gt;sendCancel(&quot;You have to be in front of door of the house you would like to buy.&quot;);<br></td></tr
><tr
id=sl_svn102_1200

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_1201

><td class="source">		else {<br></td></tr
><tr
id=sl_svn102_1202

><td class="source">			player-&gt;sendCancel(&quot;You have to be in front of door of the house you would like to buy.&quot;);<br></td></tr
><tr
id=sl_svn102_1203

><td class="source">		}<br></td></tr
><tr
id=sl_svn102_1204

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1205

><td class="source">	return false;<br></td></tr
><tr
id=sl_svn102_1206

><td class="source">}<br></td></tr
><tr
id=sl_svn102_1207

><td class="source"><br></td></tr
><tr
id=sl_svn102_1208

><td class="source">bool Commands::refreshMap(Creature* creature, const std::string&amp; cmd, const std::string&amp; param)<br></td></tr
><tr
id=sl_svn102_1209

><td class="source">{<br></td></tr
><tr
id=sl_svn102_1210

><td class="source">	Player* player = creature-&gt;getPlayer();<br></td></tr
><tr
id=sl_svn102_1211

><td class="source">	if(!player){<br></td></tr
><tr
id=sl_svn102_1212

><td class="source">		return false;<br></td></tr
><tr
id=sl_svn102_1213

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_1214

><td class="source"><br></td></tr
><tr
id=sl_svn102_1215

><td class="source">	g_game.proceduralRefresh();<br></td></tr
><tr
id=sl_svn102_1216

><td class="source"><br></td></tr
><tr
id=sl_svn102_1217

><td class="source">	player-&gt;sendTextMessage(MSG_STATUS_CONSOLE_BLUE, &quot;Refreshed map.&quot;);<br></td></tr
><tr
id=sl_svn102_1218

><td class="source">	return true;<br></td></tr
><tr
id=sl_svn102_1219

><td class="source">}<br></td></tr
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
 <a href="/p/avesta74/source/detail?spec=svn102&amp;r=76">r76</a>
 by r...@ymail.com
 on Jul 11, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=76&amp;format=side&amp;path=/trunk/src/commands.cpp&amp;old_path=/trunk/src/commands.cpp&amp;old=75">Diff</a>
 </div>
 <pre>[No log message]</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/avesta74/source/detail?r=76&spec=svn102';
 var publish_url = '/p/avesta74/source/detail?r=76&spec=svn102#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/src/commands.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/commands.cpp?r\x3d76\x26spec\x3dsvn102');
 
 var selected_path = '/trunk/src/commands.cpp';
 
 
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
 
 <option value="/p/avesta74/source/browse/trunk/src/commands.cpp?r=76&amp;spec=svn102"
 selected="selected"
 >/trunk/src/commands.cpp</option>
 
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
 <a href="/p/avesta74/source/detail?spec=svn102&r=75">r75</a>
 by r...@ymail.com
 on Jul 11, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=75&amp;format=side&amp;path=/trunk/src/commands.cpp&amp;old_path=/trunk/src/commands.cpp&amp;old=52">Diff</a>
 <br>
 <pre class="ifOpened">global events</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/avesta74/source/detail?spec=svn102&r=52">r52</a>
 by r...@ymail.com
 on Jul 8, 2012
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=52&amp;format=side&amp;path=/trunk/src/commands.cpp&amp;old_path=/trunk/src/commands.cpp&amp;old=20">Diff</a>
 <br>
 <pre class="ifOpened">[No log message]</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/avesta74/source/detail?spec=svn102&r=20">r20</a>
 by RSXQ66
 on Aug 19, 2010
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=20&amp;format=side&amp;path=/trunk/src/commands.cpp&amp;old_path=/trunk/src/commands.cpp&amp;old=7">Diff</a>
 <br>
 <pre class="ifOpened">* removed gm invisible (did debug)
* removed xml exp stages (use lua)
* added possibility to recompile
server for 76 (__76__ def)</pre>
 </div>
 
 
 <a href="/p/avesta74/source/list?path=/trunk/src/commands.cpp&start=76">All revisions of this file</a>
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
 
 <div>Size: 34670 bytes,
 1219 lines</div>
 
 <div><a href="//avesta74.googlecode.com/svn/trunk/src/commands.cpp">View raw file</a></div>
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
 var paths = {'svn102': '/trunk/src/commands.cpp'}
 codereviews = CR_controller.setup(
 {"projectName": "avesta74", "loggedInUserEmail": "jose.guitian@coremain.com", "profileUrl": "/u/108692122734644646415/", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/13997016681179179006", "token": "ABZ6GAewZ-W1wLA55ryFhn07SBW5fDT79g:1406096398820", "projectHomeUrl": "/p/avesta74", "relativeBaseUrl": "", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "domainName": null}, '', 'svn102', paths,
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

 
 


 
 
 <script type="text/javascript">_CS_reportToCsi();</script>
 
 </body>
</html>
