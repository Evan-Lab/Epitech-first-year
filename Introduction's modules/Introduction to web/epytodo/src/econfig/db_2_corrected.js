const mariadb = require('mariadb');

var pool = mariadb.createPool({
    host: 'host',
    user: 'app_user',
    password: 'Password123!',
    database: 'todo'
});
module.exports = Object.freeze({
    pool: pool
});
