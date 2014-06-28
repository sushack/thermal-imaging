<?php
/**
 * @file
 * tifeature_homepage.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function tifeature_homepage_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Homepage',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'be2e31c8-0a60-4b0a-a939-719c51ac8cfc',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1403962494,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ea185bde-be0c-499e-84dd-3fe7611f4f88',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h1><a href="http://thermal.local/content/resident-signup" >Want your house thermal imaged?</a></h1>

<h1><a href="/user">Are you in an existing local thermal imaging group?</a></h1>

<h1>Want to set up a local thermal imaging group?</h1>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h1><a href="http://thermal.local/content/resident-signup">Want your house thermal imaged?</a></h1>
<h1><a href="/user">Are you in an existing local thermal imaging group?</a></h1>
<h1>Want to set up a local thermal imaging group?</h1>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-28 14:34:54 +0100',
);
  return $nodes;
}
