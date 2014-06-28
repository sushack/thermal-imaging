<?php
/**
 * @file
 * tifeature_contactform.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tifeature_contactform_default_rules_configuration() {
  $items = array();
  $items['rules_create_node_on_webform_submission'] = entity_import('rules_config', '{ "rules_create_node_on_webform_submission" : {
      "LABEL" : "Create node on webform submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "webform_rules" ],
      "ON" : { "webform_rules_submit" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "report",
              "param_title" : "Report for [data:street_address-value], [data:town_city-value] [data:postcode-value]",
              "param_author" : "1"
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        }
      ]
    }
  }');
  return $items;
}
