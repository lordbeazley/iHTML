<TABLE WIDTH="100%" BORDER=0 CELLSPACING=0 CELLPADDING=3><TR BGCOLOR="#A0B8C8">
  <TD><FONT FACE="Arial,Helvetica" SIZE="2" COLOR="#FFFFFF"><B>&nbsp;BBSManager Admin

  <iIF COND=<iISDEF VAR="DB">><iHTML LOGIN=":LOGIN" DBNAME=":dsn" LOGIN=":bbs_login" SQL="SELECT Name FROM _Boards WHERE ID = :DB ;" OUTPUT=":1" OUTVAR="BoardName"></iIF>

  <iSWITCH ALIAS="go">
  <iCASE ALIAS="go" VALUE="Manage Content"> <iSET context="Content">  - Managing ':BoardName' Board Content </iCASE ALIAS="go">
  <iCASE ALIAS="go" VALUE="Manage Settings"><iSET context="Settings"> - Managing ':BoardName' Board Settings</iCASE ALIAS="go">
  <iCASE ALIAS="go" VALUE="Change Password"><iSET context="Change">   - Change Password                     </iCASE ALIAS="go">
  <iCASE ALIAS="go" VALUE=DEFAULT>          <iSET context="Main">                                           </iCASE ALIAS="go">
  </iSWITCH ALIAS="go">

  </B></FONT></TD>
  <TD WIDTH=1% ALIGN=RIGHT><A HREF="javascript:showHelp(':context')"><FONT FACE="Arial,Helvetica" SIZE="2" COLOR="#FFFFFF"><B>Help</B></FONT></A></TD>
  <TD WIDTH=1% ALIGN=RIGHT><A HREF="/bbsmanager/faq.ihtml?ShowCat=:context" TARGET="_blank"><FONT FACE="Arial,Helvetica" SIZE="2" COLOR="#FFFFFF"><B>FAQ</B></FONT></A>&nbsp;</TD>
</TR></TABLE>
