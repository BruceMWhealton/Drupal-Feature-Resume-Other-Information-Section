<?php
/**
 * @file
 * drupal_resume_other_information_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_resume_other_information_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupal_resume_other_information_section_node_info() {
  $items = array(
    'other_info' => array(
      'name' => t('Other Info'),
      'base' => 'node_content',
      'description' => t('Other information to be included in a resume, cv or personal profile.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
