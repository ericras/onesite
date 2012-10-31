<?php

function migrate_releases_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
//      'ReleaseUser' => array('class_name' => 'ReleaseUserMigration'),
      'ReleaseNode' => array('class_name' => 'ReleaseNodeMigration'),
    ),
  );
  return $api;
}
