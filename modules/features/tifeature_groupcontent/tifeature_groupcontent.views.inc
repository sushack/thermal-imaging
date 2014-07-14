<?php

/**
 * @file
 * Views includes
 */

/**
 * Implements hook_views_pre_view().
 */
function tifeature_groupcontent_views_pre_view(&$view, &$display_id, &$args) {
  // Are we on the right page?
  if (arg(0) != "node" || !arg(1)) {
    return;
  }
  // Is this the right view?
  if ($view->name != "group_reports" || $display_id != "block_1") {
    return;
  }
  // Do we have arguments already?
  if ($args) {
    return;
  }

  // If we need arguments, and all is right, add the argument and warn
  // anyone with an administrator account what we've done.
  $args[] = arg(1);
  if (user_access("administer site configuration")) {
    drupal_set_message("Injected group ID into group_reports view", "ok");
  }
}
