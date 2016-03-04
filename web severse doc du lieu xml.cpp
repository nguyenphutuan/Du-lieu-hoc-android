private String WordDefinition(String word) {
    InputStream in = null;
    String strDefinition = "";
    try {
        in = OpenHttpConnection("http://services.aonaware.com/DictService/DictService.asmx/Define?word="
                + word);
        Document doc = null;
        DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
        DocumentBuilder db;
        try {
            db = dbf.newDocumentBuilder();
            doc = db.parse(in);
        } catch (ParserConfigurationException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (Exception e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        doc.getDocumentElement().normalize();

        // ---retrieve all the <Definition> elements---
        NodeList definitionElements = doc
                .getElementsByTagName("Definition");

        // ---iterate through each <Definition> elements---
        for (int i = 0; i < definitionElements.getLength(); i++) {
            Node itemNode = definitionElements.item(i);
            if (itemNode.getNodeType() == Node.ELEMENT_NODE) {
                // ---convert the Definition node into an Element---
                Element definitionElement = (Element) itemNode;

                // ---get all the <WordDefinition> elements under
                // the <Definition> element---
                NodeList wordDefinitionElements = (definitionElement)
                        .getElementsByTagName("WordDefinition");

                strDefinition = "";
                // ---iterate through each <WordDefinition> elements---
                for (int j = 0; j < wordDefinitionElements.getLength(); j++) {
                    // ---convert a <WordDefinition> node into an Element---
                    Element wordDefinitionElement = (Element) wordDefinitionElements
                            .item(j);

                    // ---get all the child nodes under the
                    // <WordDefinition> element---
                    NodeList textNodes = ((Node) wordDefinitionElement)
                            .getChildNodes();

                    strDefinition += ((Node) textNodes.item(0))
                            .getNodeValue() + ". \n";
                }

            }
        }
    } catch (IOException e1) {
        Log.d("NetworkingActivity", e1.getLocalizedMessage());
    }
    // ---return the definitions of the word---
    return strDefinition;
}

private class AccessWebServiceTask extends AsyncTask<String, Void, String> {
    protected String doInBackground(String... urls) {
        return WordDefinition(urls[0]);
    }

    protected void onPostExecute(String result) {
        Toast.makeText(getBaseContext(), result, Toast.LENGTH_LONG).show();
    }
}
private InputStream OpenHttpConnection(String urlString) throws IOException {
        InputStream in = null;
        int response = -1;

        URL url = new URL(urlString);
        URLConnection conn = url.openConnection();

        if (!(conn instanceof HttpURLConnection))
            throw new IOException("Not an HTTP connection");
        try{
            HttpURLConnection httpConn = (HttpURLConnection) conn;
            httpConn.setAllowUserInteraction(false);
            httpConn.setInstanceFollowRedirects(true);
            httpConn.setRequestMethod("GET");
            httpConn.connect();
            response = httpConn.getResponseCode();
            if (response == HttpURLConnection.HTTP_OK) {
                in = httpConn.getInputStream();
            }
        }
        catch (Exception ex)
        {
            Log.d("Networking", ex.getLocalizedMessage());
            throw new IOException("Error connecting");
        }
        return in;
    }
