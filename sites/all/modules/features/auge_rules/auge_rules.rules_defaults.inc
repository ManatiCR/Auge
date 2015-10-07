<?php
/**
 * @file
 * auge_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function auge_rules_default_rules_configuration() {
  $items = array();
  $items['rules_contact_email'] = entity_import('rules_config', '{ "rules_contact_email" : {
      "LABEL" : "Contact email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "[entityform:field-contacted-email]",
            "subject" : "[entityform:field_subject]",
            "message" : "[entityform:field_message]",
            "from" : "[entityform:field-email]",
            "language" : [ "site:current-page:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}
