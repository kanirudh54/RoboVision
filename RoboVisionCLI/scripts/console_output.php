<html>
 <head><meta http-equiv="refresh" content="15; url=console_output.php"></head>
 <body>
  <center>
  <form name="consoleform">
  <textarea name="consoleout" rows="4" cols="80">            
   <?php
     $myFile = "consoleout.dat";
     if (filesize($myFile)>0)
     {
      $fh = fopen($myFile, 'r');
      $theData = fread($fh, filesize($myFile));
      fclose($fh);
      echo $theData;
     }
   ?> 
  </textarea>  
  </form>
   <script language="JavaScript">
     if (document.consoleform) 
        {
         document.consoleform.consoleout.scrollTop=document.consoleform.consoleout.scrollHeight;
        }   
   </script>
  </center>
 </body>
</html>
