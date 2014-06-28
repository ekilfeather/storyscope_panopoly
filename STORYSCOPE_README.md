# Storyscope 

**Storyscope** is a web based application to help create semantically enriched narratives on the web. Many of the concepts in **Storyscope** were developed in the European project DECIPHER supported by the FP7 Research fund.
To learn more about DECIPHER [See the project website.](http://decipher-research.eu)

# Installation and Setup

## Environment
Most components in **Storyscope** are developed using the [Drupal Framework](http://drupal.org). In order to run it or develop with it it is important to get a functioning local environment. The following instuctions assume that OSX is being used.

## MySQL, PHP, Apache
The simplest way of installing a Drupal instance is to download a full MAMP stack. This can be obtained from (http://www.mamp.info/en/) - while the free version is suitable it is strongly recommended to purchase the PRO license as this will greatly simplify configuration.

## Cloning from Git
When your MAMP stack is setup ```git clone``` from this repository into the ```path_to_your_mamp/htdocs``` folder.

## Create a blank MySQL database
Drupal stores content and configuration in the MySQL database (this is the default - other DB stores are available). Before initialising Storyscope it is important to create this database and assign a user all permissions to it. You can do this using a GUI tool (provided by MAMP) or you can follow [these instructions](http://dev.mysql.com/doc/refman/5.1/en/database-use.html)
