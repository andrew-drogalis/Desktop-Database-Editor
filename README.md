# Desktop Database Editor

## Table of Contents

* [About the Project](#About-the-Project)
* [Screenshots](#Screenshots)
* [License](#License)

## About the Project

This project was initiated to help a non-technical client manage their MySQL database. The database manages the active list of clients, client email addresses, as well as internal client IDs. The application authenticates the user with secure password login and stores credentials locally until session expiration or logoff.

In QT, there are live table object for Excel-like ability to modify data and reflect those changes automatically in the database. This was incorporated into the application, along with proper error handling and data validation. The data validation ensures the proper data types and data lengths matched the database requirements. 

Additionally, the client requested print functionality be included to visualize the database on paper. Overall, this project vastly simplified and speed up the database updating process, and the customer greatly appreciates the convenience and cost savings.

## Screenshots

### Online Database:

The live table object is directly editable from within the application. Any changes made are pushed to the database once the selection is cleared.

<img src="https://raw.githubusercontent.com/andrew-drogalis/Desktop-Database-Editor/main/assets/PM-DB-Online.PNG" alt="Database-Online-Screenshot" style="width: 850px; padding-top: 10px;">


### Offline Database:
After signing off, the data is cleared from memory. The user is safe to walk away from computer without closing the application.

<img src="https://raw.githubusercontent.com/andrew-drogalis/Desktop-Database-Editor/main/assets/PM-DB-Offline.PNG" alt="Database-Offline-Screenshot" style="width: 850px; padding-top: 10px;">


## License

This software is distributed under the GNU license. Please read [LICENSE](https://github.com/andrew-drogalis/CLI-Email-Scanner/blob/main/LICENSE) for information on the software availability and distribution.

