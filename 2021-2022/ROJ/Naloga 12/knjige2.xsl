<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <html>
  <body>
    <h2>Knjige z manj kot 400 stranmi</h2>
    <table border="1">
        <tr bgcolor="lightblue">
        <th>Naslov</th>
    </tr>
    <xsl:for-each select="INVENTORY/BOOK">
    <xsl:if test="400>PAGES">
      <tr>
        <td><xsl:value-of select="TITLE"/></td>
      </tr>
    </xsl:if>
    </xsl:for-each>
    </table>
  </body>
  </html>
</xsl:template>
</xsl:stylesheet>