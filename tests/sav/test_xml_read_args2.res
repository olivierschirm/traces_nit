<?xml version="1.0"?><!DOCTYPE student [
	<!ELEMENT student (#PCDATA)>
	<!ATTLIST student first CDATA #REQUIRED
			  last  CDATA #IMPLIED>
]><!-- testing chardata with white space ---><student first="Eric">&#x0A; &#x09; &#x0D;&#x20;</student>
