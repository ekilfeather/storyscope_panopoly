<?php
/**
 * @file
 * storyscope_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function storyscope_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function storyscope_content_types_node_info() {
  $items = array(
    'storyscope_dossier' => array(
      'name' => t('Dossier'),
      'base' => 'node_content',
      'description' => t('A Dossier is a container for Storyscope\'s Stories.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'storyscope_story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('A Story is a Title, Text, Media and Tags'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
