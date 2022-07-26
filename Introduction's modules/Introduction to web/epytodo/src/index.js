// const sql2 = require('mysql2');
// db.js

const sql2 = require('mysql2');
const sql_database = process.env.MYSQL_DATABASE;
const sql_host = process.env.MYSQL_HOST;
const sql_user = process.env.MYSQL_USER;
const sql_password = process.env.MYSQL_ROOT_PASSWORD;
const sql_status = {
    success: 0,
    error: 84,
    err: 84
}
const sql_env_info = {
    database: sql_database,
    host: sql_host,
    user: sql_user,
    password: sql_password
}

async function connect_to_server(sql_env_info) {
    console.log("in connect to server");
    var server_connection = sql2.createConnection(sql_env_info);
    return server_connection;
}

async function disconnect_from_server(connection) {
    connection.end();
    return sql_status.success;
}

async function add_line_to_table(connection, table, fields, values) {
    console.log("in add_line");
    var result = await connection.query(`INSERT INTO ${table} (${fields}) VALUES (${values})`, function (err, result = '', fields) {
        var value_result = new Object();
        if (err) {
            value_result["status"] = sql_status.err;
            value_result["content"] = result;
        } else {
            value_result["status"] = sql_status.success;
            value_result["content"] = result;
        }
        return value_result;
    });
    if (result.status == sql_status.success) {
        return result.content;
    } else {
        return result.status;
    }
}

async function add_user_to_user_table(connection, firstname, name, email, password, created_at) {
    console.log("add_user_table");
    var fields = `firstname, name, email, password, created_at`;
    var values = `'${firstname}', '${name}', '${email}', '${password}', '${created_at}'`;
    return await add_line_to_table(connection, 'user', fields, values);
}

async function add_task_to_todo(connection, title, description, created_at, due_time, status, user_id) {
    console.log("add_task_to_todo");
    var fields = `title, description, created_at, due_time, status, user_id`;
    var values = `'${title}', '${description}', '${created_at}', '${due_time}', '${status}', '${user_id}'`;
    return await add_line_to_table(connection, 'todo', fields, values);
}

async function get_table_content(connection, table, fields) {
    console.log("get_table_content");
    var result = await connection.query(`SELECT ${fields} FROM ${table}`, function (err, result = '', fields) {
        var value_result = new Object();
        if (err) {
            value_result["status"] = sql_status.err;
            value_result["content"] = '';
        } else {
            value_result["status"] = sql_status.success;
            value_result["content"] = result;
        }
        return value_result;
    });
    if (result.status == sql_status.success) {
        return result.content;
    } else {
        return result.status;
    }
}

async function get_lines_from_table(connection, table, fields) {
    console.log("get_lines_from_table");
    var result = await connection.query(`SELECT ${fields} FROM ${table}`, function (err, result = '', fields) {
        var value_result = new Object();
        if (err) {
            value_result["status"] = sql_status.err;
            value_result["content"] = '';
        } else {
            value_result["status"] = sql_status.success;
            value_result["content"] = result;
        }
        return value_result;
    });
    if (result.status == sql_status.success) {
        return result.content;
    } else {
        return result.status;
    }
}

async function get_specific_lines_from_table(connection, table, fields, condition) {
    console.log("get_specific_lines_from_table");
    var result = await connection.query(`SELECT ${fields} FROM ${table} WHERE ${condition}`, function (err, result = '', fields) {
        var value_result = new Object();
        if (err) {
            value_result["status"] = sql_status.err;
            value_result["content"] = '';
        } else {
            value_result["status"] = sql_status.success;
            value_result["content"] = result;
        }
        return value_result;
    });
    if (result.status == sql_status.success) {
        return result.content;
    } else {
        return result.status;
    }
}

async function get_id_by_email(connection, table, email) {
    console.log("get_id_by_email");
    var result = await connection.query(`SELECT id FROM ${table} WHERE email = '${email}'`, function (err, result = '', fields) {
        var value_result = new Object();
        if (err) {
            value_result["status"] = sql_status.err;
            value_result["content"] = '';
        } else {
            value_result["status"] = sql_status.success;
            value_result["content"] = result[0].id;
        }
        return value_result;
    });
    if (result.status == sql_status.success) {
        return result.content;
    } else {
        return result.status;
    }
}

async function user_exists(connection, email) {
    console.log("user_exists");
    var result = await connection.query(`SELECT * FROM user WHERE email = '${email}'`, function (err, result = '', fields) {
        var value_result = new Object();
        if (!result.rows[0][email]) {
            value_result["status"] = false;
            value_result["content"] = '';
        } else {
            value_result["status"] = true;
            value_result["content"] = result;
        }
        return value_result;
    });
    return result.status;
}


async function correct_user_loggin(connection, email, password) {
    console.log("correct_user_loggin");
    var result = await connection.query(`SELECT * FROM user WHERE email = '${email}' AND password = '${password}'`, function (err, result = '', fields) {
        var value_result = new Object();
        if (!result.rows[0][email]) {
            value_result["status"] = false;
            value_result["content"] = '';
        } else {
            value_result["status"] = true;
            value_result["content"] = result;
        }
        return value_result;
    });
    return result.status;
}

async function remove_line_from_table(connection, table, id) {
    console.log("remove_line_from_table");
    var result = await connection.query(`DELETE FROM ${table} WHERE id = '${id}'`, function (err, result = '', fields) {
        var value_result = new Object();
        if (err) {
            value_result["status"] = sql_status.err;
            value_result["content"] = '';
        } else {
            value_result["status"] = sql_status.success;
            value_result["content"] = result;
        }
        return value_result;
    });
    if (result.status == sql_status.success) {
        return result.content;
    } else {
        return result.status;
    }
}

function now() {
    console.log("now");
    var today = new Date();
    var date = `${today.getFullYear()}-${(today.getMonth() + 1)}-${today.getDate()}`;
    var time = `${today.getHours()}:${today.getMinutes()}:${today.getSeconds()}`;
    var date_time = `${date}\t${time}`;
    return date_time;
}

const express = require('express');
const { all } = require('express/lib/application');
const { json } = require('express/lib/response');
// const { get_id_by_email } = require('./config/db.js');
const app = express();
// const database = require('./config/db.js');
const status = {
    success: 0,
    error: 84,
    err: 84
}
require('dotenv').config({ encoding: 'utf-8' });
const server_connection = /*database.*/connect_to_server(/*database.*/sql_env_info);
const server_port = 3000;
var logged_in_user = null;

// index.js

app.post('/register', async (req, res) => {
    console.log("register")
    var user_data = req.body;
    var user_exists = false;
    if (user_data.email.length > 0 && user_data.name.length > 0 && user_data.firstname.length > 0 && user_data.password.length > 0) {
        try {
            user_exists = await /*database.*/check_user_exists(server_connection, user_data.email);
            if (user_exists == false) {
                const result = await /*database.*/add_user_to_user_table(server_connection, user_data.firstname, user_data.name, user_data.email, user_data.password, /*database.*/now());
                if (result == status.err) {
                    console.res(`Failed to create new user: ${result}`);
                } else {
                    console.log(`User ${user_data.email} created`);
                }
            } else {
                console.log(`User ${user_data.email} already exists`);
            }
        } catch (err) {
            console.error('Error registering user');
            throw err;
        }
    } else {
        console.error('Please enter your name, email, password and firstname in order to register.');
    }
});

app.post('/login', async (req, res) => {
    console.log("login");
    var user_data = req.body;
    var user_exists = false;
    if (user_data.email.length > 0 && user_data.password.length > 0) {
        try {
            user_exists = await /*database.*/correct_user_loggin(server_connection, user_data.email, user_data.password);
            if (user_exists == true) {
                res.json({ token: "ToKen of the newly logged in user" });
                logged_in_user = user_data;
            } else {
                res.json({ msg: "invalid Credentials" });
            }
        } catch (err) {
            console.error('Error logging in user');
            throw err;
        }
    }
});

app.get('/user', async (req, res) => {
    console.log("user");
    var table = "user";
    try {
        if (logged_in_user != null) {
            const table_user = await /*database.*/get_table_content(server_connection, table, "*");
            res.json(table_user);
        } else {
            console.error("You are not logged in");
            res.json({ msg: "You are not logged in" });
        }
    } catch (err) {
        console.error(`Error getting the content of the table '${table}'`);
        throw err;
    }
});

app.get('/users/todos', async (req, res) => {
    console.log("users/todos");
    var table = "todo";
    var user_id = await /*database.*/get_id_by_email(server_connection, "user", logged_in_user.email);
    var condition = `user_id = ${user_id}`;
    try {
        if (logged_in_user != null) {
            const todo_content = await /*database.*/get_specific_lines_from_table(server_connection, table, "*", condition);
            res.json(todo_content);
        } else {
            console.error("You are not logged in");
            res.json({ msg: "You are not logged in" });
        }
    } catch (err) {
        console.error(`Error getting the content of the table '${table}'`);
        throw err;
    }
});

app.get('todos', async (req, res) => {
    console.log("todos");
    var table = "todo";
    try {
        if (logged_in_user != null) {
            const todo_content = await /*database.*/get_table_content(server_connection, table, "*");
            res.json(todo_content);
        } else {
            console.error("You are not logged in");
            res.json({ msg: "You are not logged in" });
        }
    } catch (err) {
        console.error(`Error getting the content of the table '${table}'`);
        throw err;
    }
});

app.get('/user/:id', async (req, res) => {
    console.log("user/:id");
    var user_id = req.params.id;
    var table = "user";
    var condition = `id = ${user_id}`;
    try {
        if (logged_in_user != null) {
            const user_content = await /*database.*/get_specific_lines_from_table(server_connection, table, "*", condition);
            res.json(user_content);
        } else {
            console.error("You are not logged in");
            res.json({ msg: "You are not logged in" });
        }
    } catch (err) {
        console.error(`Error getting user: ${id}`);
        throw err;
    }
});

app.get('/user/:email', async (req, res) => {
    console.log("user/:email");
    var email = req.params.email;
    var table = "user";
    var condition = `email = '${email}'`;
    try {
        if (logged_in_user != null) {
            const user_content = await /*database.*/get_specific_lines_from_table(server_connection, table, "*", condition);
            res.json(user_content);
        } else {
            console.error("You are not logged in");
            res.json({ msg: "You are not logged in" });
        }
    } catch (err) {
        console.error(`Error getting user: ${email}`);
        throw err;
    }
});

app.delete('/todos/:id', async (req, res) => {
    console.log("/todos/:id");
    var user_id = req.params.id;
    var table = "todo";
    try {
        if (logged_in_user != null) {
            const user_content = await /*database.*/remove_line_from_table(server_connection, table, user_id);
            res.json({ msg: `Successfully deleted todo task: ${id}` });
        } else {
            console.error("You are not logged in");
            res.json({ msg: "You are not logged in" });
        }
    } catch (err) {
        console.error(`Error deleting todo task: ${id}`);
        throw err;
    }
});

app.delete('/users/:id', async (req, res) => {
    console.log("/users/:id");
    var user_id = req.params.id;
    var table = "user";
    try {
        if (logged_in_user != null) {
            const user_content = await /*database.*/remove_line_from_table(server_connection, table, user_id);
            res.json({ msg: `Successfully deleted user: ${id}` });
        } else {
            console.error("You are not logged in");
            res.json({ msg: "You are not logged in" });
        }
    } catch (err) {
        console.error(`Error deleting user: ${id}`);
        throw err;
    }
});

app.get('/logout', (req, res) => {
    console.log("logout");
    if (logged_in_user != null) {
        logged_in_user = null;
        res.json({ msg: "Successfully logged out" });
        res.json({ token: "" });
    } else {
        console.error("You are not logged in");
        res.json({ msg: "You are not logged in" });
    }
});

app.get("/quit", (req, res) => {
    console.log("/quit");
    server_connection.end();
    res.json({ msg: "Successfully quit" });
    throw "Server stopped";
});
