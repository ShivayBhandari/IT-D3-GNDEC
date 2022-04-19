const mongoose = require("mongoose");

const studentSchema = new mongoose.Schema({
    name: String,
    email: String,
});

const student = mongoose.model("students", studentSchema);

module.exports = student;