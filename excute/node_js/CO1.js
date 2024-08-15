const express = require('express');
const path = require('path');
const app = express();
app.listen(8181);
const fs = require('fs');
const cors = require('cors');

app.set('view engine','ejs');
const csvToJson = require('convert-csv-to-json');
const { Parser } = require('json2csv');

app.use(cors());

app.use((req,res,next)=>{
    json=csvToJson.fieldDelimiter(',').getJsonFromCsv("./public/Data/CO1_output.csv");
    res.setHeader('Access-Control-Allow-Origin','*');
    next();
});

app.use(express.static(path.join(__dirname,'public')))

app.get('/',(req,res) => {
    res.sendFile(path.join(__dirname,'public','index.html'))
});

app.get('/watch/CO1',(req,res)=>{
    res.send(json);
});
