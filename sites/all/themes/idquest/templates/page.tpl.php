<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 */
 ?>

<header>
  <?php if ($logo): ?>
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
    </a>
  <?php endif; ?>
  <?php if ($page['header']): ?>
    <?php print render($page['header']); ?>
  <?php endif; ?>
</header>

<section>
  <?php if ($messages): ?>
    <div class="messages"><?php print $messages; ?></div>
  <?php endif; ?>
  <?php print render($page['content']); ?>
</section>

<footer>
  <?php if ($page['footer']): ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>
</footer>
