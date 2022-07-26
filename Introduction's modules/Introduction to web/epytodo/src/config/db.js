
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
// module.exports = Object.freeze({
async function connect_to_server(sql_env_info) {
    var server_connection = sql2.createConnection(sql_env_info);
    if (err) {
        console.error(`Failed to connect: ${err.stack}`);
        return sql_status.err;
    }
    return server_connection;
}

async function disconnect_from_server(connection) {
    connection.end();
    return sql_status.success;
}

async function add_line_to_table(connection, table, fields, values) {
    var result = await connection.query(`INSERT INTO ${table} (${fields}) VALUES (${values})`, function(err, result = '', fields) {
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
    var fields = `firstname, name, email, password, created_at`;
    var values = `'${firstname}', '${name}', '${email}', '${password}', '${created_at}'`;
    return await add_line_to_table(connection, 'user', fields, values);
}

async function add_task_to_todo(connection, title, description, created_at, due_time, status, user_id) {
    var fields = `title, description, created_at, due_time, status, user_id`;
    var values = `'${title}', '${description}', '${created_at}', '${due_time}', '${status}', '${user_id}'`;
    return await add_line_to_table(connection, 'todo', fields, values);
}

async function get_table_content(connection, table, fields) {
    var result = await connection.query(`SELECT ${fields} FROM ${table}`, function(err, result = '', fields) {
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
    var result = await connection.query(`SELECT ${fields} FROM ${table}`, function(err, result = '', fields) {
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
    var result = await connection.query(`SELECT ${fields} FROM ${table} WHERE ${condition}`, function(err, result = '', fields) {
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
    var result = await connection.query(`SELECT id FROM ${table} WHERE email = '${email}'`, function(err, result = '', fields) {
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
    var result = await connection.query(`SELECT * FROM user WHERE email = '${email}'`, function(err, result = '', fields) {
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
    var result = await connection.query(`SELECT * FROM user WHERE email = '${email}' AND password = '${password}'`, function(err, result = '', fields) {
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
    var result = await connection.query(`DELETE FROM ${table} WHERE id = '${id}'`, function(err, result = '', fields) {
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
    var today = new Date();
    var date = `${today.getFullYear()}-${(today.getMonth() + 1)}-${today.getDate()}`;
    var time = `${today.getHours()}:${today.getMinutes()}:${today.getSeconds()}`;
    var date_time = `${date}\t${time}`;
    return date_time;
}
// });
// module.exports = {
//     connect_to_server,
//     disconnect_from_server,
//     add_line_to_table,
//     add_user_to_user_table,
//     add_task_to_todo,
//     get_table_content,
//     get_lines_from_table,
//     get_specific_lines_from_table,
//     get_id_by_email,
//     user_exists,
//     correct_user_loggin,
//     remove_line_from_table,
//     now
// };

// module.exports = connect_to_server
// module.exports = disconnect_from_server
// module.exports = add_line_to_table
// module.exports = add_user_to_user_table
// module.exports = add_task_to_todo
// module.exports = get_table_content
// module.exports = get_lines_from_table
// module.exports = get_specific_lines_from_table
// module.exports = get_id_by_email
// module.exports = user_exists
// module.exports = correct_user_loggin
// module.exports = remove_line_from_table
// module.exports = now
