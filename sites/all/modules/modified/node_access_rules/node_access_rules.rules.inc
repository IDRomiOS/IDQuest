<?php

/**
 * Implements hook_rules_event_info().
 */
function node_access_rules_rules_event_info() {
  $events = array();
  $operations = array('create', 'view', 'update', 'delete');

  foreach ($operations as $op) {
    $events['node_access_rules_' . $op] = array(
      'label' => t("Request for {$op} rights"),
      'group' => t('Node Access'),
      'variables' => array(
        'node' => array(
          'type' => 'node',
          'label' => t("Node to {$op}")
        ),
      )
    );
  }

  return $events;

}

/**
 * Implements hook_rules_action_info().
 */
function node_access_rules_rules_action_info() {
  $actions = array();

  $actions['node_access_rules_allow_access'] = array(
    'label' => t('Allow editing/viewing/creating/deleting of Node'),
    'group' => t('Node Access'),
    'base' => 'node_access_rules_allow',
    'callbacks' => array(
      'execute' => 'node_access_rules_action_allow',
    ),
  );

  $actions['node_access_rules_deny_access'] = array(
    'label' => t('Do not allow editing/viewing/creating/deleting of Node'),
    'group' => t('Node Access'),
    'base' => 'node_access_rules_deny',
    'callbacks' => array(
      'execute' => 'node_access_rules_action_deny',
    ),
  );

  return $actions;
}

/**
 * Action for allow access.
 */
function node_access_rules_action_allow() {
  $node_access_rules = &drupal_static('node_access_rules');
  $node_access_rules = NODE_ACCESS_ALLOW;
}

/**
 * Action for deny access.
 */
function node_access_rules_action_deny() {
  $node_access_rules = &drupal_static('node_access_rules');
  $node_access_rules = NODE_ACCESS_DENY;
}
