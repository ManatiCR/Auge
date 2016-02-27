<?php
/**
 * @file
 * auge_pages_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_pages_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function auge_pages_contact_default_entityform_type() {
  $items = array();
  $items['contact_form'] = entity_import('entityform_type', '{
    "type" : "contact_form",
    "label" : "Contact From",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "manati_texto_formato" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "manati_texto_formato" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "4" : "4" },
      "resubmit_action" : "new",
      "redirect_path" : "\\/gracias",
      "instruction_pre" : { "value" : "", "format" : "manati_texto_formato" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/contact-form",
        "alias" : "contacto",
        "language" : "es"
      }
    }
  }');
  return $items;
}
