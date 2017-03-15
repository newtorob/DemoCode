var http = require("http");

//create http instance and call http.createServer()
//bind it to port 8081

http.createServer(function(request, response) {
    //send the http header
    //http status: 200: OK
    //content type: text/plain

    response.writeHead(200, {'Content-Type': 'text/plain'});

    //send the response body as hello world

    response.end('Hello World\n');

}).listen(8081);

//console will print the message
console.log('Server running at http://127.0.0.1:8081/');