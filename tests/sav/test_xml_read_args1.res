<?xml version="1.0" encoding="us-ascii" standalone="yes"?><!-- Above is XMLDecl ---><!DOCTYPE animal [
<!ELEMENT animal (cat|tiger|leopard)+>
<!ELEMENT cat EMPTY>
<!ELEMENT tiger (#PCDATA)>
<!ELEMENT leopard ANY>
<!ELEMENT small EMPTY>
<!ELEMENT big EMPTY>
<!ATTLIST tiger color CDATA #REQUIRED>
]><!-- Above is DTD ---><?music  "Here is a PI" ?><animal><cat/><tiger color="white">This is a white tiger in Mirage!!</tiger><cat/><leopard><small/><big/></leopard></animal><!-- Above is element animal --->
