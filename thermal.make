core = 7.x
api = 2

; Core
projects[drupal][version] = "7.28"

; Modules
projects[admin_menu][version] = "3.0-rc4"
projects[auto_nodetitle][version] = 1.0
projects[coder][version] = "2.2"
projects[ctools][version] = "1.4"
projects[devel][version] = "1.5"
projects[diff][version] = "3.2"
projects[ds][version] = "2.6"
projects[eck][version] = "2.0-rc3"
projects[entity][version] = "1.5"
projects[entityreference][version] = "1.1"
projects[exclude_node_title][version] = 1.7
projects[features][version] = "2.0"
projects[features_extra][version] = "1.0-beta1"
projects[field_group][version] = "1.4"
projects[file_entity][version] = "2.0-alpha3"
projects[filter_perms][version] = "1.0"
projects[less][version] = "3.0"
projects[libraries][version] = "2.2"
projects[link][version] = "1.2"
projects[media][version] = "2.0-alpha3"
projects[module_filter][version] = "2.0-alpha2"
projects[og][version] = 2.7
projects[pathauto][version] = "1.2"
projects[permission_select][version] = "1.2"
projects[rules][version] = "2.7"
projects[strongarm][version] = "2.0"
projects[token][version] = "1.5"
projects[views][version] = "3.8"
projects[views_bulk_operations][version] = "3.2"
projects[uuid][version] = 1.0-alpha5
projects[uuid_features][version] = 1.0-alpha4
projects[uuid_features][patch][] = https://www.drupal.org/files/issues/uuid_features-doesnt-use-entity-uuid-load-save-to-load-save-node-2117453-2.patch
projects[webform][version] = "4.0-rc4"
projects[webform][patch][] = https://www.drupal.org/files/issues/webform_uuid-2076483-5.patch
projects[workbench][version] = "1.2"
projects[workbench_moderation][version] = "1.3"

; Libraries
libraries[lessphp][download][type] = "get"
libraries[lessphp][download][url] = "https://github.com/oyejorge/less.php/archive/master.zip"
libraries[lessphp][directory_name] = "lessphp"
libraries[lessphp][type] = "library"
