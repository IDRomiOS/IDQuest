<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 */
?>

<!DOCTYPE html>
<html lang="<?php print $language->language; ?>" ng-app>
  <head>
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>
    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>
  <body class="<?php print $classes; ?>" <?php print $attributes;?>>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </body>
</html>
