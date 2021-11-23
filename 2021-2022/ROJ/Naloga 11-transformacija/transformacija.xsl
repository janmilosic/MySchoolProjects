<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <html>
  <body>
    <h2>Vegeterjanski izdelki</h2>
    <table border="1">
      <tr bgcolor="lightblue">
      <th>Izdelek</th>
    </tr>
    <xsl:for-each select="food_list/food_item">
    <xsl:if test="@type = 'vegetable'">
      <tr>
        <td><xsl:value-of select="name"/></td>
      </tr>
    </xsl:if>
    </xsl:for-each>
    </table>
  </body>
  </html>
</xsl:template>
</xsl:stylesheet>