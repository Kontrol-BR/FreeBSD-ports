--- porting/qli/help.c.orig	Tue Mar 12 00:37:07 2002
+++ porting/qli/help.c	Fri Nov 22 17:32:40 2002
@@ -289,7 +289,7 @@
 		  isc_25.isc_26))
 	continue;
     if (++topics == 1 && banner)
-	ib_printf ("%s\n", banner, string, parent);
+	ib_printf ("%s%s%s\n", banner, string, parent);
     p = line + ((ptr - line + COLUMN_WIDTH - 1) / COLUMN_WIDTH) * COLUMN_WIDTH;
     if (p + l > line + RIGHT_MARGIN)
 	{
