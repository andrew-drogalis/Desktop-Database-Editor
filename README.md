# Desktop Database Editor

## Table of Contents

* [About the Project](#About-the-Project)
* [Screenshots](#Screenshots)
* [Dependencies](#Dependencies)
* [License](#License)
* [Contribution](#Contribution)

## About the Project

This project was initiated to help a non-technical client manage their MySQL database. The database manages the active list of clients, client email addresses, as well as internal client IDs. 

The application authenticates the user with secure password login and stores credentials locally until session expiration or the user logs off.

A SQL live table object was incorporated to modify data and automatically reflect those changes in the database. The application provides proper error handling and data validation. The data validation ensures the proper data types and data lengths matched the database requirements. Additionally, the client requested print functionality be included to visualize the database on paper. 

Overall, this project vastly simplified and speed up the database updating process. The customer was able to reduce costs by 85% by eliminating the need for a technical hire.

## Screenshots

### Online Database:

The live table object is directly editable from within the application. Any changes made are pushed to the database once the selection is cleared.

<img src="https://raw.githubusercontent.com/andrew-drogalis/Desktop-Database-Editor/main/assets/PM-DB-Online.PNG" alt="Database-Online-Screenshot" style="width: 850px; padding-top: 10px;">


### Offline Database:
After signing off, the data is cleared from memory. The user is safe to walk away from computer without closing the application.

<img src="https://raw.githubusercontent.com/andrew-drogalis/Desktop-Database-Editor/main/assets/PM-DB-Offline.PNG" alt="Database-Offline-Screenshot" style="width: 850px; padding-top: 10px;">

## Dependencies

This repository contains a .devcontainer directory. The .devcontainer has all the required dependencies and can be run inside Docker with the Dev Containers VSCode extension.

#### Installation Required 

- [QT Developer 6](https://github.com/libcpr/cpr) 

## License

This software is distributed under the GNU license. Please read [LICENSE](https://github.com/andrew-drogalis/Desktop-Database-Editor/blob/main/LICENSE) for information on the software availability and distribution.

## Contribution

Please open an issue of if you have any questions, suggestions, or feedback.

Please submit bug reports, suggestions, and pull requests to the [GitHub issue tracker](https://github.com/andrew-drogalis/Desktop-Database-Editor/issues).

