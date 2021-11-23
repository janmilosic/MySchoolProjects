<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <html>
  <body>
    <h2>Knjige na zalogi</h2>
    <table border="1">
        <tr bgcolor="lightblue">
        <th>Naslov</th>
        <th>Avtor</th>
        <th>Vezava</th>
        <th>Strani</th>
        <th>Cena</th>
    </tr>
    <xsl:for-each select="INVENTORY/BOOK">
    <xsl:if test="@InStock = 'yes'">
      <tr>
        <td><xsl:value-of select="TITLE"/></td>
        <td><xsl:value-of select="AUTHOR"/></td>
        <td><xsl:value-of select="BINDING"/></td>
        <td><xsl:value-of select="PAGES"/></td>
        <td><xsl:value-of select="PRICE"/></td>
      </tr>
    </xsl:if>
    </xsl:for-each>
    </table>
  </body>
  </html>
</xsl:template>
</xsl:stylesheet>